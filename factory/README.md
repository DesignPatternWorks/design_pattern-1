# simple factory

In the process, you need to create a lot of objects, the object causes a new operation and more complex, the need to use a simple factory pattern

Creation and operation of two parts, to facilitate later separation of the object program expansion and maintenance

tips: simple factory pattern, less use of the actual project.

# factory method

Meaning factory method pattern is to define an object factory interface to create products, will be postponed until the actual creation of a subclass them. Core factory class is no longer responsible for creating the product, such as a core of abstract factory class role is only responsible for the interface concrete factory subclass must be achieved, thus further advantage is so abstract factory method allows the system does not modify the specific role of the factory the introduction of new products under the circumstances.

In the initial design, the product is taken into account in the case of the latter will be extended, you can use the factory method pattern
Under the product structure more complex cases, you can use the factory method pattern
# abstruct factory

abstruct factory is the expansion and extension of the factory method pattern, abstract factory pattern, however, is more general and representation; it has a factory method has the advantage that also increases the ability to solve practical problems, to solve the factories to build more problems.

Factory Method pattern applies to the case of a single product type structure, as a class of products provides an interface created
Abstract factory method is suitable for the type of product structure and more occasions, primarily used to create a group (a plurality of types) related products, providing them with an interface created when there is a plurality of abstract role, abstract factory can come in handy .
