
long * FUN_03b15ba0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00367b14(0xe0,0x10);
  if (plVar1 != (long *)0x0) {
    FUN_0037bb50(plVar1);
    *plVar1 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar1[4] = (long)(plVar1 + 4);
    plVar1[5] = (long)(plVar1 + 4);
    FUN_0037ca20(plVar1,param_1,0,0,0);
    plVar1[0x1b] = param_2;
    *plVar1 = (long)&PTR_LAB_04b75530;
  }
  return plVar1;
}

