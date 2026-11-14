
void FUN_0161043c(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  
  if ((*param_1 != 0) && (param_1[6] != 0)) {
    if (*(uint *)(param_1 + 5) <= param_2) {
      param_2 = 0;
    }
    uVar1 = *(uint *)(param_1[6] + (long)(int)param_2 * 4);
    if (uVar1 < 0xffff0000 && (uVar1 & 0xffff) != 0xffff) {
      plVar2 = (long *)**(undefined8 **)
                         (*(long *)(*param_1 + 0x38) +
                         (-((ulong)(uVar1 >> 0xf) & 1) & 0xfffffffffff80000 |
                         ((ulong)uVar1 & 0xffff) << 3));
                    /* WARNING: Could not recover jumptable at 0x01610498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x1c8))(plVar2,(int)uVar1 >> 0x10,param_3 & 1);
      return;
    }
  }
  return;
}

