
byte FUN_01b60bc0(undefined8 param_1,undefined2 param_2,ulong param_3,uint *param_4,
                 PosixTime *param_5,uint param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  ulong uVar9;
  undefined8 uVar10;
  PosixTime PVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  PosixTime PVar15;
  PosixTime *pPVar16;
  long lVar17;
  char cVar18;
  byte bVar19;
  undefined2 uVar20;
  uint *puVar21;
  int *piVar22;
  PosixTime local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined2 local_90;
  undefined6 uStack_8e;
  undefined2 uStack_88;
  undefined6 local_86;
  undefined2 uStack_80;
  undefined4 local_7e;
  undefined8 local_78;
  undefined8 local_70;
  ushort local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  char local_34 [4];
  
  if (param_4 != (uint *)0x0) {
    if ((param_6 & 1) == 0) {
      plVar13 = *(long **)PTR_DAT_04bb27d0;
      if ((((plVar13 != (long *)0x0) && (plVar13[5] != 0)) && ((int)plVar13[0x10] == 1)) ||
         (((plVar13[2] != 0 && ((*(uint *)(plVar13 + 0x10) & 0xfffffffe) == 2)) &&
          (*(int *)(plVar13[2] + 0x3e4) != 1)))) goto LAB_01b612b8;
      if ((param_5 == (PosixTime *)0x0) || (*(uint *)(plVar13 + 0x10) < 2)) goto LAB_01b60d34;
      lVar17 = *(long *)PTR_DAT_04bb39b0;
      if (lVar17 == 0) {
        PVar15 = (PosixTime)*PTR_DAT_04bb32e0;
LAB_01b60cac:
        if ((byte)PVar15 < 8) goto LAB_01b60d08;
LAB_01b60cb4:
        lVar17 = *plVar13;
        bVar19 = *(byte *)(lVar17 + 0x473);
        pPVar16 = (PosixTime *)PTR_DAT_04bb5038;
        if ((long)(char)bVar19 != 0xffffffffffffffff) {
          puVar21 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x20;
          if (7 < bVar19) {
            puVar21 = (uint *)(lVar17 + 0x48);
          }
          if ((*puVar21 & 8) != 0) {
            pPVar16 = (PosixTime *)(lVar17 + 0x471);
          }
        }
        PVar15 = *pPVar16;
        if (7 < (byte)PVar15) {
          PVar15 = (PosixTime)*PTR_DAT_04bb5038;
          goto LAB_01b60d08;
        }
      }
      else {
        pPVar16 = (PosixTime *)PTR_DAT_04bb32e0;
        if (*(int *)(lVar17 + 0x15c) != 0) {
          pPVar16 = (PosixTime *)(lVar17 + 0x158);
        }
        PVar15 = *pPVar16;
        if (7 < (byte)PVar15) {
          if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            PVar15 = *(PosixTime *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01b60cac;
          }
          goto LAB_01b60cb4;
        }
LAB_01b60d08:
        if (7 < (byte)PVar15) {
          PVar15 = (PosixTime)0xff;
        }
      }
      PVar11 = *param_5;
      if (7 < (byte)PVar15) {
        PVar15 = (PosixTime)0xff;
      }
      if (7 < (byte)PVar11) {
        PVar11 = (PosixTime)0xff;
      }
      if (PVar15 != PVar11) goto LAB_01b612b8;
    }
LAB_01b60d34:
    local_78 = 0;
    local_70 = 0;
    FUN_01b6af30(param_4,&local_78,(ulong)&local_78 | 4,&local_70,(long)&local_70 + 4);
    puVar6 = PTR_DAT_04bc0610;
    puVar5 = PTR_DAT_04bc0608;
    local_98 = SUB81(local_78,0);
    uStack_97 = (undefined1)((ulong)local_78 >> 8);
    uStack_96 = (undefined2)((ulong)local_78 >> 0x10);
    if ((param_3 & 1) == 0) {
      if (((((((int)local_78 == 6) || ((int)local_78 == 0)) &&
            ((local_78._4_4_ == 6 || (local_78._4_4_ == 0)))) &&
           (((int)local_70 == 6 || ((int)local_70 == 0)))) &&
          ((local_70._4_4_ == 6 || (local_70._4_4_ == 0)))) &&
         (((((int)local_78 == 6 || (local_78._4_4_ == 6)) || ((int)local_70 == 6)) ||
          (local_70._4_4_ == 6)))) {
        local_68 = 6;
        if ((int)local_78 == 6) goto LAB_01b60eec;
        local_68 = 6;
        iVar1 = local_78._4_4_;
        if (local_78._4_4_ == 8) {
          iVar1 = 1;
        }
        local_98 = SUB41(iVar1,0);
        uStack_97 = (undefined1)((uint)iVar1 >> 8);
        uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
        if (iVar1 == 6) goto LAB_01b60f14;
        iVar1 = (int)local_70;
        if ((int)local_70 == 8) {
          iVar1 = 1;
        }
        local_98 = SUB41(iVar1,0);
        uStack_97 = (undefined1)((uint)iVar1 >> 8);
        uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
        local_68 = 6;
        if (iVar1 != 6) {
          local_68 = 6;
          iVar1 = local_70._4_4_;
          if (local_70._4_4_ == 8) {
            iVar1 = 1;
          }
          local_98 = SUB41(iVar1,0);
          uStack_97 = (undefined1)((uint)iVar1 >> 8);
          uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
          goto LAB_01b60f58;
        }
LAB_01b60f40:
        uVar12 = 2;
        goto LAB_01b60f6c;
      }
    }
    else if ((((((int)local_78 == 5) || ((int)local_78 == 0)) &&
              ((local_78._4_4_ == 5 || (local_78._4_4_ == 0)))) &&
             ((((int)local_70 == 5 || ((int)local_70 == 0)) &&
              ((local_70._4_4_ == 5 || (local_70._4_4_ == 0)))))) &&
            (((((int)local_78 == 5 || (local_78._4_4_ == 5)) || ((int)local_70 == 5)) ||
             (local_70._4_4_ == 5)))) {
      local_68 = 5;
      if ((int)local_78 == 5) {
LAB_01b60eec:
        uVar12 = 0;
      }
      else {
        local_68 = 5;
        iVar1 = local_78._4_4_;
        if (local_78._4_4_ == 8) {
          iVar1 = 1;
        }
        local_98 = SUB41(iVar1,0);
        uStack_97 = (undefined1)((uint)iVar1 >> 8);
        uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
        if (iVar1 == 5) {
LAB_01b60f14:
          uVar12 = 1;
        }
        else {
          local_68 = 5;
          iVar1 = (int)local_70;
          if ((int)local_70 == 8) {
            iVar1 = 1;
          }
          local_98 = SUB41(iVar1,0);
          uStack_97 = (undefined1)((uint)iVar1 >> 8);
          uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
          if (iVar1 == 5) goto LAB_01b60f40;
          local_68 = 5;
          iVar1 = local_70._4_4_;
          if (local_70._4_4_ == 8) {
            iVar1 = 1;
          }
          local_98 = SUB41(iVar1,0);
          uStack_97 = (undefined1)((uint)iVar1 >> 8);
          uStack_96 = (undefined2)((uint)iVar1 >> 0x10);
LAB_01b60f58:
          uVar12 = 3;
          if (CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)) != (uint)local_68) {
            uVar12 = 0xffffffff;
          }
        }
      }
LAB_01b60f6c:
      uStack_66 = 0;
      if (*param_4 == 0) {
LAB_01b61060:
        bVar19 = 0;
      }
      else {
        cVar18 = *PTR_DAT_04bc0608;
        do {
          if (cVar18 == '\0') {
            cVar18 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x24);
            if (-1 < (int)uVar4) {
              if (((byte *)((ulong)uVar4 + (long)param_4) == (byte *)0x0) ||
                 (bVar19 = *(byte *)((ulong)uVar4 + (long)param_4), 4 < bVar19)) goto LAB_01b61060;
              goto LAB_01b61064;
            }
            if (uVar4 != 0xffffffff) goto LAB_01b61060;
          }
          puVar21 = (uint *)(ulong)*param_4;
          bVar19 = 0;
          if ((*param_4 == 0) || (param_4 == puVar21)) goto LAB_01b61064;
          lVar17 = 0xc;
          if (*(char *)((long)param_4 + (10 - (long)puVar21)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)param_4 + (lVar17 - (long)puVar21);
          if (lVar17 == 0) goto LAB_01b61060;
          uVar9 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar21));
          *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
          bVar19 = 0;
          if (uVar9 == 0) goto LAB_01b61064;
          piVar22 = (int *)(lVar17 + 4);
          while (piVar22[-1] != 0x638d595d) {
            piVar22 = piVar22 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              bVar19 = 0;
              goto LAB_01b61064;
            }
          }
          iVar1 = 0;
          if (*piVar22 != -1) {
            iVar1 = *piVar22;
          }
          *(int *)(puVar6 + 0x24) = iVar1;
        } while (*param_4 != 0);
        bVar19 = 0;
      }
LAB_01b61064:
      puVar5 = PTR_DAT_04bb4f78;
      bVar8 = bVar19 != 3;
      if ((bVar19 == 3) || ((param_6 & 1) != 0)) goto LAB_01b612bc;
      if (param_5 == (PosixTime *)0x0) {
        if (*(long *)PTR_DAT_04bb46b0 != 0) {
          lVar17 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30)
                   )();
          puVar6 = PTR_DAT_04bc0610;
          puVar5 = PTR_DAT_04bc0608;
          if (lVar17 != 0) {
            local_7e = 0;
            local_86 = 0;
            uStack_80 = 0;
            uStack_8e = 0;
            uStack_88 = 0;
            if (*param_4 == 0) {
LAB_01b61464:
              uVar20 = 0;
            }
            else {
              cVar18 = *PTR_DAT_04bc0608;
              do {
                if (cVar18 == '\0') {
                  cVar18 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                }
                else {
                  uVar4 = *(uint *)(puVar6 + 8);
                  if (-1 < (int)uVar4) {
                    if ((undefined2 *)((ulong)uVar4 + (long)param_4) == (undefined2 *)0x0)
                    goto LAB_01b61464;
                    uVar20 = *(undefined2 *)((ulong)uVar4 + (long)param_4);
                    goto LAB_01b61468;
                  }
                  if (uVar4 != 0xffffffff) goto LAB_01b61464;
                }
                puVar21 = (uint *)(ulong)*param_4;
                uVar20 = 0;
                if ((*param_4 == 0) || (param_4 == puVar21)) goto LAB_01b61468;
                lVar14 = 0xc;
                if (*(char *)((long)param_4 + (10 - (long)puVar21)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)param_4 + (lVar14 - (long)puVar21);
                if (lVar14 == 0) goto LAB_01b61464;
                uVar9 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar21));
                *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
                uVar20 = 0;
                if (uVar9 == 0) goto LAB_01b61468;
                piVar22 = (int *)(lVar14 + 4);
                while (piVar22[-1] != 0x54706054) {
                  piVar22 = piVar22 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) {
                    uVar20 = 0;
                    goto LAB_01b61468;
                  }
                }
                iVar1 = 0;
                if (*piVar22 != -1) {
                  iVar1 = *piVar22;
                }
                *(int *)(puVar6 + 8) = iVar1;
              } while (*param_4 != 0);
              uVar20 = 0;
            }
LAB_01b61468:
            local_98 = SUB21(uVar20,0);
            uStack_97 = (undefined1)((ushort)uVar20 >> 8);
            uStack_96 = 0;
            uStack_94 = 0;
            local_90 = 0;
            if (uVar12 < 0xe) {
              *(undefined2 *)(local_34 + (ulong)uVar12 * 2 + -0x62) = param_2;
            }
            lVar14 = *(long *)(&LAB_00284e28 + lVar17);
            if (lVar14 == 0) {
              uVar9 = 0;
            }
            else {
              if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
                uVar9 = 0;
              }
              else {
                uVar9 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
                lVar14 = *(long *)(&LAB_00284e28 + lVar17);
                uVar9 = uVar9 & 0xffffffff;
                if (lVar14 == 0) goto LAB_01b614ec;
              }
              plVar13 = *(long **)(lVar14 + 0x20);
              if (plVar13 != (long *)0x0) {
                lVar14 = *(long *)(&LAB_00284e08 + lVar17);
                local_68 = (ushort)lVar14;
                uStack_66 = (undefined2)((ulong)lVar14 >> 0x10);
                uStack_64 = (undefined4)((ulong)lVar14 >> 0x20);
                uStack_60 = (undefined2)*(undefined8 *)(&LAB_00284e10 + lVar17);
                uStack_5e = (undefined6)((ulong)*(undefined8 *)(&LAB_00284e10 + lVar17) >> 0x10);
                uStack_58 = 0x28370;
                (**(code **)(*plVar13 + 0x20))(plVar13,&local_68);
              }
            }
LAB_01b614ec:
            lVar2 = *(long *)(&LAB_00284e08 + lVar17);
            lVar3 = *(long *)(&LAB_00284e10 + lVar17);
            lVar14 = *(long *)PTR_DAT_04bb32e8;
            lVar14 = *(long *)(lVar14 + 0x20) / 1000000000 + *(long *)(lVar14 + 8) +
                     (((*(long *)(lVar14 + 0x10) + (long)*(int *)(lVar14 + 0x38)) -
                      *(long *)(lVar14 + 8)) * 1000000000) / 1000000000;
            local_68 = (ushort)lVar14;
            uStack_66 = (undefined2)((ulong)lVar14 >> 0x10);
            uStack_64 = (undefined4)((ulong)lVar14 >> 0x20);
            uVar10 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
            local_68 = (ushort)uVar10;
            uStack_66 = (undefined2)((ulong)uVar10 >> 0x10);
            uStack_64 = (undefined4)((ulong)uVar10 >> 0x20);
            uVar10 = FUN_0280f530(lVar3 + lVar2,&local_68,local_34);
            if (local_34[0] != '\0') {
              FUN_0266f010(uVar10,&local_68);
            }
            local_68 = (ushort)uVar10;
            uStack_66 = (undefined2)((ulong)uVar10 >> 0x10);
            uStack_64 = (undefined4)((ulong)uVar10 >> 0x20);
            bVar8 = FUN_01b6c4a0(&local_68,&local_98,param_4,&local_78);
            if ((uVar9 & 1) == 0) goto LAB_01b612bc;
            lVar17 = *(long *)(&LAB_00284e28 + lVar17);
            goto joined_r0x01b615ac;
          }
        }
      }
      else {
        local_98 = *param_5;
        if (7 < (byte)local_98) {
          local_98 = (PosixTime)0xff;
        }
        lVar17 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_98,1);
        puVar7 = PTR_DAT_04bc0610;
        puVar6 = PTR_DAT_04bc0608;
        if (lVar17 != 0) {
          lVar14 = lVar17 + 0x194b0;
          if (*(long *)(lVar17 + 0x194b8) == 0) {
            lVar14 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if (*param_4 == 0) {
LAB_01b612ec:
            local_68 = 0;
          }
          else {
            cVar18 = *PTR_DAT_04bc0608;
            do {
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
              }
              else {
                uVar4 = *(uint *)(puVar7 + 8);
                if (-1 < (int)uVar4) {
                  if ((ushort *)((ulong)uVar4 + (long)param_4) == (ushort *)0x0) goto LAB_01b612ec;
                  local_68 = *(ushort *)((ulong)uVar4 + (long)param_4);
                  goto LAB_01b612f0;
                }
                if (uVar4 != 0xffffffff) goto LAB_01b612ec;
              }
              puVar21 = (uint *)(ulong)*param_4;
              local_68 = 0;
              if ((*param_4 == 0) || (param_4 == puVar21)) goto LAB_01b612f0;
              lVar17 = 0xc;
              if (*(char *)((long)param_4 + (10 - (long)puVar21)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)param_4 + (lVar17 - (long)puVar21);
              if (lVar17 == 0) goto LAB_01b612ec;
              uVar9 = (ulong)*(ushort *)((long)param_4 + (8 - (long)puVar21));
              *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
              local_68 = 0;
              if (uVar9 == 0) goto LAB_01b612f0;
              piVar22 = (int *)(lVar17 + 4);
              while (piVar22[-1] != 0x54706054) {
                piVar22 = piVar22 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  local_68 = 0;
                  goto LAB_01b612f0;
                }
              }
              iVar1 = 0;
              if (*piVar22 != -1) {
                iVar1 = *piVar22;
              }
              *(int *)(puVar7 + 8) = iVar1;
            } while (*param_4 != 0);
            local_68 = 0;
          }
LAB_01b612f0:
          uStack_66 = 0;
          uStack_64 = 0;
          uStack_60 = 0;
          if (uVar12 < 4) {
            *(undefined2 *)(local_34 + (ulong)uVar12 * 2 + -0x32) = param_2;
          }
          lVar17 = *(long *)(lVar14 + 0x2c638);
          if (lVar17 == 0) {
            uVar9 = 0;
          }
          else {
            if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
              lVar17 = *(long *)(lVar14 + 0x2c638);
              uVar9 = uVar9 & 0xffffffff;
              if (lVar17 == 0) goto LAB_01b61370;
            }
            plVar13 = *(long **)(lVar17 + 0x20);
            if (plVar13 != (long *)0x0) {
              lVar17 = *(long *)(lVar14 + 0x2c618);
              local_98 = SUB81(lVar17,0);
              uStack_97 = (undefined1)((ulong)lVar17 >> 8);
              uStack_96 = (undefined2)((ulong)lVar17 >> 0x10);
              uStack_94 = (undefined4)((ulong)lVar17 >> 0x20);
              local_90 = (undefined2)*(undefined8 *)(lVar14 + 0x2c620);
              uStack_8e = (undefined6)((ulong)*(undefined8 *)(lVar14 + 0x2c620) >> 0x10);
              uStack_88 = 0x2580;
              local_86 = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13,&local_98);
            }
          }
LAB_01b61370:
          lVar2 = *(long *)(lVar14 + 0x2c618);
          lVar3 = *(long *)(lVar14 + 0x2c620);
          PVar15 = *param_5;
          lVar17 = *(long *)PTR_DAT_04bb32e8;
          lVar17 = *(long *)(lVar17 + 0x20) / 1000000000 + *(long *)(lVar17 + 8) +
                   (((*(long *)(lVar17 + 0x10) + (long)*(int *)(lVar17 + 0x38)) -
                    *(long *)(lVar17 + 8)) * 1000000000) / 1000000000;
          local_98 = SUB81(lVar17,0);
          uStack_97 = (undefined1)((ulong)lVar17 >> 8);
          uStack_96 = (undefined2)((ulong)lVar17 >> 0x10);
          uStack_94 = (undefined4)((ulong)lVar17 >> 0x20);
          uVar10 = nn::time::ToCalendarTimeInUtc(&local_98);
          local_98 = SUB81(uVar10,0);
          uStack_97 = (undefined1)((ulong)uVar10 >> 8);
          uStack_96 = (undefined2)((ulong)uVar10 >> 0x10);
          uStack_94 = (undefined4)((ulong)uVar10 >> 0x20);
          uVar10 = FUN_02811460(lVar3 + lVar2,&local_98,local_34);
          if ((local_34[0] != '\0') && ((byte)PVar15 < 8)) {
            local_98 = PVar15;
            FUN_02583354(*(undefined8 *)puVar5,&local_98,1);
            FUN_01b675a0();
          }
          local_98 = SUB81(uVar10,0);
          uStack_97 = (undefined1)((ulong)uVar10 >> 8);
          uStack_96 = (undefined2)((ulong)uVar10 >> 0x10);
          uStack_94 = (undefined4)((ulong)uVar10 >> 0x20);
          bVar8 = FUN_01b6b2d0(&local_98,&local_68,param_4,&local_78,param_5);
          if ((uVar9 & 1) == 0) goto LAB_01b612bc;
          lVar17 = *(long *)(lVar14 + 0x2c638);
joined_r0x01b615ac:
          if ((lVar17 != 0) && (*(undefined8 **)(lVar17 + 0x18) != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          }
          goto LAB_01b612bc;
        }
      }
    }
  }
LAB_01b612b8:
  bVar8 = 0;
LAB_01b612bc:
  return bVar8 & 1;
}

