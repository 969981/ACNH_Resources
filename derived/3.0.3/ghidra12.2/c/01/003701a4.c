
long * FUN_003701a4(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00367b14(0xe0);
  if (plVar1 != (long *)0x0) {
    FUN_0037bb50(plVar1);
    *plVar1 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar1[4] = (long)(plVar1 + 4);
    plVar1[5] = (long)(plVar1 + 4);
    FUN_0037ca20(plVar1,param_1,0,0,0);
    *plVar1 = (long)&PTR_thunk_FUN_0037bb6c_0484d640;
  }
  return plVar1;
}

