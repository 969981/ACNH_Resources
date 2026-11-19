
undefined8 FUN_03b0bd70(uint *param_1,uint param_2,uint param_3,undefined4 param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar10 = PTR_DAT_04bb2698;
  if (0 < (int)param_2) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    uVar19 = (ulong)param_2 * 0xb0 | 8;
    if (lVar20 == 0) {
      puVar14 = malloc(uVar19);
joined_r0x03b0be24:
      if (puVar14 != (ulong *)0x0) {
        puVar15 = puVar14 + 1;
        *puVar14 = (ulong)param_2;
        puVar1 = PTR_DAT_04bb2bc0 + 0x10;
        puVar14 = puVar15;
        do {
          *puVar14 = 0;
          puVar14[4] = 0;
          *(undefined1 *)((long)puVar14 + 0x6c) = 0;
          *(undefined4 *)(puVar14 + 5) = 0;
          *(undefined4 *)(puVar14 + 8) = 0;
          *(undefined4 *)(puVar14 + 0xd) = 0x40;
          *(undefined1 *)((long)puVar14 + 0xab) = 0;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[6] = 0;
          puVar14[7] = 0;
          puVar14[9] = 0;
          puVar14[10] = 0;
          puVar14[0xb] = (ulong)puVar1;
          puVar14[0xc] = (ulong)((long)puVar14 + 0x6c);
          puVar14 = puVar14 + 0x16;
        } while (puVar14 != puVar15 + (ulong)param_2 * 0x16);
        param_1[4] = param_2;
        *(ulong **)(param_1 + 6) = puVar15;
      }
    }
    else {
      plVar13 = param_5;
      if (param_5 != (long *)0x0) {
LAB_03b0be00:
        puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar19,8);
        goto joined_r0x03b0be24;
      }
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar20 + 8);
      if (lVar12 != 0) {
        plVar13 = (long *)(lVar12 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 != (long *)0x0) goto LAB_03b0be00;
    }
    param_3 = param_1[1];
  }
  if (0 < (int)param_3) {
    lVar20 = *(long *)puVar10;
    uVar19 = (ulong)param_3 * 0x150 | 8;
    if (lVar20 == 0) {
      puVar14 = malloc(uVar19);
      puVar15 = (ulong *)PTR_DAT_04bb2f80;
      puVar10 = PTR_DAT_04bd14a0;
      puVar1 = PTR_DAT_04bd14b8;
      puVar11 = PTR_DAT_04bd17b0;
    }
    else {
      plVar13 = param_5;
      if (param_5 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar20 + 8);
        if (lVar12 != 0) {
          plVar13 = (long *)(lVar12 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_03b0bff8;
      }
      puVar14 = (ulong *)(**(code **)(*plVar13 + 0x30))(plVar13,uVar19,8);
      puVar15 = (ulong *)PTR_DAT_04bb2f80;
      puVar10 = PTR_DAT_04bd14a0;
      puVar1 = PTR_DAT_04bd14b8;
      puVar11 = PTR_DAT_04bd17b0;
    }
    PTR_DAT_04bb2f80 = (undefined *)puVar15;
    PTR_DAT_04bd14a0 = puVar10;
    PTR_DAT_04bd14b8 = puVar1;
    PTR_DAT_04bd17b0 = puVar11;
    if (puVar14 != (ulong *)0x0) {
      puVar16 = puVar14 + 1;
      *puVar14 = (ulong)param_3;
      uVar19 = puVar15[2];
      uVar6 = puVar15[3];
      uVar4 = puVar15[4];
      uVar7 = puVar15[5];
      uVar5 = *puVar15;
      uVar8 = puVar15[1];
      uVar9 = *(undefined4 *)(PTR_DAT_04bb2f78 + 8);
      uVar17 = *(ulong *)PTR_DAT_04bb2f78;
      puVar2 = PTR_DAT_04bd17b8 + 0x10;
      puVar14 = puVar16;
      do {
        *(undefined4 *)puVar14 = 0;
        *(undefined1 *)(puVar14 + 8) = 0;
        *(undefined2 *)((long)puVar14 + 0x42) = 0;
        *(undefined2 *)((long)puVar14 + 0xa2) = 0;
        puVar14[0x13] = 0;
        *(undefined1 *)(puVar14 + 0x14) = 0;
        puVar14[7] = (ulong)(puVar10 + 0x10);
        *(undefined4 *)(puVar14 + 0x26) = uVar9;
        puVar14[0x25] = uVar17;
        puVar14[0x28] = (ulong)puVar2;
        *(undefined2 *)(puVar14 + 0x29) = 0;
        *(undefined8 *)((long)puVar14 + 0x134) = 0x30000ffff0000;
        puVar14[3] = (ulong)(puVar11 + 0x10);
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[0x11] = 0;
        puVar14[0x12] = 0;
        puVar14[0xf] = (ulong)(puVar1 + 0x10);
        puVar14[0x10] = 0;
        puVar14[0x15] = 0;
        puVar14[0x16] = 0;
        puVar14[0x17] = 0;
        puVar14[0x18] = 0;
        puVar14[0x1b] = uVar19;
        puVar14[0x1c] = uVar6;
        puVar14[0x1d] = uVar4;
        puVar14[0x1e] = uVar7;
        puVar14[0x19] = uVar5;
        puVar14[0x1a] = uVar8;
        puVar14[0x21] = uVar19;
        puVar14[0x22] = uVar6;
        puVar14[0x23] = uVar4;
        puVar14[0x24] = uVar7;
        puVar14[0x1f] = uVar5;
        puVar14[0x20] = uVar8;
        puVar14 = puVar14 + 0x2a;
      } while (puVar14 != puVar16 + (ulong)param_3 * 0x2a);
      param_1[8] = param_3;
      *(ulong **)(param_1 + 10) = puVar16;
    }
  }
LAB_03b0bff8:
  if (0 < (int)param_1[1]) {
    uVar18 = 0;
    do {
      local_54 = 1;
      uStack_58 = 2;
      uVar3 = uVar18;
      if (param_1[8] <= uVar18) {
        uVar3 = 0;
      }
      local_5c = param_4;
      FUN_039bdc70(*(long *)(param_1 + 10) + (ulong)uVar3 * 0x150 + 0x18,1,&local_5c,param_5);
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)param_1[1]);
  }
  return 1;
}

