
long FUN_003c0150(char *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(int *)(param_1 + 4) - 4;
  lVar3 = (ulong)uVar1 * 4 + 0x10;
  if (uVar1 == 0 || *(int *)(param_1 + 4) < 4) {
    lVar3 = 0;
  }
  if (*param_1 != '\0') {
    lVar2 = FUN_003c0730();
    lVar3 = lVar3 + lVar2 + 0xd8;
  }
  if (param_1[1] != '\0') {
    lVar2 = FUN_003c083c(*(undefined4 *)(param_1 + 4));
    lVar3 = lVar3 + lVar2 + 0x18;
  }
  return lVar3;
}

