
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_023ec1c0(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  ushort *puVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  long *plVar20;
  byte *pbVar21;
  int iVar22;
  int *piVar23;
  uint *puVar24;
  char cVar25;
  long lVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined5 local_cc;
  undefined3 uStack_c7;
  undefined5 local_c4;
  undefined1 uStack_bf;
  undefined2 uStack_be;
  undefined1 local_bc;
  undefined1 local_95;
  byte local_90 [4];
  int local_8c;
  undefined8 local_88;
  float local_80;
  undefined1 local_68 [4];
  undefined4 local_64;
  
  iVar22 = *(int *)(param_1 + 0x178);
  if (iVar22 == 0) {
    if (((float)*(int *)(param_1 + 0x1902) * 0.001 == 0.0) &&
       ((float)*(int *)(param_1 + 0x1908) * 0.001 == 0.0)) {
      lVar18 = *(long *)(param_1 + 0x68);
      *(undefined2 *)(param_1 + 0x1900) = *(undefined2 *)(lVar18 + 0x2b6);
      *(int *)(param_1 + 0x1902) = (int)(*(float *)(lVar18 + 0x278) * 999.99994);
      iVar22 = (int)(*(float *)(lVar18 + 0x27c) * 4.0);
      if (0x7ffe < iVar22) {
        iVar22 = 0x7fff;
      }
      if (iVar22 < -0x7fff) {
        iVar22 = -0x8000;
      }
      *(short *)(param_1 + 0x1906) = (short)iVar22;
      *(int *)(param_1 + 0x1908) = (int)(*(float *)(lVar18 + 0x280) * 999.99994);
    }
    else {
      lVar18 = *(long *)(param_1 + 0x68);
    }
    *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(lVar18 + 0x278);
    *(undefined4 *)(param_1 + 0xb40) = *(undefined4 *)(lVar18 + 0x27c);
    *(undefined4 *)(param_1 + 0xb44) = *(undefined4 *)(lVar18 + 0x280);
    local_88 = *(undefined8 *)(lVar18 + 0x278);
    local_80 = *(float *)(lVar18 + 0x280);
    puVar16 = (undefined8 *)FUN_016e1014(&local_88,0,0);
    puVar12 = PTR_DAT_04bb43c0;
    pcVar8 = (char *)*puVar16;
    local_f8 = *puVar16;
    lVar26 = *(long *)PTR_DAT_04bb43c0;
    uVar15 = FUN_0277d6c4(&local_f8);
    lVar18 = *(long *)puVar12;
    if (lVar18 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
        local_e8 = PTR_DAT_04bc0510 + 0x10;
        local_d8 = 0;
        uStack_d4 = 0;
        local_e0 = pcVar8;
        uVar15 = FUN_0277d6c4(&local_e0);
        fVar29 = 0.0;
        if (*(long *)puVar12 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(&local_f8);
            puVar9 = PTR_DAT_04bbfe90;
            puVar12 = PTR_DAT_04bbfe88;
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar15 < *(uint *)(lVar18 + 0x1d8)) &&
               ((puVar24 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar15 * 8),
                puVar24 != (uint *)0x0 && (uVar15 = *puVar24, uVar15 != 0)))) {
              cVar25 = *PTR_DAT_04bbfe88;
              do {
                if (cVar25 == '\0') {
                  cVar25 = '\x01';
                  *puVar12 = 1;
                  memset(puVar9,0xff,0x1ac);
                  uVar15 = *puVar24;
                }
                else {
                  uVar4 = *(uint *)(puVar9 + 0xf0);
                  if (-1 < (int)uVar4) {
                    if ((float *)((ulong)uVar4 + (long)puVar24) != (float *)0x0) {
                      fVar29 = *(float *)((ulong)uVar4 + (long)puVar24);
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar19 = (uint *)(ulong)uVar15;
                if ((puVar19 == (uint *)0x0) || (puVar24 == puVar19)) break;
                lVar18 = 0xc;
                if (*(char *)((long)puVar24 + (10 - (long)puVar19)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar24 + (lVar18 - (long)puVar19);
                if (lVar18 == 0) break;
                uVar17 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar19));
                *(undefined4 *)(puVar9 + 0xf0) = 0xfffffffe;
                if (uVar17 == 0) break;
                piVar23 = (int *)(lVar18 + 4);
                while (piVar23[-1] != -0x499d99d4) {
                  piVar23 = piVar23 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) goto LAB_023ec4b8;
                }
                iVar22 = 0;
                if (*piVar23 != -1) {
                  iVar22 = *piVar23;
                }
                *(int *)(puVar9 + 0xf0) = iVar22;
                uVar15 = *puVar24;
                if (uVar15 == 0) break;
              } while( true );
            }
          }
        }
LAB_023ec4b8:
        fVar27 = (float)FUN_016e026c(0,&local_88,0,0);
        iVar22 = (int)((fVar29 + fVar27) * 4.0);
        *(float *)(param_1 + 0xb40) = fVar29 + fVar27;
        if (0x7ffe < iVar22) {
          iVar22 = 0x7fff;
        }
        if (iVar22 < -0x7fff) {
          iVar22 = -0x8000;
        }
        *(short *)(param_1 + 0x1906) = (short)iVar22;
        *(int *)(param_1 + 0x1902) = (int)((float)local_88 * 999.99994);
        *(int *)(param_1 + 0x1908) = (int)(local_80 * 999.99994);
      }
    }
    iVar22 = *(int *)(param_1 + 0x178);
  }
  *(undefined1 *)(param_1 + 0xb49) = 0;
  piVar23 = (int *)(param_1 + 0x1902);
  if (iVar22 != 0) {
    piVar23 = (int *)(param_1 + 0x18e5);
  }
  puVar3 = (ushort *)(param_1 + 0x1900);
  if (iVar22 != 0) {
    puVar3 = (ushort *)(param_1 + 0x18ef);
  }
  local_88 = CONCAT44((float)(int)(short)piVar23[1] * 0.25,(float)*piVar23 * 0.001);
  local_80 = (float)*(int *)((long)piVar23 + 6) * 0.001;
  local_8c = (uint)*puVar3 << 0x10;
  FUN_016da530(param_1,&local_88,&local_8c);
  FUN_0231b5b4(param_1,6);
  uVar17 = FUN_023ebc20(*(long *)(param_1 + 0x68) + 0x278);
  puVar12 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar22 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar24 = &DAT_054f08c0;
      if (iVar22 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar24 = &DAT_054f08c0;
    }
  }
  else {
    puVar24 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x1fc);
  }
  if ((uVar17 & 1) == 0) {
    uVar15 = *puVar24 & 0xffffbfff;
  }
  else {
    uVar15 = *puVar24 | 0x4000;
  }
  *puVar24 = uVar15;
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0xe);
  uVar17 = FUN_023ebe70(*(long *)(param_1 + 0x68) + 0x278);
  if (*(long *)puVar12 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar22 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar24 = &DAT_054f08c0;
      if (iVar22 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
      }
    }
    else {
      puVar24 = &DAT_054f08c0;
    }
  }
  else {
    puVar24 = (uint *)(*(long *)puVar12 + 0x1fc);
  }
  puVar9 = PTR_DAT_04bb2020;
  bVar2 = (uVar17 & 1) == 0;
  if (bVar2) {
    *puVar24 = *puVar24 & 0xffffdfff;
  }
  else {
    *puVar24 = *puVar24 | 0x2000;
  }
  local_e8 = puVar9 + 0x10;
  local_e0 = "IsBedWaitRightSideCloudIsland";
  FUN_0274bfe8(param_1 + 0x1ee8,&local_e8,!bVar2);
  puVar14 = PTR_DAT_04bc3a80;
  puVar1 = PTR_DAT_04bb6298;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_e8 = puVar9 + 0x10;
    local_e0 = "TapIndoorSelectCloudIsland";
    iVar22 = FUN_02743000(&local_e8);
    puVar10 = PTR_DAT_04bb27c0;
    if ((iVar22 == 0) && (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) == 0)) {
      lVar18 = *(long *)PTR_DAT_04bb39b0;
      pbVar21 = PTR_DAT_04bb32e0;
      if (lVar18 == 0) {
LAB_023ec8bc:
        if (*pbVar21 < 8) goto LAB_023ec934;
LAB_023ec8c8:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_023ec92c:
          pbVar21 = PTR_DAT_04bb5038;
          goto LAB_023ec934;
        }
        lVar26 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar26 + 0x473);
        pbVar21 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar24 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar24 = (uint *)(lVar26 + 0x48);
          }
          if ((*puVar24 & 8) != 0) {
            pbVar21 = (byte *)(lVar26 + 0x471);
          }
        }
        local_90[0] = *pbVar21;
        if (7 < local_90[0]) goto LAB_023ec92c;
      }
      else {
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x158);
        }
        if (7 < *pbVar21) {
          if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)puVar12 != 0)) {
            pbVar21 = (byte *)(*(long *)puVar12 + 0x11a5);
            goto LAB_023ec8bc;
          }
          goto LAB_023ec8c8;
        }
LAB_023ec934:
        local_90[0] = *pbVar21;
        if (7 < local_90[0]) {
          local_90[0] = 0xff;
        }
      }
      local_d8 = 0x40;
      uStack_d4 = (undefined4)DAT_040ff961;
      uStack_d0 = (undefined4)((ulong)DAT_040ff961 >> 0x20);
      local_cc = (undefined5)DAT_040ff969;
      uStack_c7 = (undefined3)((ulong)DAT_040ff969 >> 0x28);
      local_e0 = (char *)&uStack_d4;
      local_c4 = (undefined5)DAT_040ff971;
      uStack_bf = (undefined1)((ulong)DAT_040ff971 >> 0x28);
      uStack_be = (undefined2)((ulong)DAT_040ff971 >> 0x30);
      local_95 = 0;
      local_bc = 0;
      local_104 = 0;
      local_fc = 0;
      local_e8 = PTR_DAT_04bb2bc0 + 0x10;
      if (lVar18 == 0) {
        bVar5 = *PTR_DAT_04bb32e0;
LAB_023ec9e4:
        uVar15 = (uint)bVar5;
        if (uVar15 < 8) goto LAB_023eca58;
LAB_023ec9ec:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar18 = **(long **)PTR_DAT_04bb27d0;
          bVar5 = *(byte *)(lVar18 + 0x473);
          pbVar21 = PTR_DAT_04bb5038;
          if ((long)(char)bVar5 != 0xffffffffffffffff) {
            puVar24 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
            if (7 < bVar5) {
              puVar24 = (uint *)(lVar18 + 0x48);
            }
            if ((*puVar24 & 8) != 0) {
              pbVar21 = (byte *)(lVar18 + 0x471);
            }
          }
          uVar15 = (uint)*pbVar21;
          if (uVar15 < 8) goto LAB_023eca58;
        }
        uVar15 = (uint)(byte)*PTR_DAT_04bb5038;
        if (uVar15 < 8) goto LAB_023eca58;
LAB_023eca6c:
        puVar24 = (uint *)PTR_DAT_04bb3238;
      }
      else {
        pbVar21 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar18 + 0x15c) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x158);
        }
        uVar15 = (uint)*pbVar21;
        if (7 < *pbVar21) {
          if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)puVar12 != 0)) {
            bVar5 = *(byte *)(*(long *)puVar12 + 0x11a5);
            goto LAB_023ec9e4;
          }
          goto LAB_023ec9ec;
        }
LAB_023eca58:
        if (*(long *)puVar12 == 0) goto LAB_023eca6c;
        puVar24 = (uint *)(*(long *)puVar12 + (ulong)uVar15 * 4 + 0xde8);
      }
      lVar18 = *(long *)PTR_DAT_04bb27c0;
      if (lVar18 == 0) {
        return;
      }
      uVar15 = *puVar24;
      if ((((uVar15 == 0) ||
           (lVar26 = *(long *)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                              ((ulong)(uVar15 >> 0x11) & 0x7ff8)), lVar26 == 0)) ||
          ((*(uint *)(lVar26 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar26 + 0x230) != uVar15)) {
        lVar26 = 0;
      }
      if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
        plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar18 = *(long *)puVar10;
        iVar22 = (**(code **)(*plVar20 + 0x60))();
        if (iVar22 < 0x11) {
          uVar15 = 1;
        }
        else {
          if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_023ecb18;
          uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_023ecb18:
        uVar15 = 0;
      }
      if (lVar26 == 0) {
        return;
      }
      uVar15 = uVar15 ^ 1;
      if (*(int *)(lVar26 + 0x150) != 1) {
        uVar15 = 1;
      }
      if (uVar15 != 0) {
        return;
      }
      local_f0 = *(undefined4 *)(*(long *)(lVar26 + 0x68) + 0x280);
      local_f8 = *(undefined8 *)(*(long *)(lVar26 + 0x68) + 0x278);
      local_68[0] = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
        uVar28 = 0xc3fa0000;
      }
      else {
        sVar6 = *(short *)puVar1;
        if (sVar6 == -1) {
          local_64 = 7;
        }
        else {
          puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
          if (0xff < (uint)(int)sVar6) {
            puVar24 = (uint *)PTR_DAT_04bc39f8;
          }
          local_64 = 7;
          if ((*puVar24 & 2) != 0) {
            local_64 = 5;
          }
        }
        uVar28 = FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),&local_f8,&local_64,1,
                              local_68);
      }
      local_f8 = CONCAT44(uVar28,(undefined4)local_f8);
      FUN_0253c84c(local_90,&local_e8,&local_f8,&local_104,0);
      goto LAB_023ecc0c;
    }
  }
  puVar13 = PTR_DAT_04bc39f8;
  puVar10 = PTR_DAT_04bb27d0;
  lVar18 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar18 == 0) || (*(long *)(lVar18 + 0x28) == 0)) ||
     ((*(int *)(lVar18 + 0x80) != 1 || (sVar6 = *(short *)puVar1, sVar6 == -1)))) goto LAB_023ecc0c;
  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,3);
  puVar24 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
  if (0xff < (uint)(int)sVar6) {
    puVar24 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar24 >> 3 & 1) == 0) goto LAB_023ecc0c;
  local_e8 = puVar9 + 0x10;
  local_e0 = "TapDreamFirstTalkDone";
  iVar22 = FUN_02743000(&local_e8);
  puVar11 = PTR_DAT_04bb27c0;
  if (iVar22 != 0) goto LAB_023ecc0c;
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_023ece38;
LAB_023ece9c:
    local_90[0] = *pbVar21;
    if (7 < local_90[0]) {
      local_90[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar18 + 0x158);
    }
    if ((*pbVar21 < 8) ||
       (((*(int *)(lVar18 + 0x15c) != 0 && (*(long *)puVar12 != 0)) &&
        (pbVar21 = (byte *)(*(long *)puVar12 + 0x11a5), *pbVar21 < 8)))) goto LAB_023ece9c;
LAB_023ece38:
    plVar20 = *(long **)puVar10;
    if (plVar20 == (long *)0x0) {
LAB_023ece94:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_023ece9c;
    }
    lVar26 = *plVar20;
    bVar5 = *(byte *)(lVar26 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar24 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar24 = (uint *)(lVar26 + 0x48);
      }
      if ((*puVar24 & 8) != 0) {
        pbVar21 = (byte *)(lVar26 + 0x471);
      }
    }
    local_90[0] = *pbVar21;
    if (7 < local_90[0]) goto LAB_023ece94;
  }
  local_d8 = 0x40;
  uStack_d4 = (undefined4)DAT_040ea853;
  uStack_d0 = (undefined4)((ulong)DAT_040ea853 >> 0x20);
  local_cc = (undefined5)DAT_040ea85b;
  local_e0 = (char *)&uStack_d4;
  uStack_c7 = DAT_040ea85b._5_3_;
  local_c4 = _UNK_040ea863;
  local_95 = 0;
  uStack_bf = 0;
  local_104 = 0;
  local_fc = 0;
  local_e8 = PTR_DAT_04bb2bc0 + 0x10;
  if (lVar18 == 0) {
    bVar5 = *PTR_DAT_04bb32e0;
LAB_023ecf3c:
    uVar15 = (uint)bVar5;
    if (uVar15 < 8) goto LAB_023ecfa8;
LAB_023ecf44:
    plVar20 = *(long **)puVar10;
    if (plVar20 != (long *)0x0) {
      lVar18 = *plVar20;
      bVar5 = *(byte *)(lVar18 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar24 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar24 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar24 & 8) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x471);
        }
      }
      uVar15 = (uint)*pbVar21;
      if (uVar15 < 8) goto LAB_023ecfa8;
    }
    uVar15 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar15 < 8) goto LAB_023ecfa8;
LAB_023ecfbc:
    puVar24 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    pbVar21 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar18 + 0x158);
    }
    uVar15 = (uint)*pbVar21;
    if (7 < *pbVar21) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)puVar12 != 0)) {
        bVar5 = *(byte *)(*(long *)puVar12 + 0x11a5);
        goto LAB_023ecf3c;
      }
      goto LAB_023ecf44;
    }
LAB_023ecfa8:
    if (*(long *)puVar12 == 0) goto LAB_023ecfbc;
    puVar24 = (uint *)(*(long *)puVar12 + (ulong)uVar15 * 4 + 0xde8);
  }
  lVar18 = *(long *)PTR_DAT_04bb27c0;
  if (lVar18 == 0) {
    return;
  }
  uVar15 = *puVar24;
  if (((uVar15 == 0) ||
      (lVar26 = *(long *)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                         ((ulong)(uVar15 >> 0x11) & 0x7ff8)), lVar26 == 0)) ||
     (((*(uint *)(lVar26 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar26 + 0x230) != uVar15)))) {
    lVar26 = 0;
  }
  if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
    plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar18 = *(long *)puVar11;
    iVar22 = (**(code **)(*plVar20 + 0x60))();
    if (iVar22 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_023ed068;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar18 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_023ed068:
    uVar15 = 0;
  }
  if (lVar26 == 0) {
    return;
  }
  uVar15 = uVar15 ^ 1;
  if (*(int *)(lVar26 + 0x150) != 1) {
    uVar15 = 1;
  }
  if (uVar15 != 0) {
    return;
  }
  local_f0 = *(undefined4 *)(*(long *)(lVar26 + 0x68) + 0x280);
  local_f8 = *(undefined8 *)(*(long *)(lVar26 + 0x68) + 0x278);
  local_68[0] = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
    uVar28 = 0xc3fa0000;
  }
  else {
    uVar7 = *(ushort *)puVar1;
    if ((long)(short)uVar7 == 0xffffffffffffffff) {
      local_64 = 7;
    }
    else {
      puVar24 = (uint *)(puVar13 + ((long)(short)uVar7 & 0xffffffffU) * 8);
      if (0xff < uVar7) {
        puVar24 = (uint *)puVar13;
      }
      local_64 = 7;
      if ((*puVar24 & 2) != 0) {
        local_64 = 5;
      }
    }
    uVar28 = FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),&local_f8,&local_64,1,local_68
                         );
  }
  local_f8 = CONCAT44(uVar28,(undefined4)local_f8);
  FUN_0253c6a8(local_90,&local_e8,&local_f8,&local_104);
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x260) = 1;
LAB_023ecc0c:
  if (*(int *)(puVar14 + 0x38) == -0x7a57de51) {
    local_e8 = puVar9 + 0x10;
    local_e0 = "TapIndoorSelectCloudIsland";
    iVar22 = FUN_02743000(&local_e8);
    if ((iVar22 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
      local_f8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
      local_f0 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
      uVar28 = FUN_0231eef4(param_1,&local_f8,0);
      local_e8 = puVar9 + 0x10;
      local_f8 = CONCAT44(uVar28,(undefined4)local_f8);
      local_104 = 0;
      local_fc = 0;
      local_e0 = &DAT_0406881e;
      FUN_0253c84c(param_1 + 0x1ee8,&local_e8,&local_f8,&local_104,0);
    }
  }
  sVar6 = *(short *)puVar1;
  if (sVar6 != -1) {
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8;
    if (0xff < (uint)(int)sVar6) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      local_f8 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
      local_f0 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
      uVar28 = FUN_0231eef4(param_1,&local_f8,0);
      iVar22 = *(int *)(param_1 + 0x178);
      local_f8 = CONCAT44(uVar28,(undefined4)local_f8);
      if (iVar22 == 0) {
        lVar18 = param_1 + 0x1ee8;
        puVar1 = puVar9 + 0x10;
        local_e0 = "IsNeedEmitCloudIslandStartEffect";
        local_e8 = puVar1;
        iVar22 = FUN_02753180(lVar18,&local_e8);
        if (iVar22 != 0) {
          local_104 = 0;
          local_fc = 0;
          local_e0 = &DAT_040781c6;
          local_e8 = puVar1;
          FUN_0253c6a8(lVar18,&local_e8,&local_f8,&local_104);
          local_e0 = "IsNeedEmitCloudIslandStartEffect";
          local_e8 = puVar1;
          FUN_027533a8(lVar18,&local_e8,0);
          *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x260) = 1;
          return;
        }
        iVar22 = *(int *)(param_1 + 0x178);
      }
      if (((iVar22 == 1) && (*(byte *)(param_1 + 0x1ee8) < 8)) &&
         ((*(uint *)(*(long *)puVar12 + 0x23c0) >> (ulong)(*(byte *)(param_1 + 0x1ee8) & 0x1f) & 1)
          != 0)) {
        local_e8 = puVar9 + 0x10;
        local_e0 = &DAT_0409ce5c;
        local_104 = 0;
        local_fc = 0;
        FUN_0253c6a8((byte *)(param_1 + 0x1ee8),&local_e8,&local_f8,&local_104);
        bVar5 = *(byte *)(param_1 + 0x1ee8);
        if (bVar5 < 8) {
          *(uint *)(*(long *)puVar12 + 0x23c0) =
               *(uint *)(*(long *)puVar12 + 0x23c0) & (1 << (ulong)(bVar5 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
  }
  return;
}

