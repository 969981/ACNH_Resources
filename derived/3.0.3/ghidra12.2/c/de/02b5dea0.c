
void FUN_02b5dea0(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar6 = PTR_DAT_04bbc570;
  if (param_3 == 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  }
  else {
    plVar1 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
    plVar2 = plVar1 + param_3;
    if (0x38 < param_3) {
      plVar2 = plVar1;
    }
    lVar7 = *plVar2;
  }
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x150) == 0)) {
    uVar3 = PTR_DAT_04bbc570[8];
    *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
    *(undefined1 *)(param_1 + 1) = uVar3;
    puVar5 = PTR_DAT_04bb2010;
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar6 + 0xc);
    lVar7 = *(long *)(puVar6 + 0x18);
    param_1[2] = (long)(puVar5 + 0x10);
    param_1[3] = lVar7;
    uVar4 = *(undefined2 *)(puVar6 + 0x24);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar6 + 0x20);
    *(undefined2 *)((long)param_1 + 0x24) = uVar4;
    return;
  }
  FUN_02a59040(lVar7 + 0x148,param_2);
  return;
}

