
undefined4 FUN_03b5a128(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strcmp(param_1,"EarlyMode_SmallRoom");
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = strcmp(param_1,"EarlyMode_LargeRoom");
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strcmp(param_1,"EarlyMode_Hall");
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        iVar1 = strcmp(param_1,"EarlyMode_Cavern");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strcmp(param_1,"EarlyMode_NoEarlyReflection");
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strcmp(param_1,"EarlyMode_Count");
            uVar2 = 5;
            if (iVar1 != 0) {
              uVar2 = 0;
            }
          }
        }
      }
    }
  }
  return uVar2;
}

