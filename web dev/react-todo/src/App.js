import React, { Component } from 'react';
import { BrowserRouter as Router, Route } from 'react-router-dom';
import Todos from './components/Todos';
import './App.css';
import Header from './components/layout/header';
import AddTodo from './components/AddTodo';
import { v4 as uuidv4 } from 'uuid';
import About from './components/pages/About';

class App extends Component {
  state = {
    todos: [
      {
        id: uuidv4(),
        title: 'Try to learn react',
        completed: false
      },
      {
        id: uuidv4(),
        title: 'Learn more Laravel',
        completed: false
      },
      {
        id: uuidv4(),
        title: 'Buy some groceries',
        completed: false
      }
    ]
  }

  // Toggle a task
  markComplete = (id) => {
    this.setState({
      todos: this.state.todos.map(todo => {
        if (todo.id === id) {
          todo.completed = !todo.completed
        }

        return todo;
      })
    });
  }

  // Delete Todo
  delTodo = (id) => {
    this.setState({
      todos: [...this.state.todos.filter(todo => todo.id !== id)]
    });
  }

  // Add Todo
  addTodo = (title) => {
    const newTodo = {
      id: uuidv4(),
      title,
      completed: false
    }
    this.setState({
      todos: [...this.state.todos, newTodo]
    });
  }

  render() {
    return (
      <Router>
        <div className="App">
          <div className='container'>
            <Header />
            <Route exact path='/' render={props => (
              <React.Fragment>
                <AddTodo addTodo={this.addTodo} />
                <Todos
                  todos={this.state.todos}
                  markComplete={this.markComplete}
                  delTodo={this.delTodo} />
              </React.Fragment>
            )} />
            <Route path='/about' component={About} />

          </div>

        </div>
      </Router>
    );
  }
}

export default App;
