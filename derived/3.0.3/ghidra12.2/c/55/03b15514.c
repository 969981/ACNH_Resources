
long * FUN_03b15514(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)FUN_00367b14(0x110,0x10);
  if (plVar2 != (long *)0x0) {
    uVar3 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
    FUN_0037bb50(plVar2);
    *plVar2 = (long)(PTR_DAT_04bd0890 + 0x10);
    plVar2[4] = (long)(plVar2 + 4);
    plVar2[5] = (long)(plVar2 + 4);
    FUN_0037ca20(plVar2,param_1,0,0,0);
    puVar1 = PTR_DAT_04bd08a0;
    plVar2[0x1b] = 0;
    plVar2[0x1e] = 0;
    plVar2[0x1f] = 0;
    *plVar2 = (long)(puVar1 + 0x10);
    FUN_00383220(plVar2,param_1,uVar3,0,0);
    *plVar2 = (long)&DAT_04b75920;
    plVar2[0x20] = *(long *)(param_1 + 0x100);
    *(undefined1 *)(plVar2 + 0x21) = *(undefined1 *)(param_1 + 0x108);
  }
  return plVar2;
}

