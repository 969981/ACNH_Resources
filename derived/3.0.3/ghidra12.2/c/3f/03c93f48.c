
long * FUN_03c93f48(long param_1,long param_2)

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
    ppuVar3 = &PTR_LAB_04b85590;
    ppuVar4 = &PTR_LAB_04b85698;
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
    ppuVar3 = &PTR_LAB_04b85428;
    ppuVar4 = &PTR_LAB_04b85538;
  }
  plVar2[0x1c] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = param_2 + 0xd8;
  *plVar2 = (long)ppuVar3;
  plVar2[0x1b] = (long)ppuVar4;
  *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x1b;
  return plVar2;
}

