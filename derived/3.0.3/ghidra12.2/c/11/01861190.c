
void FUN_01861190(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0x432) != '\0') || (*(char *)(param_1 + 0x435) == '\0')) {
    FUN_01815590();
    return;
  }
  if (DAT_052ae7b0 != 0) {
    iVar1 = (int)((float)(int)*(float *)(param_1 + 0x438) / 10.0) -
            (uint)(*(float *)(param_1 + 0x438) < 0.0);
    iVar2 = (int)((float)(int)*(float *)(param_1 + 0x440) / 10.0) -
            (uint)(*(float *)(param_1 + 0x440) < 0.0);
    uVar4 = iVar1 - *(int *)(PTR_DAT_04bbec38 + 0x10);
    if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar1 && iVar1 <= *(int *)(PTR_DAT_04bbec38 + 0x20))
        && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar2) && iVar2 <= *(int *)(PTR_DAT_04bbec38 + 0x24)
       ) {
      uVar3 = iVar2 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      lVar5 = (long)(int)(uVar4 + DAT_052ae7a8 * uVar3);
      if (DAT_052ae7ac <= uVar3 || DAT_052ae7a8 <= uVar4) {
        lVar5 = 0;
      }
      *(undefined1 *)(DAT_052ae7b0 + lVar5 * 8 + 4) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x435) = 0;
  FUN_01815590();
  return;
}

