
/* WARNING: Removing unreachable block (ram,0x03501b40) */

void FUN_03501a00(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  FUN_034ffa4c();
  FUN_03500ee0(param_1,1,0);
  uVar3 = 0;
  do {
    plVar4 = *(long **)(*(long *)(param_1 + 0x220) + uVar3 * 8 + 0x570);
    if (((plVar4 != (long *)0x0) &&
        (uVar1 = 1 << (ulong)((uint)uVar3 & 0x1f), (**(uint **)(param_1 + 0x1d158) & uVar1) == 0))
       && (iVar2 = FUN_035016ec(param_1,plVar4,uVar3 & 0xffffffff), iVar2 == 3 || iVar2 == 0)) {
      if (uVar3 < *(uint *)(param_1 + 0x1d150)) {
        **(uint **)(param_1 + 0x1d158) = **(uint **)(param_1 + 0x1d158) | uVar1;
      }
      if (iVar2 == 0) {
        (**(code **)(*plVar4 + 0x140))(plVar4,1,0);
                    /* WARNING: Could not recover jumptable at 0x03501b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_03501b04 + (ulong)DAT_0418f102 * 4))();
        return;
      }
    }
    uVar3 = uVar3 + 1;
    if (uVar3 == 10) {
      return;
    }
  } while( true );
}

