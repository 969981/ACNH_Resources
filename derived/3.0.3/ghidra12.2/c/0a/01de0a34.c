
undefined1 FUN_01de0a34(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint *puVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  void *__dest;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  undefined8 *puVar19;
  byte bVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  long *plVar26;
  long lVar27;
  undefined4 uVar28;
  uint local_34c;
  uint local_2d4;
  undefined *local_2c0;
  char *pcStack_2b8;
  undefined4 local_2b0;
  undefined1 local_2ac;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined *local_290;
  undefined1 *puStack_288;
  undefined4 local_280;
  undefined1 local_27c [63];
  undefined1 local_23d;
  undefined *local_238;
  undefined1 *puStack_230;
  undefined4 local_228;
  undefined1 local_224 [63];
  undefined1 local_1e5;
  char local_1e0 [72];
  undefined *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [96];
  undefined1 local_124;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [96];
  undefined1 local_ac;
  int local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01de0a84:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar14 = FUN_02640eb0();
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar14 & 1) == 0) goto LAB_01de0a84;
  local_2c0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_2b8 = "IllegalReportCount";
  iVar12 = FUN_0274f6e0(&local_2c0);
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  pbVar18 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
LAB_01de0b2c:
    if (*pbVar18 < 8) goto LAB_01de0ba4;
LAB_01de0b38:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01de0b9c:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_01de0ba4;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar8 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar8 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar8 & 8) != 0) {
        pbVar18 = (byte *)(lVar21 + 0x471);
      }
    }
    bVar20 = *pbVar18;
    bVar11 = 7 < bVar20;
    if (bVar11) {
      bVar20 = 0xff;
    }
    local_198 = (undefined *)CONCAT71(local_198._1_7_,bVar20);
    if (bVar11) goto LAB_01de0b9c;
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01de0b2c;
      }
      goto LAB_01de0b38;
    }
LAB_01de0ba4:
    bVar20 = *pbVar18;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_198 = (undefined *)CONCAT71(local_198._1_7_,bVar20);
  }
  local_2c0 = puVar2 + 0x10;
  pcStack_2b8 = "IllegalReportCount";
  iVar13 = FUN_0274bce0(&local_198,&local_2c0);
  if (iVar13 < iVar12) {
    uVar24 = 0;
    if ((*(long *)(param_2 + 2) != 0) && (*(long *)(param_2 + 4) != 0)) {
      lVar21 = *(long *)PTR_DAT_04bb46b0;
      if (lVar21 == 0) {
        return 0;
      }
      puVar19 = *(undefined8 **)(lVar21 + 0x10);
      if ((*(byte *)(lVar21 + 0x453) & 1) == 0) {
        lVar21 = (**(code **)(*(long *)*puVar19 + 0x38))();
        if (lVar21 == 0) {
          return 0;
        }
        lVar21 = lVar21 + 0x70;
      }
      else {
        if (puVar19 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar19[0x26] == (long *)0x0) {
          return 0;
        }
        lVar21 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
        if (lVar21 == 0) {
          return 0;
        }
      }
      __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                                 ((long *)*param_1,*(undefined8 *)(param_2 + 4),0xfffffff8);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 4));
      puVar2 = PTR_DAT_04bb2698;
      lVar27 = *(long *)PTR_DAT_04bb2698;
      if (lVar27 == 0) {
        puVar17 = malloc(0x4f0);
      }
      else {
        plVar15 = (long *)param_1[1];
        if (plVar15 == (long *)0x0) {
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar15 = (long *)(lVar27 + 8);
          if (lVar16 != 0) {
            plVar15 = (long *)(lVar16 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
        }
        puVar17 = (undefined4 *)(**(code **)(*plVar15 + 0x30))(plVar15,0x4f0,8);
      }
      puVar17[1] = 7;
      *(undefined1 *)(puVar17 + 7) = 0;
      puVar17[6] = 0x4b1;
      puVar3 = PTR_DAT_04bb2b70;
      *(undefined1 *)(puVar17 + 0x133) = 0;
      *(undefined8 *)(puVar17 + 0x134) = 0;
      *(undefined8 *)(puVar17 + 0x136) = 0;
      *(undefined8 *)(puVar17 + 0x138) = 0;
      *(undefined8 *)(puVar17 + 0x13a) = 0;
      *(undefined **)(puVar17 + 2) = puVar3 + 0x10;
      *(undefined4 **)(puVar17 + 4) = puVar17 + 7;
      param_1[0xb] = puVar17;
      *puVar17 = 0xb;
      *(undefined4 *)(param_1[0xb] + 4) = *param_2;
      *(void **)(param_1[0xb] + 0x4d0) = __dest;
      *(undefined8 *)(param_1[0xb] + 0x4d8) = *(undefined8 *)(param_2 + 4);
      lVar27 = param_1[0xb];
      (**(code **)(*(long *)(lVar27 + 8) + 0x18))();
      uVar25 = *(undefined8 *)(lVar27 + 0x10);
      uVar28 = *(undefined4 *)(lVar27 + 0x18);
      (**(code **)(*(long *)(param_2 + 6) + 0x18))(param_2 + 6);
      iVar12 = FUN_038d4f60(&local_2c0,uVar25,uVar28,*(undefined8 *)(param_2 + 8),0xffffffff);
      local_198 = (undefined *)CONCAT44(local_198._4_4_,iVar12);
      if (iVar12 != 0) {
        **(undefined1 **)(lVar27 + 0x10) = 0;
      }
      lVar27 = *(long *)puVar2;
      if (lVar27 == 0) {
        plVar15 = malloc(0x7c8);
      }
      else {
        plVar15 = (long *)param_1[1];
        if (plVar15 == (long *)0x0) {
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar15 = (long *)(lVar27 + 8);
          if (lVar16 != 0) {
            plVar15 = (long *)(lVar16 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) {
            plVar15 = (long *)0x0;
            goto LAB_01de0e00;
          }
        }
        plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x7c8,8);
      }
LAB_01de0e00:
      plVar15[7] = 0;
      *(undefined4 *)(plVar15 + 1) = 0xb;
      plVar15[2] = 0;
      plVar15[3] = 0;
      *(undefined4 *)(plVar15 + 6) = 0;
      plVar15[4] = 0;
      plVar15[5] = 0;
      *plVar15 = (long)(PTR_DAT_04bb2b48 + 0x10);
      memset(plVar15 + 8,0,0x780);
      FUN_006e1cb4(plVar15 + 8);
      *(undefined4 *)(plVar15 + 0xf8) = 0;
      puVar2 = PTR_DAT_04bb3730;
      *(long **)(param_1[0xb] + 0x4e0) = plVar15;
      lVar27 = *(long *)puVar2;
      plVar15[2] = *(long *)(*(long *)(lVar27 + 200) + 0x308);
      lVar16 = *(long *)(lVar27 + 200);
      uVar28 = *(undefined4 *)(lVar16 + 800);
      lVar23 = *(long *)(lVar16 + 0x318);
      plVar15[3] = *(long *)(lVar16 + 0x310);
      plVar15[4] = lVar23;
      *(undefined4 *)(plVar15 + 5) = uVar28;
      *(ulong *)((long)plVar15 + 0x2c) = (ulong)*(uint7 *)(*(long *)(lVar27 + 0xb0) + 0x1aa);
      plVar15[7] = *(long *)(*(long *)(lVar27 + 200) + 0x328);
      plVar26 = (long *)PTR_DAT_04bb46b0;
      if (*(long **)(lVar21 + 0xe7140) == (long *)0x0) {
        local_34c = 0;
      }
      else {
        puVar19 = (undefined8 *)**(long **)(lVar21 + 0xe7140);
        if (puVar19 == (undefined8 *)0x0) {
          local_34c = 0;
        }
        else {
          local_34c = (**(code **)*puVar19)();
        }
      }
      lVar27 = 0;
      pcVar1 = local_1e0 + 2;
      pcVar9 = local_1e0 + 0x42;
      if (local_1e0 + 0x42 <= pcVar1) {
        pcVar9 = pcVar1;
      }
      uVar14 = 0;
      pcVar10 = local_1e0 + 0x16;
      if (local_1e0 + 0x16 <= pcVar1) {
        pcVar10 = pcVar1;
      }
      uVar22 = ~(ulong)local_1e0;
      puVar2 = PTR_DAT_04bb2b60 + 0x10;
      puVar3 = PTR_DAT_04bb2bc0 + 0x10;
      puVar4 = PTR_DAT_04bb5128 + 0x10;
      puVar5 = PTR_DAT_04bc0cd8 + 0x10;
      puVar6 = PTR_DAT_04bc11c8 + 0x10;
      do {
        plVar7 = (long *)(*(long *)(lVar21 + 0xe7128) + *(long *)(lVar21 + 0xe7120) + lVar27);
        if (((*plVar7 != 0 || plVar7[1] != 0) && (*plVar26 != 0)) &&
           (lVar16 = FUN_026eec4c(*plVar26,uVar14 & 0xffffffff), lVar16 != 0)) {
          if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
             (puVar19 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar19 == (undefined8 *)0x0)) {
            local_2d4 = 0;
          }
          else {
            local_2d4 = (**(code **)*puVar19)();
          }
          local_124 = 0;
          local_188 = 0x61;
          local_184[0] = 0;
          local_110 = 0x61;
          local_ac = 0;
          local_10c[0] = 0;
          lVar23 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8);
          local_23d = 0;
          local_1e5 = 0;
          local_1e0[0] = '\0';
          local_1e0[1] = '\0';
          local_1e0[2] = '\0';
          local_1e0[3] = '\0';
          local_1e0[4] = '\0';
          local_1e0[5] = '\0';
          local_1e0[6] = '\0';
          local_1e0[7] = '\0';
          local_1e0[8] = '\0';
          local_1e0[9] = '\0';
          local_1e0[10] = '\0';
          local_1e0[0xb] = '\0';
          local_1e0[0xc] = '\0';
          local_1e0[0xd] = '\0';
          local_1e0[0xe] = '\0';
          local_1e0[0xf] = '\0';
          local_1e0[0x10] = '\0';
          local_1e0[0x11] = '\0';
          local_1e0[0x12] = '\0';
          local_1e0[0x13] = '\0';
          local_1e0[0x14] = '\0';
          local_1e0[0x15] = '\0';
          local_2b0 = 0xb;
          local_280 = 0x40;
          local_228 = 0x40;
          local_2c0 = puVar4;
          pcStack_2b8 = local_1e0;
          local_290 = puVar3;
          puStack_288 = local_27c;
          local_238 = puVar3;
          puStack_230 = local_224;
          local_198 = puVar2;
          local_190 = local_184;
          local_120 = puVar2;
          local_118 = local_10c;
          memset(local_1e0,0,(ulong)(pcVar10 + (-0xe1 - (long)&local_2c0)) & 0xfffffffffffffffc | 2)
          ;
          local_a8[0] = 10;
          local_a0 = lVar23 + 0xc158;
          memset(local_1e0,0,(ulong)(pcVar10 + uVar22) & 0xfffffffffffffffc | 2);
          local_2ac = 0;
          local_2a8 = 0xffffffff;
          uStack_2a0 = 0xffffffff00000000;
          local_298 = 0xffffffff;
          local_27c[0] = 0;
          local_224[0] = 0;
          local_70 = 1;
          local_6c = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_98 = puVar5;
          FUN_02906b00(&local_98,&local_2c0,local_a8);
          iVar12 = *(int *)(lVar23 + 0xc16c);
          puVar17 = (undefined4 *)(**(code **)(local_2c0 + 0x40))(&local_2c0);
          uVar28 = 1;
          if (iVar12 == 1) {
            uVar28 = 2;
          }
          *puVar17 = uVar28;
          uVar25 = (**(code **)(local_2c0 + 0x18))(&local_2c0);
          (**(code **)(local_198 + 0x18))(&local_198);
          local_a8[0] = FUN_038d4f60(&local_98,local_190,local_188,uVar25,0xffffffff);
          if (local_a8[0] != 0) {
            *local_190 = 0;
          }
          local_2ac = 0;
          local_2b0 = 0x21;
          local_2a8 = 0xffffffff;
          uStack_2a0 = 0xffffffff00000000;
          local_298 = 0xffffffff;
          local_280 = 0x40;
          local_23d = 0;
          local_27c[0] = 0;
          local_290 = PTR_DAT_04bb2bc0 + 0x10;
          local_228 = 0x40;
          local_1e5 = 0;
          local_224[0] = 0;
          local_1e0[0x40] = '\0';
          local_1e0[0x41] = '\0';
          local_1e0[0x30] = '\0';
          local_1e0[0x31] = '\0';
          local_1e0[0x32] = '\0';
          local_1e0[0x33] = '\0';
          local_1e0[0x34] = '\0';
          local_1e0[0x35] = '\0';
          local_1e0[0x36] = '\0';
          local_1e0[0x37] = '\0';
          local_1e0[0x38] = '\0';
          local_1e0[0x39] = '\0';
          local_1e0[0x3a] = '\0';
          local_1e0[0x3b] = '\0';
          local_1e0[0x3c] = '\0';
          local_1e0[0x3d] = '\0';
          local_1e0[0x3e] = '\0';
          local_1e0[0x3f] = '\0';
          local_1e0[0x20] = '\0';
          local_1e0[0x21] = '\0';
          local_1e0[0x22] = '\0';
          local_1e0[0x23] = '\0';
          local_1e0[0x24] = '\0';
          local_1e0[0x25] = '\0';
          local_1e0[0x26] = '\0';
          local_1e0[0x27] = '\0';
          local_1e0[0x28] = '\0';
          local_1e0[0x29] = '\0';
          local_1e0[0x2a] = '\0';
          local_1e0[0x2b] = '\0';
          local_1e0[0x2c] = '\0';
          local_1e0[0x2d] = '\0';
          local_1e0[0x2e] = '\0';
          local_1e0[0x2f] = '\0';
          local_1e0[0x10] = '\0';
          local_1e0[0x11] = '\0';
          local_1e0[0x12] = '\0';
          local_1e0[0x13] = '\0';
          local_1e0[0x14] = '\0';
          local_1e0[0x15] = '\0';
          local_1e0[0x16] = '\0';
          local_1e0[0x17] = '\0';
          local_1e0[0x18] = '\0';
          local_1e0[0x19] = '\0';
          local_1e0[0x1a] = '\0';
          local_1e0[0x1b] = '\0';
          local_1e0[0x1c] = '\0';
          local_1e0[0x1d] = '\0';
          local_1e0[0x1e] = '\0';
          local_1e0[0x1f] = '\0';
          local_1e0[0] = '\0';
          local_1e0[1] = '\0';
          local_1e0[2] = '\0';
          local_1e0[3] = '\0';
          local_1e0[4] = '\0';
          local_1e0[5] = '\0';
          local_1e0[6] = '\0';
          local_1e0[7] = '\0';
          local_1e0[8] = '\0';
          local_1e0[9] = '\0';
          local_1e0[10] = '\0';
          local_1e0[0xb] = '\0';
          local_1e0[0xc] = '\0';
          local_1e0[0xd] = '\0';
          local_1e0[0xe] = '\0';
          local_1e0[0xf] = '\0';
          local_2c0 = puVar6;
          pcStack_2b8 = local_1e0;
          puStack_288 = local_27c;
          local_238 = local_290;
          puStack_230 = local_224;
          memset(local_1e0,0,(ulong)(pcVar9 + (-0xe1 - (long)&local_2c0)) & 0xfffffffffffffff8 | 2);
          local_a8[0] = 0x20;
          local_a0 = *(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8) + 0x3649e;
          memset(local_1e0,0,(ulong)(pcVar9 + uVar22) & 0xfffffffffffffff8 | 2);
          local_2ac = 0;
          local_2a8 = 0xffffffff;
          uStack_2a0 = 0xffffffff00000000;
          local_298 = 0xffffffff;
          local_27c[0] = 0;
          local_224[0] = 0;
          local_70 = 1;
          local_6c = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_98 = PTR_DAT_04bc0cd8 + 0x10;
          FUN_02906b00(&local_98,&local_2c0,local_a8);
          uVar25 = (**(code **)(local_2c0 + 0x18))(&local_2c0);
          (**(code **)(local_120 + 0x18))(&local_120);
          local_a8[0] = FUN_038d4f60(&local_98,local_118,local_110,uVar25,0xffffffff);
          if (local_a8[0] != 0) {
            *local_118 = 0;
          }
          FUN_006e1e40(plVar15,&local_198);
          plVar26 = (long *)PTR_DAT_04bb46b0;
          if ((((local_2d4 & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
             (puVar19 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar19 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar19)();
          }
        }
        uVar14 = uVar14 + 1;
        lVar27 = lVar27 + 0x48;
      } while (uVar14 != 8);
      if ((((local_34c & 1) != 0) && (*(long *)(lVar21 + 0xe7140) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar21 + 0xe7140) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
      }
      puVar2 = PTR_DAT_04bb2020;
      lVar21 = *(long *)PTR_DAT_04bb2698;
      if (lVar21 == 0) {
        plVar15 = malloc(0xc0);
      }
      else {
        plVar15 = (long *)param_1[1];
        if (plVar15 == (long *)0x0) {
          lVar27 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar15 = (long *)(lVar21 + 8);
          if (lVar27 != 0) {
            plVar15 = (long *)(lVar27 + 0xa8);
          }
          plVar15 = (long *)*plVar15;
        }
        plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0xc0,8);
      }
      *(undefined1 *)((long)plVar15 + 99) = 0;
      *(undefined4 *)(plVar15 + 4) = 0x40;
      *(undefined1 *)((long)plVar15 + 0x24) = 0;
      *(undefined1 *)((long)plVar15 + 0x7c) = 0;
      puVar4 = PTR_DAT_04bb2bc0;
      *(undefined4 *)(plVar15 + 0xf) = 0x40;
      *(undefined1 *)((long)plVar15 + 0xbb) = 0;
      plVar15[2] = (long)(puVar4 + 0x10);
      plVar15[3] = (long)plVar15 + 0x24;
      puVar3 = PTR_DAT_04bb2ba8 + 0x10;
      plVar15[0xd] = (long)(puVar4 + 0x10);
      plVar15[0xe] = (long)plVar15 + 0x7c;
      *plVar15 = (long)puVar3;
      plVar15[1] = 0x80000000b;
      *(long **)(param_1[0xb] + 0x4e8) = plVar15;
      iVar12 = FUN_02659360();
      if (((iVar12 == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) ||
         (lVar21 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,iVar12), lVar21 == 0)) {
        FUN_01de1ccc(param_1);
        if ((*(char *)(param_1 + 0x11) != '\0') && (uVar14 = FUN_02640eb0(), (uVar14 & 1) != 0)) {
          FUN_025196e4(&local_198);
          local_2c0 = puVar2 + 0x10;
          pcStack_2b8 = "IllegalReportCount";
          FUN_0274ca70(&local_198,&local_2c0,1);
        }
        puVar2 = PTR_DAT_04bb36f0;
        param_1[0xd] = PTR_DAT_04bb2d80 + 0x10;
        lVar21 = *(long *)puVar2;
        local_2c0 = (undefined *)CONCAT44(local_2c0._4_4_,7);
        puVar2 = local_2c0;
        local_2c0._0_4_ = 7;
        if (*(uint *)(lVar21 + 0x20) < 8) {
          local_2c0._0_4_ = 0;
        }
        *(undefined1 *)(*(long *)(lVar21 + 0x28) + (long)(int)local_2c0 * 0x38 + 0x2c) = 0;
        iVar12 = 7;
        if (*(uint *)(lVar21 + 0x20) < 8) {
          iVar12 = 0;
        }
        *(undefined1 *)(*(long *)(lVar21 + 0x28) + (long)iVar12 * 0x38 + 0x2d) = 0;
        local_2c0._0_4_ = 7;
        if (*(uint *)(lVar21 + 0x20) < 8) {
          local_2c0._0_4_ = 0;
        }
        *(undefined4 *)(*(long *)(lVar21 + 0x28) + (long)(int)local_2c0 * 0x38) = 0;
        iVar12 = 7;
        if (*(uint *)(lVar21 + 0x20) < 8) {
          iVar12 = 0;
        }
        *(undefined1 *)(*(long *)(lVar21 + 0x28) + (long)iVar12 * 0x38 + 0x2f) = 0;
        local_2c0 = puVar2;
        FUN_03ebb160(param_1 + 2,0);
        return 0;
      }
      if ((*(long **)(lVar21 + 0x17bb0) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar21 + 0x17bb0), puVar19 == (undefined8 *)0x0)) {
        FUN_01ddd380(plVar15,*(long *)(lVar21 + 0x17b98) + *(long *)(lVar21 + 0x17b90));
      }
      else {
        uVar14 = (**(code **)*puVar19)();
        FUN_01ddd380(plVar15,*(long *)(lVar21 + 0x17b98) + *(long *)(lVar21 + 0x17b90));
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar21 + 0x17bb0) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar21 + 0x17bb0) + 8),
           puVar19 != (undefined8 *)0x0)) {
          (**(code **)*puVar19)();
        }
      }
      if ((param_3 & 1) == 0) {
        FUN_03ebb160(param_1 + 2,1);
        return 1;
      }
      FUN_01ddd784(param_1);
      return 1;
    }
  }
  else {
    uVar24 = 1;
  }
  *(undefined1 *)(param_1 + 0x11) = uVar24;
  return uVar24;
}

