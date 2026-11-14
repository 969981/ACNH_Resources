
void FUN_016bce30(int *param_1,int param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04bb2020;
  iVar10 = *param_1;
  if (iVar10 < param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    puVar3 = PTR_DAT_04bb60a0 + 0x10;
    puVar4 = PTR_DAT_04bb6048 + 0x10;
    do {
      local_90 = *(long *)(param_3 + 8);
      local_68 = *(undefined4 *)(param_3 + 0x20);
      plVar9 = *(long **)(param_1 + 4);
      uStack_80 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      if (plVar9 != (long *)0x0) {
        *(long *)(param_1 + 4) = *plVar9;
      }
      *plVar9 = (long)puVar2;
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      (**(code **)(puVar5 + 0x28))(&local_98);
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[1] = local_90;
      plVar11 = plVar9 + 5;
      *plVar11 = 0;
      *plVar9 = (long)puVar3;
      *(undefined4 *)(plVar9 + 4) = local_68;
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_4 + 0x140))(param_4,plVar9);
      }
      plVar9[9] = 0;
      *plVar9 = (long)&PTR_LAB_049bbe58;
      plVar9[7] = (long)"mUniqueID";
      plVar9[8] = 0;
      *(undefined4 *)(plVar9 + 10) = 0;
      plVar9[0xb] = 0;
      plVar9[6] = (long)puVar4;
      lVar8 = plVar9[5];
      if (plVar9[5] != 0) {
        do {
          lVar7 = lVar8;
          lVar8 = *(long *)(lVar7 + 0x10);
        } while (lVar8 != 0);
        plVar11 = (long *)(lVar7 + 0x10);
      }
      *plVar11 = (long)(plVar9 + 6);
      plVar9[9] = (long)plVar9;
      puVar6 = (undefined2 *)(**(code **)(plVar9[6] + 0xf0))();
      *puVar6 = 0xfffe;
      if ((*(uint *)(plVar9 + 10) >> 7 & 1) == 0) {
        plVar9[0xb] = 0;
        *(undefined2 *)(plVar9 + 0xb) = 0xfffe;
      }
      plVar9[0xc] = 0;
      *(undefined2 *)(plVar9 + 0xd) = 0xfffe;
      *(uint *)(plVar9 + 10) = *(uint *)(plVar9 + 10) & 0xfeffffff;
      *plVar9 = (long)&PTR_LAB_049bbcf8;
      if (*param_1 < param_1[1]) {
        *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar9;
        *param_1 = *param_1 + 1;
      }
      iVar10 = iVar10 + 1;
      *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
    } while (iVar10 != param_2);
  }
  return;
}

