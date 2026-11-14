
byte FUN_01b60120(undefined8 param_1,short param_2,ulong param_3,uint *param_4,PosixTime *param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  PosixTime PVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  undefined2 *puVar13;
  short *psVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ushort uVar18;
  undefined2 uVar19;
  uint *puVar20;
  long lVar21;
  uint *puVar22;
  char cVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  int *piVar27;
  short local_b8 [5];
  undefined6 uStack_ae;
  undefined1 local_a8;
  byte local_a7;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  PosixTime local_90;
  undefined1 uStack_8f;
  short sStack_8e;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined6 uStack_86;
  undefined1 local_80;
  byte bStack_7f;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined8 local_70;
  char local_64 [4];
  
  if (param_4 != (uint *)0x0) {
    uVar11 = FUN_01b68870(param_4,param_5,param_6 & 1);
    puVar2 = PTR_DAT_04bb4f78;
    if ((uVar11 & 1) != 0) {
      puVar22 = (uint *)(ulong)*param_4;
      local_a0 = 0;
      uStack_9c = 0;
      puVar20 = (uint *)((long)param_4 - (long)puVar22);
      if (puVar22 == (uint *)0x0 || param_4 == puVar22) {
        local_98 = 0;
LAB_01b60194:
        uVar24 = 0;
      }
      else {
        if (((*puVar20 == 0) || (uVar24 = puVar20[1], uVar24 == 0)) ||
           ((ulong)(ushort)puVar20[2] == 0)) {
LAB_01b602f8:
          uVar25 = *puVar20;
          uStack_9c = 0;
          if (uVar25 != 0) {
LAB_01b60300:
            uVar24 = puVar20[1];
            if ((uVar24 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar12 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar12 = 0x1c;
              }
              lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar12 != 0) {
                uVar4 = 0;
                if ((ulong)uVar24 != 0) {
                  uVar4 = (uint)((ulong)((long)param_4 - lVar12) / (ulong)uVar24);
                }
                if (uVar25 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if (uVar4 < *(uint *)PTR_DAT_04bc0620) {
                  uStack_9c = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar4 * 2);
                  if (uStack_9c < 0x12) goto LAB_01b6036c;
                }
              }
            }
            uStack_9c = 0;
          }
        }
        else {
          lVar12 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
          if (lVar12 == 0) goto LAB_01b602f8;
          uVar25 = 0;
          if ((ulong)uVar24 != 0) {
            uVar25 = (uint)((ulong)((long)param_4 - lVar12) / (ulong)uVar24);
          }
          if (*puVar20 <= uVar25) {
            uVar25 = 0xffffffff;
          }
          if (uVar25 < *(uint *)PTR_DAT_04bc0618) {
            uVar24 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar25 * 2);
            if (0x11 < uVar24) goto LAB_01b602f8;
          }
          else {
            uVar24 = 0;
          }
          uVar25 = *puVar20;
          local_a0 = uVar24;
          if (uVar25 != 0) goto LAB_01b60300;
          uStack_9c = 0;
        }
LAB_01b6036c:
        local_98 = 0;
        if (*puVar20 != 0) {
          uVar24 = puVar20[1];
          if ((uVar24 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar12 != 0) {
              uVar25 = 0;
              if ((ulong)uVar24 != 0) {
                uVar25 = (uint)((ulong)((long)param_4 - lVar12) / (ulong)uVar24);
              }
              if (*puVar20 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < *(uint *)PTR_DAT_04bc0628) &&
                 (local_98 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar25 * 2),
                 local_98 < 0x12)) goto LAB_01b603e4;
            }
          }
          local_98 = 0;
        }
LAB_01b603e4:
        uVar24 = 0;
        if (*puVar20 != 0) {
          uVar24 = puVar20[1];
          if ((uVar24 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar12 != 0) {
              uVar25 = 0;
              if ((ulong)uVar24 != 0) {
                uVar25 = (uint)((ulong)((long)param_4 - lVar12) / (ulong)uVar24);
              }
              if (*puVar20 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < *(uint *)PTR_DAT_04bc0630) &&
                 (uVar24 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar25 * 2),
                 uVar24 < 0x12)) goto LAB_01b60198;
            }
          }
          goto LAB_01b60194;
        }
      }
LAB_01b60198:
      _local_98 = CONCAT44(uVar24,local_98);
      local_90 = SUB41(local_a0,0);
      uStack_8f = (undefined1)(local_a0 >> 8);
      if ((param_3 & 1) == 0) {
        if ((((((local_a0 == 6) || (local_a0 == 0)) && ((uStack_9c == 6 || (uStack_9c == 0)))) &&
             ((local_98 == 6 || (local_98 == 0)))) && ((uVar24 == 6 || (uVar24 == 0)))) &&
           ((((local_a0 == 6 || (uStack_9c == 6)) || (local_98 == 6)) || (uVar24 == 6)))) {
          local_b8[0] = 6;
          if (local_a0 == 6) goto LAB_01b604f0;
          local_b8[0] = 6;
          uVar25 = uStack_9c;
          if (uStack_9c == 8) {
            uVar25 = 1;
          }
          local_90 = SUB41(uVar25,0);
          uStack_8f = (undefined1)(uVar25 >> 8);
          if (uVar25 == 6) goto LAB_01b60518;
          uVar25 = local_98;
          if (local_98 == 8) {
            uVar25 = 1;
          }
          local_90 = SUB41(uVar25,0);
          uStack_8f = (undefined1)(uVar25 >> 8);
          local_b8[0] = 6;
          if (uVar25 != 6) {
            local_b8[0] = 6;
            if (uVar24 == 8) {
              uVar24 = 1;
            }
            local_90 = SUB41(uVar24,0);
            uStack_8f = (undefined1)(uVar24 >> 8);
            goto LAB_01b60570;
          }
LAB_01b60558:
          uVar24 = 2;
          goto LAB_01b60584;
        }
      }
      else if (((((local_a0 == 5) || (local_a0 == 0)) && ((uStack_9c == 5 || (uStack_9c == 0)))) &&
               (((local_98 == 5 || (local_98 == 0)) && ((uVar24 == 5 || (uVar24 == 0)))))) &&
              ((((local_a0 == 5 || (uStack_9c == 5)) || (local_98 == 5)) || (uVar24 == 5)))) {
        local_b8[0] = 5;
        if (local_a0 == 5) {
LAB_01b604f0:
          uVar24 = 0;
        }
        else {
          local_b8[0] = 5;
          uVar25 = uStack_9c;
          if (uStack_9c == 8) {
            uVar25 = 1;
          }
          local_90 = SUB41(uVar25,0);
          uStack_8f = (undefined1)(uVar25 >> 8);
          if (uVar25 == 5) {
LAB_01b60518:
            uVar24 = 1;
          }
          else {
            local_b8[0] = 5;
            uVar25 = local_98;
            if (local_98 == 8) {
              uVar25 = 1;
            }
            local_90 = SUB41(uVar25,0);
            uStack_8f = (undefined1)(uVar25 >> 8);
            if (uVar25 == 5) goto LAB_01b60558;
            local_b8[0] = 5;
            if (uVar24 == 8) {
              uVar24 = 1;
            }
            local_90 = SUB41(uVar24,0);
            uStack_8f = (undefined1)(uVar24 >> 8);
LAB_01b60570:
            uVar24 = 3;
            if (CONCAT11(uStack_8f,local_90) != local_b8[0]) {
              uVar24 = 0xffffffff;
            }
          }
        }
LAB_01b60584:
        sStack_8e = 0;
        local_b8[1] = 0;
        if (((puVar22 == (uint *)0x0 || param_4 == puVar22) || (*puVar20 == 0)) ||
           ((uVar25 = puVar20[1], uVar25 == 0 || ((ulong)(ushort)puVar20[2] == 0)))) {
LAB_01b605f8:
          uVar18 = 0;
        }
        else {
          lVar12 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
          uVar18 = 0;
          if (lVar12 != 0) {
            uVar4 = 0;
            if ((ulong)uVar25 != 0) {
              uVar4 = (uint)((ulong)((long)param_4 - lVar12) / (ulong)uVar25);
            }
            if (*puVar20 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc0638 <= uVar4) ||
               (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar4 * 2),
               4 < uVar18)) goto LAB_01b605f8;
          }
        }
        bVar10 = uVar18 != 3;
        if ((uVar18 == 3) || ((param_6 & 1) != 0)) goto LAB_01b607ac;
        if (param_5 == (PosixTime *)0x0) {
          if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
             (lVar12 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                   0x30))(), lVar12 != 0)) {
            uStack_76 = 0;
            uStack_7e = 0;
            local_78 = 0;
            uStack_86 = 0;
            local_80 = 0;
            bStack_7f = 0;
            puVar13 = (undefined2 *)
                      FUN_01b5a5e0(param_4,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650);
            if (puVar13 == (undefined2 *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *puVar13;
            }
            local_90 = SUB21(uVar19,0);
            uStack_8f = (undefined1)((ushort)uVar19 >> 8);
            puVar1 = &LAB_00284e00 + lVar12;
            sStack_8e = 0;
            uStack_8c = 0;
            local_88 = 0;
            if (uVar24 < 0xe) {
              *(short *)(local_64 + (ulong)uVar24 * 2 + -0x2a) = param_2;
            }
            local_b8[4] = (short)puVar1;
            uStack_ae = (undefined6)((ulong)puVar1 >> 0x10);
            local_a8 = 0;
            if (*(long *)(&LAB_00284e28 + lVar12) == 0) {
              local_a7 = 0;
            }
            else {
              puVar17 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar12) + 0x10);
              local_a7 = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_a7 = (**(code **)*puVar17)();
              }
            }
            local_a7 = local_a7 & 1;
            local_b8[0] = -0x7520;
            local_b8[1] = 0x4a3;
            local_b8[2] = 0;
            local_b8[3] = 0;
            FUN_02640280(puVar1,0x28370);
            lVar21 = *(long *)(&LAB_00284e08 + lVar12);
            lVar12 = *(long *)(&LAB_00284e10 + lVar12);
            local_70 = FUN_00a82400(*(undefined8 *)PTR_DAT_04bb32e8);
            uVar16 = FUN_0280f530(lVar12 + lVar21,&local_70,local_64);
            if (local_64[0] != '\0') {
              FUN_0266f010(uVar16,&local_70);
            }
            local_70 = uVar16;
            psVar14 = (short *)FUN_01b5a5e0(param_4,6,0x175969e1,0);
            if ((psVar14 == (short *)0x0) || (*psVar14 == 0)) {
              bVar10 = 0;
            }
            else {
              bVar10 = FUN_01b695b0(&local_70,&local_90,param_4,&local_a0);
            }
            FUN_02640184(local_b8);
            goto LAB_01b607ac;
          }
        }
        else {
          local_90 = *param_5;
          if (7 < (byte)local_90) {
            local_90 = (PosixTime)0xff;
          }
          lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
          puVar9 = PTR_DAT_04bc0648;
          puVar8 = PTR_DAT_04bc0640;
          if (lVar12 != 0) {
            lVar21 = lVar12 + 0x194b0;
            if (*(long *)(lVar12 + 0x194b8) == 0) {
              lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
            }
            if (*param_4 == 0) {
LAB_01b608f0:
              local_b8[0] = 0;
            }
            else {
              cVar23 = *PTR_DAT_04bc0640;
              do {
                if (cVar23 == '\0') {
                  cVar23 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar25 = *(uint *)(puVar9 + 0x1c);
                  if (-1 < (int)uVar25) {
                    if ((short *)((ulong)uVar25 + (long)param_4) == (short *)0x0) goto LAB_01b608f0;
                    local_b8[0] = *(short *)((ulong)uVar25 + (long)param_4);
                    goto LAB_01b608f4;
                  }
                  if (uVar25 != 0xffffffff) goto LAB_01b608f0;
                }
                puVar20 = (uint *)(ulong)*param_4;
                local_b8[0] = 0;
                if ((*param_4 == 0) || (param_4 == puVar20)) goto LAB_01b608f4;
                lVar12 = 0xc;
                if (*(char *)((long)param_4 + (10 - (long)puVar20)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)param_4 + (lVar12 - (long)puVar20);
                if (lVar12 == 0) goto LAB_01b608f0;
                uVar11 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar20));
                *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
                local_b8[0] = 0;
                if (uVar11 == 0) goto LAB_01b608f4;
                piVar27 = (int *)(lVar12 + 4);
                while (piVar27[-1] != 0x54706054) {
                  piVar27 = piVar27 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) {
                    local_b8[0] = 0;
                    goto LAB_01b608f4;
                  }
                }
                iVar3 = 0;
                if (*piVar27 != -1) {
                  iVar3 = *piVar27;
                }
                *(int *)(puVar9 + 0x1c) = iVar3;
              } while (*param_4 != 0);
              local_b8[0] = 0;
            }
LAB_01b608f4:
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            local_b8[4] = 0;
            if (uVar24 < 4) {
              local_b8[(ulong)uVar24 + 1] = param_2;
            }
            lVar12 = *(long *)(lVar21 + 0x2c638);
            if (lVar12 == 0) {
              uVar11 = 0;
            }
            else {
              if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
                uVar11 = 0;
              }
              else {
                uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
                lVar12 = *(long *)(lVar21 + 0x2c638);
                uVar11 = uVar11 & 0xffffffff;
                if (lVar12 == 0) goto LAB_01b60974;
              }
              plVar15 = *(long **)(lVar12 + 0x20);
              if (plVar15 != (long *)0x0) {
                lVar12 = *(long *)(lVar21 + 0x2c618);
                local_90 = SUB81(lVar12,0);
                uStack_8f = (undefined1)((ulong)lVar12 >> 8);
                sStack_8e = (short)((ulong)lVar12 >> 0x10);
                uStack_8c = (undefined4)((ulong)lVar12 >> 0x20);
                local_88 = (undefined2)*(undefined8 *)(lVar21 + 0x2c620);
                uStack_86 = (undefined6)((ulong)*(undefined8 *)(lVar21 + 0x2c620) >> 0x10);
                local_80 = 0x80;
                bStack_7f = 0x25;
                uStack_7e = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_90);
              }
            }
LAB_01b60974:
            lVar5 = *(long *)(lVar21 + 0x2c618);
            lVar6 = *(long *)(lVar21 + 0x2c620);
            PVar7 = *param_5;
            lVar12 = *(long *)PTR_DAT_04bb32e8;
            lVar12 = *(long *)(lVar12 + 0x20) / 1000000000 + *(long *)(lVar12 + 8) +
                     (((*(long *)(lVar12 + 0x10) + (long)*(int *)(lVar12 + 0x38)) -
                      *(long *)(lVar12 + 8)) * 1000000000) / 1000000000;
            local_90 = SUB81(lVar12,0);
            uStack_8f = (undefined1)((ulong)lVar12 >> 8);
            sStack_8e = (short)((ulong)lVar12 >> 0x10);
            uStack_8c = (undefined4)((ulong)lVar12 >> 0x20);
            uVar16 = nn::time::ToCalendarTimeInUtc(&local_90);
            local_90 = SUB81(uVar16,0);
            uStack_8f = (undefined1)((ulong)uVar16 >> 8);
            sStack_8e = (short)((ulong)uVar16 >> 0x10);
            uStack_8c = (undefined4)((ulong)uVar16 >> 0x20);
            uVar16 = FUN_02811460(lVar6 + lVar5,&local_90,&local_70);
            if (((char)local_70 != '\0') && ((byte)PVar7 < 8)) {
              local_90 = PVar7;
              FUN_02583354(*(undefined8 *)puVar2,&local_90,1);
              FUN_01b675a0();
            }
            local_70 = uVar16;
            if (*param_4 != 0) {
              cVar23 = *puVar8;
              do {
                if (cVar23 == '\0') {
                  cVar23 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar24 = *(uint *)(puVar9 + 0x18);
                  if (-1 < (int)uVar24) {
                    if (((short *)((ulong)uVar24 + (long)param_4) != (short *)0x0) &&
                       (*(short *)((ulong)uVar24 + (long)param_4) != 0)) {
                      local_78 = 0;
                      uStack_76 = 0;
                      uStack_72 = 0;
                      lVar12 = FUN_026456c0(param_5);
                      if (lVar12 != 0) {
                        puVar2 = PTR_DAT_04bc35d0 + 0x10;
                        local_90 = SUB81(puVar2,0);
                        uStack_8f = (undefined1)((ulong)puVar2 >> 8);
                        sStack_8e = (short)((ulong)puVar2 >> 0x10);
                        uStack_8c = (undefined4)((ulong)puVar2 >> 0x20);
                        local_88 = (undefined2)lVar12;
                        uStack_86 = (undefined6)((ulong)lVar12 >> 0x10);
                        local_80 = 1;
                        bStack_7f = 0;
                        if (*(long **)(lVar12 + 0x28) == (long *)0x0) {
                          bVar10 = 0;
                        }
                        else {
                          puVar17 = (undefined8 *)**(long **)(lVar12 + 0x28);
                          bVar10 = 0;
                          if (puVar17 != (undefined8 *)0x0) {
                            bVar10 = (**(code **)*puVar17)();
                          }
                        }
                        bStack_7f = bVar10 & 1;
                        local_90 = (PosixTime)0xc0;
                        uStack_8f = 0x8a;
                        sStack_8e = 0x4a3;
                        uStack_8c = 0;
                        local_78 = SUB82(&local_90,0);
                        uStack_76 = (undefined4)((ulong)&local_90 >> 0x10);
                        uStack_72 = (undefined2)((ulong)&local_90 >> 0x30);
                      }
                      bVar10 = FUN_01b6e5d0(&local_70,local_b8,param_4,&local_a0,&local_90);
                      if (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) != 0) {
                        FUN_02640184();
                      }
                      goto LAB_01b60b48;
                    }
                    break;
                  }
                  if (uVar24 != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*param_4;
                bVar10 = 0;
                if ((*param_4 == 0) || (param_4 == puVar20)) goto LAB_01b60b48;
                lVar12 = 0xc;
                if (*(char *)((long)param_4 + (10 - (long)puVar20)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)param_4 + (lVar12 - (long)puVar20);
                if (lVar12 == 0) break;
                uVar26 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar20));
                *(undefined4 *)(puVar9 + 0x18) = 0xfffffffe;
                if (uVar26 == 0) break;
                piVar27 = (int *)(lVar12 + 4);
                while (piVar27[-1] != 0x175969e1) {
                  piVar27 = piVar27 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) goto LAB_01b60b44;
                }
                iVar3 = 0;
                if (*piVar27 != -1) {
                  iVar3 = *piVar27;
                }
                *(int *)(puVar9 + 0x18) = iVar3;
                if (*param_4 == 0) break;
              } while( true );
            }
LAB_01b60b44:
            bVar10 = 0;
LAB_01b60b48:
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar21 + 0x2c638) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar21 + 0x2c638) + 0x18),
               puVar17 != (undefined8 *)0x0)) {
              (**(code **)*puVar17)();
            }
            goto LAB_01b607ac;
          }
        }
      }
    }
  }
  bVar10 = 0;
LAB_01b607ac:
  return bVar10 & 1;
}

