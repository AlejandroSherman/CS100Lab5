//vectorcontainer test hpp

#ifndef _VECTORCONTAINER_TEST_HPP_
#define _VECTORCONTAINER_TEST_HPP_

#include "VectorContainer.hpp"
#include "base.hpp"
#include "op.hpp"

TEST(VconTest, Add_element_1)
{
	Op* one = new Op(1);
	VectorContainer* test_container = new VectorContainer();

	test_container->add_element(one);
	ASSERT_EQ(test_container->size(), 1);
	EXPECT_EQ(test_container->at(0)->evaluate(),1);
}
TEST(VconTest, Add_element_2)
{
	Op* one = new Op(1);
	Op* two = new Op(2);
	VectorContainer* test_container = new VectorContainer();
	test_container->add_element(one);
	test_container->add_element(two);
	ASSERT_EQ(test_container->size(), 2);
	EXPECT_EQ(test_container->at(0)->evaluate(),1);
	EXPECT_EQ(test_container->at(1)->evaluate(),2);
}

#endif
