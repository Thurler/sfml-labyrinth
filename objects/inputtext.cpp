#include <string>

#include "inputtext.h"

void InputTextObject::update() {
  std::wstring input = L"---- | --";
  if (global->getKeyUp()) input[0] = 'U';
  if (global->getKeyDown()) input[1] = 'D';
  if (global->getKeyLeft()) input[2] = 'L';
  if (global->getKeyRight()) input[3] = 'R';
  if (global->getKeyConfirm()) input[7] = 'Z';
  if (global->getKeyCancel()) input[8] = 'X';
  setContent(input);
}
