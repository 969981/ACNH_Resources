
void FUN_03650330(long *param_1,uint param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = param_2 >> 0xc & 0xf;
  if (uVar1 < 8) {
    if (uVar1 == 5) {
      if (0xbff < (param_2 & 0xfff)) {
        if (*(uint *)(param_1 + 3) < 2) {
          param_3 = *(char *)((long)param_1 + 0xa6) * param_3;
        }
        else if (*(uint *)(param_1 + 3) == 3) {
          return;
        }
        *(char *)(*(long *)(*param_1 + (ulong)(param_2 >> 8) * 0x10 + 0xc00) +
                 ((ulong)param_2 & 0xff)) = param_3;
      }
      uVar1 = (param_2 & 0xfff) - 0x100;
      if (uVar1 < 0x107) {
                    /* WARNING: Could not recover jumptable at 0x0365041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&DAT_0419738d)[uVar1] * 4 + 0x36503c8))();
        return;
      }
    }
  }
  else {
    if (*(int *)((long)param_1 + 0xc) - 2U < 2) {
      if (0xdfff < param_2) {
        return;
      }
    }
    else {
      if (*(int *)((long)param_1 + 0xc) != 1) {
        return;
      }
      if (2 < param_2 >> 0xe) {
        return;
      }
    }
    *(char *)(*(long *)(*param_1 + (ulong)(param_2 >> 8) * 0x10 + 0xc00) + ((ulong)param_2 & 0xff))
         = param_3;
  }
  return;
}

