
long * FUN_03c93388(long param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar2 = (long *)FUN_00367b14(0x150,0x10);
  if (cVar1 == '\0') {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    *plVar2 = (long)(PTR_DAT_04bd08b0 + 0x10);
    FUN_00398cf0(plVar2,param_2,uVar4,0,0);
    plVar2[0x28] = 0;
    plVar2[0x29] = param_2 + 0x130;
    *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x26;
    *plVar2 = (long)&PTR_LAB_04b88798;
    ppuVar3 = &PTR_LAB_04b888a8;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar4 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_2,0,0,0);
    *plVar2 = (long)(PTR_DAT_04bd08b0 + 0x10);
    FUN_00398cf0(plVar2,param_2,uVar4,0,0);
    plVar2[0x28] = 0;
    plVar2[0x29] = param_2 + 0x130;
    *(long **)((long)plVar2 + 0xc9) = plVar2 + 0x26;
    *plVar2 = (long)&PTR_LAB_04b88628;
    ppuVar3 = &PTR_LAB_04b88740;
  }
  plVar2[0x26] = (long)ppuVar3;
  plVar2[0x27] = 0;
  return plVar2;
}

