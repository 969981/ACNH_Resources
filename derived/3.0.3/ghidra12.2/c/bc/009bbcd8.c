
void FUN_009bbcd8(long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 uStack_1;
  
  if (0 < (int)param_2[2]) {
    uVar3 = *param_3;
    *(uint *)(param_1 + 0x10) = uVar3;
    lVar5 = *param_2;
    lVar6 = lVar5;
    if ((int)param_2[2] != 0) {
      iVar1 = 0;
      if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
        iVar1 = (int)param_2[1];
      }
      lVar6 = lVar5 + (long)(*(int *)((long)param_2 + 0xc) - iVar1) * 0x1060;
    }
    lVar2 = lVar6 + (ulong)uVar3 * 0x830;
    if (1 < uVar3) {
      lVar2 = lVar6;
    }
    if (0 < *(int *)(lVar2 + 0x780)) {
      if (*(char *)(param_1 + 8) == '\0') {
        if ((*(long *)(DAT_04d07da8 + 0x48) != 0) &&
           (uVar4 = FUN_009bbdf0(param_1,&uStack_1,param_2), (uVar4 & 1) != 0)) {
          *(undefined1 *)(param_1 + 8) = 1;
        }
      }
      else {
        if ((int)param_2[2] != 0) {
          iVar1 = 0;
          if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) {
            iVar1 = (int)param_2[1];
          }
          lVar5 = lVar5 + (long)(*(int *)((long)param_2 + 0xc) - iVar1) * 0x1060;
        }
        lVar6 = lVar5 + (ulong)uVar3 * 0x830;
        if (1 < uVar3) {
          lVar6 = lVar5;
        }
        if (SQRT(*(float *)(lVar6 + 0x10) * *(float *)(lVar6 + 0x10) +
                 *(float *)(lVar6 + 0xc) * *(float *)(lVar6 + 0xc) +
                 *(float *)(lVar6 + 0x14) * *(float *)(lVar6 + 0x14)) < 1.7) {
          *(undefined1 *)(param_1 + 8) = 0;
        }
      }
    }
  }
  return;
}

