
bool FUN_02a59d74(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_02a8ed80(param_2);
  if (iVar1 == 6) {
    **(undefined1 **)(param_1 + 8) = 1;
  }
  return iVar1 == 6;
}

