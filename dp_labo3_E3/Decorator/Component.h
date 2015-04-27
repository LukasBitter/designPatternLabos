/** Authors: Horia Mut, Quentin Jeanmonod, Lukas Bitter */

#pragma once

#include <string>

/** \brief
 * Abstract class that defines what a Component is and what it does.
 * A Component by itself can never be instantiated however it's specializations can.
 *
 * A Component can print it's contents and say if it has seeds or not.
 * Each Component has a Name and a boolean that determines if it has seeds or not.
 */
class CComponent
{
public:
	//CComponent() { }; // An abstract class does not normally have a constructor.
	virtual ~CComponent() { };

	// Pure virtual functions that must be implemented by class specializations.

    /** \brief Prints out the contents of the component.
     *
     * \return Doesn't return anything. Prints out on the console directly.
     */
	virtual void Print() = 0;

    /** \brief Asks the component if it has seeds or not.
     *
     * \return True if the component has seeds. False otherwise.
     */
	virtual bool IsWithSeed() = 0;

protected:
    // Name of the Component.
	std::string Name;
	// Determines if the Component has seeds or not.
	bool HasSeed;
};
