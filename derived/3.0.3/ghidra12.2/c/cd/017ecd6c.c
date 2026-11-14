
/* WARNING: Removing unreachable block (ram,0x017ed5bc) */

void FUN_017ecd6c(long param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char cVar16;
  byte bVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  uint *puVar23;
  int *piVar24;
  long lVar25;
  undefined *puVar26;
  short *psVar27;
  uint *puVar28;
  uint uVar29;
  short sVar30;
  short sVar31;
  undefined1 auStack_130 [2];
  undefined1 auStack_12e [2];
  short local_12c [2];
  int local_128;
  uint local_124;
  int local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  uint local_104;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_6d;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  local_10c = 0xfffe;
  FUN_0277d4ac(&local_10c);
  local_114 = 0xfffe;
  FUN_0277d4ac(&local_114);
  local_11c = 0xfffe;
  FUN_0277d4ac(&local_11c);
  puVar9 = PTR_DAT_04bc39f8;
  puVar26 = PTR_DAT_04bb46b0;
  local_120 = 0;
  sVar31 = *(short *)PTR_DAT_04bb3170;
  local_124 = 0;
  uVar5 = *(ushort *)PTR_DAT_04bb6298;
  uVar18 = (ulong)(short)uVar5;
  if (uVar18 == 0xffffffffffffffff) {
LAB_017ed030:
    uVar18 = FUN_0180b3e0();
    if (((uVar18 & 1) == 0) && (uVar18 = FUN_0180b340(), (uVar18 & 1) == 0)) {
      uVar18 = FUN_0180b660();
      if ((uVar18 & 1) == 0) {
        uVar18 = FUN_0180b700();
        if (((uVar18 & 1) != 0) && (lVar19 = FUN_02642ea0(), lVar19 != 0)) {
          uVar29 = FUN_0180da90();
          local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar29);
          lVar25 = lVar19 + 0xe0 + (ulong)uVar29 * 0x2488;
          if (5 < uVar29) {
            lVar25 = lVar19 + 0xe0;
          }
          local_f8 = (char *)(lVar25 + 0x1ea0);
          local_f0 = CONCAT71(local_f0._1_7_,1);
          if (*(long **)(lVar25 + 0x1ec8) == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            puVar20 = (undefined8 *)**(long **)(lVar25 + 0x1ec8);
            uVar11 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar11 = (**(code **)*puVar20)();
            }
          }
          local_f0 = CONCAT62(local_f0._2_6_,CONCAT11(uVar11,(undefined1)local_f0)) &
                     0xffffffffffff01ff;
          puVar20 = (undefined8 *)(*(long *)(lVar25 + 0x1eb0) + *(long *)(lVar25 + 0x1ea8));
          local_100 = PTR_DAT_04bb4cb0 + 0x10;
          uVar29 = (uint)*(byte *)((long)puVar20 + 0x1f);
          sVar30 = *(short *)((long)puVar20 + 0x1a);
          sVar31 = *(short *)((long)puVar20 + 0x1c);
          local_114 = puVar20[1];
          local_10c = *puVar20;
          local_11c = puVar20[2];
          bVar17 = *(byte *)(puVar20 + 4) & 1;
          local_124 = *(byte *)(puVar20 + 4) >> 1 & 7;
          local_120 = (int)*(char *)((long)puVar20 + 0x1e);
          FUN_02640184(&local_100);
          goto LAB_017edb84;
        }
      }
      else {
        lVar19 = FUN_016c7c38();
        if (lVar19 != 0) {
          local_f8 = (char *)(lVar19 + 0x118);
          local_f0 = CONCAT71(local_f0._1_7_,1);
          if (*(long **)(lVar19 + 0x140) == (long *)0x0) {
            uVar11 = 0;
          }
          else {
            puVar20 = (undefined8 *)**(long **)(lVar19 + 0x140);
            uVar11 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar11 = (**(code **)*puVar20)();
            }
          }
          local_f0 = CONCAT62(local_f0._2_6_,CONCAT11(uVar11,(undefined1)local_f0)) &
                     0xffffffffffff01ff;
          local_100 = PTR_DAT_04bb4cb0 + 0x10;
          FUN_0285a160(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120),&local_104,
                       param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,param_1 + 0xfe,param_1 + 0x13c,
                       param_1 + 0xd8,param_1 + 0xfc,param_1 + 0xbc,param_1 + 0x140);
          *(int *)(param_1 + 0x100) = (int)(char)local_104;
          FUN_02640184(&local_100);
        }
      }
    }
    else {
LAB_017ed040:
      lVar19 = FUN_03776f00();
      if (lVar19 != 0) {
        if (*(long **)(lVar19 + 0x140) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar20 = (undefined8 *)**(long **)(lVar19 + 0x140);
          uVar18 = 0;
          if (puVar20 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar20)();
          }
        }
        puVar1 = (undefined2 *)(*(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120));
        cVar16 = *(char *)(puVar1 + 0xf);
        *(undefined2 *)(param_1 + 0xf4) = *puVar1;
        *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar1 + 1);
        *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar1 + 3);
        *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar1 + 2);
        *(undefined2 *)(param_1 + 0xd0) = puVar1[4];
        *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar1 + 5);
        *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar1 + 0xb);
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar1 + 6);
        *(undefined2 *)(param_1 + 0xb4) = puVar1[8];
        *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar1 + 9);
        *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar1 + 0x13);
        *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar1 + 10);
        *(byte *)(param_1 + 0xfe) = *(byte *)(puVar1 + 0x10) & 1;
        *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar1 + 0x1f);
        *(undefined2 *)(param_1 + 0xd8) = puVar1[0xd];
        *(undefined2 *)(param_1 + 0xfc) = puVar1[0xc];
        *(undefined2 *)(param_1 + 0xbc) = puVar1[0xe];
        bVar17 = *(byte *)(puVar1 + 0x10);
        *(int *)(param_1 + 0x100) = (int)cVar16;
        *(uint *)(param_1 + 0x140) = bVar17 >> 1 & 7;
        if (((uVar18 & 1) != 0) && (lVar19 = *(long *)(lVar19 + 0x140), lVar19 != 0)) {
LAB_017ed168:
          if (*(undefined8 **)(lVar19 + 8) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar19 + 8))();
          }
        }
      }
    }
LAB_017edb78:
    uVar29 = 0;
    bVar17 = 0;
    sVar30 = sVar31;
  }
  else {
    puVar28 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar5 * 8);
    if (0xff < (uint)(int)(short)uVar5) {
      puVar28 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar28 >> 0x19 & 1) == 0) {
      puVar28 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        puVar28 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar28 >> 7 & 1) == 0) goto LAB_017ecea0;
      local_100 = (undefined *)CONCAT44(local_100._4_4_,*(undefined4 *)(param_1 + 0x138));
      lVar19 = *(long *)PTR_DAT_04bb46b0;
      if (lVar19 != 0) {
        puVar20 = *(undefined8 **)(lVar19 + 0x10);
        if ((*(byte *)(lVar19 + 0x453) & 1) != 0) {
          if (puVar20 != (undefined8 *)0x0) {
            if ((long *)puVar20[0x26] != (long *)0x0) {
              lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
              if (lVar19 != 0) goto LAB_017ed25c;
            }
          }
          goto LAB_017edb78;
        }
        lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
        if (lVar19 == 0) goto LAB_017edb78;
        lVar19 = lVar19 + 0x70;
LAB_017ed25c:
        if (9 < (uint)local_100) goto LAB_017edb78;
        lVar25 = lVar19 + 0x1962d8 + ((ulong)local_100 & 0xffffffff) * 0x10d8;
        if (9 < (uint)local_100) {
          lVar25 = lVar19 + 0x1962d8;
        }
        if ((*(long **)(lVar25 + 0x28) == (long *)0x0) ||
           (puVar20 = (undefined8 *)**(long **)(lVar25 + 0x28), puVar20 == (undefined8 *)0x0)) {
          uVar18 = 0;
        }
        else {
          uVar18 = (**(code **)*puVar20)();
          uVar18 = uVar18 & 0xffffffff;
        }
        cVar16 = *(char *)(*(long *)(lVar25 + 0x10) + *(long *)(lVar25 + 8) + 0x1c4);
        local_100 = PTR_DAT_04bb2020 + 0x10;
        local_f8 = "NpcInteriorCoordinate";
        local_128 = (int)cVar16;
        iVar12 = FUN_02743000(&local_100);
        uVar29 = (uint)cVar16;
        if (iVar12 == 0) {
          uVar14 = FUN_02663fa0(&local_128);
          if ((uVar14 & 1) == 0) {
            lVar19 = FUN_0265c3e0((int)cVar16);
            if (lVar19 != 0) {
              if (*(long **)(lVar19 + 0xf950) == (long *)0x0) {
                uVar14 = 0;
              }
              else {
                puVar20 = (undefined8 *)**(long **)(lVar19 + 0xf950);
                uVar14 = 0;
                if (puVar20 != (undefined8 *)0x0) {
                  uVar14 = (**(code **)*puVar20)();
                }
              }
              puVar1 = (undefined2 *)(*(long *)(lVar19 + 0xf938) + *(long *)(lVar19 + 0xf930));
              cVar16 = *(char *)(puVar1 + 0xf);
              *(undefined2 *)(param_1 + 0xf4) = *puVar1;
              *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar1 + 1);
              *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar1 + 3);
              *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar1 + 2);
              *(undefined2 *)(param_1 + 0xd0) = puVar1[4];
              *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar1 + 5);
              *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar1 + 0xb);
              *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar1 + 6);
              *(undefined2 *)(param_1 + 0xb4) = puVar1[8];
              *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar1 + 9);
              *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar1 + 0x13);
              *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar1 + 10);
              *(byte *)(param_1 + 0xfe) = *(byte *)(puVar1 + 0x10) & 1;
              *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar1 + 0x1f);
              *(undefined2 *)(param_1 + 0xd8) = puVar1[0xd];
              *(undefined2 *)(param_1 + 0xfc) = puVar1[0xc];
              *(undefined2 *)(param_1 + 0xbc) = puVar1[0xe];
              bVar17 = *(byte *)(puVar1 + 0x10);
              *(int *)(param_1 + 0x100) = (int)cVar16;
              *(uint *)(param_1 + 0x140) = bVar17 >> 1 & 7;
              if ((uVar14 & 1) != 0) {
                lVar19 = *(long *)(lVar19 + 0xf950);
joined_r0x017eda08:
                if ((lVar19 != 0) && (*(undefined8 **)(lVar19 + 8) != (undefined8 *)0x0)) {
                  (**(code **)**(undefined8 **)(lVar19 + 8))();
                }
              }
            }
          }
          else {
            local_104 = 0;
            uVar14 = FUN_02b67a30(&local_104,uVar29);
            if ((uVar14 & 1) != 0) {
              local_100 = (undefined *)CONCAT44(local_100._4_4_,local_104);
              lVar19 = *(long *)puVar26;
              if (lVar19 != 0) {
                puVar20 = *(undefined8 **)(lVar19 + 0x10);
                if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
                  lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
                  if (lVar19 != 0) {
                    lVar19 = lVar19 + 0x70;
                    goto LAB_017eda40;
                  }
                }
                else if (((puVar20 != (undefined8 *)0x0) && ((long *)puVar20[0x26] != (long *)0x0))
                        && (lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))(), lVar19 != 0)) {
LAB_017eda40:
                  if ((uint)local_100 < 10) {
                    lVar22 = lVar19 + 0x1962d8 + ((ulong)local_100 & 0xffffffff) * 0x10d8;
                    if (9 < (uint)local_100) {
                      lVar22 = lVar19 + 0x1962d8;
                    }
                    if (*(long **)(lVar22 + 0x990) == (long *)0x0) {
                      uVar14 = 0;
                    }
                    else {
                      puVar20 = (undefined8 *)**(long **)(lVar22 + 0x990);
                      uVar14 = 0;
                      if (puVar20 != (undefined8 *)0x0) {
                        uVar14 = (**(code **)*puVar20)();
                      }
                    }
                    puVar1 = (undefined2 *)(*(long *)(lVar22 + 0x978) + *(long *)(lVar22 + 0x970));
                    cVar16 = *(char *)(puVar1 + 0xf);
                    *(undefined2 *)(param_1 + 0xf4) = *puVar1;
                    *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(puVar1 + 1);
                    *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)((long)puVar1 + 3);
                    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(puVar1 + 2);
                    *(undefined2 *)(param_1 + 0xd0) = puVar1[4];
                    *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(puVar1 + 5);
                    *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)puVar1 + 0xb);
                    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(puVar1 + 6);
                    *(undefined2 *)(param_1 + 0xb4) = puVar1[8];
                    *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(puVar1 + 9);
                    *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)puVar1 + 0x13);
                    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(puVar1 + 10);
                    *(byte *)(param_1 + 0xfe) = *(byte *)(puVar1 + 0x10) & 1;
                    *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)((long)puVar1 + 0x1f);
                    *(undefined2 *)(param_1 + 0xd8) = puVar1[0xd];
                    *(undefined2 *)(param_1 + 0xfc) = puVar1[0xc];
                    *(undefined2 *)(param_1 + 0xbc) = puVar1[0xe];
                    bVar17 = *(byte *)(puVar1 + 0x10);
                    *(int *)(param_1 + 0x100) = (int)cVar16;
                    *(uint *)(param_1 + 0x140) = bVar17 >> 1 & 7;
                    if ((uVar14 & 1) != 0) {
                      lVar19 = *(long *)(lVar22 + 0x990);
                      goto joined_r0x017eda08;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          uVar5 = *(ushort *)PTR_DAT_04bbdeb0;
          if ((long)(short)uVar5 != 0xffffffffffffffff) {
            local_100 = (undefined *)CONCAT44(local_100._4_4_,0x1d);
            puVar28 = (uint *)(puVar9 + ((long)(short)uVar5 & 0xffffffffU) * 8);
            if (0xff < uVar5) {
              puVar28 = (uint *)puVar9;
            }
            if ((*puVar28 >> 0x1d & 1) != 0) {
              lVar19 = *(long *)PTR_DAT_04bb2800;
              if (lVar19 == 0) {
                if ((uVar18 & 1) == 0) {
                  return;
                }
                if (*(long *)(lVar25 + 0x28) == 0) {
                  return;
                }
                puVar20 = *(undefined8 **)(*(long *)(lVar25 + 0x28) + 8);
                if (puVar20 == (undefined8 *)0x0) {
                  return;
                }
                (**(code **)*puVar20)();
                return;
              }
              cVar16 = *(char *)(lVar19 + 0x263a);
              *(undefined2 *)(param_1 + 0xf4) = *(undefined2 *)(lVar19 + 0x261c);
              *(undefined1 *)(param_1 + 0xf6) = *(undefined1 *)(lVar19 + 0x261e);
              *(undefined1 *)(param_1 + 0xf7) = *(undefined1 *)(lVar19 + 0x261f);
              *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar19 + 0x2620);
              *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(lVar19 + 0x2624);
              *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(lVar19 + 0x2626);
              *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)(lVar19 + 0x2627);
              *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(lVar19 + 0x2628);
              *(undefined2 *)(param_1 + 0xb4) = *(undefined2 *)(lVar19 + 0x262c);
              *(undefined1 *)(param_1 + 0xb6) = *(undefined1 *)(lVar19 + 0x262e);
              *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)(lVar19 + 0x262f);
              *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(lVar19 + 0x2630);
              *(byte *)(param_1 + 0xfe) = *(byte *)(lVar19 + 0x263c) & 1;
              *(undefined1 *)(param_1 + 0x13c) = *(undefined1 *)(lVar19 + 0x263b);
              *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(lVar19 + 0x2636);
              *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)(lVar19 + 0x2634);
              *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(lVar19 + 0x2638);
              bVar17 = *(byte *)(lVar19 + 0x263c);
              *(int *)(param_1 + 0x100) = (int)cVar16;
              *(uint *)(param_1 + 0x140) = bVar17 >> 1 & 7;
              goto LAB_017edb6c;
            }
          }
          uVar14 = FUN_02660600(uVar29);
          if ((uVar14 & 1) == 0) {
            uVar14 = FUN_02663fa0(&local_128);
            if ((uVar14 & 1) == 0) {
              lVar19 = FUN_0265c3e0(uVar29);
              if (lVar19 != 0) {
                local_f8 = (char *)(lVar19 + 0xf928);
                local_f0 = CONCAT71(local_f0._1_7_,1);
                if (*(long **)(lVar19 + 0xf950) == (long *)0x0) {
                  uVar11 = 0;
                }
                else {
                  puVar20 = (undefined8 *)**(long **)(lVar19 + 0xf950);
                  uVar11 = 0;
                  if (puVar20 != (undefined8 *)0x0) {
                    uVar11 = (**(code **)*puVar20)();
                  }
                }
                local_f0 = CONCAT62(local_f0._2_6_,CONCAT11(uVar11,(undefined1)local_f0));
                lVar22 = *(long *)(lVar19 + 0xf930);
                lVar19 = *(long *)(lVar19 + 0xf938);
                goto LAB_017edb3c;
              }
            }
            else {
              lVar19 = FUN_02663ee0(&local_128);
              if (lVar19 != 0) {
                local_f8 = (char *)(lVar19 + 0x118);
                local_f0 = CONCAT71(local_f0._1_7_,1);
                if (*(long **)(lVar19 + 0x140) == (long *)0x0) {
                  uVar11 = 0;
                }
                else {
                  puVar20 = (undefined8 *)**(long **)(lVar19 + 0x140);
                  uVar11 = 0;
                  if (puVar20 != (undefined8 *)0x0) {
                    uVar11 = (**(code **)*puVar20)();
                  }
                }
                local_f0 = CONCAT62(local_f0._2_6_,CONCAT11(uVar11,(undefined1)local_f0));
                lVar19 = *(long *)(lVar19 + 0x128) + *(long *)(lVar19 + 0x120);
                goto LAB_017edb40;
              }
            }
          }
          else if (((uVar29 < 10) && (lVar19 = *(long *)puVar26, lVar19 != 0)) &&
                  (lVar19 = (**(code **)(*(long *)**(undefined8 **)(lVar19 + 0x10) + 0x38))(),
                  lVar19 != 0)) {
            lVar19 = lVar19 + (ulong)uVar29 * 0x888;
            local_f0 = CONCAT71(local_f0._1_7_,1);
            local_f8 = (char *)(lVar19 + 0x27f9c8);
            if (*(long **)(lVar19 + 0x27f9f0) == (long *)0x0) {
              uVar11 = 0;
            }
            else {
              puVar20 = (undefined8 *)**(long **)(lVar19 + 0x27f9f0);
              uVar11 = 0;
              if (puVar20 != (undefined8 *)0x0) {
                uVar11 = (**(code **)*puVar20)();
              }
            }
            local_f0 = CONCAT62(local_f0._2_6_,CONCAT11(uVar11,(undefined1)local_f0));
            lVar22 = *(long *)(lVar19 + 0x27f9d0);
            lVar19 = *(long *)(lVar19 + 0x27f9d8);
LAB_017edb3c:
            lVar19 = lVar19 + lVar22;
LAB_017edb40:
            local_100 = PTR_DAT_04bb4cb0 + 0x10;
            local_f0 = local_f0 & 0xffffffffffff01ff;
            FUN_0285a160(lVar19,&local_104,param_1 + 0xf4,param_1 + 0xd0,param_1 + 0xb4,
                         param_1 + 0xfe,param_1 + 0x13c,param_1 + 0xd8,param_1 + 0xfc,param_1 + 0xbc
                         ,param_1 + 0x140);
            *(int *)(param_1 + 0x100) = (int)(char)local_104;
            FUN_02640184(&local_100);
          }
        }
LAB_017edb6c:
        if ((uVar18 & 1) == 0) goto LAB_017edb78;
        lVar19 = *(long *)(lVar25 + 0x28);
        if (lVar19 == 0) goto LAB_017edb78;
        goto LAB_017ed168;
      }
      goto LAB_017edb78;
    }
LAB_017ecea0:
    local_100 = (undefined *)CONCAT44(local_100._4_4_,6);
    puVar28 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
    if (0xff < uVar5) {
      puVar28 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar28 >> 6 & 1) != 0) {
      local_128 = 0;
      lVar19 = *(long *)PTR_DAT_04bb2720;
      if (lVar19 == 0) {
        puVar20 = &DAT_055c04a0;
      }
      else {
        puVar20 = &DAT_055c04a0;
        if (*(long *)(lVar19 + 0x330) != 0) {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar12 = FUN_006bd550(*puVar20,0);
          puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar20 = &DAT_055c04a0;
          }
        }
      }
      uVar18 = FUN_02b5f400(&local_128,*(undefined4 *)(puVar20 + 7));
      iVar12 = local_128;
      if ((uVar18 & 1) != 0) {
        local_104 = FUN_0180da90();
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar12);
        lVar19 = *(long *)PTR_DAT_04bb46b0;
        if (lVar19 != 0) {
          puVar20 = *(undefined8 **)(lVar19 + 0x10);
          if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
            lVar19 = (**(code **)(*(long *)*puVar20 + 0x38))();
            if (lVar19 != 0) {
              lVar19 = lVar19 + 0x70;
LAB_017ed338:
              if ((uint)local_100 < 8) {
                lVar25 = lVar19 + 0x119228 + ((ulong)local_100 & 0xffffffff) * 0xfa08;
                if (7 < (uint)local_100) {
                  lVar25 = lVar19 + 0x119228;
                }
                lVar19 = lVar25 + 0x1df8 + (ulong)local_104 * 0x2488;
                if (5 < local_104) {
                  lVar19 = lVar25 + 0x1df8;
                }
                plVar21 = *(long **)(lVar19 + 0x1ec8);
                goto joined_r0x017ed380;
              }
            }
          }
          else if (puVar20 != (undefined8 *)0x0) {
            if ((long *)puVar20[0x26] != (long *)0x0) {
              lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
              if (lVar19 != 0) goto LAB_017ed338;
            }
          }
        }
      }
      goto LAB_017edb78;
    }
    local_100 = (undefined *)CONCAT44(local_100._4_4_,0x15);
    puVar28 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
    if (0xff < uVar5) {
      puVar28 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar28 >> 0x15 & 1) == 0) {
      local_100 = (undefined *)CONCAT44(local_100._4_4_,0x19);
      puVar28 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        puVar28 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar28 >> 0x19 & 1) == 0) ||
         (local_100 = (undefined *)CONCAT44(local_100._4_4_,7), (*puVar28 >> 7 & 1) == 0))
      goto LAB_017ed030;
      goto LAB_017ed040;
    }
    uVar18 = FUN_01810f30();
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      lVar25 = 0;
      plVar21 = (long *)PTR_DAT_04bb2720;
    }
    else {
      lVar25 = FUN_026f480c();
      plVar21 = (long *)PTR_DAT_04bb2720;
    }
    PTR_DAT_04bb2720 = (undefined *)plVar21;
    if ((uVar18 & 1) == 0) {
      lVar19 = *plVar21;
      uVar29 = 0;
      if (lVar19 != 0) {
        if (*(long *)(lVar19 + 0x330) == 0) {
          uVar29 = 0;
        }
        else {
          puVar20 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
          iVar12 = FUN_006bd550(*puVar20,0);
          uVar29 = 0;
          if (iVar12 == 0x758f7eaf) {
            uVar29 = 0;
            if (*plVar21 != 0) {
              lVar19 = *(long *)(*plVar21 + 0x330);
              uVar29 = 0;
              if (lVar19 != 0) {
                uVar29 = *(uint *)(lVar19 + 0x248);
              }
            }
          }
        }
      }
      if (lVar25 == 0) goto LAB_017edb78;
      if (4 < (int)uVar29) {
        uVar29 = 5;
      }
      lVar19 = lVar25 + 0x118 + (ulong)uVar29 * 0x2488;
      if (5 < uVar29) {
        lVar19 = lVar25 + 0x118;
      }
      plVar21 = *(long **)(lVar19 + 0x1ec8);
joined_r0x017ed380:
      if (plVar21 == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        uVar18 = 0;
        if ((undefined8 *)*plVar21 != (undefined8 *)0x0) {
          uVar18 = (*(code *)**(undefined8 **)*plVar21)();
        }
      }
      puVar20 = (undefined8 *)(*(long *)(lVar19 + 0x1eb0) + *(long *)(lVar19 + 0x1ea8));
      local_10c = *puVar20;
      bVar4 = *(byte *)((long)puVar20 + 0x1f);
      uVar29 = (uint)bVar4;
      sVar30 = *(short *)((long)puVar20 + 0x1a);
      sVar31 = *(short *)((long)puVar20 + 0x1c);
      local_114 = puVar20[1];
      local_11c = puVar20[2];
      bVar17 = *(byte *)(puVar20 + 4) & 1;
      local_124 = *(byte *)(puVar20 + 4) >> 1 & 7;
      local_120 = (int)*(char *)((long)puVar20 + 0x1e);
      if ((uVar18 & 1) != 0) {
        lVar19 = *(long *)(lVar19 + 0x1ec8);
        goto joined_r0x017ed574;
      }
    }
    else {
      if (lVar25 == 0) goto LAB_017edb78;
      if (*(long **)(lVar25 + 0xfb10) == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        puVar20 = (undefined8 *)**(long **)(lVar25 + 0xfb10);
        uVar18 = 0;
        if (puVar20 != (undefined8 *)0x0) {
          uVar18 = (**(code **)*puVar20)();
        }
      }
      puVar20 = (undefined8 *)(*(long *)(lVar25 + 0xfaf8) + *(long *)(lVar25 + 0xfaf0));
      bVar4 = *(byte *)((long)puVar20 + 0x1f);
      uVar29 = (uint)bVar4;
      local_10c = *puVar20;
      sVar30 = *(short *)((long)puVar20 + 0x1a);
      sVar31 = *(short *)((long)puVar20 + 0x1c);
      local_114 = puVar20[1];
      local_11c = puVar20[2];
      bVar17 = *(byte *)(puVar20 + 4) & 1;
      local_124 = *(byte *)(puVar20 + 4) >> 1 & 7;
      local_120 = (int)*(char *)((long)puVar20 + 0x1e);
      if ((uVar18 & 1) != 0) {
        lVar19 = *(long *)(lVar25 + 0xfb10);
joined_r0x017ed574:
        if (lVar19 != 0) {
          uVar29 = (uint)bVar4;
          if (*(undefined8 **)(lVar19 + 8) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(lVar19 + 8))();
          }
        }
      }
    }
  }
LAB_017edb84:
  bVar4 = *(byte *)(param_1 + 0x13c);
  uVar18 = FUN_0277d7b4(param_1 + 0xb4,&local_11c);
  if (((((uVar18 & 1) == 0) || (*(short *)(param_1 + 0xbc) != sVar31)) ||
      ((bVar4 >> 6 & 1) != (uVar29 & 0x40) >> 6)) || ((bVar4 >> 5 & 1) != (uVar29 & 0x20) >> 5)) {
    bVar10 = true;
    *(short *)(param_1 + 0xbc) = sVar31;
    *(undefined4 *)(param_1 + 0xb4) = (undefined4)local_11c;
    *(undefined4 *)(param_1 + 0xb8) = local_11c._4_4_;
  }
  else {
    bVar10 = false;
  }
  bVar4 = *(byte *)(param_1 + 0x13c);
  uVar18 = FUN_0277d7b4(param_1 + 0xd0,&local_114);
  psVar27 = (short *)(param_1 + 0xd8);
  if ((((((uVar18 & 1) == 0) || (*psVar27 != sVar30)) ||
       (((bVar4 >> 4 & 1) != (uVar29 & 0x10) >> 4 ||
        ((*(int *)(param_1 + 0x100) != local_120 ||
         (uVar18 = FUN_0277d7b4(param_1 + 0xf4,&local_10c), (uVar18 & 1) == 0)))))) ||
      ((bVar4 ^ uVar29) >> 7 != 0)) || (*(byte *)(param_1 + 0xfe) != bVar17)) {
    *(short *)(param_1 + 0xd8) = sVar30;
    bVar6 = true;
    *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_114;
    *(undefined4 *)(param_1 + 0xd4) = local_114._4_4_;
    *(int *)(param_1 + 0x100) = local_120;
    *(undefined4 *)(param_1 + 0xf4) = (undefined4)local_10c;
    *(undefined4 *)(param_1 + 0xf8) = local_10c._4_4_;
    *(byte *)(param_1 + 0xfe) = bVar17;
  }
  else {
    bVar6 = false;
  }
  FUN_017ebc00(param_1,0);
  puVar26 = PTR_DAT_04bb43c0;
  if (bVar10) {
    if ((*(char *)(param_1 + 0x144) != '\0') && (*(short *)(param_1 + 0xb4) != -2)) {
      local_f0 = 0;
      local_100 = PTR_DAT_04bc0510 + 0x10;
      local_f8 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0xb8),
                                  CONCAT22(*(undefined2 *)(param_1 + 0xb6),
                                           *(short *)(param_1 + 0xb4)));
      lVar19 = *(long *)PTR_DAT_04bb43c0;
      uVar13 = FUN_0277d6c4(&local_f8);
      if (*(long *)puVar26 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar13 = FUN_0277d6c4(param_1 + 0xb4);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
             ((puVar28 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8),
              puVar28 != (uint *)0x0 && (uVar13 = *puVar28, uVar13 != 0)))) {
            cVar16 = *PTR_DAT_04bbfe88;
            puVar15 = PTR_DAT_04bbfe88;
            puVar26 = PTR_DAT_04bbfe90;
            do {
              if (cVar16 == '\0') {
                *puVar15 = 1;
                memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                cVar16 = '\x01';
                uVar13 = *puVar28;
                puVar15 = PTR_DAT_04bbfe88;
                puVar26 = PTR_DAT_04bbfe90;
              }
              else {
                uVar3 = *(uint *)(puVar26 + 0x128);
                if (-1 < (int)uVar3) {
                  if (((short *)((ulong)uVar3 + (long)puVar28) != (short *)0x0) &&
                     (*(short *)((ulong)uVar3 + (long)puVar28) == 0x2aa7)) goto LAB_017edebc;
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar23 = (uint *)(ulong)uVar13;
              if ((puVar23 == (uint *)0x0) || (puVar28 == puVar23)) break;
              lVar19 = 0xc;
              if (*(char *)((long)puVar28 + (10 - (long)puVar23)) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)puVar28 + (lVar19 - (long)puVar23);
              if (lVar19 == 0) break;
              uVar18 = (ulong)*(ushort *)((long)puVar28 + (8 - (long)puVar23));
              *(undefined4 *)(puVar26 + 0x128) = 0xfffffffe;
              if (uVar18 == 0) break;
              piVar24 = (int *)(lVar19 + 4);
              while (piVar24[-1] != 0x54706054) {
                piVar24 = piVar24 + 2;
                uVar18 = uVar18 - 1;
                if (uVar18 == 0) goto LAB_017ede70;
              }
              iVar12 = 0;
              if (*piVar24 != -1) {
                iVar12 = *piVar24;
              }
              *(int *)(puVar26 + 0x128) = iVar12;
              uVar13 = *puVar28;
              if (uVar13 == 0) break;
            } while( true );
          }
        }
      }
LAB_017ede70:
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
        cVar16 = *(char *)(param_1 + 0x144);
LAB_017edeac:
        if (cVar16 == '\0') goto LAB_017edebc;
        bVar4 = *(byte *)(param_1 + 0x13c) & 0xbf;
      }
      else {
        uVar18 = FUN_017f8d00(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
        cVar16 = *(char *)(param_1 + 0x144);
        if ((uVar18 & 1) == 0) goto LAB_017edeac;
        if (cVar16 == '\0') goto LAB_017edebc;
        bVar4 = *(byte *)(param_1 + 0x13c) & 0xbf | (byte)(uVar29 & 0x40);
      }
      *(byte *)(param_1 + 0x13c) = bVar4;
    }
LAB_017edebc:
    FUN_007ef010(local_12c,(short *)(param_1 + 0xbc));
    if (*(char *)(param_1 + 0x144) != '\0') {
      *(short *)(param_1 + 0xbc) = local_12c[0];
      bVar7 = (byte)(uVar29 & 0x20);
      bVar4 = *(byte *)(param_1 + 0x13c) & 0xdf | bVar7;
      *(byte *)(param_1 + 0x13c) = bVar4;
      if (local_12c[0] == *(short *)PTR_DAT_04bb3170) {
        iVar12 = *(int *)(param_1 + 0x208);
        if (iVar12 != -1) {
          local_6d = 0;
          local_f8 = (char *)((long)&local_f0 + 4);
          local_f0 = CONCAT35(local_f0._5_3_,0x80);
          local_100 = PTR_DAT_04bb2d88 + 0x10;
          FUN_01afe7a0(&local_100,iVar12);
          if (*local_f8 != '\0') {
            *(int *)(param_1 + 0x208) = iVar12;
            if (*(char *)(param_1 + 0x144) != '\0') {
              *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xdf | bVar7;
            }
            uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)PTR_DAT_04bb37e0;
            *(undefined4 *)(param_1 + 0xb8) = uVar2;
            *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)PTR_DAT_04bb3170;
          }
          goto LAB_017edfa8;
        }
      }
      else {
        uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)PTR_DAT_04bb37e0;
        *(undefined4 *)(param_1 + 0xb8) = uVar2;
      }
      *(byte *)(param_1 + 0x13c) = bVar4;
      *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
    }
  }
LAB_017edfa8:
  bVar4 = (byte)uVar29;
  if (bVar6) {
    FUN_017ee860(param_1,param_1 + 0xd0,0,0);
    FUN_007ef010(auStack_12e,psVar27);
    bVar7 = (byte)(uVar29 & 0x10);
    if (*(char *)(param_1 + 0x144) != '\0') {
      *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xef | bVar7;
    }
    FUN_007ef010(&local_100,auStack_12e);
    if (*(char *)(param_1 + 0x144) == '\0') {
      bVar10 = true;
      if (bVar17 == 0) goto LAB_017ee0a4;
LAB_017ee114:
      if (!bVar10) {
        *(undefined1 *)(param_1 + 0xfe) = 1;
      }
    }
    else {
      *psVar27 = (short)local_100;
      if ((short)local_100 == *(short *)PTR_DAT_04bb3170) {
        iVar12 = *(int *)(param_1 + 0x1f0);
        *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xef | bVar7;
        if (iVar12 == -1) goto LAB_017ee0f8;
        local_6d = 0;
        local_f8 = (char *)((long)&local_f0 + 4);
        local_f0 = CONCAT35(local_f0._5_3_,0x80);
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        FUN_01afe7a0(&local_100,iVar12);
        puVar26 = PTR_DAT_04bb37e0;
        if (*local_f8 != '\0') {
          *(int *)(param_1 + 0x1f0) = iVar12;
          uVar2 = *(undefined4 *)(puVar26 + 4);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)puVar26;
          *(undefined4 *)(param_1 + 0xd4) = uVar2;
          *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)PTR_DAT_04bb3170;
        }
      }
      else {
        uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)PTR_DAT_04bb37e0;
        *(undefined4 *)(param_1 + 0xd4) = uVar2;
        *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xef | bVar7;
LAB_017ee0f8:
        *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
      }
      bVar10 = *(char *)(param_1 + 0x144) == '\0';
      if (bVar17 != 0) goto LAB_017ee114;
LAB_017ee0a4:
      puVar26 = PTR_DAT_04bb37e0;
      if (!bVar10) {
        *(undefined1 *)(param_1 + 0xfe) = 0;
        uVar2 = *(undefined4 *)(puVar26 + 4);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)puVar26;
        *(undefined4 *)(param_1 + 0xf8) = uVar2;
        *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)PTR_DAT_04bb3170;
        *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
      }
    }
    FUN_017eed1c(param_1,param_1 + 0xf4,0,0);
    FUN_007ef010(auStack_130,param_1 + 0xfc);
    if ((*(char *)(param_1 + 0x144) != '\0') &&
       (FUN_007ef010(&local_100,auStack_130), *(char *)(param_1 + 0x144) != '\0')) {
      bVar17 = bVar4 & 0x80 | *(byte *)(param_1 + 0x13c) & 0x7f;
      *(short *)(param_1 + 0xfc) = (short)local_100;
      *(byte *)(param_1 + 0x13c) = bVar17;
      puVar26 = PTR_DAT_04bb37e0;
      if ((short)local_100 == *(short *)PTR_DAT_04bb3170) {
        iVar12 = *(int *)(param_1 + 0x1fc);
        *(byte *)(param_1 + 0x13c) = bVar17;
        if (iVar12 != -1) {
          local_6d = 0;
          local_f8 = (char *)((long)&local_f0 + 4);
          local_f0 = CONCAT35(local_f0._5_3_,0x80);
          local_100 = PTR_DAT_04bb2d88 + 0x10;
          FUN_01afe7a0(&local_100,iVar12);
          puVar26 = PTR_DAT_04bb37e0;
          if (*local_f8 != '\0') {
            *(int *)(param_1 + 0x1fc) = iVar12;
            uVar2 = *(undefined4 *)(puVar26 + 4);
            *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)puVar26;
            *(undefined4 *)(param_1 + 0xf8) = uVar2;
            *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)PTR_DAT_04bb3170;
          }
          goto LAB_017ee21c;
        }
      }
      else {
        *(byte *)(param_1 + 0x13c) = bVar17;
        uVar2 = *(undefined4 *)(puVar26 + 4);
        *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)puVar26;
        *(undefined4 *)(param_1 + 0xf8) = uVar2;
      }
      *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
    }
  }
LAB_017ee21c:
  if ((*(uint *)(param_1 + 0x140) == local_124) || (*(char *)(param_1 + 0x144) == '\0'))
  goto LAB_017ee2e4;
  *(uint *)(param_1 + 0x140) = local_124;
  uVar13 = local_124;
  if ((local_124 == 0) || (local_124 == 1)) {
LAB_017ee258:
    lVar19 = *(long *)PTR_DAT_04bb2200;
    *(uint *)(*(long *)(lVar19 + 0x70) + 0x98) = uVar13;
    *(undefined1 *)(*(long *)(lVar19 + 0x80) + 0x60) = 1;
    uVar13 = *(uint *)(param_1 + 0x140);
  }
  else {
    if (local_124 == 3) {
      uVar13 = 2;
      goto LAB_017ee258;
    }
    lVar19 = *(long *)PTR_DAT_04bb2200;
  }
  local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar13);
  lVar25 = *(long *)(lVar19 + 0x70);
  *(bool *)(lVar25 + 0x9d) = uVar13 != 2;
  *(undefined1 *)(*(long *)(lVar19 + 0x80) + 0x60) = 1;
  uVar11 = *(undefined1 *)(lVar25 + 0x9d);
  *(undefined1 *)(lVar25 + 0x9c) = uVar11;
  if (*(long *)(lVar25 + 0xa8) != 0) {
    lVar19 = *(long *)(*(long *)(lVar25 + 0xa8) + 0x10);
    puVar15 = (undefined1 *)(**(code **)(*(long *)(lVar19 + 0x158) + 0xf0))(lVar19 + 0x158);
    *puVar15 = uVar11;
    *(uint *)(lVar19 + 0x178) = *(uint *)(lVar19 + 0x178) | 0x1000000;
  }
LAB_017ee2e4:
  *(byte *)(param_1 + 0x13c) = bVar4;
  bVar8 = (byte)((uVar29 >> 2 & 1) << 2);
  bVar17 = *(byte *)(param_1 + 0x13d) & 0xf0;
  bVar7 = (byte)((uVar29 >> 3 & 1) << 3);
  if ((uVar29 >> 1 & 1) == 0) {
    bVar17 = bVar17 | bVar8 | bVar7 | bVar4 & 1;
  }
  else {
    bVar17 = bVar17 | *(byte *)(param_1 + 0x13d) & 2 | bVar8 | bVar7 | bVar4 & 1 | 2;
  }
  *(byte *)(param_1 + 0x13d) = bVar17;
  return;
}

