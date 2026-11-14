
byte FUN_01b5e7c0(undefined8 param_1,undefined8 *param_2,uint *param_3,PosixTime *param_4,
                 ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  undefined1 uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  PosixTime PVar22;
  long *plVar23;
  PosixTime PVar24;
  PosixTime *pPVar25;
  long lVar26;
  char cVar27;
  byte bVar28;
  uint *puVar29;
  undefined2 uVar30;
  int *piVar31;
  long lVar32;
  long lVar33;
  PosixTime local_c0;
  undefined1 uStack_bf;
  ushort uStack_be;
  undefined4 uStack_bc;
  undefined2 local_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined2 local_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined4 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_8c;
  undefined4 local_88;
  ushort local_84 [4];
  undefined4 uStack_7c;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  ulong local_70;
  undefined8 local_68;
  
  if (param_3 != (uint *)0x0) {
    if ((param_5 & 1) == 0) {
      plVar23 = *(long **)PTR_DAT_04bb27d0;
      if ((((plVar23 != (long *)0x0) && (plVar23[5] != 0)) && ((int)plVar23[0x10] == 1)) ||
         (((plVar23[2] != 0 && ((*(uint *)(plVar23 + 0x10) & 0xfffffffe) == 2)) &&
          (*(int *)(plVar23[2] + 0x3e4) != 1)))) goto LAB_01b5ff1c;
      if ((param_4 == (PosixTime *)0x0) || (*(uint *)(plVar23 + 0x10) < 2)) goto LAB_01b5e93c;
      lVar26 = *(long *)PTR_DAT_04bb39b0;
      if (lVar26 == 0) {
        PVar24 = (PosixTime)*PTR_DAT_04bb32e0;
LAB_01b5e8b4:
        if ((byte)PVar24 < 8) goto LAB_01b5e910;
LAB_01b5e8bc:
        lVar26 = *plVar23;
        bVar11 = *(byte *)(lVar26 + 0x473);
        pPVar25 = (PosixTime *)PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar29 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar29 = (uint *)(lVar26 + 0x48);
          }
          if ((*puVar29 & 8) != 0) {
            pPVar25 = (PosixTime *)(lVar26 + 0x471);
          }
        }
        PVar24 = *pPVar25;
        if (7 < (byte)PVar24) {
          PVar24 = (PosixTime)*PTR_DAT_04bb5038;
          goto LAB_01b5e910;
        }
      }
      else {
        pPVar25 = (PosixTime *)PTR_DAT_04bb32e0;
        if (*(int *)(lVar26 + 0x15c) != 0) {
          pPVar25 = (PosixTime *)(lVar26 + 0x158);
        }
        PVar24 = *pPVar25;
        if (7 < (byte)PVar24) {
          if ((*(int *)(lVar26 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            PVar24 = *(PosixTime *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01b5e8b4;
          }
          goto LAB_01b5e8bc;
        }
LAB_01b5e910:
        if (7 < (byte)PVar24) {
          PVar24 = (PosixTime)0xff;
        }
      }
      PVar22 = *param_4;
      if (7 < (byte)PVar24) {
        PVar24 = (PosixTime)0xff;
      }
      if (7 < (byte)PVar22) {
        PVar22 = (PosixTime)0xff;
      }
      if (PVar24 != PVar22) goto LAB_01b5ff1c;
    }
LAB_01b5e93c:
    local_a0 = 0;
    local_98 = 0;
    FUN_01b6af30(param_3,&local_a0,(ulong)&local_a0 | 4,&local_98,(long)&local_98 + 4);
    puVar2 = PTR_DAT_04bc0610;
    puVar10 = PTR_DAT_04bc0608;
    uVar15 = (uint)local_a0;
    uVar17 = local_a0._4_4_;
    uVar5 = (uint)local_98;
    uVar6 = local_98._4_4_;
    if ((((((uint)local_a0 < 0x11) && ((1 << (ulong)((uint)local_a0 & 0x1f) & 0x1001dU) != 0)) &&
         (local_a0._4_4_ < 0x11)) &&
        ((((1 << (ulong)(local_a0._4_4_ & 0x1f) & 0x1001dU) != 0 && ((uint)local_98 < 0x11)) &&
         (((1 << (ulong)((uint)local_98 & 0x1f) & 0x1001dU) != 0 &&
          ((local_98._4_4_ < 0x11 && ((1 << (ulong)(local_98._4_4_ & 0x1f) & 0x1001dU) != 0))))))))
       && (((uint)local_a0 == 2 ||
           (((local_a0._4_4_ == 2 || ((uint)local_98 == 2)) || (local_98._4_4_ == 2)))))) {
LAB_01b5eae0:
      uStack_be = 0;
      uStack_bf = 0;
      local_c0 = (PosixTime)0x2;
      if (*param_3 == 0) {
LAB_01b5ebd0:
        bVar28 = 0;
      }
      else {
        cVar27 = *PTR_DAT_04bc0608;
        do {
          if (cVar27 == '\0') {
            cVar27 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar10 = 1;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar14 = *(uint *)(puVar2 + 0x24);
            if (-1 < (int)uVar14) {
              if (((byte *)((ulong)uVar14 + (long)param_3) == (byte *)0x0) ||
                 (bVar28 = *(byte *)((ulong)uVar14 + (long)param_3), 4 < bVar28)) goto LAB_01b5ebd0;
              goto LAB_01b5ebd4;
            }
            if (uVar14 != 0xffffffff) goto LAB_01b5ebd0;
          }
          puVar29 = (uint *)(ulong)*param_3;
          bVar28 = 0;
          if ((*param_3 == 0) || (param_3 == puVar29)) goto LAB_01b5ebd4;
          lVar26 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar29)) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)param_3 + (lVar26 - (long)puVar29);
          if (lVar26 == 0) goto LAB_01b5ebd0;
          uVar18 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar29));
          *(undefined4 *)(puVar2 + 0x24) = 0xfffffffe;
          bVar28 = 0;
          if (uVar18 == 0) goto LAB_01b5ebd4;
          piVar31 = (int *)(lVar26 + 4);
          while (piVar31[-1] != 0x638d595d) {
            piVar31 = piVar31 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) {
              bVar28 = 0;
              goto LAB_01b5ebd4;
            }
          }
          iVar16 = 0;
          if (*piVar31 != -1) {
            iVar16 = *piVar31;
          }
          *(int *)(puVar2 + 0x24) = iVar16;
        } while (*param_3 != 0);
        bVar28 = 0;
      }
LAB_01b5ebd4:
      puVar10 = PTR_DAT_04bb43c0;
      bVar11 = bVar28 != 3;
      if ((bVar28 == 3) || ((param_5 & 1) != 0)) goto LAB_01b5ff20;
      lVar26 = *(long *)PTR_DAT_04bb43c0;
      uVar14 = FUN_0277d6c4(param_2);
      if (*(long *)puVar10 == 0) {
LAB_01b5ed58:
        lVar26 = *(long *)PTR_DAT_04bbbc68;
        if (((lVar26 != 0) &&
            (((*(long *)(lVar26 + 0xb0) != 0 && (*(long *)(*(long *)(lVar26 + 0xb0) + 8) != 0)) &&
             (*(long *)(lVar26 + 0x488) != 0)))) &&
           (((*(long *)(*(long *)(lVar26 + 0x488) + 8) != 0 && (*(long *)(lVar26 + 0x2b0) != 0)) &&
            (*(long *)(*(long *)(lVar26 + 0x2b0) + 8) != 0)))) {
          uVar14 = FUN_0277d6c4(param_2);
          uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar14 < *(uint *)(lVar26 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) goto LAB_01b5ec30;
        }
        goto LAB_01b5ff1c;
      }
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((*(uint *)(lVar26 + 0x1d8) <= uVar14) ||
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_01b5ed58;
LAB_01b5ec30:
      puVar2 = PTR_DAT_04bb4f78;
      if (param_4 == (PosixTime *)0x0) {
        if (*(long *)PTR_DAT_04bb46b0 != 0) {
          lVar26 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30)
                   )();
          puVar9 = PTR_DAT_04bc0610;
          puVar2 = PTR_DAT_04bc0608;
          if (lVar26 != 0) {
            uVar14 = *param_3;
            local_a6 = 0;
            uStack_ae = 0;
            uStack_a8 = 0;
            uStack_b6 = 0;
            uStack_b4 = 0;
            local_b0 = 0;
            if (uVar14 != 0) {
              cVar27 = *PTR_DAT_04bc0608;
              do {
                if (cVar27 == '\0') {
                  cVar27 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  uVar14 = *param_3;
                }
                else {
                  uVar8 = *(uint *)(puVar9 + 8);
                  if (-1 < (int)uVar8) {
                    if ((undefined2 *)((ulong)uVar8 + (long)param_3) != (undefined2 *)0x0) {
                      uVar30 = *(undefined2 *)((ulong)uVar8 + (long)param_3);
                      goto LAB_01b5f82c;
                    }
                    break;
                  }
                  if (uVar8 != 0xffffffff) break;
                }
                puVar29 = (uint *)(ulong)uVar14;
                uVar30 = 0;
                if ((puVar29 == (uint *)0x0) || (param_3 == puVar29)) goto LAB_01b5f82c;
                lVar33 = 0xc;
                if (*(char *)((long)param_3 + (10 - (long)puVar29)) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)param_3 + (lVar33 - (long)puVar29);
                uVar30 = 0;
                if (lVar33 == 0) goto LAB_01b5f82c;
                uVar18 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar29));
                *(undefined4 *)(puVar9 + 8) = 0xfffffffe;
                if (uVar18 == 0) break;
                piVar31 = (int *)(lVar33 + 4);
                while (piVar31[-1] != 0x54706054) {
                  piVar31 = piVar31 + 2;
                  uVar18 = uVar18 - 1;
                  if (uVar18 == 0) goto LAB_01b5f828;
                }
                iVar16 = 0;
                if (*piVar31 != -1) {
                  iVar16 = *piVar31;
                }
                *(int *)(puVar9 + 8) = iVar16;
                uVar14 = *param_3;
                if (uVar14 == 0) break;
              } while( true );
            }
LAB_01b5f828:
            uVar30 = 0;
LAB_01b5f82c:
            puVar2 = PTR_DAT_04bb37e0;
            local_c0 = SUB21(uVar30,0);
            uStack_bf = (undefined1)((ushort)uVar30 >> 8);
            lVar33 = 0;
            if (uVar15 == 8) {
              uVar15 = 1;
            }
            uStack_be = 0;
            uStack_bc = 0;
            local_b8 = 0;
            local_84[2] = (ushort)uVar15;
            local_84[3] = (ushort)(uVar15 >> 0x10);
            if (uVar15 == 2) {
LAB_01b5f8cc:
              local_68 = *(undefined8 *)PTR_DAT_04bb37e0;
              lVar32 = *(long *)PTR_DAT_04bbbc68;
              if ((((lVar32 == 0) || (*(long *)(lVar32 + 0xb0) == 0)) ||
                  (*(long *)(*(long *)(lVar32 + 0xb0) + 8) == 0)) ||
                 (((*(long *)(lVar32 + 0x488) == 0 ||
                   (*(long *)(*(long *)(lVar32 + 0x488) + 8) == 0)) ||
                  ((*(long *)(lVar32 + 0x2b0) == 0 ||
                   (*(long *)(*(long *)(lVar32 + 0x2b0) + 8) == 0)))))) {
LAB_01b5f9c8:
                local_68 = *param_2;
              }
              else {
                uVar15 = FUN_0277d6c4(param_2);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
                if ((*(uint *)(lVar32 + 0x1d8) <= uVar15) ||
                   (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
                goto LAB_01b5f9c8;
                FUN_0124c030(local_84 + 2,param_2);
                if (((short)DAT_053360a8 != -2) &&
                   (uVar18 = FUN_01253750(local_84 + 2,&DAT_053360a8), (uVar18 & 1) != 0)) {
                  local_68 = CONCAT44(DAT_053360ac,DAT_053360a8);
                }
                if ((((short)local_68 == -2) &&
                    (uVar18 = FUN_0124c70c(local_84 + 2,&local_68), (uVar18 & 1) == 0)) &&
                   (uVar18 = FUN_0124c4c0(local_84 + 2,&local_68,1), (uVar18 & 1) == 0))
                goto LAB_01b5ff1c;
                DAT_053360a8 = *(undefined4 *)puVar2;
                DAT_053360ac = *(undefined4 *)(puVar2 + 4);
              }
              uVar13 = FUN_0277d6c4(&local_68);
              local_84[lVar33 + -0x1d] = uVar13;
            }
            else {
              if (uVar17 == 8) {
                uVar17 = 1;
              }
              local_84[2] = (ushort)uVar17;
              local_84[3] = (ushort)(uVar17 >> 0x10);
              if (uVar17 == 2) {
                lVar33 = 1;
                goto LAB_01b5f8cc;
              }
              lVar33 = 2;
              if (uVar5 == 8) {
                uVar5 = 1;
              }
              local_84[2] = (ushort)uVar5;
              local_84[3] = (ushort)(uVar5 >> 0x10);
              if (uVar5 == 2) goto LAB_01b5f8cc;
              local_68 = CONCAT44(local_68._4_4_,2);
              if (uVar6 == 8) {
                uVar6 = 1;
              }
              local_84[2] = (ushort)uVar6;
              local_84[3] = (ushort)(uVar6 >> 0x10);
              if (uVar6 == 2) {
                lVar33 = 3;
                goto LAB_01b5f8cc;
              }
            }
            lVar32 = *(long *)puVar10;
            uVar15 = FUN_0277d6c4(param_2);
            lVar33 = *(long *)puVar10;
            if (lVar33 != 0) {
              lVar32 = *(long *)(lVar32 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
              if ((*(uint *)(lVar32 + 0x1d8) <= uVar15) ||
                 (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
              goto LAB_01b5faf4;
              local_70 = 0;
              uStack_74 = *(undefined4 *)((long)param_2 + 4);
              puVar2 = PTR_DAT_04bc0510 + 0x10;
              uStack_78 = (undefined2)*(undefined4 *)param_2;
              uStack_76 = (undefined2)((uint)*(undefined4 *)param_2 >> 0x10);
              local_84[2] = (ushort)puVar2;
              local_84[3] = (ushort)((ulong)puVar2 >> 0x10);
              uStack_7c = (undefined4)((ulong)puVar2 >> 0x20);
              uVar15 = FUN_0277d6c4(&uStack_78);
              if (*(long *)puVar10 != 0) {
                lVar33 = *(long *)(lVar33 + 0x57e58);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar33 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                  lVar33 = *(long *)PTR_DAT_04bc0428;
                  uVar15 = FUN_0277d6c4(param_2);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                  if (uVar15 < *(uint *)(lVar33 + 0x1d8)) {
                    uVar18 = *(ulong *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar15 * 8);
                    if (uVar18 != 0) {
                      local_70 = uVar18;
                    }
                  }
                }
              }
              iVar16 = (uint)local_a0;
              if ((uint)local_a0 == 8) {
                iVar16 = 1;
              }
              if (iVar16 == 3) {
                lVar33 = 0;
                local_68._0_4_ = 3;
LAB_01b5fc50:
                local_8c = 3;
                iVar16 = FUN_01ad7260(local_84 + 2);
                if ((iVar16 == 0) ||
                   (puVar19 = (ushort *)FUN_01afd600(local_84 + 2), puVar19 == (ushort *)0x0)) {
                  uVar13 = 0;
                }
                else {
                  uVar15 = *puVar19 & 7;
                  uVar17 = FUN_01ad7260(local_84 + 2);
                  if (uVar17 <= uVar15) {
                    uVar15 = 0;
                  }
                  uVar13 = (ushort)uVar15;
                }
                local_84[lVar33 + -0x1d] = uVar13;
                iVar16 = (uint)local_a0;
              }
              else {
                iVar16 = local_a0._4_4_;
                if (local_a0._4_4_ == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 3) {
                  lVar33 = 1;
                  local_68._0_4_ = 3;
                  goto LAB_01b5fc50;
                }
                lVar33 = 3;
                iVar16 = (uint)local_98;
                if ((uint)local_98 == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 3) {
                  lVar33 = 2;
                  local_68._0_4_ = 3;
                  goto LAB_01b5fc50;
                }
                local_68._0_4_ = local_98._4_4_;
                if (local_98._4_4_ == 8) {
                  local_68._0_4_ = 1;
                }
                iVar16 = (uint)local_a0;
                if ((uint)local_68 == 3) goto LAB_01b5fc50;
              }
              if (iVar16 == 8) {
                iVar16 = 1;
              }
              if (iVar16 == 4) {
                lVar33 = 0;
LAB_01b5fd48:
                local_68._0_4_ = 4;
                local_8c = 4;
                iVar16 = FUN_01afcfa0(local_84 + 2);
                if ((iVar16 == 0) ||
                   (puVar19 = (ushort *)FUN_01afd600(local_84 + 2), puVar19 == (ushort *)0x0)) {
                  local_68._0_4_ = 0;
                }
                else {
                  uVar15 = *puVar19 >> 3 & 3;
                  local_68._0_4_ = 0;
                  if (uVar15 != 3) {
                    local_68._0_4_ = uVar15;
                  }
                }
                if ((uint)local_68 < 2) {
                  uVar13 = FUN_01ae3a80(local_84 + 2);
                  local_84[lVar33 + -0x1d] = uVar13;
                }
              }
              else {
                iVar16 = local_a0._4_4_;
                if (local_a0._4_4_ == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 4) {
                  lVar33 = 1;
                  goto LAB_01b5fd48;
                }
                iVar16 = (uint)local_98;
                if ((uint)local_98 == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 4) {
                  lVar33 = 2;
                  goto LAB_01b5fd48;
                }
                iVar16 = local_98._4_4_;
                if (local_98._4_4_ == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 4) {
                  lVar33 = 3;
                  goto LAB_01b5fd48;
                }
              }
              iVar16 = (uint)local_a0;
              if ((uint)local_a0 == 8) {
                iVar16 = 1;
              }
              if (iVar16 == 0x10) {
                lVar33 = 0;
LAB_01b5fe50:
                local_8c = 0x10;
                uVar15 = (uint)*(ushort *)PTR_DAT_04bb37e0;
                local_68 = *(undefined8 *)PTR_DAT_04bb37e0;
                uVar18 = FUN_01b05ea8(local_84 + 2);
                if ((uVar18 & 1) == 0) {
                  uVar18 = FUN_01af48b8(local_84 + 2);
                  if ((uVar18 & 1) != 0) {
                    FUN_026129ac(local_84,param_2);
                    if ((local_84[0] < 0x800) &&
                       ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(local_84[0] >> 3) + 0xe99e0)
                         >> (ulong)(local_84[0] & 7) & 1) != 0)) {
                      FUN_02621f00(&local_8c);
                      uVar15 = local_8c & 0xffff;
                      local_68 = CONCAT44(local_88,local_8c);
                    }
                    if (uVar15 == 0xfffe) goto LAB_01b5ff1c;
                  }
                }
                else {
                  FUN_02621c70(*(undefined8 *)PTR_DAT_04bb46f0,&local_68,param_2);
                  if ((short)local_68 == -2) goto LAB_01b5ff1c;
                }
                uVar13 = FUN_0277d6c4(&local_68);
                local_84[lVar33 + -0x1d] = uVar13;
                iVar16 = (uint)local_a0;
              }
              else {
                iVar16 = local_a0._4_4_;
                if (local_a0._4_4_ == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 0x10) {
                  lVar33 = 1;
                  goto LAB_01b5fe50;
                }
                iVar16 = (uint)local_98;
                if ((uint)local_98 == 8) {
                  iVar16 = 1;
                }
                if (iVar16 == 0x10) {
                  lVar33 = 2;
                  goto LAB_01b5fe50;
                }
                local_8c = 0x10;
                iVar4 = local_98._4_4_;
                if (local_98._4_4_ == 8) {
                  iVar4 = 1;
                }
                local_68 = CONCAT44(local_68._4_4_,iVar4);
                iVar16 = (uint)local_a0;
                if (iVar4 == 0x10) {
                  lVar33 = 3;
                  goto LAB_01b5fe50;
                }
              }
LAB_01b5ff5c:
              if (iVar16 == 8) {
                iVar16 = 1;
              }
              puVar3 = &LAB_00284e00 + lVar26;
              local_84[2] = (ushort)iVar16;
              local_84[3] = (ushort)((uint)iVar16 >> 0x10);
              if (iVar16 == 1) {
                lVar33 = 0;
LAB_01b60014:
                local_84[lVar33 + -0x1d] = 1;
              }
              else {
                iVar16 = local_a0._4_4_;
                if (local_a0._4_4_ == 8) {
                  iVar16 = 1;
                }
                local_84[2] = (ushort)iVar16;
                local_84[3] = (ushort)((uint)iVar16 >> 0x10);
                if (iVar16 == 1) {
                  lVar33 = 1;
                  goto LAB_01b60014;
                }
                iVar16 = (uint)local_98;
                if ((uint)local_98 == 8) {
                  iVar16 = 1;
                }
                local_84[2] = (ushort)iVar16;
                local_84[3] = (ushort)((uint)iVar16 >> 0x10);
                if (iVar16 == 1) {
                  lVar33 = 2;
                  goto LAB_01b60014;
                }
                iVar16 = local_98._4_4_;
                if (local_98._4_4_ == 8) {
                  iVar16 = 1;
                }
                local_84[2] = (ushort)iVar16;
                local_84[3] = (ushort)((uint)iVar16 >> 0x10);
                if (iVar16 == 1) {
                  lVar33 = 3;
                  goto LAB_01b60014;
                }
              }
              local_68 = CONCAT44(local_68._4_4_,1);
              uStack_78 = SUB82(puVar3,0);
              uStack_76 = (undefined2)((ulong)puVar3 >> 0x10);
              uStack_74 = (undefined4)((ulong)puVar3 >> 0x20);
              local_70 = local_70 & 0xffffffffffffff00;
              if (*(long *)(&LAB_00284e28 + lVar26) == 0) {
                uVar12 = 0;
              }
              else {
                puVar21 = *(undefined8 **)(*(long *)(&LAB_00284e28 + lVar26) + 0x10);
                uVar12 = 0;
                if (puVar21 != (undefined8 *)0x0) {
                  uVar12 = (**(code **)*puVar21)();
                }
              }
              local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar12,(undefined1)local_70)) &
                         0xffffffffffff01ff;
              local_84[2] = 0x8ae0;
              local_84[3] = 0x4a3;
              uStack_7c = 0;
              FUN_01b69394(local_84 + 2);
              local_68 = FUN_01b692d8();
              bVar11 = FUN_01b6c4a0(&local_68,&local_c0,param_3,&local_a0);
              FUN_02640184(local_84 + 2);
              goto LAB_01b5ff20;
            }
LAB_01b5faf4:
            if ((((uint)local_a0 != 3) && ((local_a0._4_4_ != 3 && ((uint)local_98 != 3)))) &&
               (local_98._4_4_ != 3)) {
              local_68 = CONCAT44(local_68._4_4_,4);
              if (((((((uint)local_a0 != 4) && (local_a0._4_4_ != 4)) && ((uint)local_98 != 4)) &&
                   ((local_98._4_4_ != 4 && (local_8c = 0x10, (uint)local_a0 != 0x10)))) &&
                  (local_a0._4_4_ != 0x10)) &&
                 (((uint)local_98 != 0x10 && (iVar16 = (uint)local_a0, local_98._4_4_ != 0x10))))
              goto LAB_01b5ff5c;
            }
          }
        }
        goto LAB_01b5ff1c;
      }
      local_c0 = *param_4;
      if (7 < (byte)local_c0) {
        local_c0 = (PosixTime)0xff;
      }
      lVar26 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_c0,1);
      puVar1 = PTR_DAT_04bc0610;
      puVar9 = PTR_DAT_04bc0608;
      if (lVar26 == 0) goto LAB_01b5ff1c;
      lVar33 = lVar26 + 0x194b0;
      if (*(long *)(lVar26 + 0x194b8) == 0) {
        lVar33 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      }
      uVar15 = *param_3;
      if (uVar15 != 0) {
        cVar27 = *PTR_DAT_04bc0608;
        do {
          if (cVar27 == '\0') {
            cVar27 = '\x01';
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *puVar9 = 1;
            *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
            uVar15 = *param_3;
          }
          else {
            uVar17 = *(uint *)(puVar1 + 8);
            if (-1 < (int)uVar17) {
              if ((undefined2 *)((ulong)uVar17 + (long)param_3) != (undefined2 *)0x0) {
                local_84[2] = *(undefined2 *)((ulong)uVar17 + (long)param_3);
                goto LAB_01b5eee8;
              }
              break;
            }
            if (uVar17 != 0xffffffff) break;
          }
          puVar29 = (uint *)(ulong)uVar15;
          local_84[2] = 0;
          if ((puVar29 == (uint *)0x0) || (param_3 == puVar29)) goto LAB_01b5eee8;
          lVar26 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar29)) != '\0') {
            lVar26 = 0x1c;
          }
          lVar26 = (long)param_3 + (lVar26 - (long)puVar29);
          local_84[2] = 0;
          if (lVar26 == 0) goto LAB_01b5eee8;
          uVar18 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar29));
          *(undefined4 *)(puVar1 + 8) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar31 = (int *)(lVar26 + 4);
          while (piVar31[-1] != 0x54706054) {
            piVar31 = piVar31 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_01b5eee4;
          }
          iVar16 = 0;
          if (*piVar31 != -1) {
            iVar16 = *piVar31;
          }
          *(int *)(puVar1 + 8) = iVar16;
          uVar15 = *param_3;
          if (uVar15 == 0) break;
        } while( true );
      }
LAB_01b5eee4:
      local_84[2] = 0;
LAB_01b5eee8:
      puVar9 = PTR_DAT_04bb37e0;
      local_84[3] = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      lVar26 = 0;
      iVar16 = (uint)local_a0;
      if ((uint)local_a0 == 8) {
        iVar16 = 1;
      }
      local_c0 = SUB41(iVar16,0);
      uStack_bf = (undefined1)((uint)iVar16 >> 8);
      uStack_be = (ushort)((uint)iVar16 >> 0x10);
      if (iVar16 == 2) {
LAB_01b5efa0:
        local_68 = *(undefined8 *)PTR_DAT_04bb37e0;
        lVar32 = *(long *)PTR_DAT_04bbbc68;
        if ((((lVar32 == 0) || (*(long *)(lVar32 + 0xb0) == 0)) ||
            (*(long *)(*(long *)(lVar32 + 0xb0) + 8) == 0)) ||
           (((*(long *)(lVar32 + 0x488) == 0 || (*(long *)(*(long *)(lVar32 + 0x488) + 8) == 0)) ||
            ((*(long *)(lVar32 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar32 + 0x2b0) + 8) == 0))))))
        {
LAB_01b5f094:
          local_68 = *param_2;
        }
        else {
          uVar15 = FUN_0277d6c4(param_2);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
          if ((*(uint *)(lVar32 + 0x1d8) <= uVar15) ||
             (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_01b5f094;
          FUN_0124c030(&local_c0,param_2);
          if (((short)DAT_053360a8 != -2) &&
             (uVar18 = FUN_01253750(&local_c0,&DAT_053360a8), (uVar18 & 1) != 0)) {
            local_68 = CONCAT44(DAT_053360ac,DAT_053360a8);
          }
          if ((((short)local_68 == -2) &&
              (uVar18 = FUN_0124c70c(&local_c0,&local_68), (uVar18 & 1) == 0)) &&
             (uVar18 = FUN_0124c4c0(&local_c0,&local_68,1), (uVar18 & 1) == 0)) goto LAB_01b5ff1c;
          DAT_053360a8 = *(undefined4 *)puVar9;
          DAT_053360ac = *(undefined4 *)(puVar9 + 4);
        }
        uVar13 = FUN_0277d6c4(&local_68);
        local_84[lVar26 + 3] = uVar13;
      }
      else {
        iVar16 = local_a0._4_4_;
        if (local_a0._4_4_ == 8) {
          iVar16 = 1;
        }
        local_c0 = SUB41(iVar16,0);
        uStack_bf = (undefined1)((uint)iVar16 >> 8);
        uStack_be = (ushort)((uint)iVar16 >> 0x10);
        if (iVar16 == 2) {
          lVar26 = 1;
          goto LAB_01b5efa0;
        }
        lVar26 = 2;
        iVar16 = (uint)local_98;
        if ((uint)local_98 == 8) {
          iVar16 = 1;
        }
        local_c0 = SUB41(iVar16,0);
        uStack_bf = (undefined1)((uint)iVar16 >> 8);
        uStack_be = (ushort)((uint)iVar16 >> 0x10);
        if (iVar16 == 2) goto LAB_01b5efa0;
        local_68 = CONCAT44(local_68._4_4_,2);
        iVar16 = local_98._4_4_;
        if (local_98._4_4_ == 8) {
          iVar16 = 1;
        }
        local_c0 = SUB41(iVar16,0);
        uStack_bf = (undefined1)((uint)iVar16 >> 8);
        uStack_be = (ushort)((uint)iVar16 >> 0x10);
        if (iVar16 == 2) {
          lVar26 = 3;
          goto LAB_01b5efa0;
        }
      }
      lVar32 = *(long *)puVar10;
      uVar15 = FUN_0277d6c4(param_2);
      lVar26 = *(long *)puVar10;
      if (lVar26 != 0) {
        lVar32 = *(long *)(lVar32 + 0x57e58);
        uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
        if ((*(uint *)(lVar32 + 0x1d8) <= uVar15) ||
           (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_01b5f1c0;
        local_b0 = 0;
        uStack_ae = 0;
        uStack_b4 = *(undefined4 *)((long)param_2 + 4);
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        local_b8 = (undefined2)*(undefined4 *)param_2;
        uStack_b6 = (undefined2)((uint)*(undefined4 *)param_2 >> 0x10);
        local_c0 = SUB81(puVar1,0);
        uStack_bf = (undefined1)((ulong)puVar1 >> 8);
        uStack_be = (ushort)((ulong)puVar1 >> 0x10);
        uStack_bc = (undefined4)((ulong)puVar1 >> 0x20);
        uVar15 = FUN_0277d6c4(&local_b8);
        if (*(long *)puVar10 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar15 = FUN_0277d6c4(param_2);
            uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if ((uVar15 < *(uint *)(lVar26 + 0x1d8)) &&
               (lVar26 = *(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8), lVar26 != 0))
            {
              local_b0 = (undefined2)lVar26;
              uStack_ae = (undefined6)((ulong)lVar26 >> 0x10);
            }
          }
        }
        iVar16 = (uint)local_a0;
        if ((uint)local_a0 == 8) {
          iVar16 = 1;
        }
        if (iVar16 == 3) {
          lVar26 = 0;
          local_68._0_4_ = 3;
LAB_01b5f31c:
          local_8c = 3;
          iVar16 = FUN_01ad7260(&local_c0);
          if ((iVar16 == 0) ||
             (puVar19 = (ushort *)FUN_01afd600(&local_c0), puVar19 == (ushort *)0x0)) {
            uVar13 = 0;
          }
          else {
            uVar15 = *puVar19 & 7;
            uVar17 = FUN_01ad7260(&local_c0);
            if (uVar17 <= uVar15) {
              uVar15 = 0;
            }
            uVar13 = (ushort)uVar15;
          }
          local_84[lVar26 + 3] = uVar13;
          iVar16 = (uint)local_a0;
        }
        else {
          iVar16 = local_a0._4_4_;
          if (local_a0._4_4_ == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 3) {
            lVar26 = 1;
            local_68._0_4_ = 3;
            goto LAB_01b5f31c;
          }
          lVar26 = 3;
          iVar16 = (uint)local_98;
          if ((uint)local_98 == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 3) {
            lVar26 = 2;
            local_68._0_4_ = 3;
            goto LAB_01b5f31c;
          }
          local_68._0_4_ = local_98._4_4_;
          if (local_98._4_4_ == 8) {
            local_68._0_4_ = 1;
          }
          iVar16 = (uint)local_a0;
          if ((uint)local_68 == 3) goto LAB_01b5f31c;
        }
        if (iVar16 == 8) {
          iVar16 = 1;
        }
        if (iVar16 == 4) {
          lVar26 = 0;
LAB_01b5f414:
          local_68._0_4_ = 4;
          local_8c = 4;
          iVar16 = FUN_01afcfa0(&local_c0);
          if ((iVar16 == 0) ||
             (puVar19 = (ushort *)FUN_01afd600(&local_c0), puVar19 == (ushort *)0x0)) {
            local_68._0_4_ = 0;
          }
          else {
            uVar15 = *puVar19 >> 3 & 3;
            local_68._0_4_ = 0;
            if (uVar15 != 3) {
              local_68._0_4_ = uVar15;
            }
          }
          if ((uint)local_68 < 2) {
            uVar13 = FUN_01ae3a80(&local_c0);
            local_84[lVar26 + 3] = uVar13;
          }
        }
        else {
          iVar16 = local_a0._4_4_;
          if (local_a0._4_4_ == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 4) {
            lVar26 = 1;
            goto LAB_01b5f414;
          }
          iVar16 = (uint)local_98;
          if ((uint)local_98 == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 4) {
            lVar26 = 2;
            goto LAB_01b5f414;
          }
          iVar16 = local_98._4_4_;
          if (local_98._4_4_ == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 4) {
            lVar26 = 3;
            goto LAB_01b5f414;
          }
        }
        iVar16 = (uint)local_a0;
        if ((uint)local_a0 == 8) {
          iVar16 = 1;
        }
        if (iVar16 == 0x10) {
          lVar26 = 0;
LAB_01b5f51c:
          local_8c = 0x10;
          uVar15 = (uint)*(ushort *)puVar9;
          local_68 = *(undefined8 *)puVar9;
          uVar18 = FUN_01b05ea8(&local_c0);
          if ((uVar18 & 1) == 0) {
            uVar18 = FUN_01af48b8(&local_c0);
            if ((uVar18 & 1) != 0) {
              FUN_026129ac(local_84,param_2);
              if ((local_84[0] < 0x800) &&
                 ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(local_84[0] >> 3) + 0xe99e0) >>
                   (ulong)(local_84[0] & 7) & 1) != 0)) {
                FUN_02621f00(&local_8c);
                uVar15 = local_8c & 0xffff;
                local_68 = CONCAT44(local_88,local_8c);
              }
              if (uVar15 == 0xfffe) goto LAB_01b5ff1c;
            }
          }
          else {
            FUN_02621c70(*(undefined8 *)PTR_DAT_04bb46f0,&local_68,param_2);
            if ((short)local_68 == -2) goto LAB_01b5ff1c;
          }
          uVar13 = FUN_0277d6c4(&local_68);
          local_84[lVar26 + 3] = uVar13;
          iVar16 = (uint)local_a0;
        }
        else {
          iVar16 = local_a0._4_4_;
          if (local_a0._4_4_ == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 0x10) {
            lVar26 = 1;
            goto LAB_01b5f51c;
          }
          iVar16 = (uint)local_98;
          if ((uint)local_98 == 8) {
            iVar16 = 1;
          }
          if (iVar16 == 0x10) {
            lVar26 = 2;
            goto LAB_01b5f51c;
          }
          local_8c = 0x10;
          iVar4 = local_98._4_4_;
          if (local_98._4_4_ == 8) {
            iVar4 = 1;
          }
          local_68 = CONCAT44(local_68._4_4_,iVar4);
          iVar16 = (uint)local_a0;
          if (iVar4 == 0x10) {
            lVar26 = 3;
            goto LAB_01b5f51c;
          }
        }
LAB_01b5f5f8:
        if (iVar16 == 8) {
          iVar16 = 1;
        }
        local_c0 = SUB41(iVar16,0);
        uStack_bf = (undefined1)((uint)iVar16 >> 8);
        uStack_be = (ushort)((uint)iVar16 >> 0x10);
        if (iVar16 == 1) {
          lVar26 = 0;
LAB_01b5f6b0:
          local_84[lVar26 + 3] = 1;
        }
        else {
          iVar16 = local_a0._4_4_;
          if (local_a0._4_4_ == 8) {
            iVar16 = 1;
          }
          local_c0 = SUB41(iVar16,0);
          uStack_bf = (undefined1)((uint)iVar16 >> 8);
          uStack_be = (ushort)((uint)iVar16 >> 0x10);
          if (iVar16 == 1) {
            lVar26 = 1;
            goto LAB_01b5f6b0;
          }
          iVar16 = (uint)local_98;
          if ((uint)local_98 == 8) {
            iVar16 = 1;
          }
          local_c0 = SUB41(iVar16,0);
          uStack_bf = (undefined1)((uint)iVar16 >> 8);
          uStack_be = (ushort)((uint)iVar16 >> 0x10);
          if (iVar16 == 1) {
            lVar26 = 2;
            goto LAB_01b5f6b0;
          }
          iVar16 = local_98._4_4_;
          if (local_98._4_4_ == 8) {
            iVar16 = 1;
          }
          local_c0 = SUB41(iVar16,0);
          uStack_bf = (undefined1)((uint)iVar16 >> 8);
          uStack_be = (ushort)((uint)iVar16 >> 0x10);
          if (iVar16 == 1) {
            lVar26 = 3;
            goto LAB_01b5f6b0;
          }
        }
        local_68 = CONCAT44(local_68._4_4_,1);
        lVar26 = *(long *)(lVar33 + 0x2c638);
        if (lVar26 == 0) {
          uVar18 = 0;
        }
        else {
          if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
            uVar18 = 0;
          }
          else {
            uVar18 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
            lVar26 = *(long *)(lVar33 + 0x2c638);
            uVar18 = uVar18 & 0xffffffff;
            if (lVar26 == 0) goto LAB_01b5f720;
          }
          plVar23 = *(long **)(lVar26 + 0x20);
          if (plVar23 != (long *)0x0) {
            lVar26 = *(long *)(lVar33 + 0x2c618);
            local_c0 = SUB81(lVar26,0);
            uStack_bf = (undefined1)((ulong)lVar26 >> 8);
            uStack_be = (ushort)((ulong)lVar26 >> 0x10);
            uStack_bc = (undefined4)((ulong)lVar26 >> 0x20);
            uVar20 = *(undefined8 *)(lVar33 + 0x2c620);
            local_b8 = (undefined2)uVar20;
            uStack_b6 = (undefined2)((ulong)uVar20 >> 0x10);
            uStack_b4 = (undefined4)((ulong)uVar20 >> 0x20);
            local_b0 = 0x2580;
            uStack_ae = 0;
            (**(code **)(*plVar23 + 0x20))(plVar23,&local_c0);
          }
        }
LAB_01b5f720:
        lVar32 = *(long *)(lVar33 + 0x2c618);
        lVar7 = *(long *)(lVar33 + 0x2c620);
        PVar24 = *param_4;
        lVar26 = *(long *)PTR_DAT_04bb32e8;
        lVar26 = *(long *)(lVar26 + 0x20) / 1000000000 + *(long *)(lVar26 + 8) +
                 (((*(long *)(lVar26 + 0x10) + (long)*(int *)(lVar26 + 0x38)) -
                  *(long *)(lVar26 + 8)) * 1000000000) / 1000000000;
        local_c0 = SUB81(lVar26,0);
        uStack_bf = (undefined1)((ulong)lVar26 >> 8);
        uStack_be = (ushort)((ulong)lVar26 >> 0x10);
        uStack_bc = (undefined4)((ulong)lVar26 >> 0x20);
        uVar20 = nn::time::ToCalendarTimeInUtc(&local_c0);
        local_c0 = SUB81(uVar20,0);
        uStack_bf = (undefined1)((ulong)uVar20 >> 8);
        uStack_be = (ushort)((ulong)uVar20 >> 0x10);
        uStack_bc = (undefined4)((ulong)uVar20 >> 0x20);
        uVar20 = FUN_02811460(lVar7 + lVar32,&local_c0,&local_68);
        if (((char)local_68 != '\0') && ((byte)PVar24 < 8)) {
          local_c0 = PVar24;
          FUN_02583354(*(undefined8 *)puVar2,&local_c0,1);
          FUN_01b675a0();
        }
        local_c0 = SUB81(uVar20,0);
        uStack_bf = (undefined1)((ulong)uVar20 >> 8);
        uStack_be = (ushort)((ulong)uVar20 >> 0x10);
        uStack_bc = (undefined4)((ulong)uVar20 >> 0x20);
        bVar11 = FUN_01b6b2d0(&local_c0,local_84 + 2,param_3,&local_a0,param_4);
        if ((((uVar18 & 1) != 0) && (*(long *)(lVar33 + 0x2c638) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar33 + 0x2c638) + 0x18),
           puVar21 != (undefined8 *)0x0)) {
          (**(code **)*puVar21)();
        }
        goto LAB_01b5ff20;
      }
LAB_01b5f1c0:
      if ((((uint)local_a0 != 3) && ((local_a0._4_4_ != 3 && ((uint)local_98 != 3)))) &&
         (local_98._4_4_ != 3)) {
        local_68 = CONCAT44(local_68._4_4_,4);
        if ((((((uint)local_a0 != 4) && (local_a0._4_4_ != 4)) && ((uint)local_98 != 4)) &&
            ((local_98._4_4_ != 4 && (local_8c = 0x10, (uint)local_a0 != 0x10)))) &&
           ((local_a0._4_4_ != 0x10 &&
            (((uint)local_98 != 0x10 && (iVar16 = (uint)local_a0, local_98._4_4_ != 0x10))))))
        goto LAB_01b5f5f8;
      }
    }
    else {
      bVar11 = 0;
      if (((2 < (uint)local_a0) || (2 < local_a0._4_4_)) ||
         ((2 < (uint)local_98 || (2 < local_98._4_4_)))) goto LAB_01b5ff20;
      if (((((uint)local_a0 == 2) || (local_a0._4_4_ == 2)) || ((uint)local_98 == 2)) ||
         (local_98._4_4_ == 2)) {
        local_84[2] = 1;
        local_84[3] = 0;
        if (((((uint)local_a0 == 1) || (local_a0._4_4_ == 1)) || ((uint)local_98 == 1)) ||
           (local_98._4_4_ == 1)) goto LAB_01b5eae0;
      }
    }
  }
LAB_01b5ff1c:
  bVar11 = 0;
LAB_01b5ff20:
  return bVar11 & 1;
}

