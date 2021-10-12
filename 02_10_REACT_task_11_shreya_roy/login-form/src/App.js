import logo from "./logo.svg";
import "./App.css";

function App() {
  return (
    <div className="App">
      
    <h2>Login Page</h2><br/>    
    <div class="login">    
    <form id="login" method="get">    
        <label><b>User Name     
        </b>    
        </label>    
        <input type="text" name="Uname" id="Uname" placeholder="Username"/>    
        <br/><br/>    
        <label><b>Password     
        </b>    
        </label>    
        <input type="Password" name="Pass" id="Pass" placeholder="Password"/>    
        <br/><br/>    
        <input type="submit" name="log" id="log" value="Log In"/>
        <br/><br/>    
        <input type="checkbox" id="check"/>    
        <span>Remember me</span>    
        <br/><br/>    
        <a href="#">Forgot Your Password?</a>    
    </form>     
</div>    
    </div>
  );
}

export default App;
