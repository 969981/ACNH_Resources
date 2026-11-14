
byte FUN_01b62d90(undefined8 param_1,ushort *param_2,ushort param_3,ulong param_4,uint *param_5,
                 PosixTime *param_6,uint param_7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  PosixTime PVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ushort uVar18;
  undefined2 uVar19;
  uint *puVar20;
  long lVar21;
  char cVar22;
  ulong uVar23;
  int *piVar24;
  uint *puVar25;
  ushort local_b0 [5];
  undefined6 uStack_a6;
  undefined1 local_a0;
  byte local_9f;
  undefined8 local_98;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint local_84;
  PosixTime local_80;
  undefined1 uStack_7f;
  ushort uStack_7e;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined6 uStack_76;
  undefined1 local_70;
  byte bStack_6f;
  undefined6 uStack_6e;
  undefined2 local_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  
  if ((param_5 != (uint *)0x0) &&
     (uVar12 = FUN_01b68870(param_5,param_6,param_7 & 1), (uVar12 & 1) != 0)) {
    puVar20 = (uint *)(ulong)*param_5;
    local_90 = 0;
    uStack_8c = 0;
    local_88 = 0;
    puVar25 = (uint *)((long)param_5 - (long)puVar20);
    if (puVar20 != (uint *)0x0 && param_5 != puVar20) {
      if (*puVar25 != 0) {
        uVar11 = puVar25[1];
        if (uVar11 != 0) {
          if ((ulong)(ushort)puVar25[2] != 0) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar25 + lVar13 + (ulong)(ushort)puVar25[2] * 8;
            if (lVar13 != 0) {
              uVar6 = 0;
              if ((ulong)uVar11 != 0) {
                uVar6 = (uint)((ulong)((long)param_5 - lVar13) / (ulong)uVar11);
              }
              if (*puVar25 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if (uVar6 < *(uint *)PTR_DAT_04bc0618) {
                uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar6 * 2);
                uVar11 = (uint)uVar18;
                if (0x11 < uVar18) goto LAB_01b630bc;
              }
              else {
                uVar11 = 0;
              }
              local_90 = uVar11;
            }
          }
        }
      }
LAB_01b630bc:
      uStack_8c = 0;
      if (*puVar25 != 0) {
        uVar11 = puVar25[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar25 + lVar13 + (ulong)(ushort)puVar25[2] * 8;
          if (lVar13 != 0) {
            uVar6 = 0;
            if ((ulong)uVar11 != 0) {
              uVar6 = (uint)((ulong)((long)param_5 - lVar13) / (ulong)uVar11);
            }
            if (*puVar25 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0620) &&
               (uStack_8c = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar6 * 2),
               uStack_8c < 0x12)) goto LAB_01b63130;
          }
        }
        uStack_8c = 0;
      }
LAB_01b63130:
      local_88 = 0;
      if (*puVar25 != 0) {
        uVar11 = puVar25[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar25 + lVar13 + (ulong)(ushort)puVar25[2] * 8;
          if (lVar13 != 0) {
            uVar6 = 0;
            if ((ulong)uVar11 != 0) {
              uVar6 = (uint)((ulong)((long)param_5 - lVar13) / (ulong)uVar11);
            }
            if (*puVar25 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0628) &&
               (local_88 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar6 * 2)
               , local_88 < 0x12)) goto LAB_01b631a8;
          }
        }
        local_88 = 0;
      }
LAB_01b631a8:
      local_84 = 0;
      if (*puVar25 != 0) {
        uVar11 = puVar25[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar25 + lVar13 + (ulong)(ushort)puVar25[2] * 8;
          if (lVar13 != 0) {
            uVar6 = 0;
            if ((ulong)uVar11 != 0) {
              uVar6 = (uint)((ulong)((long)param_5 - lVar13) / (ulong)uVar11);
            }
            if (*puVar25 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0630) &&
               (local_84 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar6 * 2)
               , local_84 < 0x12)) goto LAB_01b62e00;
          }
        }
        goto LAB_01b62dfc;
      }
    }
    else {
LAB_01b62dfc:
      local_84 = 0;
    }
LAB_01b62e00:
    if ((param_4 & 1) == 0) {
      local_80 = (PosixTime)0x6;
      uStack_7f = 0;
      uStack_7e = 0;
      if ((((local_90 != 6) && (uStack_8c != 6)) && (local_88 != 6)) && (local_84 != 6))
      goto LAB_01b63004;
      uVar12 = FUN_01b5bab4(&local_90);
      if ((uVar12 & 1) != 0) {
        uVar11 = local_90;
        if (local_90 == 8) {
          uVar11 = 1;
        }
        local_80 = SUB41(uVar11,0);
        uStack_7f = (undefined1)(uVar11 >> 8);
        uStack_7e = (ushort)(uVar11 >> 0x10);
        local_b0[0] = 6;
        if (uVar11 == 6) goto LAB_01b62fd0;
        local_b0[0] = 6;
        uVar11 = uStack_8c;
        if (uStack_8c == 8) {
          uVar11 = 1;
        }
        local_80 = SUB41(uVar11,0);
        uStack_7f = (undefined1)(uVar11 >> 8);
        uStack_7e = (ushort)(uVar11 >> 0x10);
        if (uVar11 == 6) goto LAB_01b62ffc;
        uVar11 = local_88;
        if (local_88 == 8) {
          uVar11 = 1;
        }
        local_80 = SUB41(uVar11,0);
        uStack_7f = (undefined1)(uVar11 >> 8);
        uStack_7e = (ushort)(uVar11 >> 0x10);
        local_b0[0] = 6;
        if (uVar11 == 6) goto LAB_01b630ac;
        local_b0[0] = 6;
        uVar11 = local_84;
        if (local_84 == 8) {
          uVar11 = 1;
        }
        local_80 = SUB41(uVar11,0);
        uStack_7f = (undefined1)(uVar11 >> 8);
        uStack_7e = (ushort)(uVar11 >> 0x10);
LAB_01b63234:
        local_b0[1] = 0;
        uVar11 = 3;
        if (CONCAT22(uStack_7e,CONCAT11(uStack_7f,local_80)) != (uint)local_b0[0]) {
          uVar11 = 0xffffffff;
        }
        goto LAB_01b63248;
      }
    }
    else {
      local_80 = (PosixTime)0x5;
      uStack_7f = 0;
      uStack_7e = 0;
      if (((local_90 == 5) || (uStack_8c == 5)) || ((local_88 == 5 || (local_84 == 5)))) {
        uVar12 = FUN_01b5b988(&local_90);
        if ((uVar12 & 1) == 0) goto LAB_01b63460;
        local_b0[0] = 5;
        uVar11 = local_90;
        if (local_90 == 8) {
          uVar11 = 1;
        }
        local_80 = SUB41(uVar11,0);
        uStack_7f = (undefined1)(uVar11 >> 8);
        uStack_7e = (ushort)(uVar11 >> 0x10);
        if (uVar11 == 5) {
LAB_01b62fd0:
          local_b0[1] = 0;
          uVar11 = 0;
        }
        else {
          local_b0[0] = 5;
          uVar11 = uStack_8c;
          if (uStack_8c == 8) {
            uVar11 = 1;
          }
          local_80 = SUB41(uVar11,0);
          uStack_7f = (undefined1)(uVar11 >> 8);
          uStack_7e = (ushort)(uVar11 >> 0x10);
          if (uVar11 == 5) {
LAB_01b62ffc:
            local_b0[1] = 0;
            uVar11 = 1;
          }
          else {
            local_b0[0] = 5;
            uVar11 = local_88;
            if (local_88 == 8) {
              uVar11 = 1;
            }
            local_80 = SUB41(uVar11,0);
            uStack_7f = (undefined1)(uVar11 >> 8);
            uStack_7e = (ushort)(uVar11 >> 0x10);
            if (uVar11 != 5) {
              local_b0[0] = 5;
              uVar11 = local_84;
              if (local_84 == 8) {
                uVar11 = 1;
              }
              local_80 = SUB41(uVar11,0);
              uStack_7f = (undefined1)(uVar11 >> 8);
              uStack_7e = (ushort)(uVar11 >> 0x10);
              goto LAB_01b63234;
            }
LAB_01b630ac:
            local_b0[1] = 0;
            uVar11 = 2;
          }
        }
LAB_01b63248:
        puVar1 = PTR_DAT_04bb4f78;
        if (puVar20 != (uint *)0x0 && param_5 != puVar20) {
          uVar18 = 0;
          if (*puVar25 != 0) {
            uVar6 = puVar25[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar25[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar25 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar25 + lVar13 + (ulong)(ushort)puVar25[2] * 8;
              if (lVar13 != 0) {
                uVar3 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar3 = (uint)((ulong)((long)param_5 - lVar13) / (ulong)uVar6);
                }
                if (*puVar25 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < *(uint *)PTR_DAT_04bc0638) &&
                   (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar3 * 2),
                   uVar18 < 5)) goto LAB_01b63250;
              }
            }
            goto LAB_01b6324c;
          }
        }
        else {
LAB_01b6324c:
          uVar18 = 0;
        }
LAB_01b63250:
        bVar10 = uVar18 != 3;
        if ((uVar18 == 3) || ((param_7 & 1) != 0)) goto LAB_01b63464;
        if (param_6 == (PosixTime *)0x0) {
          if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
             (lVar13 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                   0x30))(), lVar13 != 0)) {
            uStack_66 = 0;
            uStack_6e = 0;
            local_68 = 0;
            uStack_76 = 0;
            local_70 = 0;
            bStack_6f = 0;
            puVar14 = (undefined2 *)
                      FUN_01b5a5e0(param_5,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650);
            if (puVar14 == (undefined2 *)0x0) {
              uVar19 = 0;
            }
            else {
              uVar19 = *puVar14;
            }
            local_80 = SUB21(uVar19,0);
            uStack_7f = (undefined1)((ushort)uVar19 >> 8);
            uStack_7e = 0;
            uStack_7c = 0;
            local_78 = 0;
            if (uVar11 != 0xffffffff) {
              (&uStack_7e)[uVar11] = param_3;
            }
            uVar18 = *param_2;
            local_b0[0] = 0xe;
            local_b0[1] = 0;
            uVar11 = FUN_01b5c07c(&local_90,local_b0);
            if (uVar11 < 0xe) {
              (&uStack_7e)[uVar11] = uVar18;
            }
            local_b0[4] = (ushort)(&LAB_00284e00 + lVar13);
            uStack_a6 = (undefined6)((ulong)(&LAB_00284e00 + lVar13) >> 0x10);
            local_a0 = 0;
            if (*(long *)(&LAB_00284e28 + lVar13) == 0) {
              local_9f = 0;
            }
            else {
              puVar17 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar13) + 0x10);
              local_9f = 0;
              if (puVar17 != (undefined8 *)0x0) {
                local_9f = (**(code **)*puVar17)();
              }
            }
            local_9f = local_9f & 1;
            local_b0[0] = 0x8ae0;
            local_b0[1] = 0x4a3;
            local_b0[2] = 0;
            local_b0[3] = 0;
            FUN_01b69394(local_b0);
            local_98 = FUN_01b692d8();
            bVar10 = FUN_01b69400(&local_98,&local_80,param_5,&local_90);
            FUN_02640184(local_b0);
            goto LAB_01b63464;
          }
        }
        else {
          local_80 = *param_6;
          if (7 < (byte)local_80) {
            local_80 = (PosixTime)0xff;
          }
          lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_80,1);
          puVar9 = PTR_DAT_04bc0648;
          puVar8 = PTR_DAT_04bc0640;
          if (lVar13 != 0) {
            lVar21 = lVar13 + 0x194b0;
            if (*(long *)(lVar13 + 0x194b8) == 0) {
              lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
            }
            if (*param_5 == 0) {
LAB_01b63568:
              local_b0[0] = 0;
            }
            else {
              cVar22 = *PTR_DAT_04bc0640;
              do {
                if (cVar22 == '\0') {
                  cVar22 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar6 = *(uint *)(puVar9 + 0x1c);
                  if (-1 < (int)uVar6) {
                    if ((ushort *)((ulong)uVar6 + (long)param_5) == (ushort *)0x0)
                    goto LAB_01b63568;
                    local_b0[0] = *(ushort *)((ulong)uVar6 + (long)param_5);
                    goto LAB_01b6356c;
                  }
                  if (uVar6 != 0xffffffff) goto LAB_01b63568;
                }
                puVar20 = (uint *)(ulong)*param_5;
                local_b0[0] = 0;
                if ((*param_5 == 0) || (param_5 == puVar20)) goto LAB_01b6356c;
                lVar13 = 0xc;
                if (*(char *)((long)param_5 + (10 - (long)puVar20)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)param_5 + (lVar13 - (long)puVar20);
                if (lVar13 == 0) goto LAB_01b63568;
                uVar12 = (ulong)*(ushort *)((long)param_5 + (8 - (long)puVar20));
                *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
                local_b0[0] = 0;
                if (uVar12 == 0) goto LAB_01b6356c;
                piVar24 = (int *)(lVar13 + 4);
                while (piVar24[-1] != 0x54706054) {
                  piVar24 = piVar24 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) {
                    local_b0[0] = 0;
                    goto LAB_01b6356c;
                  }
                }
                iVar2 = 0;
                if (*piVar24 != -1) {
                  iVar2 = *piVar24;
                }
                *(int *)(puVar9 + 0x1c) = iVar2;
              } while (*param_5 != 0);
              local_b0[0] = 0;
            }
LAB_01b6356c:
            local_b0[1] = 0;
            local_b0[2] = 0;
            local_b0[3] = 0;
            local_b0[4] = 0;
            if (uVar11 < 4) {
              local_b0[(ulong)uVar11 + 1] = param_3;
            }
            uVar11 = local_90;
            if (local_90 == 8) {
              uVar11 = 1;
            }
            local_80 = SUB41(uVar11,0);
            uStack_7f = (undefined1)(uVar11 >> 8);
            uStack_7e = (ushort)(uVar11 >> 0x10);
            if (uVar11 == 0xe) {
              lVar13 = 0;
LAB_01b63648:
              local_b0[lVar13 + 1] = *param_2;
            }
            else {
              uVar11 = uStack_8c;
              if (uStack_8c == 8) {
                uVar11 = 1;
              }
              local_80 = SUB41(uVar11,0);
              uStack_7f = (undefined1)(uVar11 >> 8);
              uStack_7e = (ushort)(uVar11 >> 0x10);
              if (uVar11 == 0xe) {
                lVar13 = 1;
                goto LAB_01b63648;
              }
              uVar11 = local_88;
              if (local_88 == 8) {
                uVar11 = 1;
              }
              local_80 = SUB41(uVar11,0);
              uStack_7f = (undefined1)(uVar11 >> 8);
              uStack_7e = (ushort)(uVar11 >> 0x10);
              if (uVar11 == 0xe) {
                lVar13 = 2;
                goto LAB_01b63648;
              }
              uVar11 = local_84;
              if (local_84 == 8) {
                uVar11 = 1;
              }
              local_80 = SUB41(uVar11,0);
              uStack_7f = (undefined1)(uVar11 >> 8);
              uStack_7e = (ushort)(uVar11 >> 0x10);
              if (uVar11 == 0xe) {
                lVar13 = 3;
                goto LAB_01b63648;
              }
            }
            local_98 = CONCAT44(local_98._4_4_,0xe);
            lVar13 = *(long *)(lVar21 + 0x2c638);
            if (lVar13 == 0) {
              uVar12 = 0;
            }
            else {
              if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
                uVar12 = 0;
              }
              else {
                uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
                lVar13 = *(long *)(lVar21 + 0x2c638);
                uVar12 = uVar12 & 0xffffffff;
                if (lVar13 == 0) goto LAB_01b636b8;
              }
              plVar15 = *(long **)(lVar13 + 0x20);
              if (plVar15 != (long *)0x0) {
                lVar13 = *(long *)(lVar21 + 0x2c618);
                local_80 = SUB81(lVar13,0);
                uStack_7f = (undefined1)((ulong)lVar13 >> 8);
                uStack_7e = (ushort)((ulong)lVar13 >> 0x10);
                uStack_7c = (undefined4)((ulong)lVar13 >> 0x20);
                local_78 = (undefined2)*(undefined8 *)(lVar21 + 0x2c620);
                uStack_76 = (undefined6)((ulong)*(undefined8 *)(lVar21 + 0x2c620) >> 0x10);
                local_70 = 0x80;
                bStack_6f = 0x25;
                uStack_6e = 0;
                (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
              }
            }
LAB_01b636b8:
            lVar4 = *(long *)(lVar21 + 0x2c618);
            lVar5 = *(long *)(lVar21 + 0x2c620);
            PVar7 = *param_6;
            lVar13 = *(long *)PTR_DAT_04bb32e8;
            lVar13 = *(long *)(lVar13 + 0x20) / 1000000000 + *(long *)(lVar13 + 8) +
                     (((*(long *)(lVar13 + 0x10) + (long)*(int *)(lVar13 + 0x38)) -
                      *(long *)(lVar13 + 8)) * 1000000000) / 1000000000;
            local_80 = SUB81(lVar13,0);
            uStack_7f = (undefined1)((ulong)lVar13 >> 8);
            uStack_7e = (ushort)((ulong)lVar13 >> 0x10);
            uStack_7c = (undefined4)((ulong)lVar13 >> 0x20);
            uVar16 = nn::time::ToCalendarTimeInUtc(&local_80);
            local_80 = SUB81(uVar16,0);
            uStack_7f = (undefined1)((ulong)uVar16 >> 8);
            uStack_7e = (ushort)((ulong)uVar16 >> 0x10);
            uStack_7c = (undefined4)((ulong)uVar16 >> 0x20);
            uVar16 = FUN_02811460(lVar5 + lVar4,&local_80,&local_98);
            if (((char)local_98 != '\0') && ((byte)PVar7 < 8)) {
              local_80 = PVar7;
              FUN_02583354(*(undefined8 *)puVar1,&local_80,1);
              FUN_01b675a0();
            }
            local_98 = uVar16;
            if (*param_5 != 0) {
              cVar22 = *puVar8;
              do {
                if (cVar22 == '\0') {
                  cVar22 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar11 = *(uint *)(puVar9 + 0x18);
                  if (-1 < (int)uVar11) {
                    if (((short *)((ulong)uVar11 + (long)param_5) != (short *)0x0) &&
                       (*(short *)((ulong)uVar11 + (long)param_5) != 0)) {
                      local_68 = 0;
                      uStack_66 = 0;
                      uStack_62 = 0;
                      lVar13 = FUN_026456c0(param_6);
                      if (lVar13 != 0) {
                        puVar1 = PTR_DAT_04bc35d0 + 0x10;
                        local_80 = SUB81(puVar1,0);
                        uStack_7f = (undefined1)((ulong)puVar1 >> 8);
                        uStack_7e = (ushort)((ulong)puVar1 >> 0x10);
                        uStack_7c = (undefined4)((ulong)puVar1 >> 0x20);
                        local_78 = (undefined2)lVar13;
                        uStack_76 = (undefined6)((ulong)lVar13 >> 0x10);
                        local_70 = 1;
                        bStack_6f = 0;
                        if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
                          bVar10 = 0;
                        }
                        else {
                          puVar17 = (undefined8 *)**(long **)(lVar13 + 0x28);
                          bVar10 = 0;
                          if (puVar17 != (undefined8 *)0x0) {
                            bVar10 = (**(code **)*puVar17)();
                          }
                        }
                        bStack_6f = bVar10 & 1;
                        local_80 = (PosixTime)0xc0;
                        uStack_7f = 0x8a;
                        uStack_7e = 0x4a3;
                        uStack_7c = 0;
                        local_68 = SUB82(&local_80,0);
                        uStack_66 = (undefined4)((ulong)&local_80 >> 0x10);
                        uStack_62 = (undefined2)((ulong)&local_80 >> 0x30);
                      }
                      bVar10 = FUN_01b6e5d0(&local_98,local_b0,param_5,&local_90,&local_80);
                      if (CONCAT26(uStack_62,CONCAT42(uStack_66,local_68)) != 0) {
                        FUN_02640184();
                      }
                      goto LAB_01b63894;
                    }
                    break;
                  }
                  if (uVar11 != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*param_5;
                bVar10 = 0;
                if ((*param_5 == 0) || (param_5 == puVar20)) goto LAB_01b63894;
                lVar13 = 0xc;
                if (*(char *)((long)param_5 + (10 - (long)puVar20)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar13 = (long)param_5 + (lVar13 - (long)puVar20);
                if (lVar13 == 0) break;
                uVar23 = (ulong)*(ushort *)((long)param_5 + (8 - (long)puVar20));
                *(undefined4 *)(puVar9 + 0x18) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar24 = (int *)(lVar13 + 4);
                while (piVar24[-1] != 0x175969e1) {
                  piVar24 = piVar24 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_01b63890;
                }
                iVar2 = 0;
                if (*piVar24 != -1) {
                  iVar2 = *piVar24;
                }
                *(int *)(puVar9 + 0x18) = iVar2;
                if (*param_5 == 0) break;
              } while( true );
            }
LAB_01b63890:
            bVar10 = 0;
LAB_01b63894:
            if ((((uVar12 & 1) != 0) && (*(long *)(lVar21 + 0x2c638) != 0)) &&
               (puVar17 = *(undefined8 **)(*(long *)(lVar21 + 0x2c638) + 0x18),
               puVar17 != (undefined8 *)0x0)) {
              (**(code **)*puVar17)();
            }
            goto LAB_01b63464;
          }
        }
      }
      else {
LAB_01b63004:
        if ((((local_90 == 0xe) || (local_90 == 0)) &&
            (((uStack_8c == 0xe || (uStack_8c == 0)) && ((local_88 == 0xe || (local_88 == 0)))))) &&
           ((local_84 == 0xe || (local_84 == 0)))) {
          local_80 = (PosixTime)0xe;
          uStack_7f = 0;
          uStack_7e = 0;
          if ((((local_90 == 0xe) || (uStack_8c == 0xe)) || (local_88 == 0xe)) || (local_84 == 0xe))
          {
            uVar11 = 0xffffffff;
            goto LAB_01b63248;
          }
        }
      }
    }
  }
LAB_01b63460:
  bVar10 = 0;
LAB_01b63464:
  return bVar10 & 1;
}

