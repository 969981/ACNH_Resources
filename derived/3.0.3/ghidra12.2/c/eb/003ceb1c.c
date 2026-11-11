
void FUN_003ceb1c(long *param_1,int param_2)

{
  float fVar1;
  
  if (((param_2 < 1) || (*(char *)((long)param_1 + 0x101) == '\x02')) ||
     (*(char *)((long)param_1 + 0xec) == '\0' && *(char *)((long)param_1 + 0xed) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x003ceb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  if ((int)param_1[0x19] < *(int *)((long)param_1 + 0xc4)) {
    fVar1 = *(float *)((long)param_1 + 0xbc) +
            ((*(float *)(param_1 + 0x18) - *(float *)((long)param_1 + 0xbc)) *
            (float)(int)param_1[0x19]) / (float)*(int *)((long)param_1 + 0xc4);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x18);
  }
  *(float *)((long)param_1 + 0xbc) = fVar1;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)((long)param_1 + 0xc4) = (int)(fVar1 * (float)param_2);
  if (param_1[4] != 0) {
    FUN_003ce200(param_1[4],param_1);
  }
  (**(code **)(*param_1 + 0x48))(param_1);
  *(undefined1 *)((long)param_1 + 0xf1) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined2 *)((long)param_1 + 0xee) = 0x100;
  *(undefined2 *)((long)param_1 + 0x101) = 0;
  return;
}

