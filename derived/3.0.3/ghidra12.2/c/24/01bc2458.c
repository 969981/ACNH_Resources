
void FUN_01bc2458(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_01bc1730(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1[0x41] + 8);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)FUN_01bc0860(lVar1,param_2,1);
  if (plVar2 == (long *)0x0) {
    FUN_01bc09d8(lVar1,param_2,param_3);
  }
  else {
    param_3 = (**(code **)(*plVar2 + 0x20))();
  }
                    /* WARNING: Could not recover jumptable at 0x01bc2514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_3,param_1[0x41],param_1 + 0x43);
  return;
}

