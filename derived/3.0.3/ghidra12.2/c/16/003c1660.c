
void FUN_003c1660(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x204) = param_2;
  uVar1 = FUN_003cb1d8();
  FUN_003cb930(uVar1,param_1);
  if (0 < *(int *)(param_1 + 0x1c4)) {
    lVar3 = 0;
    lVar2 = param_1;
    do {
      FUN_003c2e84(lVar2,*(undefined4 *)(param_1 + 0x204));
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0xe0;
    } while (lVar3 < *(int *)(param_1 + 0x1c4));
  }
  return;
}

