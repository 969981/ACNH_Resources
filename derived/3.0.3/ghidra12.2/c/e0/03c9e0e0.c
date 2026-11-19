
long * FUN_03c9e0e0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar2 = (long *)FUN_00367b14(0x100,0x10);
  if (cVar1 == '\0') {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bc10(plVar2,param_2,param_3);
    *plVar2 = (long)(PTR_DAT_04bd1cf8 + 0x10);
    puVar3 = &DAT_04b86398;
    ppuVar4 = &PTR_LAB_04b864b0;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    FUN_0037bc10(plVar2,param_2,param_3);
    *plVar2 = (long)(PTR_DAT_04bd1cf8 + 0x10);
    puVar3 = &DAT_04b86230;
    ppuVar4 = &PTR_LAB_04b86350;
  }
  lVar5 = *(long *)(param_3 + 0x28);
  plVar2[0x1f] = 0;
  plVar2[0x1c] = (long)ppuVar4;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x1c;
  *plVar2 = (long)(puVar3 + 0x10);
  plVar2[0x1b] = lVar5;
  return plVar2;
}

