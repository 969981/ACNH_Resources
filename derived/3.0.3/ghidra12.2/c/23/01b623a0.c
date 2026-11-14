
byte FUN_01b623a0(undefined8 param_1,undefined2 param_2,uint *param_3,uint *param_4,
                 PosixTime *param_5,uint param_6)

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
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined2 *puVar14;
  short *psVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  ushort uVar19;
  undefined2 uVar20;
  uint *puVar21;
  long lVar22;
  uint *puVar23;
  char cVar24;
  uint uVar25;
  ulong uVar26;
  int *piVar27;
  undefined2 local_b8;
  char acStack_b6 [6];
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined1 local_a8;
  byte local_a7;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  uint local_94;
  PosixTime local_90;
  undefined1 uStack_8f;
  undefined2 uStack_8e;
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
  
  if ((param_4 != (uint *)0x0) &&
     (uVar12 = FUN_01b68870(param_4,param_5,param_6 & 1), puVar2 = PTR_DAT_04bb4f78,
     (uVar12 & 1) != 0)) {
    puVar23 = (uint *)(ulong)*param_4;
    local_a0 = 0;
    uStack_9c = 0;
    puVar21 = (uint *)((long)param_4 - (long)puVar23);
    if (puVar23 == (uint *)0x0 || param_4 == puVar23) {
      local_98 = 0;
LAB_01b62414:
      local_94 = 0;
    }
    else {
      if (((*puVar21 == 0) || (uVar11 = puVar21[1], uVar11 == 0)) ||
         ((ulong)(ushort)puVar21[2] == 0)) {
LAB_01b626d8:
        uVar25 = *puVar21;
        uStack_9c = 0;
        if (uVar25 != 0) {
LAB_01b626e0:
          uVar11 = puVar21[1];
          if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar13 != 0) {
              uVar4 = 0;
              if ((ulong)uVar11 != 0) {
                uVar4 = (uint)((ulong)((long)param_4 - lVar13) / (ulong)uVar11);
              }
              if (uVar25 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc0620) &&
                 (uStack_9c = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0620 + 8) + (long)(int)uVar4 * 2),
                 uStack_9c < 0x12)) goto LAB_01b6274c;
            }
          }
          uStack_9c = 0;
        }
      }
      else {
        lVar13 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar13 == 0) goto LAB_01b626d8;
        uVar25 = 0;
        if ((ulong)uVar11 != 0) {
          uVar25 = (uint)((ulong)((long)param_4 - lVar13) / (ulong)uVar11);
        }
        if (*puVar21 <= uVar25) {
          uVar25 = 0xffffffff;
        }
        if (uVar25 < *(uint *)PTR_DAT_04bc0618) {
          uVar11 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0618 + 8) + (long)(int)uVar25 * 2);
          if (0x11 < uVar11) goto LAB_01b626d8;
        }
        else {
          uVar11 = 0;
        }
        uVar25 = *puVar21;
        local_a0 = uVar11;
        if (uVar25 != 0) goto LAB_01b626e0;
        uStack_9c = 0;
      }
LAB_01b6274c:
      local_98 = 0;
      if (*puVar21 != 0) {
        uVar11 = puVar21[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar13 != 0) {
            uVar25 = 0;
            if ((ulong)uVar11 != 0) {
              uVar25 = (uint)((ulong)((long)param_4 - lVar13) / (ulong)uVar11);
            }
            if (*puVar21 <= uVar25) {
              uVar25 = 0xffffffff;
            }
            if ((uVar25 < *(uint *)PTR_DAT_04bc0628) &&
               (local_98 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0628 + 8) + (long)(int)uVar25 * 2),
               local_98 < 0x12)) goto LAB_01b627c4;
          }
        }
        local_98 = 0;
      }
LAB_01b627c4:
      local_94 = 0;
      if (*puVar21 != 0) {
        uVar11 = puVar21[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar13 != 0) {
            uVar25 = 0;
            if ((ulong)uVar11 != 0) {
              uVar25 = (uint)((ulong)((long)param_4 - lVar13) / (ulong)uVar11);
            }
            if (*puVar21 <= uVar25) {
              uVar25 = 0xffffffff;
            }
            if ((uVar25 < *(uint *)PTR_DAT_04bc0630) &&
               (local_94 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0630 + 8) + (long)(int)uVar25 * 2),
               local_94 < 0x12)) goto LAB_01b62418;
          }
        }
        goto LAB_01b62414;
      }
    }
LAB_01b62418:
    if (((((local_a0 == 0) || (local_a0 == *param_3)) &&
         ((uStack_9c == 0 || (uStack_9c == *param_3)))) &&
        (((local_98 == 0 || (local_98 == *param_3)) && ((local_94 == 0 || (local_94 == *param_3)))))
        ) && ((((local_a0 == *param_3 || (uStack_9c == *param_3)) || (local_98 == *param_3)) ||
              (local_94 == *param_3)))) {
      if (((puVar23 == (uint *)0x0 || param_4 == puVar23) || (*puVar21 == 0)) ||
         ((uVar11 = puVar21[1], uVar11 == 0 || ((ulong)(ushort)puVar21[2] == 0)))) {
LAB_01b62520:
        uVar19 = 0;
      }
      else {
        lVar13 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar21 + lVar13 + (ulong)(ushort)puVar21[2] * 8;
        uVar19 = 0;
        if (lVar13 != 0) {
          uVar25 = 0;
          if ((ulong)uVar11 != 0) {
            uVar25 = (uint)((ulong)((long)param_4 - lVar13) / (ulong)uVar11);
          }
          if (*puVar21 <= uVar25) {
            uVar25 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc0638 <= uVar25) ||
             (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar25 * 2),
             4 < uVar19)) goto LAB_01b62520;
        }
      }
      bVar10 = uVar19 != 3;
      if ((uVar19 == 3) || ((param_6 & 1) != 0)) goto LAB_01b628ac;
      if (param_5 == (PosixTime *)0x0) {
        if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
           (lVar13 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) +
                                 0x30))(), lVar13 != 0)) {
          uStack_76 = 0;
          uStack_7e = 0;
          local_78 = 0;
          uStack_86 = 0;
          local_80 = 0;
          bStack_7f = 0;
          puVar14 = (undefined2 *)FUN_01b5a5e0(param_4,7,0x54706054,*(undefined8 *)PTR_DAT_04bc0650)
          ;
          if (puVar14 == (undefined2 *)0x0) {
            uVar20 = 0;
          }
          else {
            uVar20 = *puVar14;
          }
          local_90 = SUB21(uVar20,0);
          uStack_8f = (undefined1)((ushort)uVar20 >> 8);
          puVar1 = &LAB_00284e00 + lVar13;
          uStack_8e = 0;
          uStack_8c = 0;
          local_88 = 0;
          uVar11 = FUN_01b5c07c(&local_a0,param_3);
          if (uVar11 < 0xe) {
            *(undefined2 *)(local_64 + (ulong)uVar11 * 2 + -0x2a) = param_2;
          }
          uStack_b0 = SUB82(puVar1,0);
          uStack_ae = (undefined6)((ulong)puVar1 >> 0x10);
          local_a8 = 0;
          if (*(long *)(&LAB_00284e28 + lVar13) == 0) {
            local_a7 = 0;
          }
          else {
            puVar18 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar13) + 0x10);
            local_a7 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              local_a7 = (**(code **)*puVar18)();
            }
          }
          local_a7 = local_a7 & 1;
          local_b8 = 0x8ae0;
          acStack_b6[0] = -0x5d;
          acStack_b6[1] = '\x04';
          acStack_b6[2] = '\0';
          acStack_b6[3] = '\0';
          acStack_b6[4] = '\0';
          acStack_b6[5] = '\0';
          FUN_02640280(puVar1,0x28370);
          lVar22 = *(long *)(&LAB_00284e08 + lVar13);
          lVar13 = *(long *)(&LAB_00284e10 + lVar13);
          local_70 = FUN_00a82400(*(undefined8 *)PTR_DAT_04bb32e8);
          uVar17 = FUN_0280f530(lVar13 + lVar22,&local_70,local_64);
          if (local_64[0] != '\0') {
            FUN_0266f010(uVar17,&local_70);
          }
          local_70 = uVar17;
          psVar15 = (short *)FUN_01b5a5e0(param_4,6,0x175969e1,0);
          if ((psVar15 == (short *)0x0) || (*psVar15 == 0)) {
            bVar10 = 0;
          }
          else {
            bVar10 = FUN_01b695b0(&local_70,&local_90,param_4,&local_a0);
          }
          FUN_02640184(&local_b8);
          goto LAB_01b628ac;
        }
      }
      else {
        local_90 = *param_5;
        if (7 < (byte)local_90) {
          local_90 = (PosixTime)0xff;
        }
        lVar13 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_90,1);
        puVar9 = PTR_DAT_04bc0648;
        puVar8 = PTR_DAT_04bc0640;
        if (lVar13 != 0) {
          lVar22 = lVar13 + 0x194b0;
          if (*(long *)(lVar13 + 0x194b8) == 0) {
            lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*param_4 == 0) {
LAB_01b62a10:
            local_b8 = 0;
          }
          else {
            cVar24 = *PTR_DAT_04bc0640;
            do {
              if (cVar24 == '\0') {
                cVar24 = '\x01';
                *(undefined8 *)puVar9 = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                *puVar8 = 1;
                *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar11 = *(uint *)(puVar9 + 0x1c);
                if (-1 < (int)uVar11) {
                  if ((undefined2 *)((ulong)uVar11 + (long)param_4) == (undefined2 *)0x0)
                  goto LAB_01b62a10;
                  local_b8 = *(undefined2 *)((ulong)uVar11 + (long)param_4);
                  goto LAB_01b62a14;
                }
                if (uVar11 != 0xffffffff) goto LAB_01b62a10;
              }
              puVar21 = (uint *)(ulong)*param_4;
              local_b8 = 0;
              if ((*param_4 == 0) || (param_4 == puVar21)) goto LAB_01b62a14;
              lVar13 = 0xc;
              if (*(char *)((long)param_4 + (10 - (long)puVar21)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)param_4 + (lVar13 - (long)puVar21);
              if (lVar13 == 0) goto LAB_01b62a10;
              uVar12 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar21));
              *(undefined4 *)(puVar9 + 0x1c) = 0xfffffffe;
              local_b8 = 0;
              if (uVar12 == 0) goto LAB_01b62a14;
              piVar27 = (int *)(lVar13 + 4);
              while (piVar27[-1] != 0x54706054) {
                piVar27 = piVar27 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  local_b8 = 0;
                  goto LAB_01b62a14;
                }
              }
              iVar3 = 0;
              if (*piVar27 != -1) {
                iVar3 = *piVar27;
              }
              *(int *)(puVar9 + 0x1c) = iVar3;
            } while (*param_4 != 0);
            local_b8 = 0;
          }
LAB_01b62a14:
          uVar11 = *param_3;
          acStack_b6[0] = '\0';
          acStack_b6[1] = '\0';
          acStack_b6[2] = '\0';
          acStack_b6[3] = '\0';
          acStack_b6[4] = '\0';
          acStack_b6[5] = '\0';
          uStack_b0 = 0;
          lVar13 = 0;
          if (uVar11 == 8) {
            uVar11 = 1;
          }
          uVar25 = local_a0;
          if (local_a0 == 8) {
            uVar25 = 1;
          }
          local_90 = SUB41(uVar25,0);
          uStack_8f = (undefined1)(uVar25 >> 8);
          uStack_8e = (undefined2)(uVar25 >> 0x10);
          if (uVar25 == uVar11) {
LAB_01b62ad0:
            *(undefined2 *)(local_64 + lVar13 * 2 + -0x52) = param_2;
          }
          else {
            uVar25 = uStack_9c;
            if (uStack_9c == 8) {
              uVar25 = 1;
            }
            local_90 = SUB41(uVar25,0);
            uStack_8f = (undefined1)(uVar25 >> 8);
            uStack_8e = (undefined2)(uVar25 >> 0x10);
            if (uVar25 == uVar11) {
              lVar13 = 1;
              goto LAB_01b62ad0;
            }
            uVar25 = local_98;
            if (local_98 == 8) {
              uVar25 = 1;
            }
            local_90 = SUB41(uVar25,0);
            uStack_8f = (undefined1)(uVar25 >> 8);
            uStack_8e = (undefined2)(uVar25 >> 0x10);
            if (uVar25 == uVar11) {
              lVar13 = 2;
              goto LAB_01b62ad0;
            }
            uVar25 = local_94;
            if (local_94 == 8) {
              uVar25 = 1;
            }
            local_90 = SUB41(uVar25,0);
            uStack_8f = (undefined1)(uVar25 >> 8);
            uStack_8e = (undefined2)(uVar25 >> 0x10);
            if (uVar25 == uVar11) {
              lVar13 = 3;
              goto LAB_01b62ad0;
            }
          }
          local_70 = CONCAT44(local_70._4_4_,uVar11);
          lVar13 = *(long *)(lVar22 + 0x2c638);
          if (lVar13 == 0) {
            uVar12 = 0;
          }
          else {
            if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
              lVar13 = *(long *)(lVar22 + 0x2c638);
              uVar12 = uVar12 & 0xffffffff;
              if (lVar13 == 0) goto LAB_01b62b40;
            }
            plVar16 = *(long **)(lVar13 + 0x20);
            if (plVar16 != (long *)0x0) {
              lVar13 = *(long *)(lVar22 + 0x2c618);
              local_90 = SUB81(lVar13,0);
              uStack_8f = (undefined1)((ulong)lVar13 >> 8);
              uStack_8e = (undefined2)((ulong)lVar13 >> 0x10);
              uStack_8c = (undefined4)((ulong)lVar13 >> 0x20);
              local_88 = (undefined2)*(undefined8 *)(lVar22 + 0x2c620);
              uStack_86 = (undefined6)((ulong)*(undefined8 *)(lVar22 + 0x2c620) >> 0x10);
              local_80 = 0x80;
              bStack_7f = 0x25;
              uStack_7e = 0;
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_90);
            }
          }
LAB_01b62b40:
          lVar5 = *(long *)(lVar22 + 0x2c618);
          lVar6 = *(long *)(lVar22 + 0x2c620);
          PVar7 = *param_5;
          lVar13 = *(long *)PTR_DAT_04bb32e8;
          lVar13 = *(long *)(lVar13 + 0x20) / 1000000000 + *(long *)(lVar13 + 8) +
                   (((*(long *)(lVar13 + 0x10) + (long)*(int *)(lVar13 + 0x38)) -
                    *(long *)(lVar13 + 8)) * 1000000000) / 1000000000;
          local_90 = SUB81(lVar13,0);
          uStack_8f = (undefined1)((ulong)lVar13 >> 8);
          uStack_8e = (undefined2)((ulong)lVar13 >> 0x10);
          uStack_8c = (undefined4)((ulong)lVar13 >> 0x20);
          uVar17 = nn::time::ToCalendarTimeInUtc(&local_90);
          local_90 = SUB81(uVar17,0);
          uStack_8f = (undefined1)((ulong)uVar17 >> 8);
          uStack_8e = (undefined2)((ulong)uVar17 >> 0x10);
          uStack_8c = (undefined4)((ulong)uVar17 >> 0x20);
          uVar17 = FUN_02811460(lVar6 + lVar5,&local_90,&local_70);
          if (((char)local_70 != '\0') && ((byte)PVar7 < 8)) {
            local_90 = PVar7;
            FUN_02583354(*(undefined8 *)puVar2,&local_90,1);
            FUN_01b675a0();
          }
          local_70 = uVar17;
          if (*param_4 != 0) {
            cVar24 = *puVar8;
            do {
              if (cVar24 == '\0') {
                cVar24 = '\x01';
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
                  if (((short *)((ulong)uVar11 + (long)param_4) != (short *)0x0) &&
                     (*(short *)((ulong)uVar11 + (long)param_4) != 0)) {
                    local_78 = 0;
                    uStack_76 = 0;
                    uStack_72 = 0;
                    lVar13 = FUN_026456c0(param_5);
                    if (lVar13 != 0) {
                      puVar2 = PTR_DAT_04bc35d0 + 0x10;
                      local_90 = SUB81(puVar2,0);
                      uStack_8f = (undefined1)((ulong)puVar2 >> 8);
                      uStack_8e = (undefined2)((ulong)puVar2 >> 0x10);
                      uStack_8c = (undefined4)((ulong)puVar2 >> 0x20);
                      local_88 = (undefined2)lVar13;
                      uStack_86 = (undefined6)((ulong)lVar13 >> 0x10);
                      local_80 = 1;
                      bStack_7f = 0;
                      if (*(long **)(lVar13 + 0x28) == (long *)0x0) {
                        bVar10 = 0;
                      }
                      else {
                        puVar18 = (undefined8 *)**(long **)(lVar13 + 0x28);
                        bVar10 = 0;
                        if (puVar18 != (undefined8 *)0x0) {
                          bVar10 = (**(code **)*puVar18)();
                        }
                      }
                      bStack_7f = bVar10 & 1;
                      local_90 = (PosixTime)0xc0;
                      uStack_8f = 0x8a;
                      uStack_8e = 0x4a3;
                      uStack_8c = 0;
                      local_78 = SUB82(&local_90,0);
                      uStack_76 = (undefined4)((ulong)&local_90 >> 0x10);
                      uStack_72 = (undefined2)((ulong)&local_90 >> 0x30);
                    }
                    bVar10 = FUN_01b6e5d0(&local_70,&local_b8,param_4,&local_a0,&local_90);
                    if (CONCAT26(uStack_72,CONCAT42(uStack_76,local_78)) != 0) {
                      FUN_02640184();
                    }
                    goto LAB_01b62d14;
                  }
                  break;
                }
                if (uVar11 != 0xffffffff) break;
              }
              puVar21 = (uint *)(ulong)*param_4;
              bVar10 = 0;
              if ((*param_4 == 0) || (param_4 == puVar21)) goto LAB_01b62d14;
              lVar13 = 0xc;
              if (*(char *)((long)param_4 + (10 - (long)puVar21)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)param_4 + (lVar13 - (long)puVar21);
              if (lVar13 == 0) break;
              uVar26 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar21));
              *(undefined4 *)(puVar9 + 0x18) = 0xfffffffe;
              if (uVar26 == 0) break;
              piVar27 = (int *)(lVar13 + 4);
              while (piVar27[-1] != 0x175969e1) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_01b62d10;
              }
              iVar3 = 0;
              if (*piVar27 != -1) {
                iVar3 = *piVar27;
              }
              *(int *)(puVar9 + 0x18) = iVar3;
              if (*param_4 == 0) break;
            } while( true );
          }
LAB_01b62d10:
          bVar10 = 0;
LAB_01b62d14:
          if ((((uVar12 & 1) != 0) && (*(long *)(lVar22 + 0x2c638) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x2c638) + 0x18),
             puVar18 != (undefined8 *)0x0)) {
            (**(code **)*puVar18)();
          }
          goto LAB_01b628ac;
        }
      }
    }
  }
  bVar10 = 0;
LAB_01b628ac:
  return bVar10 & 1;
}

