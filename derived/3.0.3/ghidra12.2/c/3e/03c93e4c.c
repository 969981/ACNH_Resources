
long * FUN_03c93e4c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar2 = (long *)FUN_00367b14(0x100,0x10);
  if (cVar1 == '\0') {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    ppuVar3 = &PTR_LAB_04b863a8;
    plVar2[0x1b] = param_3;
    ppuVar4 = &PTR_LAB_04b864b0;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    ppuVar3 = &PTR_LAB_04b86240;
    plVar2[0x1b] = param_3;
    plVar2[0x1d] = 0;
    plVar2[0x1e] = 0;
    ppuVar4 = &PTR_LAB_04b86350;
  }
  plVar2[0x1f] = 0;
  *plVar2 = (long)ppuVar3;
  plVar2[0x1c] = (long)ppuVar4;
  *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x1c;
  return plVar2;
}

