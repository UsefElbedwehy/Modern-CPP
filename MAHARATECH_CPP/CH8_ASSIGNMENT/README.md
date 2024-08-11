<html>
<body>
<h2>
Virsual function:
</h2>
<p>
A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the method.
</p>
<ul>
<li>Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.</li>
<li>They are mainly used to achieve Runtime polymorphism.</li>
<li>Functions are declared with a virtual keyword in a base class.</li>
<li>The resolving of a function call is done at runtime.</li>


</ul>
</body>
</html>