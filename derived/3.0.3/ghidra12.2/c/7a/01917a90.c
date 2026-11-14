
long * FUN_01917a90(int *param_1,long *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  
  if (*param_1 < param_1[1]) {
    plVar6 = *(long **)(param_1 + 4);
    if (plVar6 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar6;
    }
    plVar8 = (long *)*param_3;
    *plVar6 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar1 = PTR_DAT_04bb60a0;
    lVar5 = param_2[1];
    plVar6[2] = 0;
    plVar6[3] = 0;
    plVar6[1] = lVar5;
    lVar5 = param_2[6];
    *plVar6 = (long)(puVar1 + 0x10);
    *(int *)(plVar6 + 4) = (int)lVar5;
    plVar7 = plVar6 + 5;
    *plVar7 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x140))(plVar8,plVar6);
    }
    plVar6[10] = 0;
    puVar1 = PTR_DAT_04bbf6e8 + 0x178;
    *plVar6 = (long)(PTR_DAT_04bbf6e8 + 0x10);
    plVar6[6] = (long)puVar1;
    puVar1 = PTR_DAT_04bb31d0;
    plVar6[8] = (long)"mAngleYDeg";
    plVar6[9] = 0;
    *(undefined4 *)(plVar6 + 0xb) = 0;
    plVar6[0xc] = 0;
    plVar6[7] = (long)(puVar1 + 0x10);
    lVar5 = plVar6[5];
    if (plVar6[5] != 0) {
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 0x10);
      } while (lVar5 != 0);
      plVar7 = (long *)(lVar4 + 0x10);
    }
    *plVar7 = (long)(plVar6 + 7);
    plVar6[10] = (long)plVar6;
    uVar9 = 0x42b40000;
    if ((*(uint *)(plVar6 + 0xb) & 0x800) != 0) {
      uVar9 = 0x3fc90fdb;
    }
    puVar3 = (undefined4 *)(**(code **)(plVar6[7] + 0xf0))();
    *puVar3 = uVar9;
    uVar2 = *(uint *)(plVar6 + 0xb);
    if ((uVar2 >> 7 & 1) == 0) {
      plVar6[0xc] = 0;
      uVar9 = 0x42b40000;
      if ((uVar2 & 0x800) != 0) {
        uVar9 = 0x3fc90fdb;
      }
      *(undefined4 *)(plVar6 + 0xc) = uVar9;
    }
    local_78 = PTR_DAT_04bb2020;
    *(uint *)(plVar6 + 0xb) = uVar2 & 0xfeffffff;
    local_48 = 0;
    local_78 = local_78 + 0x10;
    pcStack_70 = "mPalmNodeParamsBuffer";
    puStack_60 = &DAT_040bb3a8;
    puStack_50 = &DAT_0407ebb1;
    local_68 = local_78;
    local_58 = local_78;
    FUN_019128ec(plVar6 + 0xd,&local_78,plVar6);
    puVar1 = PTR_DAT_04bbf6e0 + 0x178;
    *plVar6 = (long)(PTR_DAT_04bbf6e0 + 0x10);
    plVar6[6] = (long)puVar1;
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar6;
      *param_1 = *param_1 + 1;
    }
  }
  else {
    plVar6 = (long *)0x0;
  }
  return plVar6;
}

