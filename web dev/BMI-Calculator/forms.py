from flask_wtf import FlaskForm
from wtforms import IntegerField, SubmitField, BooleanField
from wtforms.validators import DataRequired

class InputTable(FlaskForm):
    age = IntegerField('Age (in years)', validators=[DataRequired()])
    weight = IntegerField('Weight (in Kg)', validators=[DataRequired()])
    height = IntegerField('Height (in cm)', validators=[DataRequired()])
    male = BooleanField('male')
    female = BooleanField('female')
    calculate = SubmitField('Calculate')