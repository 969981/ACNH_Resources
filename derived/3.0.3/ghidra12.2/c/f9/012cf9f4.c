
long * FUN_012cf9f4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_2 == (long *)0x0) {
    plVar8 = (long *)0x0;
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      plVar8 = malloc(0x7ed0);
    }
    else {
      plVar8 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x7ed0,8);
    }
    plVar9 = plVar8 + 0xc;
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    puVar2 = PTR_DAT_04bbc5d8 + 0x10;
    plVar8[2] = (long)puVar1;
    plVar8[3] = 0;
    puVar3 = PTR_DAT_04bbc2e8;
    plVar8[4] = (long)puVar1;
    plVar8[5] = 0;
    plVar10 = plVar8 + 7;
    *plVar10 = (long)(puVar3 + 0x10);
    puVar1 = PTR_DAT_04bbc2e0;
    plVar8[0xb] = 0;
    plVar8[6] = (long)(puVar1 + 0x10);
    *plVar8 = (long)(PTR_DAT_04bbc038 + 0x10);
    plVar8[1] = (long)puVar2;
    memset(plVar9,0,0x7e00);
    FUN_012af534(plVar9);
    plVar8[0xfd1] = 0;
    plVar8[0xfd0] = 0;
    plVar8[0xfce] = 0;
    puVar1 = PTR_DAT_04bbc040;
    plVar8[0xfcd] = 0;
    plVar8[0xfd4] = 0;
    *(undefined1 *)(plVar8 + 0xfd2) = 0;
    plVar8[0xfd5] = 0;
    plVar8[0xfcc] = (long)(puVar1 + 0x10);
    plVar8[0xfd6] = 0;
    plVar8[0xfd7] = 0;
    plVar8[0xfd8] = 0;
    *(undefined1 *)(plVar8 + 0xfd9) = 0;
    puVar1 = PTR_DAT_04bbc048 + 0x10;
    plVar8[0xfcf] = (long)(plVar8 + 0xfd3);
    plVar8[0xfd3] = (long)puVar1;
    FUN_02640070(plVar8 + 0xfcc,0,plVar9,0,0);
    puVar1 = PTR_DAT_04bbc050;
    plVar8[8] = (long)plVar8;
    *plVar10 = (long)(puVar1 + 0x10);
    iVar6 = (**(code **)(plVar8[0xfd3] + 0x18))(plVar8 + 0xfd3);
    plVar9 = (long *)(**(code **)*plVar10)(plVar10);
    iVar7 = (**(code **)(*plVar9 + 0x20))();
    iVar5 = DAT_05172fe4;
    iVar4 = DAT_05172fe0;
    *(int *)(plVar8 + 3) = DAT_05172fe0;
    *(int *)((long)plVar8 + 0x1c) = iVar5;
    *(int *)(plVar8 + 5) = iVar6 + iVar4 + -1;
    *(int *)((long)plVar8 + 0x2c) = iVar7 + iVar5 + -1;
  }
  return plVar8;
}

