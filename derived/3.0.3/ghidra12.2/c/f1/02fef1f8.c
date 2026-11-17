
void FUN_02fef1f8(long *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  puVar2 = (uint *)(**(code **)(*param_1 + 0xc0))();
  plVar5 = (long *)0x0;
  if ((-1 < (int)param_2) && (puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if (uVar1 == param_2 || (uVar1 < param_2 || (int)uVar1 < (int)param_2)) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = *(long **)(*(long *)(puVar2 + 2) + (ulong)param_2 * 8);
    }
  }
  puVar2 = (uint *)(**(code **)(*param_1 + 0xc0))(param_1);
  if (((((int)param_3 < 0) || (puVar2 == (uint *)0x0)) ||
      (uVar1 = *puVar2, uVar1 == param_3 || (uVar1 < param_3 || (int)uVar1 < (int)param_3))) ||
     ((plVar5 == (long *)0x0 ||
      (plVar6 = *(long **)(*(long *)(puVar2 + 2) + (ulong)param_3 * 8), plVar6 == (long *)0x0)))) {
    return;
  }
  plVar3 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x70))(plVar5);
    (**(code **)(*plVar3 + 0x98))(plVar3,uVar4);
  }
  (**(code **)(*plVar6 + 0x60))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x02fef2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x60))(plVar5);
  return;
}

