
void FUN_03c3b210(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  ulong uVar16;
  void *pvVar17;
  int iVar18;
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  long *plVar24;
  byte *pbVar25;
  uint uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  void *pvVar30;
  uint local_1d8;
  uint local_1d4;
  undefined8 *local_1d0;
  undefined *local_1c8;
  char *pcStack_1c0;
  undefined8 local_1b8;
  undefined *puStack_1b0;
  undefined *local_1a8;
  undefined8 *puStack_1a0;
  undefined4 local_198;
  undefined1 local_b5;
  char local_b0;
  undefined *local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70 [4];
  int local_6c [3];
  
  lVar19 = 0;
  plVar21 = param_1 + 4;
  *plVar21 = 0;
  puVar20 = PTR_DAT_04bb2650;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = (undefined *)((long)&local_1b8 + 4);
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar12 = PTR_DAT_04bb21f8;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar4 = PTR_DAT_04bb2818 + 0x10;
  *param_1 = 0;
  param_1[1] = 0;
  plVar27 = *(long **)(*(long *)puVar20 + 0x100);
  bVar11 = true;
  do {
    puVar20 = (&PTR_s_Param_Rumble_04b7f030)[lVar19];
    lVar19 = *(long *)PTR_DAT_04bb2698;
    if (lVar19 == 0) {
      puVar15 = malloc(0x26008);
      if (puVar15 != (undefined8 *)0x0) goto LAB_03c3b368;
LAB_03c3b420:
      local_1d0 = (undefined8 *)0x0;
      local_1d8 = 0;
    }
    else {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar19 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if ((plVar14 == (long *)0x0) ||
         (puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,0x26008,0xfffffffc),
         puVar15 == (undefined8 *)0x0)) goto LAB_03c3b420;
LAB_03c3b368:
      local_1d0 = puVar15 + 1;
      *puVar15 = 0x400;
      lVar19 = 0;
      do {
        lVar13 = lVar19 + 0x260;
        puVar22 = (undefined1 *)((long)puVar15 + lVar19 + 0x1c);
        *puVar22 = 0;
        *(undefined1 **)((long)puVar15 + lVar19 + 0x10) = puVar22;
        *(undefined4 *)((long)puVar15 + lVar19 + 0x18) = 0x80;
        puVar22 = (undefined1 *)((long)puVar15 + lVar19 + 0xb4);
        *puVar22 = 0;
        *(undefined1 **)((long)puVar15 + lVar19 + 0xa8) = puVar22;
        *(long *)((long)puVar15 + lVar19 + 0x140) = (long)puVar15 + lVar19 + 0x14c;
        *(undefined **)((long)puVar15 + lVar19 + 0x138) = puVar2;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x9b) = 0;
        *(undefined **)((long)puVar15 + lVar19 + 8) = puVar2;
        *(undefined4 *)((long)puVar15 + lVar19 + 0xb0) = 0x80;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x133) = 0;
        *(undefined **)((long)puVar15 + lVar19 + 0xa0) = puVar2;
        *(undefined4 *)((long)puVar15 + lVar19 + 0x148) = 0x80;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x1cb) = 0;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x14c) = 0;
        *(long *)((long)puVar15 + lVar19 + 0x1d8) = (long)puVar15 + lVar19 + 0x1e4;
        *(undefined4 *)((long)puVar15 + lVar19 + 0x1e0) = 0x80;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x263) = 0;
        *(undefined1 *)((long)puVar15 + lVar19 + 0x1e4) = 0;
        *(undefined **)((long)puVar15 + lVar19 + 0x1d0) = puVar2;
        lVar19 = lVar13;
      } while (lVar13 != 0x26000);
      local_1d8 = 0x400;
    }
    local_70[0] = '\0';
    local_1c8 = puVar3;
    pcStack_1c0 = puVar20;
    if ((((char)plVar27[0xf] == '\0') ||
        (uVar16 = (**(code **)(*plVar27 + 200))(plVar27,local_70,&local_1c8), (uVar16 & 1) == 0)) ||
       (local_70[0] == '\0')) {
LAB_03c3bc30:
      if (local_1d0 != (undefined8 *)0x0) goto LAB_03c3bc38;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = (long *)0x0;
      local_98 = (long *)0x0;
      local_1c8 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = puVar4;
      if ((char)plVar27[0xf] != '\0') {
        pcStack_1c0 = puVar20;
        local_a0 = (long *)(**(code **)(*plVar27 + 0xd0))(plVar27,&local_a8,&local_1c8);
        if (local_a0 != (long *)0x0) {
          local_98 = plVar27;
        }
      }
      plVar14 = local_a0;
      local_b5 = 0;
      local_b0 = '\0';
      local_1b8 = (undefined *)CONCAT35(local_1b8._5_3_,0x100);
      local_1c8 = puVar12 + 0x10;
      pcStack_1c0 = puVar1;
      if ((char)local_a0[0xf] == '\0') {
        local_1d4 = 0;
      }
      else {
        local_1d4 = 0;
        do {
          uVar16 = (**(code **)(*plVar14 + 0x48))(plVar14,&local_a8);
          if ((uVar16 & 1) == 0) {
LAB_03c3b58c:
            if ((char)plVar14[0xf] != '\0') {
              uVar16 = (**(code **)(*plVar14 + 0x48))(plVar14,&local_a8);
              if ((uVar16 & 1) != 0) {
                uVar16 = (**(code **)(*plVar14 + 0xd8))(plVar14,&local_a8);
                if ((uVar16 & 1) != 0) {
                  local_a0 = (long *)0x0;
                  local_98 = (long *)0x0;
                }
              }
            }
            break;
          }
          local_6c[0] = 0;
          uVar16 = (**(code **)(*plVar14 + 0xe0))(plVar14,local_6c,&local_a8,&local_1c8,1);
          if (((uVar16 & 1) == 0) || (local_6c[0] != 1)) goto LAB_03c3b58c;
          if (local_b0 == '\0') {
            uVar26 = local_1d4;
            if (local_1d8 <= local_1d4) {
              uVar26 = 0;
            }
            (**(code **)(local_1d0[(ulong)uVar26 * 0x13] + 0x10))
                      (local_1d0 + (ulong)uVar26 * 0x13,&local_1c8);
            local_1d4 = local_1d4 + 1;
          }
        } while ((char)plVar14[0xf] != '\0');
      }
      plVar14 = local_98;
      local_a8 = PTR_DAT_04bb2818 + 0x10;
      if (((local_98 != (long *)0x0) && ((char)local_98[0xf] != '\0')) &&
         (uVar16 = (**(code **)(*local_98 + 0x48))(local_98,&local_a8), (uVar16 & 1) != 0)) {
        (**(code **)(*plVar14 + 0xd8))(plVar14,&local_a8);
      }
      if (bVar11) {
        if (local_1d4 == 0) goto LAB_03c3bc30;
        lVar19 = *(long *)PTR_DAT_04bb2698;
        if (lVar19 == 0) {
          pvVar17 = malloc((ulong)(local_1d4 * 0x680));
joined_r0x03c3b708:
          if (pvVar17 != (void *)0x0) {
            param_1[1] = (long)pvVar17;
            *(uint *)((long)param_1 + 0x1c) = local_1d4;
            uVar26 = local_1d4 - 1;
            uVar16 = (ulong)uVar26;
            if (local_1d4 == 0 || uVar26 == 0) {
              uVar16 = (ulong)(uVar26 * 0xd0);
            }
            else {
              if (uVar16 - 1 < 3) {
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                plVar14 = (long *)((long)pvVar17 + 0xd00);
                do {
                  plVar28 = plVar14 + -0xd0;
                  *plVar14 = (long)(plVar14 + 0xd0);
                  lVar19 = lVar19 + -4;
                  *plVar28 = (long)plVar14;
                  plVar29 = plVar14 + -0x1a0;
                  plVar14[0xd0] = (long)(plVar14 + 0x1a0);
                  plVar14 = plVar14 + 0x340;
                  *plVar29 = (long)plVar28;
                } while (-lVar19 != (uVar16 & 0xfffffffc));
                lVar19 = -lVar19;
              }
              if ((uVar26 & 3) != 0) {
                uVar16 = uVar16 & 3;
                plVar14 = (long *)((long)pvVar17 + lVar19 * 0x680);
                do {
                  uVar16 = uVar16 - 1;
                  *plVar14 = (long)(plVar14 + 0xd0);
                  plVar14 = plVar14 + 0xd0;
                } while (uVar16 != 0);
              }
              uVar16 = (ulong)(int)(uVar26 * 0xd0);
            }
            *(undefined8 *)((long)pvVar17 + uVar16 * 8) = 0;
            param_1[2] = (long)pvVar17;
          }
        }
        else {
          lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar19 + 8);
          if (lVar13 != 0) {
            plVar14 = (long *)(lVar13 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 != (long *)0x0) {
            pvVar17 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,(ulong)(local_1d4 * 0x680),8);
            goto joined_r0x03c3b708;
          }
        }
        uVar26 = 0;
        do {
          uVar9 = uVar26;
          if (local_1d8 <= uVar26) {
            uVar9 = 0;
          }
          plVar14 = local_1d0 + (ulong)uVar9 * 0x13;
          if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
            plVar29 = (long *)param_1[1];
            if (plVar29 != (long *)0x0) {
              param_1[1] = *plVar29;
            }
            plVar28 = plVar29 + 6;
            puVar20 = PTR_DAT_04bb2020 + 0x10;
            plVar29[4] = (long)puVar20;
            puVar6 = PTR_DAT_04bb2120;
            plVar29[2] = 0;
            plVar29[3] = 0;
            plVar29[5] = (long)puVar6;
            *plVar29 = (long)&PTR_LAB_04b7f078;
            plVar29[1] = 0;
            memset(plVar28,0,0x5c0);
            local_198 = 0;
            pcStack_1c0 = "RumbleCurveParams";
            puStack_1b0 = &DAT_040ec2af;
            puStack_1a0 = &DAT_0407ebb1;
            local_1c8 = puVar20;
            local_1b8 = puVar20;
            local_1a8 = puVar20;
            FUN_03c3736c(plVar28,&local_1c8,0);
            *(undefined4 *)(plVar29 + 0xad) = 0x80;
            *(undefined1 *)((long)plVar29 + 0x56c) = 0;
            plVar29[0xac] = (long)plVar29 + 0x56c;
            plVar5 = plVar29 + 0xbf;
            *(undefined1 *)((long)plVar29 + 0x5eb) = 0;
            puVar20 = PTR_DAT_04bb2d88 + 0x10;
            plVar29[0xbe] = (long)param_1;
            *(undefined1 *)(plVar29 + 0xcf) = 0;
            plVar29[0xab] = (long)puVar20;
            (**(code **)(*plVar14 + 0x18))(plVar14);
            plVar24 = (long *)plVar14[1];
            if (plVar5 != plVar24) {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              lVar19 = 0;
              do {
                if (*(char *)(plVar14[1] + lVar19) == '\0') {
LAB_03c3ba8c:
                  iVar18 = (int)lVar19;
joined_r0x03c3ba90:
                  if (0x80 < iVar18) {
                    iVar18 = 0x80;
                  }
                  goto LAB_03c3ba98;
                }
                lVar13 = plVar14[1] + lVar19;
                if (*(char *)(lVar13 + 1) == '\0') {
                  lVar19 = lVar19 + 1;
                  goto LAB_03c3ba8c;
                }
                if (*(char *)(lVar13 + 2) == '\0') {
                  iVar18 = (int)lVar19 + 2;
                  goto joined_r0x03c3ba90;
                }
                lVar19 = lVar19 + 3;
              } while (lVar19 != 0x80001);
              iVar18 = 0;
LAB_03c3ba98:
              memcpy(plVar5,plVar24,(long)iVar18);
              *(undefined1 *)((long)plVar5 + (long)iVar18) = 0;
            }
            plVar29[5] = (long)plVar5;
            *(int *)(param_1 + 3) = (int)param_1[3] + 1;
            lVar19 = FUN_038b0320(param_1,*param_1,plVar29);
            *param_1 = lVar19;
            *(undefined8 *)(lVar19 + 0x18) = 1;
          }
          else {
            plVar28 = param_1;
            while( true ) {
              lVar19 = *plVar28;
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x18))(plVar14);
              pbVar25 = (byte *)plVar14[1];
              (**(code **)(*(long *)(lVar19 + 0x20) + 0x18))();
              if (pbVar25 == *(byte **)(lVar19 + 0x28)) break;
              pbVar25 = *(byte **)(lVar19 + 0x28);
              pbVar23 = (byte *)plVar14[1];
              lVar13 = 0x7ffff;
              while( true ) {
                bVar10 = *pbVar23;
                if (bVar10 != *pbVar25) break;
                if (bVar10 == 0) goto LAB_03c3ba00;
                bVar8 = lVar13 == 0;
                pbVar25 = pbVar25 + 1;
                pbVar23 = pbVar23 + 1;
                lVar13 = lVar13 + -1;
                if (bVar8) goto LAB_03c3ba00;
              }
              plVar28 = (long *)(lVar19 + 8);
              if (*pbVar25 <= bVar10) {
                plVar28 = (long *)(lVar19 + 0x10);
              }
            }
LAB_03c3ba00:
            plVar28 = (long *)(lVar19 + 0x30);
            FUN_03c39724(plVar28);
            memset(plVar28,0,0x5c0);
            local_198 = 0;
            local_1c8 = PTR_DAT_04bb2020 + 0x10;
            pcStack_1c0 = "RumbleCurveParams";
            puStack_1a0 = &DAT_0407ebb1;
            puStack_1b0 = &DAT_040ec2af;
            local_1b8 = local_1c8;
            local_1a8 = local_1c8;
            FUN_03c3736c(plVar28,&local_1c8,0);
            *(undefined4 *)(lVar19 + 0x568) = 0x80;
            *(undefined1 *)(lVar19 + 0x5eb) = 0;
            *(undefined1 *)(lVar19 + 0x56c) = 0;
            *(undefined1 **)(lVar19 + 0x560) = (undefined1 *)(lVar19 + 0x56c);
            *(undefined **)(lVar19 + 0x558) = PTR_DAT_04bb2d88 + 0x10;
          }
          pvVar30 = (void *)plVar28[0xa6];
          (**(code **)(*plVar14 + 0x18))(plVar14);
          pvVar17 = (void *)plVar14[1];
          if (pvVar30 != pvVar17) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
            lVar19 = 0;
            do {
              if (*(char *)(plVar14[1] + lVar19) == '\0') goto LAB_03c3bb5c;
              lVar13 = plVar14[1] + lVar19;
              if (*(char *)(lVar13 + 1) == '\0') {
                lVar19 = lVar19 + 1;
                goto LAB_03c3bb5c;
              }
              if (*(char *)(lVar13 + 2) == '\0') {
                lVar19 = lVar19 + 2;
                goto LAB_03c3bb5c;
              }
              lVar19 = lVar19 + 3;
            } while (lVar19 != 0x80001);
            lVar19 = 0;
LAB_03c3bb5c:
            iVar18 = (int)lVar19;
            if ((int)plVar28[0xa7] <= (int)lVar19) {
              iVar18 = (int)plVar28[0xa7] + -1;
            }
            memcpy(pvVar30,pvVar17,(long)iVar18);
            *(undefined1 *)((long)pvVar30 + (long)iVar18) = 0;
          }
          FUN_038b71f0(plVar28 + 6,plVar14);
          lVar19 = *(long *)PTR_DAT_04bb2740;
          piVar7 = (int *)(lVar19 + 0x5aa0);
          if (*piVar7 < *(int *)(lVar19 + 0x5aa4)) {
            *(long **)(*(long *)(lVar19 + 0x5aa8) + (long)*piVar7 * 8) = plVar28;
            *piVar7 = *piVar7 + 1;
          }
          local_b5 = 0;
          local_1b8 = (undefined *)CONCAT35(local_1b8._5_3_,0x100);
          local_1c8 = PTR_DAT_04bb21f8 + 0x10;
          pcStack_1c0 = puVar1;
          uVar16 = (**(code **)(*plVar28 + 0xf0))(plVar28,&local_1c8,1);
          if ((uVar16 & 1) != 0) {
            (**(code **)(*plVar28 + 0x108))(plVar28,&local_1c8);
          }
          uVar26 = uVar26 + 1;
        } while (uVar26 != local_1d4);
        goto LAB_03c3bc30;
      }
      if (local_1d4 == 0) goto LAB_03c3bc30;
      lVar19 = *(long *)PTR_DAT_04bb2698;
      if (lVar19 == 0) {
        plVar14 = malloc((ulong)(local_1d4 * 0x160));
joined_r0x03c3b748:
        if (plVar14 != (long *)0x0) {
          param_1[5] = (long)plVar14;
          *(uint *)((long)param_1 + 0x3c) = local_1d4;
          uVar26 = local_1d4 - 1;
          uVar16 = (ulong)uVar26;
          if (local_1d4 == 0 || uVar26 == 0) {
            uVar16 = (ulong)(uVar26 * 0x2c);
          }
          else {
            if (uVar16 - 1 < 3) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              plVar28 = plVar14;
              do {
                *plVar28 = (long)(plVar28 + 0x2c);
                lVar19 = lVar19 + -4;
                plVar28[0x58] = (long)(plVar28 + 0x84);
                plVar28[0x2c] = (long)(plVar28 + 0x58);
                plVar28[0x84] = (long)(plVar28 + 0xb0);
                plVar28 = plVar28 + 0xb0;
              } while (-lVar19 != (uVar16 & 0xfffffffc));
              lVar19 = -lVar19;
            }
            if ((uVar26 & 3) != 0) {
              uVar16 = uVar16 & 3;
              plVar28 = plVar14 + lVar19 * 0x2c;
              do {
                uVar16 = uVar16 - 1;
                *plVar28 = (long)(plVar28 + 0x2c);
                plVar28 = plVar28 + 0x2c;
              } while (uVar16 != 0);
            }
            uVar16 = (ulong)(int)(uVar26 * 0x2c);
          }
          plVar14[uVar16] = 0;
          param_1[6] = (long)plVar14;
        }
      }
      else {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar19 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 != (long *)0x0) {
          plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,(ulong)(local_1d4 * 0x160),8);
          goto joined_r0x03c3b748;
        }
      }
      uVar26 = 0;
      do {
        uVar9 = uVar26;
        if (local_1d8 <= uVar26) {
          uVar9 = 0;
        }
        plVar14 = local_1d0 + (ulong)uVar9 * 0x13;
        if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
          plVar29 = (long *)param_1[5];
          if (plVar29 != (long *)0x0) {
            param_1[5] = *plVar29;
          }
          plVar29[4] = (long)(PTR_DAT_04bb2020 + 0x10);
          puVar6 = PTR_DAT_04bb2120;
          plVar28 = plVar29 + 6;
          *plVar28 = 0;
          plVar29[2] = 0;
          plVar29[3] = 0;
          plVar29[0x19] = 0;
          plVar29[7] = 0;
          plVar29[8] = 0;
          plVar29[5] = (long)puVar6;
          plVar29[9] = 0;
          plVar29[10] = 0;
          plVar29[0xb] = 0;
          plVar29[0xc] = 0;
          plVar29[0xd] = 0;
          plVar29[0xe] = 0;
          plVar29[0xf] = 0;
          plVar29[0x10] = 0;
          plVar29[0x11] = 0;
          plVar29[0x12] = 0;
          *plVar29 = (long)&PTR_LAB_04b7f050;
          plVar29[1] = 0;
          plVar29[0x13] = 0;
          plVar29[0x14] = 0;
          plVar29[0x15] = 0;
          plVar29[0x16] = 0;
          plVar29[0x17] = 0;
          plVar29[0x18] = 0;
          *(undefined1 *)((long)plVar29 + 0x4c) = 0;
          plVar5 = plVar29 + 0x1b;
          puVar6 = PTR_DAT_04bb2d88 + 0x10;
          *(undefined4 *)(plVar29 + 9) = 0x80;
          *(undefined1 *)(plVar29 + 0x2b) = 0;
          plVar29[7] = (long)puVar6;
          plVar29[8] = (long)plVar29 + 0x4c;
          plVar29[0x1a] = (long)plVar21;
          (**(code **)(*plVar14 + 0x18))(plVar14);
          plVar24 = (long *)plVar14[1];
          if (plVar5 != plVar24) {
            (**(code **)(*plVar14 + 0x18))(plVar14);
            lVar19 = 0;
            do {
              if (*(char *)(plVar14[1] + lVar19) == '\0') {
LAB_03c3bf8c:
                iVar18 = (int)lVar19;
joined_r0x03c3bf90:
                if (0x80 < iVar18) {
                  iVar18 = 0x80;
                }
                goto LAB_03c3bf98;
              }
              lVar13 = plVar14[1] + lVar19;
              if (*(char *)(lVar13 + 1) == '\0') {
                lVar19 = lVar19 + 1;
                goto LAB_03c3bf8c;
              }
              if (*(char *)(lVar13 + 2) == '\0') {
                iVar18 = (int)lVar19 + 2;
                goto joined_r0x03c3bf90;
              }
              lVar19 = lVar19 + 3;
            } while (lVar19 != 0x80001);
            iVar18 = 0;
LAB_03c3bf98:
            memcpy(plVar5,plVar24,(long)iVar18);
            *(undefined1 *)((long)plVar5 + (long)iVar18) = 0;
          }
          plVar29[5] = (long)plVar5;
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
          lVar19 = FUN_038b0320(plVar21,param_1[4],plVar29);
          param_1[4] = lVar19;
          *(undefined8 *)(lVar19 + 0x18) = 1;
        }
        else {
          lVar19 = *plVar21;
          if (lVar19 == 0) {
            plVar28 = (long *)0x0;
          }
          else {
            do {
              (**(code **)(*plVar14 + 0x18))(plVar14);
              (**(code **)(*plVar14 + 0x18))(plVar14);
              pbVar25 = (byte *)plVar14[1];
              (**(code **)(*(long *)(lVar19 + 0x20) + 0x18))((long *)(lVar19 + 0x20));
              if (pbVar25 == *(byte **)(lVar19 + 0x28)) {
LAB_03c3bf30:
                *(undefined8 *)(lVar19 + 0x38) = 0;
                plVar28 = (long *)(lVar19 + 0x30);
                *plVar28 = 0;
                *(undefined8 *)(lVar19 + 0xc0) = 0;
                *(undefined8 *)(lVar19 + 200) = 0;
                *(undefined8 *)(lVar19 + 0xb0) = 0;
                *(undefined8 *)(lVar19 + 0xb8) = 0;
                *(undefined8 *)(lVar19 + 0xa0) = 0;
                *(undefined8 *)(lVar19 + 0xa8) = 0;
                *(undefined8 *)(lVar19 + 0x90) = 0;
                *(undefined8 *)(lVar19 + 0x98) = 0;
                *(undefined8 *)(lVar19 + 0x80) = 0;
                *(undefined8 *)(lVar19 + 0x88) = 0;
                *(undefined8 *)(lVar19 + 0x70) = 0;
                *(undefined8 *)(lVar19 + 0x78) = 0;
                *(undefined8 *)(lVar19 + 0x60) = 0;
                *(undefined8 *)(lVar19 + 0x68) = 0;
                *(undefined8 *)(lVar19 + 0x50) = 0;
                *(undefined8 *)(lVar19 + 0x58) = 0;
                *(undefined8 *)(lVar19 + 0x40) = 0;
                *(undefined8 *)(lVar19 + 0x48) = 0;
                *(undefined4 *)(lVar19 + 0x48) = 0x80;
                *(undefined1 *)(lVar19 + 0x4c) = 0;
                *(undefined **)(lVar19 + 0x38) = PTR_DAT_04bb2d88 + 0x10;
                *(undefined1 **)(lVar19 + 0x40) = (undefined1 *)(lVar19 + 0x4c);
                break;
              }
              pbVar25 = *(byte **)(lVar19 + 0x28);
              pbVar23 = (byte *)plVar14[1];
              lVar13 = 0x7ffff;
              while( true ) {
                bVar10 = *pbVar23;
                if (bVar10 != *pbVar25) break;
                if (bVar10 == 0) goto LAB_03c3bf30;
                bVar8 = lVar13 == 0;
                pbVar25 = pbVar25 + 1;
                pbVar23 = pbVar23 + 1;
                lVar13 = lVar13 + -1;
                if (bVar8) goto LAB_03c3bf30;
              }
              plVar28 = (long *)0x0;
              lVar13 = 8;
              if (*pbVar25 <= bVar10) {
                lVar13 = 0x10;
              }
              lVar19 = *(long *)(lVar19 + lVar13);
            } while (lVar19 != 0);
          }
        }
        pvVar30 = (void *)plVar28[2];
        (**(code **)(*plVar14 + 0x18))(plVar14);
        pvVar17 = (void *)plVar14[1];
        if (pvVar30 != pvVar17) {
          (**(code **)(*plVar14 + 0x18))(plVar14);
          lVar19 = 0;
          do {
            if (*(char *)(plVar14[1] + lVar19) == '\0') goto LAB_03c3bcf8;
            lVar13 = plVar14[1] + lVar19;
            if (*(char *)(lVar13 + 1) == '\0') {
              lVar19 = lVar19 + 1;
              goto LAB_03c3bcf8;
            }
            if (*(char *)(lVar13 + 2) == '\0') {
              lVar19 = lVar19 + 2;
              goto LAB_03c3bcf8;
            }
            lVar19 = lVar19 + 3;
          } while (lVar19 != 0x80001);
          lVar19 = 0;
LAB_03c3bcf8:
          iVar18 = (int)lVar19;
          if ((int)plVar28[3] <= (int)lVar19) {
            iVar18 = (int)plVar28[3] + -1;
          }
          memcpy(pvVar30,pvVar17,(long)iVar18);
          *(undefined1 *)((long)pvVar30 + (long)iVar18) = 0;
        }
        (**(code **)(*plVar14 + 0x18))(plVar14);
        FUN_006e9528(&local_1c8,"%s/%s",puVar20,plVar14[1]);
        lVar19 = FUN_03eba220(&local_1c8,0x20,0,1);
        uVar26 = uVar26 + 1;
        *plVar28 = lVar19;
      } while (uVar26 != local_1d4);
LAB_03c3bc38:
      local_1d0 = local_1d0 + -1;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_1d0);
      }
      else {
        plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_1d0);
        if (plVar14 != (long *)0x0) {
          (**(code **)(*plVar14 + 0x38))(plVar14,local_1d0);
        }
      }
    }
    lVar19 = 1;
    bVar8 = !bVar11;
    bVar11 = false;
    if (bVar8) {
      return;
    }
  } while( true );
}

