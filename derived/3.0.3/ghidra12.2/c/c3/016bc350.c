
void FUN_016bc350(int *param_1,uint param_2,int *param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar6 = PTR_PTR_04bb2238;
  puVar5 = PTR_DAT_04bb2020;
  if (0 < (int)param_2) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    puVar3 = PTR_DAT_04bb60a0 + 0x10;
    puVar4 = PTR_DAT_04bb6048 + 0x10;
    do {
      local_90 = *(long *)(param_4 + 8);
      uStack_80 = *(undefined8 *)(puVar6 + 8);
      local_68 = *(undefined4 *)(param_4 + 0x20);
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      uStack_70 = uStack_80;
      if (*param_1 < param_1[1]) {
        plVar10 = *(long **)(param_1 + 4);
        if (plVar10 != (long *)0x0) {
          *(long *)(param_1 + 4) = *plVar10;
        }
        *plVar10 = (long)puVar2;
        (**(code **)(puVar5 + 0x28))(&local_98);
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[1] = local_90;
        *plVar10 = (long)puVar3;
        *(undefined4 *)(plVar10 + 4) = local_68;
        plVar12 = plVar10 + 5;
        *plVar12 = 0;
        if (param_5 != (long *)0x0) {
          (**(code **)(*param_5 + 0x140))(param_5,plVar10);
        }
        plVar10[9] = 0;
        *plVar10 = (long)&PTR_LAB_049bbe58;
        *(undefined4 *)(plVar10 + 10) = 0;
        plVar10[0xb] = 0;
        plVar10[6] = (long)puVar4;
        plVar10[7] = (long)"mUniqueID";
        plVar10[8] = 0;
        lVar9 = plVar10[5];
        if (plVar10[5] != 0) {
          do {
            lVar8 = lVar9;
            lVar9 = *(long *)(lVar8 + 0x10);
          } while (lVar9 != 0);
          plVar12 = (long *)(lVar8 + 0x10);
        }
        *plVar12 = (long)(plVar10 + 6);
        plVar10[9] = (long)plVar10;
        puVar7 = (undefined2 *)(**(code **)(plVar10[6] + 0xf0))();
        *puVar7 = 0xfffe;
        if ((*(uint *)(plVar10 + 10) >> 7 & 1) == 0) {
          plVar10[0xb] = 0;
          *(undefined2 *)(plVar10 + 0xb) = 0xfffe;
        }
        plVar10[0xc] = 0;
        *(undefined2 *)(plVar10 + 0xd) = 0xfffe;
        *(uint *)(plVar10 + 10) = *(uint *)(plVar10 + 10) & 0xfeffffff;
        *plVar10 = (long)&PTR_LAB_049bbcf8;
        if (*param_1 < param_1[1]) {
          *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar10;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        plVar10 = (long *)0x0;
      }
      if ((long)uVar11 < (long)*param_3) {
        (**(code **)(*plVar10 + 0x98))(plVar10,*(undefined8 *)(*(long *)(param_3 + 2) + uVar11 * 8))
        ;
      }
      uVar11 = uVar11 + 1;
      *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffc;
    } while (uVar11 != param_2);
  }
  return;
}

