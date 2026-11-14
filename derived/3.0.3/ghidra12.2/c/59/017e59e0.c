
/* WARNING: Removing unreachable block (ram,0x017e5af4) */
/* WARNING: Removing unreachable block (ram,0x017e6594) */
/* WARNING: Removing unreachable block (ram,0x017e7bd8) */

void FUN_017e59e0(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  char *pcVar4;
  uint *puVar5;
  byte bVar6;
  char cVar7;
  short sVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  long lVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  char *local_88;
  ulong local_80;
  undefined **local_78;
  char *local_70;
  ulong local_68;
  
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x154) = 0x3c00000000;
  *(undefined8 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x3c;
  *(undefined2 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0x3c00000000;
  *(undefined4 *)(param_1 + 0x174) = 0x3c;
  puVar10 = PTR_DAT_04bb2720;
  lVar26 = *(long *)PTR_DAT_04bb2720;
  *(undefined1 *)(param_1 + 0x144) = 1;
  iVar20 = 0;
  if (lVar26 != 0) {
    if (*(long *)(lVar26 + 0x330) == 0) {
      iVar20 = 0;
    }
    else {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
      iVar18 = FUN_006bd550(*puVar23,0);
      iVar20 = 0;
      if (iVar18 == 0x758f7eaf) {
        iVar20 = 0;
        if (*(long *)puVar10 != 0) {
          lVar26 = *(long *)(*(long *)puVar10 + 0x330);
          iVar20 = 0;
          if (lVar26 != 0) {
            iVar20 = *(int *)(lVar26 + 0x244);
          }
        }
      }
    }
  }
  puVar11 = PTR_DAT_04bbe4b0;
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xa4) == iVar20) {
    lVar26 = *(long *)PTR_DAT_04bb46b0;
    if (lVar26 == 0) {
LAB_017e5b48:
      uVar21 = 0;
    }
    else {
      local_78 = (undefined **)CONCAT44(local_78._4_4_,1);
      if ((((*(byte *)(lVar26 + 0x50d) ^ 0xff) & 6) != 0) ||
         (lVar26 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x10) + 0x188) + 0x38))(),
         lVar26 == 0)) goto LAB_017e5b48;
      if ((*(long **)(lVar26 + 0x5d3cd8) == (long *)0x0) ||
         (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x5d3cd8), puVar23 == (undefined8 *)0x0)) {
        uVar19 = 1;
      }
      else {
        uVar19 = (**(code **)*puVar23)();
        uVar19 = uVar19 ^ 1;
      }
      uVar21 = *(undefined4 *)(*(long *)(lVar26 + 0x5d3cc0) + *(long *)(lVar26 + 0x5d3cb8) + 0x62a0)
      ;
      if ((((uVar19 & 1) == 0) && (*(long *)(lVar26 + 0x5d3cd8) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x5d3cd8) + 8), puVar23 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar23)();
      }
    }
    *(undefined2 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e2) = 0x101;
    *(undefined1 *)(param_1 + 0x1e6) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = uVar21;
    *(undefined1 *)(param_1 + 0x1ec) = 1;
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  puVar13 = PTR_DAT_04bb6298;
  if (DAT_052945fc != '\0') {
    DAT_052945fc = '\0';
    sVar8 = *(short *)PTR_DAT_04bb6298;
    if (sVar8 != -1) {
      local_78 = (undefined **)CONCAT44(local_78._4_4_,0x1a);
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 0x1a & 1) != 0) {
        FUN_017ff11c();
        FUN_01367c60();
        FUN_029878d0();
        lVar26 = *(long *)PTR_DAT_04bb4e28;
        if (lVar26 != 0) {
          *(uint *)(&DAT_00001230 + lVar26) = *(uint *)(&DAT_00001230 + lVar26) | 0x1000;
        }
      }
    }
  }
  puVar14 = PTR_DAT_04bc39f8;
  puVar12 = PTR_DAT_04bb46b0;
  if (*(char *)(param_1 + 0x144) != '\0') {
    uVar9 = *(ushort *)puVar13;
    uVar27 = (ulong)(short)uVar9;
    if (uVar27 == 0xffffffffffffffff) {
LAB_017e5e6c:
      uVar27 = FUN_0180b3e0();
      lVar26 = *(long *)puVar10;
      if ((uVar27 & 1) == 0) {
        if (lVar26 == 0) {
LAB_017e5ed4:
          iVar20 = 0;
        }
        else {
          iVar20 = 0;
          if (*(long *)(lVar26 + 0x330) != 0) {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar20 = FUN_006bd550(*puVar23,0);
            lVar26 = *(long *)puVar10;
            if ((iVar20 != 0x758f7eaf) || (lVar26 == 0)) goto LAB_017e5ed4;
            iVar20 = 0;
            if (*(long *)(lVar26 + 0x330) != 0) {
              iVar20 = *(int *)(*(long *)(lVar26 + 0x330) + 0x244);
            }
          }
        }
        if (*(int *)(puVar11 + 0xa4) == iVar20) goto LAB_017e5ee4;
        iVar20 = 0;
        if (lVar26 != 0) {
          if (*(long *)(lVar26 + 0x330) == 0) {
            iVar20 = 0;
          }
          else {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar18 = FUN_006bd550(*puVar23,0);
            iVar20 = 0;
            if (iVar18 == 0x758f7eaf) {
              iVar20 = 0;
              if (*(long *)puVar10 != 0) {
                lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                iVar20 = 0;
                if (lVar26 != 0) {
                  iVar20 = *(int *)(lVar26 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar11 + 0xcc) == iVar20) {
          lVar26 = FUN_016c7ab8();
          if (lVar26 == 0) goto LAB_017e7038;
          if (*(long **)(lVar26 + 0x140) == (long *)0x0) {
            uVar27 = 0;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar26 + 0x140);
            uVar27 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar27 = (**(code **)*puVar23)();
            }
          }
          puVar3 = (undefined2 *)(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120));
          cVar7 = *(char *)(puVar3 + 0xf);
          *(undefined2 *)(param_1 + 0xf4) = *puVar3;
          *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
          *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
          *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
          *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
          *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
          *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
          *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
          *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
          *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
          *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
          *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
          bVar16 = *(byte *)(puVar3 + 0x10);
          *(int *)(param_1 + 0x100) = (int)cVar7;
          *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
          if ((uVar27 & 1) == 0) goto LAB_017e7038;
          goto LAB_017e6954;
        }
        lVar26 = *(long *)puVar10;
        iVar20 = 0;
        if (lVar26 != 0) {
          if (*(long *)(lVar26 + 0x330) == 0) {
            iVar20 = 0;
          }
          else {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar18 = FUN_006bd550(*puVar23,0);
            iVar20 = 0;
            if (iVar18 == 0x758f7eaf) {
              iVar20 = 0;
              if (*(long *)puVar10 != 0) {
                lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                iVar20 = 0;
                if (lVar26 != 0) {
                  iVar20 = *(int *)(lVar26 + 0x244);
                }
              }
            }
          }
        }
        if ((*(int *)(puVar11 + 0xd0) == iVar20) && (lVar26 = FUN_02642ea0(), lVar26 != 0)) {
          uVar19 = FUN_0180da90();
          local_78 = (undefined **)CONCAT44(local_78._4_4_,uVar19);
          lVar30 = lVar26 + 0xe0 + (ulong)uVar19 * 0x2488;
          if (5 < uVar19) {
            lVar30 = lVar26 + 0xe0;
          }
          local_70 = (char *)(lVar30 + 0x1ea0);
          local_68 = CONCAT71(local_68._1_7_,1);
          if (*(long **)(lVar30 + 0x1ec8) == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar30 + 0x1ec8);
            uVar17 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar17 = (**(code **)*puVar23)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68)) &
                     0xffffffffffff01ff;
          local_78 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
          FUN_0285a160(*(long *)(lVar30 + 0x1eb0) + *(long *)(lVar30 + 0x1ea8),&local_90,
                       param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,param_1 + 0xfe,param_1 + 0x13c,
                       param_1 + 0xd8,param_1 + 0xfc,param_1 + 0xbc,param_1 + 0x140);
          *(int *)(param_1 + 0x100) = (int)(char)local_90;
          FUN_02640184(&local_78);
        }
      }
      else {
LAB_017e5ee4:
        iVar20 = 0;
        if (lVar26 != 0) {
          if (*(long *)(lVar26 + 0x330) == 0) {
            iVar20 = 0;
          }
          else {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar18 = FUN_006bd550(*puVar23,0);
            iVar20 = 0;
            if (iVar18 == 0x758f7eaf) {
              iVar20 = 0;
              if (*(long *)puVar10 != 0) {
                lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                iVar20 = 0;
                if (lVar26 != 0) {
                  iVar20 = *(int *)(lVar26 + 0x244);
                }
              }
            }
          }
        }
        if ((*(int *)(puVar11 + 0xa4) == iVar20) && (lVar26 = FUN_03776f00(), lVar26 != 0)) {
          if ((*(long **)(lVar26 + 0x140) == (long *)0x0) ||
             (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x140), puVar23 == (undefined8 *)0x0)) {
            bVar16 = *(byte *)(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120) + 0x20);
          }
          else {
            uVar27 = (**(code **)*puVar23)();
            bVar16 = *(byte *)(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120) + 0x20);
            if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x140) != 0)) &&
               (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x140) + 8),
               puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
          }
          if (((bVar16 >> 5 & 1) == 0) && (lVar26 = FUN_03776f00(), lVar26 != 0)) {
            lVar30 = *(long *)(lVar26 + 0x140);
            if (lVar30 == 0) {
              uVar27 = 0;
            }
            else {
              if (*(undefined8 **)(lVar30 + 0x10) == (undefined8 *)0x0) {
                uVar27 = 0;
              }
              else {
                uVar27 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
                lVar30 = *(long *)(lVar26 + 0x140);
                uVar27 = uVar27 & 0xffffffff;
                if (lVar30 == 0) goto LAB_017e66e8;
              }
              plVar28 = *(long **)(lVar30 + 0x20);
              if (plVar28 != (long *)0x0) {
                local_78 = *(undefined ***)(lVar26 + 0x120);
                local_70 = *(char **)(lVar26 + 0x128);
                local_68 = 0x24;
                (**(code **)(*plVar28 + 0x20))(plVar28,&local_78);
              }
            }
LAB_017e66e8:
            lVar30 = *(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120);
            *(byte *)(lVar30 + 0x20) = *(byte *)(lVar30 + 0x20) | 0x20;
            local_90 = (undefined *)0x3a30;
            FUN_0277d4ac(&local_90);
            if ((*(long *)(lVar26 + 0x140) != 0) &&
               (plVar28 = *(long **)(*(long *)(lVar26 + 0x140) + 0x20), plVar28 != (long *)0x0)) {
              local_78 = *(undefined ***)(lVar26 + 0x120);
              local_70 = *(char **)(lVar26 + 0x128);
              local_68 = 0x24;
              (**(code **)(*plVar28 + 0x20))(plVar28,&local_78);
            }
            local_98 = (uint)local_90;
            uStack_94 = local_90._4_4_;
            FUN_0285a8b0(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120),&local_98);
            local_a0 = 0x3a31;
            FUN_0277d4ac(&local_a0);
            if ((*(long *)(lVar26 + 0x140) != 0) &&
               (plVar28 = *(long **)(*(long *)(lVar26 + 0x140) + 0x20), plVar28 != (long *)0x0)) {
              local_78 = *(undefined ***)(lVar26 + 0x120);
              local_70 = *(char **)(lVar26 + 0x128);
              local_68 = 0x24;
              (**(code **)(*plVar28 + 0x20))(plVar28,&local_78);
            }
            local_a8 = (undefined4)local_a0;
            uStack_a4 = local_a0._4_4_;
            FUN_0285aa40(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120),&local_a8);
            lVar30 = *(long *)(lVar26 + 0x3a8);
            if (lVar30 == 0) {
              *(undefined2 *)(*(long *)(lVar26 + 0x390) + *(long *)(lVar26 + 0x388) + 6) = 7;
            }
            else {
              if (*(undefined8 **)(lVar30 + 0x10) == (undefined8 *)0x0) {
                uVar24 = 0;
LAB_017e67f4:
                plVar28 = *(long **)(lVar30 + 0x20);
                if (plVar28 != (long *)0x0) {
                  local_78 = *(undefined ***)(lVar26 + 0x388);
                  local_70 = *(char **)(lVar26 + 0x390);
                  local_68 = 0x14;
                  (**(code **)(*plVar28 + 0x20))(plVar28,&local_78);
                }
              }
              else {
                uVar24 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
                lVar30 = *(long *)(lVar26 + 0x3a8);
                uVar24 = uVar24 & 0xffffffff;
                if (lVar30 != 0) goto LAB_017e67f4;
              }
              *(undefined2 *)(*(long *)(lVar26 + 0x390) + *(long *)(lVar26 + 0x388) + 6) = 7;
              if ((((uVar24 & 1) != 0) && (*(long *)(lVar26 + 0x3a8) != 0)) &&
                 (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x3a8) + 0x18),
                 puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)();
              }
            }
            if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x140) != 0)) &&
               (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x140) + 0x18),
               puVar23 != (undefined8 *)0x0)) {
              (**(code **)*puVar23)();
            }
          }
        }
        lVar26 = FUN_03776f00();
        if (lVar26 != 0) {
          if ((*(long **)(lVar26 + 0x140) == (long *)0x0) ||
             (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x140), puVar23 == (undefined8 *)0x0)) {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)*puVar23)();
            uVar19 = uVar19 ^ 1;
          }
          puVar3 = (undefined2 *)(*(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120));
          cVar7 = *(char *)(puVar3 + 0xf);
          *(undefined2 *)(param_1 + 0xf4) = *puVar3;
          *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
          *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
          *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
          *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
          *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
          *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
          *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
          *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
          *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
          *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
          *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
          bVar16 = *(byte *)(puVar3 + 0x10);
          *(int *)(param_1 + 0x100) = (int)cVar7;
          *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
          if ((uVar19 & 1) == 0) {
LAB_017e6954:
            lVar26 = *(long *)(lVar26 + 0x140);
            goto joined_r0x017e6d18;
          }
        }
      }
    }
    else {
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar9 * 8);
      if (0xff < (uint)(int)(short)uVar9) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 0x19 & 1) != 0) {
LAB_017e5cd4:
        local_78 = (undefined **)CONCAT44(local_78._4_4_,6);
        puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
        if (0xff < uVar9) {
          puVar5 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar5 >> 6 & 1) != 0) {
          lVar26 = *(long *)puVar10;
          local_98 = 0;
          if (lVar26 == 0) {
            puVar23 = &DAT_055c04a0;
          }
          else {
            puVar23 = &DAT_055c04a0;
            if (*(long *)(lVar26 + 0x330) != 0) {
              puVar23 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
              iVar20 = FUN_006bd550(*puVar23,0);
              puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar20 != 0x758f7eaf) {
                puVar23 = &DAT_055c04a0;
              }
            }
          }
          uVar27 = FUN_02b5f400(&local_98,*(undefined4 *)(puVar23 + 7));
          iVar20 = local_98;
          if ((uVar27 & 1) != 0) {
            uVar21 = FUN_0180da90();
            local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar21);
            local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar20);
            lVar26 = *(long *)PTR_DAT_04bb46b0;
            if (lVar26 != 0) {
              puVar23 = *(undefined8 **)(lVar26 + 0x10);
              if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
                lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
                if (lVar26 != 0) {
                  lVar26 = lVar26 + 0x70;
                  goto LAB_017e6280;
                }
              }
              else if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
                      (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0)) {
LAB_017e6280:
                if ((uint)local_78 < 8) {
                  lVar30 = lVar26 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
                  if (7 < (uint)local_78) {
                    lVar30 = lVar26 + 0x119228;
                  }
                  lVar26 = lVar30 + 0x1df8 + ((ulong)local_90 & 0xffffffff) * 0x2488;
                  if (5 < (uint)local_90) {
                    lVar26 = lVar30 + 0x1df8;
                  }
                  if (*(long **)(lVar26 + 0x1ec8) != (long *)0x0) {
                    puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1ec8);
                    goto joined_r0x017e62d0;
                  }
                  goto LAB_017e64a8;
                }
              }
            }
          }
          goto LAB_017e7038;
        }
        local_78 = (undefined **)CONCAT44(local_78._4_4_,0x15);
        puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
        if (0xff < uVar9) {
          puVar5 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar5 >> 0x15 & 1) == 0) {
          local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
          puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
          if (0xff < uVar9) {
            puVar5 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar5 >> 0x19 & 1) == 0) ||
             (local_78 = (undefined **)CONCAT44(local_78._4_4_,7), (*puVar5 >> 7 & 1) == 0))
          goto LAB_017e5e6c;
          lVar26 = *(long *)puVar10;
          goto LAB_017e5ee4;
        }
        uVar27 = FUN_01810f30();
        puVar12 = PTR_DAT_04bb46b0;
        if (*(long *)PTR_DAT_04bb46b0 == 0) {
          lVar30 = 0;
        }
        else {
          lVar30 = FUN_026f480c();
        }
        if ((uVar27 & 1) == 0) {
          lVar26 = *(long *)puVar10;
          uVar19 = 0;
          if (lVar26 != 0) {
            if (*(long *)(lVar26 + 0x330) == 0) {
              uVar19 = 0;
            }
            else {
              puVar23 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
              iVar20 = FUN_006bd550(*puVar23,0);
              uVar19 = 0;
              if (iVar20 == 0x758f7eaf) {
                uVar19 = 0;
                if (*(long *)puVar10 != 0) {
                  lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                  uVar19 = 0;
                  if (lVar26 != 0) {
                    uVar19 = *(uint *)(lVar26 + 0x248);
                  }
                }
              }
            }
          }
          if (lVar30 == 0) goto LAB_017e7038;
          if (4 < (int)uVar19) {
            uVar19 = 5;
          }
          lVar26 = lVar30 + 0x118 + (ulong)uVar19 * 0x2488;
          if (5 < uVar19) {
            lVar26 = lVar30 + 0x118;
          }
          if (*(long **)(lVar26 + 0x1ec8) == (long *)0x0) {
LAB_017e64a8:
            uVar19 = 1;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1ec8);
joined_r0x017e62d0:
            if (puVar23 == (undefined8 *)0x0) goto LAB_017e64a8;
            uVar19 = (**(code **)*puVar23)();
            uVar19 = uVar19 ^ 1;
          }
          puVar3 = (undefined2 *)(*(long *)(lVar26 + 0x1eb0) + *(long *)(lVar26 + 0x1ea8));
          cVar7 = *(char *)(puVar3 + 0xf);
          *(undefined2 *)(param_1 + 0xf4) = *puVar3;
          *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
          *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
          *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
          *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
          *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
          *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
          *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
          *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
          *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
          *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
          *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
          bVar16 = *(byte *)(puVar3 + 0x10);
          *(int *)(param_1 + 0x100) = (int)cVar7;
          *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
          if ((uVar19 & 1) != 0) goto LAB_017e7038;
          lVar26 = *(long *)(lVar26 + 0x1ec8);
          goto joined_r0x017e6d18;
        }
        if (lVar30 != 0) {
          plVar28 = *(long **)(lVar30 + 0xfb10);
          if (plVar28 == (long *)0x0) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            if ((undefined8 *)*plVar28 != (undefined8 *)0x0) {
              uVar27 = (*(code *)**(undefined8 **)*plVar28)();
              plVar28 = *(long **)(lVar30 + 0xfb10);
            }
          }
          lVar26 = lVar30 + 0xfae8;
          bVar16 = *(byte *)(*(long *)(lVar30 + 0xfaf8) + *(long *)(lVar30 + 0xfaf0) + 0x20);
          if ((uVar27 & 1) == 0) {
LAB_017e6434:
            if ((bVar16 >> 4 & 1) == 0) {
              local_68 = local_68 & 0xffffffffffff0000;
              if (plVar28 == (long *)0x0) {
                uVar17 = 0;
                local_70 = (char *)lVar26;
              }
              else {
                uVar17 = 0;
                local_70 = (char *)lVar26;
                if ((undefined8 *)plVar28[2] != (undefined8 *)0x0) {
                  uVar17 = (*(code *)**(undefined8 **)plVar28[2])();
                }
              }
LAB_017e6ac8:
              local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68)) &
                         0xffffffffffff01ff;
              local_78 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
              puVar23 = (undefined8 *)FUN_017eba8c(&local_78);
              *puVar23 = 0;
              puVar23[1] = 0;
              *(undefined4 *)(puVar23 + 4) = 0;
              puVar23[2] = 0;
              puVar23[3] = 0;
              FUN_0285a0f4();
              lVar26 = FUN_017ebae8(&local_78);
              *(byte *)(lVar26 + 0x20) = *(byte *)(lVar26 + 0x20) | 0x10;
              FUN_02640184(&local_78);
              local_68 = local_68 & 0xffffffffffffff00;
              local_70 = (char *)(lVar30 + 0x103a8);
              if (*(long *)(lVar30 + 0x103d0) == 0) {
                uVar17 = 0;
              }
              else {
                puVar23 = *(undefined8 **)(*(long *)(lVar30 + 0x103d0) + 0x10);
                uVar17 = 0;
                if (puVar23 != (undefined8 *)0x0) {
                  uVar17 = (**(code **)*puVar23)();
                }
              }
              local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68)) &
                         0xffffffffffff01ff;
              local_78 = &PTR_FUN_049c4ba8;
              puVar23 = (undefined8 *)FUN_017ebb44(&local_78);
              *puVar23 = 0;
              puVar23[1] = 0;
              puVar23[2] = 0;
              puVar23[3] = 0;
              FUN_02781444();
              FUN_02640184(&local_78);
              plVar28 = *(long **)(lVar30 + 0xfb10);
            }
            if ((plVar28 == (long *)0x0) || ((undefined8 *)*plVar28 == (undefined8 *)0x0))
            goto LAB_017e6b9c;
            uVar19 = (*(code *)**(undefined8 **)*plVar28)();
            uVar19 = uVar19 ^ 1;
          }
          else {
            if (plVar28 != (long *)0x0) {
              if ((undefined8 *)plVar28[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar28[1])();
                plVar28 = *(long **)(lVar30 + 0xfb10);
              }
              goto LAB_017e6434;
            }
            if ((bVar16 >> 4 & 1) == 0) {
              uVar17 = 0;
              local_68 = local_68 & 0xffffffffffffff00;
              local_70 = (char *)lVar26;
              goto LAB_017e6ac8;
            }
LAB_017e6b9c:
            uVar19 = 1;
          }
          puVar3 = (undefined2 *)(*(long *)(lVar30 + 0xfaf8) + *(long *)(lVar30 + 0xfaf0));
          cVar7 = *(char *)(puVar3 + 0xf);
          *(undefined2 *)(param_1 + 0xf4) = *puVar3;
          *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
          *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
          *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
          *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
          *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
          *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
          *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
          *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
          *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
          *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
          *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
          *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
          *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
          bVar16 = *(byte *)(puVar3 + 0x10);
          *(int *)(param_1 + 0x100) = (int)cVar7;
          *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
          if ((((uVar19 & 1) == 0) && (*(long *)(lVar30 + 0xfb10) != 0)) &&
             (puVar23 = *(undefined8 **)(*(long *)(lVar30 + 0xfb10) + 8),
             puVar23 != (undefined8 *)0x0)) {
            (**(code **)*puVar23)();
          }
        }
        if ((*(long *)puVar12 != 0) && (lVar26 = FUN_026f480c(), lVar26 != 0)) {
          if ((*(long **)(lVar26 + 0x103d0) == (long *)0x0) ||
             (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x103d0), puVar23 == (undefined8 *)0x0))
          {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)*puVar23)();
            uVar19 = uVar19 ^ 1;
          }
          puVar3 = (undefined2 *)(*(long *)(lVar26 + 0x103b8) + *(long *)(lVar26 + 0x103b0));
          *(undefined2 *)(param_1 + 0x1a4) = *puVar3;
          *(undefined1 *)(param_1 + 0x1a6) = *(undefined1 *)(puVar3 + 1);
          *(undefined1 *)(param_1 + 0x1a7) = *(undefined1 *)((long)puVar3 + 3);
          *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(puVar3 + 2);
          *(undefined2 *)(param_1 + 0x1ac) = puVar3[4];
          *(undefined1 *)(param_1 + 0x1ae) = *(undefined1 *)(puVar3 + 5);
          *(undefined1 *)(param_1 + 0x1af) = *(undefined1 *)((long)puVar3 + 0xb);
          *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(puVar3 + 6);
          *(undefined2 *)(param_1 + 0x1b4) = puVar3[8];
          *(undefined1 *)(param_1 + 0x1b6) = *(undefined1 *)(puVar3 + 9);
          *(undefined1 *)(param_1 + 0x1b7) = *(undefined1 *)((long)puVar3 + 0x13);
          *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(puVar3 + 10);
          if ((uVar19 & 1) == 0) {
            lVar26 = *(long *)(lVar26 + 0x103d0);
            goto joined_r0x017e6d18;
          }
        }
        goto LAB_017e7038;
      }
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
      if (0xff < uVar9) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 7 & 1) == 0) goto LAB_017e5cd4;
      local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x138));
      lVar26 = *(long *)PTR_DAT_04bb46b0;
      if (lVar26 == 0) goto LAB_017e7038;
      puVar23 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) != 0) {
        if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
           (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0))
        goto LAB_017e610c;
        goto LAB_017e7038;
      }
      lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
      if (lVar26 == 0) goto LAB_017e7038;
      lVar26 = lVar26 + 0x70;
LAB_017e610c:
      if (9 < (uint)local_78) goto LAB_017e7038;
      lVar30 = lVar26 + 0x1962d8 + ((ulong)local_78 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_78) {
        lVar30 = lVar26 + 0x1962d8;
      }
      if ((*(long **)(lVar30 + 0x28) == (long *)0x0) ||
         (puVar23 = (undefined8 *)**(long **)(lVar30 + 0x28), puVar23 == (undefined8 *)0x0)) {
        uVar27 = 0;
      }
      else {
        uVar27 = (**(code **)*puVar23)();
        uVar27 = uVar27 & 0xffffffff;
      }
      cVar7 = *(char *)(*(long *)(lVar30 + 0x10) + *(long *)(lVar30 + 8) + 0x1c4);
      local_78 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_70 = "NpcInteriorCoordinate";
      local_98 = (int)cVar7;
      iVar20 = FUN_02743000(&local_78);
      uVar19 = (uint)cVar7;
      if (iVar20 == 0) {
        uVar24 = FUN_02663fa0(&local_98);
        if ((uVar24 & 1) == 0) {
          lVar26 = FUN_0265c3e0((int)cVar7);
          if (lVar26 != 0) {
            if ((*(long **)(lVar26 + 0xf950) == (long *)0x0) ||
               (puVar23 = (undefined8 *)**(long **)(lVar26 + 0xf950), puVar23 == (undefined8 *)0x0))
            {
              uVar19 = 1;
            }
            else {
              uVar19 = (**(code **)*puVar23)();
              uVar19 = uVar19 ^ 1;
            }
            puVar3 = (undefined2 *)(*(long *)(lVar26 + 0xf938) + *(long *)(lVar26 + 0xf930));
            cVar7 = *(char *)(puVar3 + 0xf);
            *(undefined2 *)(param_1 + 0xf4) = *puVar3;
            *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
            *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
            *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
            *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
            *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
            *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
            *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
            *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
            *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
            *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
            *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
            *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
            *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
            *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
            *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
            bVar16 = *(byte *)(puVar3 + 0x10);
            *(int *)(param_1 + 0x100) = (int)cVar7;
            *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
            if ((uVar19 & 1) == 0) {
              lVar26 = *(long *)(lVar26 + 0xf950);
joined_r0x017e6ea0:
              if ((lVar26 != 0) && (*(undefined8 **)(lVar26 + 8) != (undefined8 *)0x0)) {
                (**(code **)**(undefined8 **)(lVar26 + 8))();
              }
            }
          }
        }
        else {
          local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
          uVar24 = FUN_02b67a30(&local_90,uVar19);
          if ((uVar24 & 1) != 0) {
            local_78 = (undefined **)CONCAT44(local_78._4_4_,(uint)local_90);
            lVar26 = *(long *)puVar12;
            if (lVar26 != 0) {
              puVar23 = *(undefined8 **)(lVar26 + 0x10);
              if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
                lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
                if (lVar26 != 0) {
                  lVar26 = lVar26 + 0x70;
                  goto LAB_017e6f78;
                }
              }
              else if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
                      (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0)) {
LAB_017e6f78:
                if ((uint)local_78 < 10) {
                  lVar29 = lVar26 + 0x1962d8 + ((ulong)local_78 & 0xffffffff) * 0x10d8;
                  if (9 < (uint)local_78) {
                    lVar29 = lVar26 + 0x1962d8;
                  }
                  if ((*(long **)(lVar29 + 0x990) == (long *)0x0) ||
                     (puVar23 = (undefined8 *)**(long **)(lVar29 + 0x990),
                     puVar23 == (undefined8 *)0x0)) {
                    uVar19 = 1;
                  }
                  else {
                    uVar19 = (**(code **)*puVar23)();
                    uVar19 = uVar19 ^ 1;
                  }
                  puVar3 = (undefined2 *)(*(long *)(lVar29 + 0x978) + *(long *)(lVar29 + 0x970));
                  cVar7 = *(char *)(puVar3 + 0xf);
                  *(undefined2 *)(param_1 + 0xf4) = *puVar3;
                  *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar3 + 1);
                  *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar3 + 3);
                  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar3 + 2);
                  *(undefined2 *)(param_1 + 0xd0) = puVar3[4];
                  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar3 + 5);
                  *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar3 + 0xb);
                  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar3 + 6);
                  *(undefined2 *)(param_1 + 0xb4) = puVar3[8];
                  *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar3 + 9);
                  *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar3 + 0x13);
                  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar3 + 10);
                  *(byte *)(param_1 + 0xfe) = *(byte *)(puVar3 + 0x10) & 1;
                  *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar3 + 0x1f);
                  *(undefined2 *)(param_1 + 0xd8) = puVar3[0xd];
                  *(undefined2 *)(param_1 + 0xfc) = puVar3[0xc];
                  *(undefined2 *)(param_1 + 0xbc) = puVar3[0xe];
                  bVar16 = *(byte *)(puVar3 + 0x10);
                  *(int *)(param_1 + 0x100) = (int)cVar7;
                  *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
                  if ((uVar19 & 1) == 0) {
                    lVar26 = *(long *)(lVar29 + 0x990);
                    goto joined_r0x017e6ea0;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar9 = *(ushort *)PTR_DAT_04bbdeb0;
        if ((long)(short)uVar9 != 0xffffffffffffffff) {
          local_78 = (undefined **)CONCAT44(local_78._4_4_,0x1d);
          puVar5 = (uint *)(puVar14 + ((long)(short)uVar9 & 0xffffffffU) * 8);
          if (0xff < uVar9) {
            puVar5 = (uint *)puVar14;
          }
          if ((*puVar5 >> 0x1d & 1) != 0) {
            lVar26 = *(long *)PTR_DAT_04bb2800;
            if (lVar26 == 0) {
              if ((((uVar27 & 1) != 0) && (*(long *)(lVar30 + 0x28) != 0)) &&
                 (puVar23 = *(undefined8 **)(*(long *)(lVar30 + 0x28) + 8),
                 puVar23 != (undefined8 *)0x0)) {
                (**(code **)*puVar23)();
              }
              goto LAB_017e70dc;
            }
            cVar7 = *(char *)(lVar26 + 0x263a);
            *(undefined2 *)(param_1 + 0xf4) = *(undefined2 *)(lVar26 + 0x261c);
            *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(lVar26 + 0x261e);
            *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(lVar26 + 0x261f);
            *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar26 + 0x2620);
            *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(lVar26 + 0x2624);
            *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(lVar26 + 0x2626);
            *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(lVar26 + 0x2627);
            *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(lVar26 + 0x2628);
            *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(lVar26 + 0x262c);
            *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(lVar26 + 0x262e);
            *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)(lVar26 + 0x262f);
            *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(lVar26 + 0x2630);
            *(byte *)(param_1 + 0xfe) = *(byte *)(lVar26 + 0x263c) & 1;
            *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(lVar26 + 0x263b);
            *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar26 + 0x2636);
            *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)(lVar26 + 0x2634);
            *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(lVar26 + 0x2638);
            bVar16 = *(byte *)(lVar26 + 0x263c);
            *(int *)(param_1 + 0x100) = (int)cVar7;
            *(uint *)(param_1 + 0x140) = bVar16 >> 1 & 7;
            goto LAB_017e702c;
          }
        }
        uVar24 = FUN_02660600(uVar19);
        if ((uVar24 & 1) == 0) {
          uVar24 = FUN_02663fa0(&local_98);
          if ((uVar24 & 1) == 0) {
            lVar26 = FUN_0265c3e0(uVar19);
            if (lVar26 != 0) {
              local_70 = (char *)(lVar26 + 0xf928);
              local_68 = CONCAT71(local_68._1_7_,1);
              if (*(long **)(lVar26 + 0xf950) == (long *)0x0) {
                uVar17 = 0;
              }
              else {
                puVar23 = (undefined8 *)**(long **)(lVar26 + 0xf950);
                uVar17 = 0;
                if (puVar23 != (undefined8 *)0x0) {
                  uVar17 = (**(code **)*puVar23)();
                }
              }
              local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68));
              lVar29 = *(long *)(lVar26 + 0xf930);
              lVar26 = *(long *)(lVar26 + 0xf938);
              goto LAB_017e6ffc;
            }
          }
          else {
            lVar26 = FUN_02663ee0(&local_98);
            if (lVar26 != 0) {
              local_70 = (char *)(lVar26 + 0x118);
              local_68 = CONCAT71(local_68._1_7_,1);
              if (*(long **)(lVar26 + 0x140) == (long *)0x0) {
                uVar17 = 0;
              }
              else {
                puVar23 = (undefined8 *)**(long **)(lVar26 + 0x140);
                uVar17 = 0;
                if (puVar23 != (undefined8 *)0x0) {
                  uVar17 = (**(code **)*puVar23)();
                }
              }
              local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68));
              lVar26 = *(long *)(lVar26 + 0x128) + *(long *)(lVar26 + 0x120);
              goto LAB_017e7000;
            }
          }
        }
        else if (((uVar19 < 10) && (lVar26 = *(long *)puVar12, lVar26 != 0)) &&
                (lVar26 = (**(code **)(*(long *)**(undefined8 **)(lVar26 + 0x10) + 0x38))(),
                lVar26 != 0)) {
          lVar26 = lVar26 + (ulong)uVar19 * 0x888;
          local_68 = CONCAT71(local_68._1_7_,1);
          local_70 = (char *)(lVar26 + 0x27f9c8);
          if (*(long **)(lVar26 + 0x27f9f0) == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar26 + 0x27f9f0);
            uVar17 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar17 = (**(code **)*puVar23)();
            }
          }
          local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68));
          lVar29 = *(long *)(lVar26 + 0x27f9d0);
          lVar26 = *(long *)(lVar26 + 0x27f9d8);
LAB_017e6ffc:
          lVar26 = lVar26 + lVar29;
LAB_017e7000:
          local_78 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
          local_68 = local_68 & 0xffffffffffff01ff;
          FUN_0285a160(lVar26,&local_90,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,param_1 + 0xfe,
                       param_1 + 0x13c,param_1 + 0xd8,param_1 + 0xfc,param_1 + 0xbc,param_1 + 0x140)
          ;
          *(int *)(param_1 + 0x100) = (int)(char)local_90;
          FUN_02640184(&local_78);
        }
      }
LAB_017e702c:
      if ((uVar27 & 1) == 0) goto LAB_017e7038;
      lVar26 = *(long *)(lVar30 + 0x28);
joined_r0x017e6d18:
      if ((lVar26 != 0) && (*(undefined8 **)(lVar26 + 8) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar26 + 8))();
      }
    }
LAB_017e7038:
    FUN_017ebc00(param_1,0);
    bVar6 = *(byte *)(param_1 + 0x13c);
    local_78 = (undefined **)CONCAT44(local_78._4_4_,1);
    bVar16 = ((bVar6 & 4) != 0) << 2;
    bVar1 = ((bVar6 & 8) != 0) << 3;
    bVar15 = (bVar6 & 1) != 0;
    if ((bVar6 & 2) == 0) {
      bVar16 = *(byte *)(param_1 + 0x13d) & 0xf0 | bVar16 | bVar1 | bVar15;
    }
    else {
      bVar16 = *(byte *)(param_1 + 0x13d) & 0xf2 | bVar16 | bVar1 | bVar15 | 2;
    }
    *(byte *)(param_1 + 0x13d) = bVar16;
  }
LAB_017e70dc:
  puVar14 = PTR_DAT_04bc39f8;
  puVar12 = PTR_DAT_04bb46b0;
  if ((*(char *)(param_1 + 0x144) != '\0') && (*(char *)(param_1 + 0x1c0) != '\0')) {
    uVar9 = *(ushort *)puVar13;
    uVar27 = (ulong)(short)uVar9;
    if (uVar27 == 0xffffffffffffffff) {
LAB_017e7348:
      uVar27 = FUN_0180b3e0();
      if ((uVar27 & 1) == 0) {
        lVar26 = *(long *)puVar10;
        iVar20 = 0;
        if (lVar26 != 0) {
          if (*(long *)(lVar26 + 0x330) == 0) {
            iVar20 = 0;
          }
          else {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar18 = FUN_006bd550(*puVar23,0);
            iVar20 = 0;
            if (iVar18 == 0x758f7eaf) {
              iVar20 = 0;
              if (*(long *)puVar10 != 0) {
                lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                iVar20 = 0;
                if (lVar26 != 0) {
                  iVar20 = *(int *)(lVar26 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar11 + 0xa4) == iVar20) goto LAB_017e73c4;
        lVar26 = *(long *)puVar10;
        iVar20 = 0;
        if (lVar26 != 0) {
          if (*(long *)(lVar26 + 0x330) == 0) {
            iVar20 = 0;
          }
          else {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar18 = FUN_006bd550(*puVar23,0);
            iVar20 = 0;
            if (iVar18 == 0x758f7eaf) {
              iVar20 = 0;
              if (*(long *)puVar10 != 0) {
                lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                iVar20 = 0;
                if (lVar26 != 0) {
                  iVar20 = *(int *)(lVar26 + 0x244);
                }
              }
            }
          }
        }
        if (*(int *)(puVar11 + 0xcc) != iVar20) {
          lVar26 = *(long *)puVar10;
          iVar20 = 0;
          if (lVar26 != 0) {
            if (*(long *)(lVar26 + 0x330) == 0) {
              iVar20 = 0;
            }
            else {
              puVar23 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
              iVar18 = FUN_006bd550(*puVar23,0);
              iVar20 = 0;
              if (iVar18 == 0x758f7eaf) {
                iVar20 = 0;
                if (*(long *)puVar10 != 0) {
                  lVar26 = *(long *)(*(long *)puVar10 + 0x330);
                  iVar20 = 0;
                  if (lVar26 != 0) {
                    iVar20 = *(int *)(lVar26 + 0x244);
                  }
                }
              }
            }
          }
          if ((*(int *)(puVar11 + 0xd0) == iVar20) && (lVar26 = FUN_02643020(), lVar26 != 0)) {
            uVar19 = FUN_0180da90();
            local_78 = (undefined **)CONCAT44(local_78._4_4_,uVar19);
            lVar30 = lVar26 + 0xe0 + (ulong)uVar19 * 0x2488;
            if (5 < uVar19) {
              lVar30 = lVar26 + 0xe0;
            }
LAB_017e7840:
            local_70 = (char *)(lVar30 + 0x2220);
            local_68 = CONCAT71(local_68._1_7_,1);
            if (*(long **)(lVar30 + 0x2248) == (long *)0x0) {
              uVar17 = 0;
            }
            else {
              puVar23 = (undefined8 *)**(long **)(lVar30 + 0x2248);
              uVar17 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar17 = (**(code **)*puVar23)();
              }
            }
            local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68));
            lVar26 = *(long *)(lVar30 + 0x2230);
            lVar30 = *(long *)(lVar30 + 0x2228);
LAB_017e7894:
            local_78 = (undefined **)(PTR_DAT_04bbc500 + 0x10);
            local_68 = local_68 & 0xffffffffffff01ff;
            lVar26 = lVar26 + lVar30;
            *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(lVar26 + 4);
            *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(lVar26 + 6);
            *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar26 + 2);
            *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar26 + 8);
            *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar26 + 0xc) - 1;
            *(uint *)(param_1 + 0x208) = *(ushort *)(lVar26 + 0x10) - 1;
            *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar26 + 0xe) - 1;
            FUN_02640184(&local_78);
          }
          goto LAB_017e78e4;
        }
        lVar26 = FUN_016c7ab8();
        if (lVar26 == 0) goto LAB_017e78e4;
        if (*(long **)(lVar26 + 0x3a8) == (long *)0x0) {
          uVar27 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar26 + 0x3a8);
          uVar27 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar27 = (**(code **)*puVar23)();
          }
        }
        pbVar2 = (byte *)(*(long *)(lVar26 + 0x390) + *(long *)(lVar26 + 0x388));
        *(uint *)(param_1 + 0x1c4) = (uint)*pbVar2;
        *(uint *)(param_1 + 0x1c8) = (uint)pbVar2[1];
        *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(pbVar2 + 4);
        *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(pbVar2 + 6);
        *(byte *)(param_1 + 0x1d0) = pbVar2[2];
        *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(pbVar2 + 8);
        *(uint *)(param_1 + 0x1f0) = *(ushort *)(pbVar2 + 0xc) - 1;
        *(uint *)(param_1 + 0x208) = *(ushort *)(pbVar2 + 0x10) - 1;
        *(uint *)(param_1 + 0x1fc) = *(ushort *)(pbVar2 + 0xe) - 1;
        if ((uVar27 & 1) == 0) goto LAB_017e78e4;
LAB_017e745c:
        lVar26 = *(long *)(lVar26 + 0x3a8);
joined_r0x017e7dc8:
        if (lVar26 != 0) goto LAB_017e7464;
      }
      else {
LAB_017e73c4:
        lVar26 = FUN_03776f00();
        if (lVar26 != 0) {
          if ((*(long **)(lVar26 + 0x3a8) == (long *)0x0) ||
             (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x3a8), puVar23 == (undefined8 *)0x0)) {
            uVar19 = 1;
          }
          else {
            uVar19 = (**(code **)*puVar23)();
            uVar19 = uVar19 ^ 1;
          }
          pbVar2 = (byte *)(*(long *)(lVar26 + 0x390) + *(long *)(lVar26 + 0x388));
          *(uint *)(param_1 + 0x1c4) = (uint)*pbVar2;
          *(uint *)(param_1 + 0x1c8) = (uint)pbVar2[1];
          *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(pbVar2 + 4);
          *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(pbVar2 + 6);
          *(byte *)(param_1 + 0x1d0) = pbVar2[2];
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(pbVar2 + 8);
          *(uint *)(param_1 + 0x1f0) = *(ushort *)(pbVar2 + 0xc) - 1;
          *(uint *)(param_1 + 0x208) = *(ushort *)(pbVar2 + 0x10) - 1;
          *(uint *)(param_1 + 0x1fc) = *(ushort *)(pbVar2 + 0xe) - 1;
          if ((uVar19 & 1) == 0) goto LAB_017e745c;
        }
      }
    }
    else {
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar9 * 8);
      if (0xff < (uint)(int)(short)uVar9) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 0x19 & 1) != 0) {
LAB_017e71ac:
        local_78 = (undefined **)CONCAT44(local_78._4_4_,6);
        puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
        if (0xff < uVar9) {
          puVar5 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar5 >> 6 & 1) == 0) {
          local_78 = (undefined **)CONCAT44(local_78._4_4_,0x15);
          puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
          if (0xff < uVar9) {
            puVar5 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar5 >> 0x15 & 1) == 0) {
            local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
            puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
            if (0xff < uVar9) {
              puVar5 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar5 >> 0x19 & 1) == 0) ||
               (local_78 = (undefined **)CONCAT44(local_78._4_4_,7), (*puVar5 >> 7 & 1) == 0))
            goto LAB_017e7348;
            goto LAB_017e73c4;
          }
          uVar27 = FUN_01810f30();
          if (*(long *)PTR_DAT_04bb46b0 == 0) {
            lVar26 = 0;
          }
          else {
            lVar26 = FUN_026f480c();
          }
          if ((uVar27 & 1) == 0) {
            lVar30 = *(long *)puVar10;
            uVar19 = 0;
            if (lVar30 != 0) {
              if (*(long *)(lVar30 + 0x330) == 0) {
                uVar19 = 0;
              }
              else {
                puVar23 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
                iVar20 = FUN_006bd550(*puVar23,0);
                uVar19 = 0;
                if (iVar20 == 0x758f7eaf) {
                  uVar19 = 0;
                  if (*(long *)puVar10 != 0) {
                    lVar30 = *(long *)(*(long *)puVar10 + 0x330);
                    uVar19 = 0;
                    if (lVar30 != 0) {
                      uVar19 = *(uint *)(lVar30 + 0x248);
                    }
                  }
                }
              }
            }
            if (lVar26 != 0) {
              if (4 < (int)uVar19) {
                uVar19 = 5;
              }
              lVar30 = lVar26 + 0x118 + (ulong)uVar19 * 0x2488;
              if (5 < uVar19) {
                lVar30 = lVar26 + 0x118;
              }
              goto LAB_017e7840;
            }
          }
          else if (lVar26 != 0) {
            local_70 = (char *)(lVar26 + 0xfe68);
            local_68._1_7_ = (undefined7)(local_68 >> 8);
            local_68 = CONCAT71(local_68._1_7_,1);
            if (*(long **)(lVar26 + 0xfe90) == (long *)0x0) {
              uVar17 = 0;
            }
            else {
              puVar23 = (undefined8 *)**(long **)(lVar26 + 0xfe90);
              uVar17 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar17 = (**(code **)*puVar23)();
              }
            }
            local_68 = CONCAT62(local_68._2_6_,CONCAT11(uVar17,(undefined1)local_68));
            lVar30 = *(long *)(lVar26 + 0xfe70);
            lVar26 = *(long *)(lVar26 + 0xfe78);
            goto LAB_017e7894;
          }
          goto LAB_017e78e4;
        }
        lVar26 = *(long *)puVar10;
        local_98 = 0;
        if (lVar26 == 0) {
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = &DAT_055c04a0;
          if (*(long *)(lVar26 + 0x330) != 0) {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
            iVar20 = FUN_006bd550(*puVar23,0);
            puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar20 != 0x758f7eaf) {
              puVar23 = &DAT_055c04a0;
            }
          }
        }
        uVar27 = FUN_02b5f400(&local_98,*(undefined4 *)(puVar23 + 7));
        iVar20 = local_98;
        if ((uVar27 & 1) == 0) goto LAB_017e78e4;
        uVar21 = FUN_0180da90();
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar21);
        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar20);
        lVar26 = *(long *)PTR_DAT_04bb46b0;
        if (lVar26 == 0) goto LAB_017e78e4;
        puVar23 = *(undefined8 **)(lVar26 + 0x10);
        if ((*(byte *)(lVar26 + 0x453) & 1) != 0) {
          if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
             (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0))
          goto LAB_017e76dc;
          goto LAB_017e78e4;
        }
        lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
        if (lVar26 == 0) goto LAB_017e78e4;
        lVar26 = lVar26 + 0x70;
LAB_017e76dc:
        if (7 < (uint)local_78) goto LAB_017e78e4;
        lVar30 = lVar26 + 0x119228 + ((ulong)local_78 & 0xffffffff) * 0xfa08;
        if (7 < (uint)local_78) {
          lVar30 = lVar26 + 0x119228;
        }
        lVar26 = lVar30 + 0x1df8 + ((ulong)local_90 & 0xffffffff) * 0x2488;
        if (5 < (uint)local_90) {
          lVar26 = lVar30 + 0x1df8;
        }
        if ((*(long **)(lVar26 + 0x2248) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x2248), puVar23 == (undefined8 *)0x0)) {
          uVar19 = 1;
        }
        else {
          uVar19 = (**(code **)*puVar23)();
          uVar19 = uVar19 ^ 1;
        }
        lVar30 = *(long *)(lVar26 + 0x2230) + *(long *)(lVar26 + 0x2228);
        *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(lVar30 + 4);
        *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(lVar30 + 6);
        *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar30 + 2);
        *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar30 + 8);
        *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar30 + 0xc) - 1;
        *(uint *)(param_1 + 0x208) = *(ushort *)(lVar30 + 0x10) - 1;
        *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar30 + 0xe) - 1;
        if ((uVar19 & 1) != 0) goto LAB_017e78e4;
        lVar26 = *(long *)(lVar26 + 0x2248);
        goto joined_r0x017e7dc8;
      }
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (uVar27 & 0xffffffff) * 8);
      if (0xff < uVar9) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 7 & 1) == 0) goto LAB_017e71ac;
      local_78 = (undefined **)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x138));
      lVar26 = *(long *)PTR_DAT_04bb46b0;
      if (lVar26 == 0) goto LAB_017e78e4;
      puVar23 = *(undefined8 **)(lVar26 + 0x10);
      if ((*(byte *)(lVar26 + 0x453) & 1) != 0) {
        if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
           (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0))
        goto LAB_017e755c;
        goto LAB_017e78e4;
      }
      lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
      if (lVar26 == 0) goto LAB_017e78e4;
      lVar26 = lVar26 + 0x70;
LAB_017e755c:
      if (9 < (uint)local_78) goto LAB_017e78e4;
      pcVar4 = (char *)(lVar26 + 0x1962d8) + ((ulong)local_78 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_78) {
        pcVar4 = (char *)(lVar26 + 0x1962d8);
      }
      local_68 = CONCAT71(local_68._1_7_,1);
      local_70 = pcVar4;
      if ((*(long **)(pcVar4 + 0x28) == (long *)0x0) ||
         (puVar23 = (undefined8 *)**(long **)(pcVar4 + 0x28), puVar23 == (undefined8 *)0x0)) {
        bVar16 = 0;
      }
      else {
        bVar16 = (**(code **)*puVar23)();
      }
      local_68 = CONCAT62(local_68._2_6_,CONCAT11(bVar16,(undefined1)local_68)) & 0xffffffffffff01ff
      ;
      local_78 = (undefined **)(PTR_DAT_04bb6ba8 + 0x10);
      local_90 = PTR_DAT_04bb2020 + 0x10;
      cVar7 = *(char *)(*(long *)(pcVar4 + 0x10) + *(long *)(pcVar4 + 8) + 0x1c4);
      local_88 = "NpcInteriorCoordinate";
      local_a0 = CONCAT44(local_a0._4_4_,(int)cVar7);
      iVar20 = FUN_02743000(&local_90);
      if (iVar20 == 0) {
        uVar27 = FUN_02663fa0(&local_a0);
        puVar10 = PTR_DAT_04bc0510;
        if ((uVar27 & 1) != 0) {
          local_98 = 0;
          uVar27 = FUN_02b67a30(&local_98,(int)cVar7);
          if ((uVar27 & 1) != 0) {
            local_90 = (undefined *)CONCAT44(local_90._4_4_,local_98);
            lVar26 = *(long *)puVar12;
            if (lVar26 == 0) goto LAB_017e8134;
            puVar23 = *(undefined8 **)(lVar26 + 0x10);
            if ((*(byte *)(lVar26 + 0x453) & 1) != 0) {
              if (((puVar23 != (undefined8 *)0x0) && ((long *)puVar23[0x26] != (long *)0x0)) &&
                 (lVar26 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar26 != 0))
              goto LAB_017e7f84;
              goto LAB_017e8134;
            }
            lVar26 = (**(code **)(*(long *)*puVar23 + 0x38))();
            if (lVar26 == 0) goto LAB_017e8134;
            lVar26 = lVar26 + 0x70;
LAB_017e7f84:
            if (9 < (uint)local_90) goto LAB_017e8134;
            lVar30 = lVar26 + 0x1962d8 + ((ulong)local_90 & 0xffffffff) * 0x10d8;
            if (9 < (uint)local_90) {
              lVar30 = lVar26 + 0x1962d8;
            }
            local_88 = (char *)(lVar30 + 0xb98);
            local_80 = CONCAT71(local_80._1_7_,1);
            if (*(long **)(lVar30 + 0xbc0) == (long *)0x0) {
              uVar17 = 0;
            }
            else {
              puVar23 = (undefined8 *)**(long **)(lVar30 + 0xbc0);
              uVar17 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar17 = (**(code **)*puVar23)();
              }
            }
            local_80 = CONCAT62(local_80._2_6_,CONCAT11(uVar17,(undefined1)local_80)) &
                       0xffffffffffff01ff;
            lVar26 = *(long *)(lVar30 + 0xba8);
            local_90 = PTR_DAT_04bbc500 + 0x10;
            lVar30 = *(long *)(lVar30 + 0xba0);
            goto LAB_017e80e4;
          }
          goto LAB_017e8134;
        }
        *(undefined2 *)(param_1 + 0x1cc) = 1;
        puVar11 = PTR_DAT_04bb43c0;
        local_80 = 0;
        local_90 = puVar10 + 0x10;
        local_88 = *(char **)(param_1 + 0xb4);
        lVar26 = *(long *)PTR_DAT_04bb43c0;
        uVar19 = FUN_0277d6c4(&local_88);
        if (*(long *)puVar11 != 0) {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((uVar19 < *(uint *)(lVar26 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
            lVar26 = *(long *)PTR_DAT_04bc0428;
            uVar19 = FUN_0277d6c4((long *)(param_1 + 0xb4));
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
            if (uVar19 < *(uint *)(lVar26 + 0x1d8)) {
              uVar27 = *(ulong *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar19 * 8);
              if (uVar27 != 0) {
                local_80 = uVar27;
              }
            }
          }
        }
LAB_017e7ee8:
        uVar31 = *(undefined8 *)PTR_DAT_04bb46d0;
        uVar21 = FUN_01b020f0(&local_90);
        iVar22 = FUN_017c0190(uVar31,uVar21);
        *(undefined1 *)(param_1 + 0x1d0) = 0;
        *(undefined4 *)(param_1 + 0x1d4) = 0x3f800000;
        iVar20 = -1;
        iVar18 = 0;
        if (iVar22 != -1) {
          iVar18 = iVar22;
        }
        *(short *)(param_1 + 0x1ce) = (short)iVar18;
        *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
LAB_017e7f2c:
        *(int *)(param_1 + 0x1fc) = iVar20;
      }
      else {
        uVar9 = *(ushort *)PTR_DAT_04bbdeb0;
        if ((long)(short)uVar9 != 0xffffffffffffffff) {
          local_90 = (undefined *)CONCAT44(local_90._4_4_,0x1d);
          puVar5 = (uint *)(puVar14 + ((long)(short)uVar9 & 0xffffffffU) * 8);
          if (0xff < uVar9) {
            puVar5 = (uint *)puVar14;
          }
          if ((*puVar5 >> 0x1d & 1) == 0) goto LAB_017e7ca0;
          lVar26 = *(long *)PTR_DAT_04bb2800;
          if (lVar26 == 0) {
            FUN_02640184(&local_78);
            goto LAB_017e78ec;
          }
          *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(lVar26 + 0x2644);
          *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(lVar26 + 0x2646);
          *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar26 + 0x2642);
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar26 + 0x2648);
          *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar26 + 0x264c) - 1;
          *(uint *)(param_1 + 0x208) = *(ushort *)(lVar26 + 0x2650) - 1;
          iVar20 = *(ushort *)(lVar26 + 0x264e) - 1;
          goto LAB_017e7f2c;
        }
LAB_017e7ca0:
        uVar27 = FUN_02660600((int)cVar7);
        if ((uVar27 & 1) == 0) {
          uVar27 = FUN_02663fa0(&local_a0);
          if ((uVar27 & 1) == 0) {
            *(undefined2 *)(param_1 + 0x1cc) = 1;
            FUN_01ad5d04(&local_90,param_1 + 0xb4);
            goto LAB_017e7ee8;
          }
          lVar30 = FUN_02663ee0(&local_a0);
          if (lVar30 != 0) {
            local_88 = (char *)(lVar30 + 0x348);
            local_80 = CONCAT71(local_80._1_7_,1);
            if (*(long **)(lVar30 + 0x370) == (long *)0x0) {
              uVar17 = 0;
            }
            else {
              puVar23 = (undefined8 *)**(long **)(lVar30 + 0x370);
              uVar17 = 0;
              if (puVar23 != (undefined8 *)0x0) {
                uVar17 = (**(code **)*puVar23)();
              }
            }
            local_80 = CONCAT62(local_80._2_6_,CONCAT11(uVar17,(undefined1)local_80)) &
                       0xffffffffffff01ff;
            lVar26 = *(long *)(lVar30 + 0x358);
            local_90 = PTR_DAT_04bbc500 + 0x10;
            lVar30 = *(long *)(lVar30 + 0x350);
            goto LAB_017e80e4;
          }
        }
        else if ((((uint)(int)cVar7 < 10) && (lVar26 = *(long *)puVar12, lVar26 != 0)) &&
                (lVar26 = (**(code **)(*(long *)**(undefined8 **)(lVar26 + 0x10) + 0x38))(),
                lVar26 != 0)) {
          lVar26 = lVar26 + (ulong)(uint)(int)cVar7 * 0x888;
          local_80 = CONCAT71(local_80._1_7_,1);
          local_88 = (char *)(lVar26 + 0x27fbf8);
          if (*(long **)(lVar26 + 0x27fc20) == (long *)0x0) {
            uVar17 = 0;
          }
          else {
            puVar23 = (undefined8 *)**(long **)(lVar26 + 0x27fc20);
            uVar17 = 0;
            if (puVar23 != (undefined8 *)0x0) {
              uVar17 = (**(code **)*puVar23)();
            }
          }
          local_80 = CONCAT62(local_80._2_6_,CONCAT11(uVar17,(undefined1)local_80)) &
                     0xffffffffffff01ff;
          local_90 = PTR_DAT_04bbc500 + 0x10;
          lVar30 = *(long *)(lVar26 + 0x27fc00);
          lVar26 = *(long *)(lVar26 + 0x27fc08);
LAB_017e80e4:
          lVar26 = lVar26 + lVar30;
          *(undefined2 *)(param_1 + 0x1cc) = *(undefined2 *)(lVar26 + 4);
          *(undefined2 *)(param_1 + 0x1ce) = *(undefined2 *)(lVar26 + 6);
          *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(lVar26 + 2);
          *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(lVar26 + 8);
          *(uint *)(param_1 + 0x1f0) = *(ushort *)(lVar26 + 0xc) - 1;
          *(uint *)(param_1 + 0x208) = *(ushort *)(lVar26 + 0x10) - 1;
          *(uint *)(param_1 + 0x1fc) = *(ushort *)(lVar26 + 0xe) - 1;
          FUN_02640184(&local_90);
        }
      }
LAB_017e8134:
      if (((bVar16 & 1) == 0) || (lVar26 = *(long *)(pcVar4 + 0x28), lVar26 == 0))
      goto LAB_017e78e4;
LAB_017e7464:
      if (*(undefined8 **)(lVar26 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar26 + 8))();
      }
    }
LAB_017e78e4:
    FUN_017fdbb0(param_1);
  }
LAB_017e78ec:
  sVar8 = *(short *)puVar13;
  if (sVar8 != -1) {
    local_78 = (undefined **)CONCAT44(local_78._4_4_,0x19);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar5 >> 0x19 & 1) != 0) &&
       (local_78 = (undefined **)CONCAT44(local_78._4_4_,7), (*puVar5 >> 7 & 1) != 0)) {
      local_78 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_70 = "SeqCeilingEventReady";
      iVar20 = FUN_02758850(&local_78);
      if (((iVar20 == 1) &&
          ((lVar26 = *(long *)PTR_DAT_04bb27f8, lVar26 != 0 && (*(int *)(lVar26 + 0x14) != 0)))) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        local_90 = (undefined *)
                   (CONCAT44(local_90._4_4_,(uint)*(ushort *)(lVar26 + 0xc0)) & 0xffffffff0000000f);
        if ((uint)local_90 == 1) {
          local_78 = (undefined **)0x134f;
          FUN_0277d4ac(&local_78);
          puVar10 = PTR_DAT_04bb5ce0;
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            FUN_017eed1c(*(long *)PTR_DAT_04bb5ce0 + 0xda0,&local_78,0,1);
            lVar26 = *(long *)puVar10;
            if ((lVar26 != 0) && (*(char *)(lVar26 + 0xee4) != '\0')) {
              lVar30 = lVar26 + 0xda0;
              *(undefined1 *)(lVar26 + 0xe9e) = 1;
              *(undefined4 *)(lVar26 + 0xea0) = 2;
              FUN_017ef108(lVar30,0,0);
              FUN_017eff3c(lVar30,0,0);
              FUN_017f0b3c(lVar30);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1f0);
  *(byte *)(param_1 + 0x10e) = *(byte *)(param_1 + 0x13c) >> 7;
  *(byte *)(param_1 + 0xe6) = *(byte *)(param_1 + 0x13c) >> 4 & 1;
  *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_1 + 0xfe);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
  *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
  FUN_017e8150(param_1,0);
  FUN_017e83a0(param_1,0);
  FUN_017e8610(param_1,0);
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  iVar20 = *(int *)(param_1 + 0x140);
  if ((iVar20 != 0) && (iVar20 != 1)) {
    if (iVar20 != 3) {
      lVar26 = *(long *)PTR_DAT_04bb2200;
      goto LAB_017e7b1c;
    }
    iVar20 = 2;
  }
  lVar26 = *(long *)PTR_DAT_04bb2200;
  *(int *)(*(long *)(lVar26 + 0x70) + 0x98) = iVar20;
  *(undefined1 *)(*(long *)(lVar26 + 0x80) + 0x60) = 1;
  iVar20 = *(int *)(param_1 + 0x140);
LAB_017e7b1c:
  local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar20);
  lVar30 = *(long *)(lVar26 + 0x70);
  *(bool *)(lVar30 + 0x9d) = iVar20 != 2;
  *(undefined1 *)(*(long *)(lVar26 + 0x80) + 0x60) = 1;
  uVar17 = *(undefined1 *)(lVar30 + 0x9d);
  *(undefined1 *)(lVar30 + 0x9c) = uVar17;
  if (*(long *)(lVar30 + 0xa8) != 0) {
    lVar26 = *(long *)(*(long *)(lVar30 + 0xa8) + 0x10);
    puVar25 = (undefined1 *)(**(code **)(*(long *)(lVar26 + 0x158) + 0xf0))(lVar26 + 0x158);
    *puVar25 = uVar17;
    *(uint *)(lVar26 + 0x178) = *(uint *)(lVar26 + 0x178) | 0x1000000;
  }
  return;
}

