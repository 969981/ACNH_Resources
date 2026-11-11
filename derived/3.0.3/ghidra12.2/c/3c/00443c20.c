
void FUN_00443c20(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  plVar1 = *(long **)(param_1 + 8);
  uVar3 = (long)plVar1 + 0x17U & 0xfffffffffffffff8;
  if ((uVar3 <= *(ulong *)(param_1 + 0x10)) &&
     (*(ulong *)(param_1 + 8) = uVar3, plVar1 != (long *)0x0)) {
    *plVar1 = param_2;
    lVar2 = nn::os::GetSystemTick();
    plVar1[1] = lVar2;
  }
  if (DAT_04c6f420 != (code *)0x0) {
    (*DAT_04c6f420)(DAT_04c6f428);
  }
  if (DAT_04c6f418 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00443c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c6f418)(param_2 + 2,DAT_04c6f428);
  return;
}

