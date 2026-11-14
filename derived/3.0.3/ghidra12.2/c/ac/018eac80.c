
void FUN_018eac80(uint *param_1,uint param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  undefined4 uVar15;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar6 = PTR_DAT_04bb2020;
  uVar13 = *param_1;
  if ((int)param_2 < (int)uVar13) {
    if (param_2 <= uVar13) {
      lVar10 = (long)(int)param_2;
      do {
        puVar11 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar10 * 8);
        (**(code **)*puVar11)(puVar11);
        lVar10 = lVar10 + 1;
        *puVar11 = *(undefined8 *)(param_1 + 4);
        *(undefined8 **)(param_1 + 4) = puVar11;
      } while (lVar10 < (int)*param_1);
      *param_1 = param_2;
    }
  }
  else if ((int)uVar13 < (int)param_2) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3050 + 0x10;
    puVar3 = PTR_DAT_04bb60a0 + 0x10;
    puVar4 = PTR_DAT_04bb31d0 + 0x10;
    do {
      local_a0 = *(long *)(param_3 + 8);
      local_78 = *(undefined4 *)(param_3 + 0x20);
      plVar12 = *(long **)(param_1 + 4);
      uStack_90 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
      if (plVar12 != (long *)0x0) {
        *(long *)(param_1 + 4) = *plVar12;
      }
      *plVar12 = (long)puVar2;
      local_a8 = puVar1;
      local_98 = puVar1;
      local_88 = puVar1;
      uStack_80 = uStack_90;
      (**(code **)(puVar6 + 0x28))(&local_a8);
      plVar12[2] = 0;
      plVar12[3] = 0;
      plVar12[1] = local_a0;
      plVar14 = plVar12 + 5;
      *plVar14 = 0;
      *plVar12 = (long)puVar3;
      *(undefined4 *)(plVar12 + 4) = local_78;
      if (param_4 == (long *)0x0) {
        lVar10 = 0;
      }
      else {
        (**(code **)(*param_4 + 0x140))(param_4,plVar12);
        lVar10 = plVar12[5];
      }
      plVar12[7] = (long)puVar4;
      puVar7 = PTR_DAT_04bbf2b0;
      plVar12[10] = 0;
      *(undefined4 *)(plVar12 + 0xb) = 0;
      plVar12[0xc] = 0;
      *plVar12 = (long)(puVar7 + 0x10);
      plVar12[6] = (long)(puVar7 + 0x188);
      plVar12[8] = (long)"mRadius";
      plVar12[9] = 0;
      if (lVar10 != 0) {
        do {
          lVar9 = lVar10;
          lVar10 = *(long *)(lVar9 + 0x10);
        } while (lVar10 != 0);
        plVar14 = (long *)(lVar9 + 0x10);
      }
      *plVar14 = (long)(plVar12 + 7);
      plVar12[10] = (long)plVar12;
      uVar15 = 0x41a00000;
      if ((*(uint *)(plVar12 + 0xb) & 0x800) != 0) {
        uVar15 = 0x3eb2b8c2;
      }
      puVar8 = (undefined4 *)(**(code **)(plVar12[7] + 0xf0))();
      *puVar8 = uVar15;
      uVar5 = *(uint *)(plVar12 + 0xb);
      if ((uVar5 >> 7 & 1) == 0) {
        plVar12[0xc] = 0;
        uVar15 = 0x41a00000;
        if ((uVar5 & 0x800) != 0) {
          uVar15 = 0x3eb2b8c2;
        }
        *(undefined4 *)(plVar12 + 0xc) = uVar15;
      }
      *(uint *)(plVar12 + 0xb) = uVar5 & 0xfeffffff;
      *plVar12 = (long)&PTR_LAB_049d1be0;
      plVar12[6] = (long)&PTR_FUN_049d1d58;
      if ((int)*param_1 < (int)param_1[1]) {
        *(long **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = plVar12;
        *param_1 = *param_1 + 1;
      }
      uVar13 = uVar13 + 1;
      *(uint *)(plVar12 + 4) = *(uint *)(plVar12 + 4) & 0xfffffffc;
    } while (uVar13 != param_2);
  }
  return;
}

