
void FUN_0029c0e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1c0) != 0) {
    lVar2 = FUN_002237a8(param_1 + 0x1b0);
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar2 - *(int *)(param_1 + 0x1c4);
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_002236bc(param_1 + 0x198,param_1 + 0x198,lVar1);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
  }
  FUN_0029b390(param_1);
  return;
}

