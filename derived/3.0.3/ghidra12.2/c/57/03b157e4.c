
long * FUN_03b157e4(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)FUN_00367b14(0x130,0x10);
  if (plVar1 != (long *)0x0) {
    uVar2 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar1);
    *plVar1 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar1[4] = (long)(plVar1 + 4);
    plVar1[5] = (long)(plVar1 + 4);
    FUN_0037ca20(plVar1,param_1,0,0,0);
    *plVar1 = (long)(PTR_DAT_04bd08b0 + 0x10);
    FUN_00398cf0(plVar1,param_1,uVar2,0,0);
    *plVar1 = (long)&DAT_04b75cf8;
  }
  return plVar1;
}

