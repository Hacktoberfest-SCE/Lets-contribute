from flask import Flask, render_template, url_for
from forms import InputTable

app = Flask('__name__')
app.config['SECRET_KEY'] = '6D597133743677397A24432646294A404E635266556A586E5A72347537782141'

def bmi_eval_adult(bmi,male,female):
    if bmi<16: return 'Severe Thinness'
    elif 16<=bmi<17: return 'Moderate Thinness'
    elif 17<=bmi<18.5:return 'Mild Thinness'
    elif male==True and female==False: 
        if 18.5<=bmi<=27.8: return 'Normal'
        elif 27.8<bmi<=30: return 'Overweight'
        elif 30<bmi<=35: return 'Obese Class I'
        elif 35<bmi<=40: return 'Obese Class II'
        elif bmi>40: return 'Obese Class III'
        else: return 'Invalid BMI'
    else:
        if 18.5<=bmi<=27.3: return 'Normal'
        elif 27.3<bmi<=30: return 'Overweight'
        elif 30<bmi<=35: return 'Obese Class I'
        elif 35<bmi<=40: return 'Obese Class II'
        elif bmi>40: return 'Obese Class III'
        else: return 'Invalid BMI' 

@app.route('/', methods=['GET','POST'])
def home_page():
    getTable = InputTable()
    if getTable.validate_on_submit():
        weight = getTable.weight.data
        height = getTable.height.data
        male = getTable.male.data
        female = getTable.female.data
        bmi = round((float(weight)/(float(height)*float(height)))*10000,2)
        evaluation = bmi_eval_adult(bmi,male,female)
        return render_template('result.html',bmi=bmi,evaluation=evaluation)
    return render_template('start.html', dataTable=getTable)

@app.route('/resources')
def resources():
    return render_template('resources.html')

@app.route('/about')
def about():
    return render_template('about.html')

if __name__ == '__main__':
    app.run(debug=True)