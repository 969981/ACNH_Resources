
undefined8 FUN_00323020(long param_1,undefined8 param_2)

{
  short *psVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  long lVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint local_41c;
  undefined8 local_418;
  undefined1 *local_410;
  undefined8 *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8 [32];
  undefined1 auStack_2e8 [4];
  short local_2e4 [2];
  undefined8 local_2e0;
  undefined8 local_2d8 [79];
  
  lVar18 = 0;
  puVar15 = (undefined8 *)PTR_PTR_04bcee38;
  puVar16 = (undefined8 *)PTR_PTR_04bcee40;
  do {
    lVar2 = param_1 + lVar18 * 8;
    lVar9 = *(long *)(lVar2 + 0x350);
    if (lVar9 != 0) {
      uVar14 = *(undefined8 *)(lVar9 + 8);
      memset(auStack_2e8,0,0x280);
      if (*(long *)(param_1 + 0x78) == 0) {
        uVar11 = 0;
        local_41c = 0;
      }
      else {
        iVar6 = FUN_0034e3c0(uVar14,0,0,*puVar16);
        bVar4 = iVar6 != -1;
        if (bVar4) {
          FUN_0034fcf0(auStack_2e8);
          local_2d8[0] = *puVar16;
          local_2e4[0] = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))
                                   (*(long **)(param_1 + 0x78),0);
          local_2e0._4_4_ =
               (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),0);
          local_2e0._0_4_ =
               (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),0);
        }
        uVar13 = (ulong)bVar4;
        iVar6 = FUN_0034e3c0(uVar14,0,0,puVar16[1]);
        uVar12 = uVar13;
        if (iVar6 != -1) {
          FUN_0034fcf0(auStack_2e8 + uVar13 * 0x28);
          local_2d8[uVar13 * 5] = puVar16[1];
          sVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),1);
          local_2e4[uVar13 * 0x14] = sVar5;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),1);
          *(undefined4 *)((long)local_2d8 + uVar13 * 0x28 + -4) = uVar7;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),1);
          uVar12 = (ulong)(bVar4 + 1);
          *(undefined4 *)(local_2e4 + uVar13 * 0x14 + 2) = uVar7;
        }
        iVar6 = FUN_0034e3c0(uVar14,0,0,puVar16[2]);
        uVar13 = uVar12;
        if (iVar6 != -1) {
          FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
          local_2d8[uVar12 * 5] = puVar16[2];
          sVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),2);
          local_2e4[uVar12 * 0x14] = sVar5;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),2);
          *(undefined4 *)((long)local_2d8 + uVar12 * 0x28 + -4) = uVar7;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),2);
          uVar13 = (ulong)((int)uVar12 + 1);
          *(undefined4 *)(local_2e4 + uVar12 * 0x14 + 2) = uVar7;
        }
        iVar6 = FUN_0034e3c0(uVar14,0,0,puVar16[3]);
        uVar12 = uVar13;
        if (iVar6 != -1) {
          FUN_0034fcf0(auStack_2e8 + uVar13 * 0x28);
          local_2d8[uVar13 * 5] = puVar16[3];
          sVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),3);
          local_2e4[uVar13 * 0x14] = sVar5;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),3);
          *(undefined4 *)((long)local_2d8 + uVar13 * 0x28 + -4) = uVar7;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),3);
          uVar12 = (ulong)((int)uVar13 + 1);
          *(undefined4 *)(local_2e4 + uVar13 * 0x14 + 2) = uVar7;
        }
        uVar11 = (uint)uVar12;
        iVar6 = FUN_0034e3c0(uVar14,0,0,puVar16[4]);
        if (iVar6 != -1) {
          FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
          local_2d8[uVar12 * 5] = puVar16[4];
          sVar5 = (**(code **)(**(long **)(param_1 + 0x78) + 0x38))(*(long **)(param_1 + 0x78),4);
          local_2e4[uVar12 * 0x14] = sVar5;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x40))(*(long **)(param_1 + 0x78),4);
          *(undefined4 *)((long)local_2d8 + uVar12 * 0x28 + -4) = uVar7;
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x50))(*(long **)(param_1 + 0x78),4);
          uVar11 = uVar11 + 1;
          *(undefined4 *)(local_2e4 + uVar12 * 0x14 + 2) = uVar7;
        }
        puVar15 = (undefined8 *)PTR_PTR_04bcee38;
        local_41c = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
      }
      iVar6 = FUN_0034e3c0(uVar14,0,0,*puVar15);
      if (iVar6 == -1) {
        uVar21 = 0xffffffff;
        uVar20 = local_41c;
      }
      else {
        uVar12 = (ulong)uVar11;
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = *puVar15;
        local_2e4[uVar12 * 0x14] = (short)local_41c;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar20 = local_41c + 1;
        uVar21 = local_41c;
      }
      bVar4 = iVar6 != -1;
      uVar17 = (uint)bVar4;
      uVar10 = puVar15[1];
      *(uint *)(param_1 + 0x3f0) = uVar21;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar21 = uVar20;
      }
      else {
        uVar17 = (uint)bVar4;
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[1];
        local_2e4[uVar12 * 0x14] = (short)uVar20;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar21 = uVar20 + 1;
        uVar8 = uVar20;
      }
      uVar10 = puVar15[2];
      *(uint *)(param_1 + 0x3f4) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar20 = uVar21;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[2];
        local_2e4[uVar12 * 0x14] = (short)uVar21;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar20 = uVar21 + 1;
        uVar8 = uVar21;
      }
      uVar10 = puVar15[3];
      *(uint *)(param_1 + 0x3f8) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar21 = uVar20;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[3];
        local_2e4[uVar12 * 0x14] = (short)uVar20;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar21 = uVar20 + 1;
        uVar8 = uVar20;
      }
      uVar10 = puVar15[4];
      *(uint *)(param_1 + 0x3fc) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar20 = uVar21;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[4];
        local_2e4[uVar12 * 0x14] = (short)uVar21;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar20 = uVar21 + 1;
        uVar8 = uVar21;
      }
      uVar10 = puVar15[5];
      *(uint *)(param_1 + 0x400) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar21 = uVar20;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[5];
        local_2e4[uVar12 * 0x14] = (short)uVar20;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar21 = uVar20 + 1;
        uVar8 = uVar20;
      }
      uVar10 = puVar15[6];
      *(uint *)(param_1 + 0x404) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar20 = uVar21;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[6];
        local_2e4[uVar12 * 0x14] = (short)uVar21;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar20 = uVar21 + 1;
        uVar8 = uVar21;
      }
      uVar10 = puVar15[7];
      *(uint *)(param_1 + 0x408) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar21 = uVar20;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[7];
        local_2e4[uVar12 * 0x14] = (short)uVar20;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar21 = uVar20 + 1;
        uVar8 = uVar20;
      }
      uVar10 = puVar15[8];
      *(uint *)(param_1 + 0x40c) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar20 = uVar21;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[8];
        local_2e4[uVar12 * 0x14] = (short)uVar21;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar20 = uVar21 + 1;
        uVar8 = uVar21;
      }
      uVar10 = puVar15[9];
      *(uint *)(param_1 + 0x410) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        uVar8 = 0xffffffff;
        uVar21 = uVar20;
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[9];
        local_2e4[uVar12 * 0x14] = (short)uVar20;
        uVar17 = uVar17 + 1;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
        uVar21 = uVar20 + 1;
        uVar8 = uVar20;
      }
      uVar10 = puVar15[10];
      *(uint *)(param_1 + 0x414) = uVar8;
      iVar6 = FUN_0034e3c0(uVar14,0,0,uVar10);
      if (iVar6 == -1) {
        *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
        puVar3 = PTR_PTR_04bcee48;
        if (uVar11 == 0 && uVar17 == 0) {
          iVar6 = FUN_0034e3c0(uVar14,0,0,*(undefined8 *)PTR_PTR_04bcee48);
          lVar9 = (long)(int)uVar21;
          FUN_0034fcf0(auStack_2e8 + lVar9 * 0x28);
          if (iVar6 != -1) {
            uVar10 = *(undefined8 *)puVar3;
            uVar21 = uVar21 + 1;
            local_2e4[lVar9 * 0x14] = 0;
            psVar1 = local_2e4 + lVar9 * 0x14 + 2;
            psVar1[0] = 0;
            psVar1[1] = 0;
            psVar1[2] = 0x1905;
            psVar1[3] = 0;
            local_2d8[lVar9 * 5] = uVar10;
          }
          uVar19 = (ushort)(iVar6 != -1);
          iVar6 = FUN_0034e3c0(uVar14,0,0,*(undefined8 *)(puVar3 + 8));
          lVar9 = (long)(int)uVar21;
          FUN_0034fcf0(auStack_2e8 + lVar9 * 0x28);
          if (iVar6 != -1) {
            uVar10 = *(undefined8 *)(puVar3 + 8);
            uVar21 = uVar21 + 1;
            uVar19 = uVar19 + 1;
            local_2e4[lVar9 * 0x14] = 0;
            psVar1 = local_2e4 + lVar9 * 0x14 + 2;
            psVar1[0] = 0x10;
            psVar1[1] = 0;
            psVar1[2] = 0x1905;
            psVar1[3] = 0;
            local_2d8[lVar9 * 5] = uVar10;
          }
          iVar6 = FUN_0034e3c0(uVar14,0,0,*(undefined8 *)(puVar3 + 0x10));
          lVar9 = (long)(int)uVar21;
          FUN_0034fcf0(auStack_2e8 + lVar9 * 0x28);
          if (iVar6 != -1) {
            uVar10 = *(undefined8 *)(puVar3 + 0x10);
            uVar21 = uVar21 + 1;
            uVar19 = uVar19 + 1;
            local_2e4[lVar9 * 0x14] = 0;
            psVar1 = local_2e4 + lVar9 * 0x14 + 2;
            psVar1[0] = 0x20;
            psVar1[1] = 0;
            psVar1[2] = 0x1905;
            psVar1[3] = 0;
            local_2d8[lVar9 * 5] = uVar10;
          }
          iVar6 = FUN_0034e3c0(uVar14,0,0,*(undefined8 *)(puVar3 + 0x18));
          lVar9 = (long)(int)uVar21;
          FUN_0034fcf0(auStack_2e8 + lVar9 * 0x28);
          if (iVar6 != -1) {
            uVar10 = *(undefined8 *)(puVar3 + 0x18);
            uVar21 = uVar21 + 1;
            local_2e4[lVar9 * 0x14] = 0;
            uVar19 = uVar19 + 1;
            psVar1 = local_2e4 + lVar9 * 0x14 + 2;
            psVar1[0] = 0x30;
            psVar1[1] = 0;
            psVar1[2] = 0x1905;
            psVar1[3] = 0;
            local_2d8[lVar9 * 5] = uVar10;
          }
          iVar6 = FUN_0034e3c0(uVar14,0,0,*(undefined8 *)(puVar3 + 0x20));
          lVar9 = (long)(int)uVar21;
          FUN_0034fcf0(auStack_2e8 + lVar9 * 0x28);
          if (iVar6 != -1) {
            uVar10 = *(undefined8 *)(puVar3 + 0x20);
            uVar19 = uVar19 + 1;
            local_2e4[lVar9 * 0x14] = 0;
            psVar1 = local_2e4 + lVar9 * 0x14 + 2;
            psVar1[0] = 0x40;
            psVar1[1] = 0;
            psVar1[2] = 0x1905;
            psVar1[3] = 0;
            local_2d8[lVar9 * 5] = uVar10;
          }
          uVar17 = 0;
          *(undefined4 *)(param_1 + 0x41c) = 0;
        }
        else {
          uVar19 = 0;
        }
      }
      else {
        uVar12 = (ulong)(uVar17 + uVar11);
        FUN_0034fcf0(auStack_2e8 + uVar12 * 0x28);
        uVar10 = puVar15[10];
        uVar19 = 0;
        local_2e4[uVar12 * 0x14] = (short)uVar21;
        uVar17 = uVar17 + 1;
        *(uint *)(param_1 + 0x418) = uVar21;
        psVar1 = local_2e4 + uVar12 * 0x14 + 2;
        psVar1[0] = 0;
        psVar1[1] = 0;
        psVar1[2] = 0x1905;
        psVar1[3] = 0;
        local_2d8[uVar12 * 5] = uVar10;
      }
      local_3e8[0x1e] = 0;
      local_3e8[0x1f] = 0;
      local_3e8[0x1c] = 0;
      local_3e8[0x1d] = 0;
      local_3e8[0x1a] = 0;
      local_3e8[0x1b] = 0;
      local_3e8[0x18] = 0;
      local_3e8[0x19] = 0;
      local_3e8[0x16] = 0;
      local_3e8[0x17] = 0;
      local_3e8[0x14] = 0;
      local_3e8[0x15] = 0;
      local_3e8[0x12] = 0;
      local_3e8[0x13] = 0;
      local_3e8[0x10] = 0;
      local_3e8[0x11] = 0;
      local_3e8[0xe] = 0;
      local_3e8[0xf] = 0;
      local_3e8[0xc] = 0;
      local_3e8[0xd] = 0;
      local_3e8[10] = 0;
      local_3e8[0xb] = 0;
      local_3e8[8] = 0;
      local_3e8[9] = 0;
      local_3e8[6] = 0;
      local_3e8[7] = 0;
      local_3e8[4] = 0;
      local_3e8[5] = 0;
      local_3e8[2] = 0;
      local_3e8[3] = 0;
      local_3e8[0] = 0;
      local_3e8[1] = 0;
      FUN_0034fd04(local_3e8);
      if ((0 < (int)local_41c) && (uVar11 != 0)) {
        uVar12 = 0;
        puVar15 = local_3e8;
        do {
          uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x10))
                            (*(long **)(param_1 + 0x78),uVar12 & 0xffffffff);
          uVar12 = uVar12 + 1;
          *(undefined4 *)puVar15 = uVar7;
          puVar15 = puVar15 + 2;
        } while (local_41c != uVar12);
      }
      if (uVar17 != 0) {
        uVar12 = (ulong)uVar17;
        puVar15 = local_3e8 + (long)(int)local_41c * 2;
        do {
          FUN_0034fd04(puVar15);
          uVar12 = uVar12 - 1;
          *puVar15 = 0x100000010;
          puVar15 = puVar15 + 2;
        } while (uVar12 != 0);
      }
      puVar16 = (undefined8 *)PTR_PTR_04bcee40;
      if (uVar19 != 0) {
        local_3e8[0] = CONCAT44(local_3e8[0]._4_4_,0x50);
      }
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_408 = (undefined8 *)0x0;
      uStack_400 = 0;
      local_418 = 0;
      local_410 = (undefined1 *)0x0;
      FUN_0034fd0c(&local_418);
      local_408 = local_3e8;
      local_410 = auStack_2e8;
      local_418._0_4_ =
           CONCAT22((short)uVar17 + (short)local_41c + (ushort)(uVar19 != 0),
                    (short)uVar17 + (short)uVar11 + uVar19);
      uVar10 = FUN_0034efc0(&local_418);
      lVar9 = param_1 + lVar18 * 0x20 + 0x390;
      FUN_0034f054(lVar9,*(undefined8 *)(lVar2 + 0x370),uVar10);
      FUN_0034f070(lVar9,param_2,&local_418,uVar14);
      puVar15 = (undefined8 *)PTR_PTR_04bcee38;
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 3);
  return 1;
}

