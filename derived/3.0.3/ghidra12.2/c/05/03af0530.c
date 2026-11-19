
undefined8 FUN_03af0530(uint *param_1,uint param_2,uint param_3,undefined4 param_4,long *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong *puVar15;
  ulong *puVar16;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (0 < (int)param_2) {
    uVar22 = (ulong)param_2;
    lVar23 = *(long *)PTR_DAT_04bb2698;
    uVar21 = (uVar22 + (ulong)param_2 * 4) * 0x10 | 8;
    if (lVar23 == 0) {
      puVar15 = malloc(uVar21);
    }
    else {
      plVar14 = param_5;
      if (param_5 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar23 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_03af06c4;
      }
      puVar15 = (ulong *)(**(code **)(*plVar14 + 0x30))(plVar14,uVar21,8);
    }
    if (puVar15 != (ulong *)0x0) {
      puVar16 = puVar15 + 1;
      *puVar15 = uVar22;
      uVar20 = uVar22 * 0x50 - 0x50;
      uVar12 = ((uint)(uVar20 / 0x50) & 0x3ffffff) + 1;
      uVar21 = (ulong)uVar12 & 3;
      puVar15 = puVar16;
      if ((uVar12 & 3) != 0) {
        do {
          *(undefined4 *)(puVar15 + 4) = 0;
          uVar21 = uVar21 - 1;
          *(undefined4 *)(puVar15 + 7) = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15 = puVar15 + 10;
        } while (uVar21 != 0);
      }
      if (0xef < uVar20) {
        do {
          *(undefined4 *)(puVar15 + 4) = 0;
          *(undefined4 *)(puVar15 + 7) = 0;
          *(undefined4 *)(puVar15 + 0xe) = 0;
          *(undefined4 *)(puVar15 + 0x11) = 0;
          *(undefined4 *)(puVar15 + 0x18) = 0;
          *(undefined4 *)(puVar15 + 0x1b) = 0;
          *(undefined4 *)(puVar15 + 0x22) = 0;
          *(undefined4 *)(puVar15 + 0x25) = 0;
          puVar15[2] = 0;
          puVar15[3] = 0;
          *puVar15 = 0;
          puVar15[1] = 0;
          puVar15[5] = 0;
          puVar15[6] = 0;
          puVar15[8] = 0;
          puVar15[9] = 0;
          puVar15[10] = 0;
          puVar15[0xb] = 0;
          puVar15[0xc] = 0;
          puVar15[0xd] = 0;
          puVar15[0xf] = 0;
          puVar15[0x10] = 0;
          puVar15[0x12] = 0;
          puVar15[0x13] = 0;
          puVar15[0x16] = 0;
          puVar15[0x17] = 0;
          puVar15[0x14] = 0;
          puVar15[0x15] = 0;
          puVar15[0x19] = 0;
          puVar15[0x1a] = 0;
          puVar15[0x1c] = 0;
          puVar15[0x1d] = 0;
          puVar15[0x20] = 0;
          puVar15[0x21] = 0;
          puVar15[0x1e] = 0;
          puVar15[0x1f] = 0;
          puVar15[0x23] = 0;
          puVar15[0x24] = 0;
          puVar15[0x26] = 0;
          puVar15[0x27] = 0;
          puVar15 = puVar15 + 0x28;
        } while (puVar15 != puVar16 + uVar22 * 10);
      }
      param_1[4] = param_2;
      *(ulong **)(param_1 + 6) = puVar16;
    }
  }
LAB_03af06c4:
  lVar23 = *(long *)puVar1;
  local_54 = 1;
  uStack_58 = 2;
  uVar12 = param_1[1];
  local_5c = param_4;
  if (lVar23 == 0) {
    pvVar17 = malloc((long)(int)uVar12 * 0x138);
  }
  else {
    plVar14 = param_5;
    if (param_5 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar23 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      pvVar17 = (void *)0x0;
      if (plVar14 == (long *)0x0) goto LAB_03af073c;
    }
    pvVar17 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,(long)(int)uVar12 * 0x138,8);
  }
LAB_03af073c:
  uVar21 = (ulong)param_1[1];
  if (0 < (int)param_1[1]) {
    lVar23 = 0;
    puVar19 = (undefined8 *)((long)pvVar17 + 0x98);
    puVar1 = PTR_DAT_04bd17b0 + 0x10;
    puVar2 = PTR_DAT_04bd14b8 + 0x10;
    uVar5 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    uVar8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    puVar3 = PTR_DAT_04bd14a0 + 0x10;
    uVar6 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    uVar9 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    puVar4 = PTR_DAT_04bd17b8 + 0x10;
    uVar7 = *(undefined8 *)PTR_DAT_04bb2f80;
    uVar10 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    uVar11 = *(undefined4 *)(PTR_DAT_04bb2f78 + 8);
    uVar18 = *(undefined8 *)PTR_DAT_04bb2f78;
    do {
      puVar19[-0x13] = puVar1;
      puVar19[-0x12] = 0;
      lVar23 = lVar23 + 1;
      *(undefined1 *)(puVar19 + -0xe) = 0;
      *(undefined2 *)((long)puVar19 + -0x6e) = 0;
      *(undefined2 *)((long)puVar19 + -0xe) = 0;
      puVar19[-3] = 0;
      *(undefined1 *)(puVar19 + -2) = 0;
      puVar19[-0xf] = puVar3;
      puVar19[5] = uVar5;
      *(undefined4 *)(puVar19 + 0x10) = uVar11;
      *(undefined8 *)((long)puVar19 + 0x84) = 0x30000ffff0000;
      puVar19[0x12] = puVar4;
      *(undefined2 *)(puVar19 + 0x13) = 0;
      puVar19[-0x11] = 0;
      puVar19[-0x10] = 0;
      puVar19[-1] = 0;
      *puVar19 = 0;
      puVar19[-5] = 0;
      puVar19[-4] = 0;
      puVar19[-7] = puVar2;
      puVar19[-6] = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar19[6] = uVar8;
      puVar19[7] = uVar6;
      puVar19[3] = uVar7;
      puVar19[4] = uVar10;
      puVar19[0xc] = uVar8;
      puVar19[0xd] = uVar6;
      puVar19[8] = uVar9;
      puVar19[9] = uVar7;
      puVar19[10] = uVar10;
      puVar19[0xb] = uVar5;
      puVar19[0xe] = uVar9;
      puVar19[0xf] = uVar18;
      uVar21 = (ulong)(int)param_1[1];
      puVar19 = puVar19 + 0x27;
    } while (lVar23 < (long)uVar21);
  }
  *(void **)(param_1 + 8) = pvVar17;
  FUN_039bdc70(pvVar17,uVar21,&local_5c,param_5);
  return 1;
}

