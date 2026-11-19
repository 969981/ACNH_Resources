
long * FUN_03c939d8(long param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  plVar4 = (long *)FUN_00367b14(0x130,0x10);
  if (cVar1 == '\0') {
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar4);
    *plVar4 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar4[4] = (long)(plVar4 + 4);
    plVar4[5] = (long)(plVar4 + 4);
    FUN_0037ca20(plVar4,param_2,0,0,0);
    puVar3 = PTR_DAT_04bd08a0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
    FUN_00383220(plVar4,param_2,uVar6,0,0);
    *plVar4 = (long)(PTR_DAT_04bd1c20 + 0x10);
    plVar4[0x20] = *(long *)(param_2 + 0x100);
    uVar2 = *(undefined1 *)(param_2 + 0x108);
    plVar4[0x24] = 0;
    plVar4[0x25] = param_2 + 0x110;
    *(long **)((long)plVar4 + 0xc9) = plVar4 + 0x22;
    *plVar4 = (long)&PTR_LAB_04b86968;
    *(undefined1 *)(plVar4 + 0x21) = uVar2;
    ppuVar5 = &PTR_LAB_04b86a80;
  }
  else {
    if (plVar4 == (long *)0x0) {
      return (long *)0x0;
    }
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar4);
    *plVar4 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar4[4] = (long)(plVar4 + 4);
    plVar4[5] = (long)(plVar4 + 4);
    FUN_0037ca20(plVar4,param_2,0,0,0);
    puVar3 = PTR_DAT_04bd08a0;
    plVar4[0x1b] = 0;
    plVar4[0x1e] = 0;
    plVar4[0x1f] = 0;
    *plVar4 = (long)(puVar3 + 0x10);
    FUN_00383220(plVar4,param_2,uVar6,0,0);
    *plVar4 = (long)(PTR_DAT_04bd1c20 + 0x10);
    plVar4[0x20] = *(long *)(param_2 + 0x100);
    uVar2 = *(undefined1 *)(param_2 + 0x108);
    plVar4[0x24] = 0;
    plVar4[0x25] = param_2 + 0x110;
    *(long **)((long)plVar4 + 0xc9) = plVar4 + 0x22;
    *plVar4 = (long)&PTR_LAB_04b867f0;
    *(undefined1 *)(plVar4 + 0x21) = uVar2;
    ppuVar5 = &PTR_LAB_04b86910;
  }
  plVar4[0x22] = (long)ppuVar5;
  plVar4[0x23] = 0;
  return plVar4;
}

