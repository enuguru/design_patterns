## Builder

Builder pattern has creational purpose and separates the construction of a complex object 
from its representation so that the same construction process can create different 
representations. It is object pattern, ie. relationships can be changed at run-time
and are more dynamic. Often is used for building composite structures but constructing
objects requires more domain knowledge of the client than using a Factory.

### When to use

* the algorithm for creating a object should be independent of the parts and how they're assembled
* the construction process must allow different representations for the object that's constructed  

Check list
Decide if a common input and many possible representations (or outputs) is the problem at hand.
Encapsulate the parsing of the common input in a Reader class.
Design a standard protocol for creating all possible output representations. Capture the steps of this protocol in a Builder interface.
Define a Builder derived class for each target representation.
The client creates a Reader object and a Builder object, and registers the latter with the former.
The client asks the Reader to "construct".
The client asks the Builder to return the result.
