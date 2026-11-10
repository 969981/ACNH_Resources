
void FUN_001711fc(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x1a0;
  iVar2 = FUN_00167a20(lVar1,*(undefined8 *)(param_1 + 0x218));
  if (iVar2 != 0) {
    FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),1,"HEADERS: could not unpack");
    return;
  }
  lVar3 = FUN_001726f0(param_1,*(undefined4 *)(param_1 + 0x1a8));
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0)) {
LAB_00171278:
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    FUN_0016dfa4(param_1,lVar1);
    return;
  }
  iVar2 = *(int *)(lVar3 + 0xdc);
  if (iVar2 == 1) {
    if ((*(uint *)(param_1 + 0x1a8) != 0) &&
       (((*(uint *)(param_1 + 0x1a8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x1d8) = 1;
      FUN_0016e17c(param_1,lVar1);
      return;
    }
  }
  else {
    if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 0x1d8) = 2;
      FUN_0016e200(param_1,lVar1);
      return;
    }
    if (iVar2 == 5) goto LAB_00171278;
  }
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  FUN_0016e340(param_1,lVar1);
  return;
}

