/** -----------------------------------------------------------------------------
 *
 * @file  BSTInterface.h
 * @author Alex Anderson 
 * Assignment:   EECS-560 Lab 5
 * @brief This program will allow the user to choose what to do with a BST
 * @date 03/09/2022
 *
 ---------------------------------------------------------------------------- **/

class BSTInterface
{
    public:
    virtual ~BSTInterface(){}
    virtual void add(int entry) = 0; //throws std::runtime_error if duplicate added
    virtual void clear() = 0;
    virtual void remove(int entry) = 0; //throws std::runtime_error if not in tree

    //For the following methods, each method will take a nothing as a parameter
    //These function then call the provided function on every entry in the tree in the appropriate order (i.e. pre, in, post)
    //The function you pass in will need to a static method
	virtual void visitLevelOrder() const = 0;
    virtual void visitPreOrder() const = 0; //Visits each node in pre order
    virtual void visitInOrder() const = 0; //Visits each node in in order
    virtual void visitPostOrder() const = 0; //Visits each node in post order
};