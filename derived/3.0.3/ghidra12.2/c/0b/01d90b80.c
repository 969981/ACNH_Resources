
undefined8 FUN_01d90b80(long param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  short *psVar5;
  long lVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  short *psVar9;
  bool bVar10;
  undefined *puVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  byte *pbVar24;
  undefined *puVar25;
  uint uVar26;
  uint *puVar27;
  ushort *puVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  long *plVar32;
  long *plVar33;
  ulong uVar34;
  uint *puVar35;
  uint *local_248;
  uint local_214;
  undefined *local_1e0;
  undefined1 *local_1d8;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined *local_190;
  undefined1 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c [63];
  undefined1 local_13d;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [63];
  undefined1 local_e5;
  undefined8 local_e0;
  undefined6 uStack_d8;
  undefined2 local_d2;
  undefined6 uStack_d0;
  undefined1 auStack_ca [2];
  undefined4 local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  int local_a8 [2];
  long local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  *param_2 = 0;
  lVar20 = *(long *)PTR_DAT_04bb46b0;
  if (lVar20 == 0) {
    return 0;
  }
  puVar21 = *(undefined8 **)(lVar20 + 0x10);
  if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
    lVar20 = (**(code **)(*(long *)*puVar21 + 0x38))();
    if (lVar20 == 0) {
      return 0;
    }
    lVar20 = lVar20 + 0x70;
  }
  else {
    if (puVar21 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar21[0x26] == (long *)0x0) {
      return 0;
    }
    lVar20 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
    if (lVar20 == 0) {
      return 0;
    }
  }
  if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
     (puVar21 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar21 == (undefined8 *)0x0)) {
    local_214 = 0;
  }
  else {
    local_214 = (**(code **)*puVar21)();
  }
  puVar35 = *(uint **)(*(long *)(param_1 + 0xa0) + 0x10);
  puVar35[3] = 0xa0002;
  puVar35[1] = 2;
  puVar35[2] = 0xa0028;
  puVar35[5] = 30000;
  puVar35[6] = 1;
  puVar35[7] = 0x800;
  puVar35[8] = 1;
  FUN_00a7f2c0(puVar35 + 9);
  memset(*(void **)(param_1 + 0xa8),0,0x5b8);
  **(undefined4 **)(param_1 + 0xa8) = 0xa000200;
  puVar1 = (undefined1 *)((long)&local_e0 + 2);
  *(undefined4 *)(*(long *)(param_1 + 0xa8) + 4) = 0x22;
  puVar11 = PTR_DAT_04bb2030;
  local_1d0 = 0x1f;
  local_1b0 = 0xb;
  lVar22 = *(long *)(param_1 + 0xa8);
  local_1ac = 0;
  *(undefined1 *)(lVar22 + 0x26) = 0;
  local_1d8 = (undefined1 *)(lVar22 + 8);
  local_1a8 = 0xffffffff;
  uStack_1a0 = 0xffffffff00000000;
  local_198 = 0xffffffff;
  local_180 = 0x40;
  local_13d = 0;
  local_17c[0] = 0;
  local_128 = 0x40;
  local_e5 = 0;
  local_124[0] = 0;
  puVar25 = PTR_DAT_04bb2bc0 + 0x10;
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  uStack_d0 = 0;
  puVar7 = auStack_ca;
  if (auStack_ca <= puVar1) {
    puVar7 = puVar1;
  }
  local_e0 = 0;
  uStack_d8 = 0;
  local_d2 = 0;
  local_1e0 = puVar11 + 0x10;
  local_1c0 = puVar2;
  pcStack_1b8 = (char *)&local_e0;
  local_190 = puVar25;
  puStack_188 = local_17c;
  local_138 = puVar25;
  puStack_130 = local_124;
  memset(&local_e0,0,(ulong)(puVar7 + (-0xe1 - (long)&local_1c0)) & 0xfffffffffffffffc | 2);
  local_c8 = 2;
  FUN_01c138cc(&local_1c0);
  local_c0._0_4_ = 10;
  local_b8 = (undefined1 *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1e382c);
  (**(code **)(local_1c0 + 0x38))(&local_1c0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  puVar3 = PTR_DAT_04bc0cd8 + 0x10;
  local_90 = (char *)0x0;
  local_98 = puVar3;
  FUN_02906b00(&local_98,&local_1c0,&local_c0);
  uVar14 = (**(code **)(local_1c0 + 0x18))(&local_1c0);
  (**(code **)(local_1e0 + 0x18))(&local_1e0);
  iVar13 = FUN_038d4f60(&local_98,local_1d8,local_1d0,uVar14,0xffffffff);
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar13);
  if (iVar13 == 0) {
    bVar17 = *(byte *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1e3840);
    uVar18 = 2;
    if (bVar17 < 4) {
      uVar18 = (uint)bVar17;
    }
    local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar18);
    *(char *)(*(long *)(param_1 + 0xa8) + 0x27) = (char)uVar18;
    *(undefined2 *)(puVar35 + 4) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x28) = 0;
    local_248 = puVar35 + 0x16d11c;
    lVar22 = *(long *)(lVar20 + 8);
    lVar31 = *(long *)(lVar20 + 0x10);
    FUN_0266b370(&local_1e0);
    puVar7 = auStack_ca;
    if (auStack_ca <= puVar1) {
      puVar7 = puVar1;
    }
    *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18) = 0;
    uVar34 = 0;
    plVar32 = (long *)(lVar31 + lVar22 + 0x1e33b8);
    puVar30 = PTR_DAT_04bb2030;
    plVar33 = (long *)PTR_DAT_04bb46b0;
    do {
      if (plVar32[-1] == 0 && *plVar32 == 0) {
        if ((((uVar34 == ((ulong)local_1e0 & 0xffffffff)) || (uVar34 == (ulong)local_1e0 >> 0x20))
            || (uVar34 == ((ulong)local_1d8 & 0xffffffff))) ||
           (((uVar34 == (ulong)local_1d8 >> 0x20 || (uVar34 == local_1d0)) ||
            ((uVar34 == local_1cc || ((uVar34 == local_1c8 || (uVar34 == local_1c4))))))))
        goto LAB_01d914dc;
      }
      else {
        if ((*plVar33 == 0) || (lVar22 = FUN_026eec4c(*plVar33,uVar34 & 0xffffffff), lVar22 == 0))
        goto LAB_01d914dc;
        if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
           (puVar21 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar21 == (undefined8 *)0x0)) {
          uVar15 = 0;
        }
        else {
          uVar15 = (**(code **)*puVar21)();
          uVar15 = uVar15 & 0xffffffff;
        }
        lVar31 = lVar22 + 0x194b0;
        if (*(long *)(lVar22 + 0x194b8) == 0) {
          lVar31 = *(long *)(*plVar33 + 0x20);
          plVar23 = *(long **)(lVar31 + 0x28);
          if (plVar23 == (long *)0x0) goto LAB_01d91078;
LAB_01d91040:
          uVar16 = 0;
          if ((undefined8 *)*plVar23 != (undefined8 *)0x0) {
            uVar16 = (*(code *)**(undefined8 **)*plVar23)();
          }
        }
        else {
          plVar23 = *(long **)(lVar22 + 0x194d8);
          if (plVar23 != (long *)0x0) goto LAB_01d91040;
LAB_01d91078:
          uVar16 = 0;
        }
        lVar29 = *(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8);
        if (*(int *)(lVar29 + 0xc154) == 0 || *(int *)(lVar29 + 0xc138) == 0) {
LAB_01d910a0:
          bVar10 = false;
        }
        else {
          *(char *)(*(long *)(param_1 + 0xa8) + 0x28) =
               *(char *)(*(long *)(param_1 + 0xa8) + 0x28) + '\x01';
          if (uVar34 == ((ulong)local_1e0 & 0xffffffff)) {
            lVar29 = 0;
          }
          else if (uVar34 == (ulong)local_1e0 >> 0x20) {
            lVar29 = 1;
          }
          else if (uVar34 == ((ulong)local_1d8 & 0xffffffff)) {
            lVar29 = 2;
          }
          else if (uVar34 == (ulong)local_1d8 >> 0x20) {
            lVar29 = 3;
          }
          else if (uVar34 == local_1d0) {
            lVar29 = 4;
          }
          else if (uVar34 == local_1cc) {
            lVar29 = 5;
          }
          else if (uVar34 == local_1c8) {
            lVar29 = 6;
          }
          else {
            if (uVar34 != local_1c4) goto LAB_01d910a0;
            lVar29 = 7;
          }
          local_b0 = 0x1f;
          lVar6 = *(long *)(param_1 + 0xa8) + lVar29 * 0x20;
          local_b8 = (undefined1 *)(lVar6 + 0x2a);
          *(undefined1 *)(lVar6 + 0x48) = 0;
          local_1b0 = 0xb;
          local_1ac = 0;
          local_180 = 0x40;
          local_13d = 0;
          local_198 = 0xffffffff;
          local_17c[0] = 0;
          local_128 = 0x40;
          local_e5 = 0;
          local_124[0] = 0;
          uStack_d0 = 0;
          local_1a8 = 0xffffffff;
          uStack_1a0 = 0xffffffff00000000;
          local_e0 = 0;
          uStack_d8 = 0;
          local_d2 = 0;
          local_1c0 = puVar2;
          pcStack_1b8 = (char *)&local_e0;
          local_190 = puVar25;
          puStack_188 = local_17c;
          local_138 = puVar25;
          puStack_130 = local_124;
          local_c0 = puVar11 + 0x10;
          memset(&local_e0,0,(ulong)(puVar7 + (-0xe1 - (long)&local_1c0)) & 0xfffffffffffffffc | 2);
          local_a8[0] = 10;
          local_a0 = *(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0xc158;
          memset(&local_e0,0,(ulong)(puVar7 + ~(ulong)&local_e0) & 0xfffffffffffffffc | 2);
          local_1ac = 0;
          local_198 = 0xffffffff;
          local_1a8 = 0xffffffff;
          uStack_1a0 = 0xffffffff00000000;
          local_17c[0] = 0;
          local_124[0] = 0;
          local_6c = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = (char *)0x0;
          local_88 = 0;
          local_70 = 1;
          local_98 = puVar3;
          FUN_02906b00(&local_98,&local_1c0,local_a8);
          uVar14 = (**(code **)(local_1c0 + 0x18))(&local_1c0);
          (**(code **)(local_c0 + 0x18))(&local_c0);
          local_a8[0] = FUN_038d4f60(&local_98,local_b8,local_b0,uVar14,0xffffffff);
          if (local_a8[0] == 0) {
            *(bool *)(*(long *)(param_1 + 0xa8) + lVar29 * 0x20 + 0x49) =
                 *(long *)(*(long *)(lVar31 + 0x10) + *(long *)(lVar31 + 8) + 0x2eab0) != 0;
            memcpy(local_248,(void *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8)),0x37ad0);
            local_248 = local_248 + 0xdeb4;
            bVar10 = true;
            lVar29 = (long)local_248 - (long)puVar35;
            if (local_248 <= puVar35) {
              lVar29 = (long)puVar35 - (long)local_248;
            }
            *(long *)(*(long *)(param_1 + 0xa0) + 0x18) = lVar29;
            *(short *)(puVar35 + 4) = (short)puVar35[4] + (short)(1 << (ulong)((uint)uVar34 & 0x1f))
            ;
            plVar33 = (long *)PTR_DAT_04bb46b0;
          }
          else {
            bVar10 = false;
            *local_b8 = 0;
            plVar33 = (long *)PTR_DAT_04bb46b0;
          }
        }
        if ((((uVar16 & 1) != 0) && (*(long *)(lVar31 + 0x28) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar31 + 0x28) + 8), puVar21 != (undefined8 *)0x0))
        {
          (**(code **)*puVar21)();
        }
        if ((((uVar15 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar21 != (undefined8 *)0x0))
        {
          (**(code **)*puVar21)();
        }
        puVar30 = PTR_DAT_04bb2030;
        if (!bVar10) goto LAB_01d914dc;
      }
      uVar34 = uVar34 + 1;
      plVar32 = plVar32 + 9;
    } while (uVar34 != 8);
    if ((short)puVar35[4] != 0) {
      FUN_0265eba0(&local_1c0);
      puVar11 = PTR_DAT_04bc2a20;
      puVar2 = PTR_DAT_04bc27f0;
      uVar34 = 0;
      lVar22 = *(long *)(lVar20 + 8);
      lVar31 = *(long *)(lVar20 + 0x10);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x29) = 0;
      pbVar24 = (byte *)(lVar31 + lVar22 + 0x10);
      puVar25 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar18 = *(uint *)(local_17c +
                          ((-(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2) - 0x44));
        if (uVar18 != 0xffffffff) {
          pbVar8 = pbVar24 + (ulong)uVar18 * 0x13230;
          if (9 < uVar18) {
            pbVar8 = pbVar24;
          }
          uVar15 = (ulong)*pbVar8;
          if (((uVar15 < 0x23) && (pbVar8[1] <= (byte)puVar2[uVar15])) &&
             ((*(uint *)(puVar11 + uVar15 * 4) >> (ulong)(pbVar8[1] & 0x1f) & 1) != 0)) {
            local_90 = "MoveInCompletion";
            local_98 = puVar25;
            iVar13 = FUN_02749340(pbVar8 + 0x1267c,&local_98);
            if (iVar13 != 0) {
              bVar17 = *(byte *)(*(long *)(param_1 + 0xa8) + 0x29);
              *(byte *)(*(long *)(param_1 + 0xa8) + 0x29) = bVar17 + 1;
              local_88 = CONCAT44(local_88._4_4_,10);
              pcVar4 = (char *)(*(long *)(param_1 + 0xa8) + 0x12a);
              local_90 = pcVar4 + (ulong)bVar17 * 10;
              if (9 < bVar17) {
                local_90 = pcVar4;
              }
              local_90[9] = '\0';
              local_98 = puVar30 + 0x10;
              FUN_038d1270(&local_98,"-----");
              if ((ulong)*pbVar8 < 0x23) {
                FUN_038d1270(&local_98,"%s%02d",
                             *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar8 * 8 + 0xb0),pbVar8[1]
                            );
              }
            }
          }
        }
        uVar18 = (int)uVar34 + 1;
        uVar34 = (ulong)uVar18;
      } while (uVar18 != 10);
      psVar5 = (short *)(param_1 + 0x22c);
      *(undefined8 *)psVar5 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      psVar9 = psVar5;
      if (*(short *)(&LAB_00578480 + *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8)) != 0) {
        psVar9 = (short *)(&LAB_00578480 + *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
      }
      uVar14 = *(undefined8 *)psVar9;
      *(short *)(*(long *)(param_1 + 0xa8) + 0x18e) = (short)uVar14;
      *(char *)(*(long *)(param_1 + 0xa8) + 400) = (char)((ulong)uVar14 >> 0x10);
      *(char *)(*(long *)(param_1 + 0xa8) + 0x191) = (char)((ulong)uVar14 >> 0x18);
      *(char *)(*(long *)(param_1 + 0xa8) + 0x192) = (char)((ulong)uVar14 >> 0x20);
      *(char *)(*(long *)(param_1 + 0xa8) + 0x193) = (char)((ulong)uVar14 >> 0x28);
      *(undefined2 *)(*(long *)(param_1 + 0xa8) + 0x194) = *(undefined2 *)(param_1 + 0x22c);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x196) = *(undefined1 *)(param_1 + 0x22e);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x197) = *(undefined1 *)(param_1 + 0x22f);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x198) = *(undefined1 *)(param_1 + 0x230);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x199) = *(undefined1 *)(param_1 + 0x231);
      bVar17 = *(byte *)(param_1 + 0x230);
      if (bVar17 < 5) {
        uVar12 = 5;
      }
      else if (bVar17 < 8) {
        uVar12 = 0;
      }
      else if (bVar17 < 0xc) {
        uVar12 = 1;
      }
      else if (bVar17 < 0x10) {
        uVar12 = 2;
      }
      else {
        uVar12 = 3;
        if (0x12 < bVar17) {
          uVar12 = 4;
        }
      }
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x19a) = uVar12;
      uVar18 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
      if (1 < uVar18) {
        uVar18 = 0;
      }
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,uVar18);
      *(char *)(*(long *)(param_1 + 0xa8) + 0x19b) = (char)uVar18;
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x19c) = 0;
      lVar22 = *(long *)PTR_DAT_04bb39b0;
      if (lVar22 == 0) {
        bVar17 = *PTR_DAT_04bb32e0;
LAB_01d916c8:
        if (bVar17 < 8) goto LAB_01d9173c;
LAB_01d916d0:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar22 = **(long **)PTR_DAT_04bb27d0;
          bVar17 = *(byte *)(lVar22 + 0x473);
          pbVar24 = PTR_DAT_04bb5038;
          if ((long)(char)bVar17 != 0xffffffffffffffff) {
            puVar27 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
            if (7 < bVar17) {
              puVar27 = (uint *)(lVar22 + 0x48);
            }
            if ((*puVar27 & 8) != 0) {
              pbVar24 = (byte *)(lVar22 + 0x471);
            }
          }
          bVar17 = *pbVar24;
          if (bVar17 < 8) goto LAB_01d9173c;
        }
        bVar17 = *PTR_DAT_04bb5038;
        if (bVar17 < 8) goto LAB_01d9173c;
LAB_01d9177c:
        puVar25 = (undefined *)0x0;
      }
      else {
        pbVar24 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar22 + 0x15c) != 0) {
          pbVar24 = (byte *)(lVar22 + 0x158);
        }
        bVar17 = *pbVar24;
        if (7 < bVar17) {
          if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            bVar17 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01d916c8;
          }
          goto LAB_01d916d0;
        }
LAB_01d9173c:
        local_c0 = (undefined *)CONCAT71(local_c0._1_7_,bVar17);
        uVar34 = FUN_007b39a4(&local_1c0,&local_c0);
        if ((uVar34 & 1) == 0) goto LAB_01d9177c;
        local_1e0 = (undefined *)((ulong)local_1e0 & 0xffffffffffffff00);
        iVar13 = nn::account::IsNetworkServiceAccountAvailable
                           ((bool *)&local_1e0,(UserHandle *)&local_1c0);
        if (((iVar13 != 0) || ((char)local_1e0 == '\0')) ||
           (iVar13 = nn::account::GetNetworkServiceAccountId
                               ((NetworkServiceAccountId *)&local_98,(UserHandle *)&local_1c0),
           iVar13 != 0)) goto LAB_01d9177c;
        puVar25 = local_98;
      }
      *(undefined **)(*(long *)(param_1 + 0xa8) + 0x1a0) = puVar25;
      uVar18 = *(uint *)(&LAB_00575b94 + *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
      if (3 < uVar18) {
        uVar18 = 0;
      }
      *(char *)(*(long *)(param_1 + 0xa8) + 0x1a8) = (char)uVar18;
      uVar34 = (ulong)(uint)(**(int **)PTR_DAT_04bb3448 << 1);
      if (0x1f < (uint)(**(int **)PTR_DAT_04bb3448 << 1)) {
        uVar34 = 0;
      }
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,(uint)(byte)(&DAT_04058440)[uVar34]);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x1a9) = (&DAT_04058440)[uVar34];
      puVar21 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x1aa);
      local_1c0 = (undefined *)nn::oe::GetDesiredLanguage();
      lVar22 = 0;
      do {
        if (local_17c[lVar22 + -0x44] == '\0') goto LAB_01d9184c;
        if (local_17c[lVar22 + -0x43] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_01d9184c;
        }
        if (local_17c[lVar22 + -0x42] == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_01d9184c;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_01d9184c:
      uVar18 = (uint)lVar22;
      *puVar21 = 0;
      if (6 < (int)uVar18) {
        uVar18 = 7;
      }
      memcpy(puVar21,&local_1c0,(ulong)uVar18);
      memset((void *)(*(long *)(param_1 + 0xa8) + 0x1b2),0,0x400);
      puVar25 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1b8 = "IsDisclosedMyDream";
      local_1c0 = puVar25;
      iVar13 = FUN_0273ec70(&LAB_0022ebf0 + *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8),
                            &local_1c0);
      *(bool *)(*(long *)(param_1 + 0xa8) + 0x5b4) = iVar13 != 0;
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x5b5) = 1;
      pcStack_1b8 = "ReputaionMyIsland";
      local_1c0 = puVar25;
      uVar12 = FUN_0273ec70(&LAB_0022ebf0 + *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8),
                            &local_1c0);
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x5b2) = uVar12;
      puVar25 = PTR_DAT_04bc1048;
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x5b3) = 1;
      lVar22 = FUN_01d91f00(*(undefined8 *)puVar25,*(undefined8 *)(param_1 + 0xa8));
      *param_2 = lVar22;
      if (lVar22 == 0) {
        uVar14 = 0;
      }
      else {
        memcpy(puVar35 + 0x20c,(void *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8)),0x5b3c40);
        *(undefined8 *)(puVar35 + 0x15e32a) = *(undefined8 *)psVar5;
        if ((short)puVar35[0x15e32c] == 0) {
          *(undefined8 *)(puVar35 + 0x15e32c) = *(undefined8 *)psVar5;
        }
        uVar18 = (uint)(ushort)puVar35[4] - ((ushort)((ushort)puVar35[4] >> 1) & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        uVar18 = uVar18 + (uVar18 >> 0x10) & 0x3f;
        if (uVar18 != 0) {
          lVar22 = 0;
          do {
            lVar31 = (long)puVar35 + lVar22 + 0x5eb640;
            memset((void *)(lVar31 + -0x8c0),0,0x1180);
            FUN_026d6000((void *)(lVar31 + -0x8c0));
            FUN_026d6000(lVar31 + -0x690);
            FUN_026d6000(lVar31 + -0x460);
            FUN_026d6000(lVar31 + -0x230);
            FUN_026d6000(lVar31);
            FUN_026d6000(lVar31 + 0x230);
            FUN_026d6000(lVar31 + 0x460);
            FUN_026d6000(lVar31 + 0x690);
            lVar22 = lVar22 + 0x37ad0;
          } while ((ulong)uVar18 * 0x37ad0 != lVar22);
        }
        uVar15 = *(ulong *)(*(long *)(param_1 + 0xa0) + 0x18);
        uVar34 = uVar15 - 4;
        uVar19 = (uint)uVar34;
        puVar27 = puVar35 + 1;
        uVar18 = (puVar35[2] ^ puVar35[3] << 8) + *puVar27;
        if (3 < uVar19) {
          uVar16 = 0;
          do {
            uVar18 = (*(int *)((long)puVar27 + uVar16) * 0x16a88000 |
                     (uint)(*(int *)((long)puVar27 + uVar16) * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                     uVar18;
            iVar13 = (int)uVar16;
            uVar16 = (ulong)(iVar13 + 4);
            uVar18 = (uVar18 >> 0x13 | uVar18 << 0xd) * 5 + 0xe6546b64;
          } while (iVar13 + 8U <= uVar19);
        }
        uVar26 = uVar19 & 3;
        if ((uVar34 & 3) != 0) {
          puVar28 = (ushort *)((long)puVar27 + ((uVar34 & 0xffffffff) - (uVar15 & 3)));
          if (uVar26 == 1) {
            uVar26 = (uint)(byte)*puVar28;
          }
          else if (uVar26 == 2) {
            uVar26 = (uint)*puVar28;
          }
          else if (uVar26 == 3) {
            uVar26 = (uint)(byte)puVar28[1] << 0x10 | (uint)*(byte *)((long)puVar28 + 1) << 8 |
                     (uint)(byte)*puVar28;
          }
          else {
            uVar26 = 0;
          }
          uVar18 = (uVar26 * 0x16a88000 | uVar26 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar18;
        }
        uVar14 = 1;
        uVar18 = (uVar18 ^ uVar19 ^ (uVar18 ^ uVar19) >> 0x10) * -0x7a143595;
        uVar18 = (uVar18 ^ uVar18 >> 0xd) * -0x3d4d51cb;
        *puVar35 = uVar18 ^ uVar18 >> 0x10;
      }
      goto LAB_01d914e0;
    }
  }
  else {
    *local_1d8 = 0;
  }
LAB_01d914dc:
  uVar14 = 0;
LAB_01d914e0:
  if ((((local_214 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
     (puVar21 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar21 != (undefined8 *)0x0)) {
    (**(code **)*puVar21)();
  }
  return uVar14;
}

