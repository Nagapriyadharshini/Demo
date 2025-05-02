package servlet;

import java.io.IOException;
import java.io.PrintWriter;

import jakarta.servlet.GenericServlet;
import jakarta.servlet.ServletException;
import jakarta.servlet.ServletRequest;
import jakarta.servlet.ServletResponse;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServletResponse;


@WebServlet("/login")
public class LoginServlet extends GenericServlet{

	@Override
	public void service(ServletRequest req, ServletResponse res) throws ServletException, IOException {
		String uName = req.getParameter("uName");
		String password = req.getParameter("pwd");
		
		PrintWriter out = res.getWriter();
		
		if(uName.equals("User") && password.equals("1234")) {
//			out.print("Login Success..!");
			out.println("<script>alert('Login Success!');</script>");
		}
		else {
//			out.print("User or Password Incorrect..");
			out.println("<script>alert('User name or password Incorrect');</script>");
			((HttpServletResponse) res).sendRedirect("Login.html");
		}
	}

}
