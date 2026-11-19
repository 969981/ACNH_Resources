
long * FUN_03c93208(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar3 = (long *)FUN_00367b14(0x120,0x10);
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
    puVar2 = PTR_DAT_04bd08a0;
    plVar3[0x1b] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    FUN_00383220(plVar3,param_2,uVar5,0,0);
    plVar3[0x22] = 0;
    plVar3[0x23] = param_2 + 0x100;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x20;
    *plVar3 = (long)&PTR_LAB_04b87220;
    ppuVar4 = &PTR_LAB_04b87338;
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
    puVar2 = PTR_DAT_04bd08a0;
    plVar3[0x1b] = 0;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = 0;
    *plVar3 = (long)(puVar2 + 0x10);
    FUN_00383220(plVar3,param_2,uVar5,0,0);
    plVar3[0x22] = 0;
    plVar3[0x23] = param_2 + 0x100;
    *(long **)((long)plVar3 + 0xc9) = plVar3 + 0x20;
    *plVar3 = (long)&PTR_LAB_04b870a8;
    ppuVar4 = &PTR_LAB_04b871c8;
  }
  plVar3[0x20] = (long)ppuVar4;
  plVar3[0x21] = 0;
  return plVar3;
}

