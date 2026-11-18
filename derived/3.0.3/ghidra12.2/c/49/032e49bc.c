
void FUN_032e49bc(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(uint *)(lVar2 + 0x5e8) < 3) {
    FUN_032e4828(lVar2,*(undefined8 *)(&DAT_04184a38 + (long)(int)*(uint *)(lVar2 + 0x5e8) * 8),1);
  }
  plVar1 = *(long **)(lVar2 + 0x5f8);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032e4a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2,param_3);
  return;
}

