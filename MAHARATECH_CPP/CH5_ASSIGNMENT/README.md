<html>
<body>
<h1>Association, Aggregation, and Composition in OOP</h1>
<p>In object-oriented programming (OOP), <strong>association</strong>, <strong>aggregation</strong>, and <strong>composition</strong> are essential concepts used to describe relationships between classes. These relationships define how objects interact and depend on each other.</p>

<h2>Association</h2>
<p>Association represents a relationship between two or more objects, where each object has its own lifecycle and there is no ownership between them. It is the most general form of a relationship in OOP.</p>
<div class="example">
<strong>Example:</strong> A teacher can associate with multiple students, and a student can associate with multiple teachers. Both the teacher and the student can exist independently of each other.
</div>

<h2>Aggregation</h2>
<p>Aggregation is a specialized form of association that represents a "whole-part" relationship between the aggregate (whole) and its parts. In aggregation, the parts can exist independently of the whole. It is often described as a "has-a" relationship.</p>
<div class="example">
<strong>Example:</strong> A university (whole) has departments (parts), and each department can exist independently of the university. If the university is closed, the departments can still exist as independent entities.
</div>

<h2>Composition</h2>
<p>Composition is a stronger form of aggregation where the parts cannot exist independently of the whole. In composition, the lifetime of the part is tied to the lifetime of the whole. It is often described as a "contains-a" relationship.</p>
<div class="example">
<strong>Example:</strong> A house (whole) contains rooms (parts), and the rooms cannot exist independently of the house. If the house is destroyed, the rooms are also destroyed.
</div>

<p>Understanding these concepts is crucial for designing robust and maintainable object-oriented systems. They help in determining how objects relate to each other, manage dependencies, and organize code effectively.</p>
</body>
</html>