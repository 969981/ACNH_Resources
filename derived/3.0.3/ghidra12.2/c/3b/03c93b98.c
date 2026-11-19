
long * FUN_03c93b98(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar3 = (long *)FUN_00367b14(0x160,0x10);
  if (cVar1 == '\0') {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar3);
    *plVar3 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar3[4] = (long)(plVar3 + 4);
    plVar3[5] = (long)(plVar3 + 4);
    FUN_0037ca20(plVar3,param_2,0,0,0);
    *plVar3 = (long)(PTR_DAT_04bd08b0 + 0x10);
    FUN_00398cf0(plVar3,param_2,uVar5,0,0);
    *plVar3 = (long)(PTR_DAT_04bd1c38 + 0x10);
    plVar3[0x26] = *(long *)(param_2 + 0x130);
    uVar2 = *(undefined1 *)(param_2 + 0x138);
    plVar3[0x2a] = 0;
    plVar3[0x2b] = param_2 + 0x140;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x28;
    *plVar3 = (long)&PTR_LAB_04b884c0;
    *(undefined1 *)(plVar3 + 0x27) = uVar2;
    ppuVar4 = &PTR_LAB_04b885d0;
  }
  else {
    if (plVar3 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar3);
    *plVar3 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar3[4] = (long)(plVar3 + 4);
    plVar3[5] = (long)(plVar3 + 4);
    FUN_0037ca20(plVar3,param_2,0,0,0);
    *plVar3 = (long)(PTR_DAT_04bd08b0 + 0x10);
    FUN_00398cf0(plVar3,param_2,uVar5,0,0);
    *plVar3 = (long)(PTR_DAT_04bd1c38 + 0x10);
    plVar3[0x26] = *(long *)(param_2 + 0x130);
    uVar2 = *(undefined1 *)(param_2 + 0x138);
    plVar3[0x2a] = 0;
    plVar3[0x2b] = param_2 + 0x140;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x28;
    *plVar3 = (long)&PTR_LAB_04b88350;
    *(undefined1 *)(plVar3 + 0x27) = uVar2;
    ppuVar4 = &PTR_LAB_04b88468;
  }
  plVar3[0x28] = (long)ppuVar4;
  plVar3[0x29] = 0;
  return plVar3;
}

