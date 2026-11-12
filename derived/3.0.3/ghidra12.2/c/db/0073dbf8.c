
void FUN_0073dbf8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  if (((*(long *)(param_1 + 0x1138) == 0) ||
      (lVar1 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar1 == 0)) ||
     (plVar2 = *(long **)(lVar1 + 0x48), plVar2 == (long *)0x0)) {
    return;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
                    /* WARNING: Could not recover jumptable at 0x0073dc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3[1]);
  return;
}

