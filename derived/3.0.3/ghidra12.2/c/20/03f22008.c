
void FUN_03f22008(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0x5c) != 2) {
    lVar1 = *(long *)(param_1 + 0x40);
    if (*(char *)(lVar1 + 0x260) != '\0') {
      lVar2 = *(long *)(lVar1 + 0xb8);
      if (*(char *)(lVar2 + 0x15) == '\0') {
        lVar2 = *(long *)(lVar2 + 0x18);
      }
      else {
        lVar2 = (long)(DAT_05ae7888 *
                       (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
                1000 + *(long *)(lVar2 + 0x18);
      }
      if ((*(long *)(lVar1 + 200) + *(long *)(lVar1 + 0xc0)) - *(long *)(lVar1 + 0xf8) <=
          lVar2 - *(long *)(lVar1 + 0xb0)) {
        return;
      }
    }
    lVar1 = *param_2;
    if (*(int *)(lVar1 + 0x30) == 1) {
      fVar4 = *(float *)(lVar1 + 0x24);
      fVar3 = -fVar4;
      if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar3 = *(float *)(lVar1 + 0x20) + fVar3;
    }
    else {
      fVar3 = 0.0;
      if (*(int *)(lVar1 + 0x30) == 0) {
        fVar3 = *(float *)(lVar1 + 0x20);
      }
    }
    *(float *)((long)param_2 + 0xc) = fVar3 + *(float *)((long)param_2 + 0xc);
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f220fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
      return;
    }
  }
  return;
}

