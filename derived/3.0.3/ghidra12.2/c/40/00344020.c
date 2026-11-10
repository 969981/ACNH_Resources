
void FUN_00344020(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    lVar3 = 0x958;
    do {
      lVar1 = *(long *)(param_1 + 8) + lVar3;
      thunk_FUN_0031ee70(lVar1);
      thunk_FUN_0031ee70(lVar1 + -0x48);
      thunk_FUN_0031ee70(lVar1 + -0x90);
      thunk_FUN_0031ee70(lVar1 + -0xd8);
      thunk_FUN_0031ee70(lVar1 + -0x120);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x9d0;
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  FUN_0033458c(param_1 + 0x30,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x1e0),
               *(long *)(param_1 + 0x20) + 0x1e8);
  return;
}

