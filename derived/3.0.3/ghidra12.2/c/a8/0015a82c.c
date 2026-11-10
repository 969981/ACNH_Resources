
bool FUN_0015a82c(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1[0x12] != 0) {
    return false;
  }
  iVar2 = FUN_00170ee0(*param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00171620(*param_1);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

