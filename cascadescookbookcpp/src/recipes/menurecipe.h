/* Copyright (c) 2012, 2013, 2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _MENURECIPE_H_
#define _MENURECIPE_H_

#include <bb/cascades/CustomControl>

using namespace bb::cascades;

namespace bb
{
    namespace cascades
    {
        class Label;
    }
}

/**
 * MenuRecipe Description
 * 
 * Control explaining the usage of the Menu.
 */
class MenuRecipe: public bb::cascades::CustomControl
{
    Q_OBJECT
public:
    /**
     * Constructor; sets up the recipe.
     * @param parent The parent Container, if not specified, 0 is used.
     */
    MenuRecipe(Container *parent = 0);

};

#endif // ifndef _MENURECIPE_H_
