
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff8c : 0x025410d4 */
/* WARNING: Removing unreachable block (ram,0x02541190) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_025403d0(undefined2 *param_1,undefined2 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  byte bVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined4 uVar30;
  long lVar31;
  long lVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  long *plVar36;
  undefined2 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined4 local_110;
  undefined4 local_fc;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined2 local_74 [2];
  uint local_70;
  uint local_6c [3];
  
  plVar36 = (long *)PTR_DAT_04bb43c0;
  uVar10 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar30 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar32 = *(long *)PTR_DAT_04bb43c0;
  uVar16 = FUN_0277d6c4(param_3);
  lVar31 = *plVar36;
  local_dc = uVar30;
  local_d8 = uVar30;
  local_cc = uVar30;
  uVar21 = uVar3;
  uVar5 = uVar3;
  uVar7 = uVar3;
  uVar18 = uVar4;
  uVar6 = uVar4;
  uVar8 = uVar4;
  uVar26 = uVar10;
  uVar11 = uVar10;
  uVar12 = uVar10;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = *param_3;
      uStack_84 = param_3[1];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 1) {
              uVar11 = *param_2;
              uVar5 = *(undefined1 *)(param_2 + 1);
              uVar6 = *(undefined1 *)((long)param_2 + 3);
              local_cc = *(undefined4 *)(param_2 + 2);
              uVar17 = FUN_0277dc30(param_3,param_2 + 4);
              if ((uVar17 & 1) != 0) {
                uVar12 = param_2[4];
                uVar7 = *(undefined1 *)(param_2 + 5);
                uVar8 = *(undefined1 *)((long)param_2 + 0xb);
                local_d8 = *(undefined4 *)(param_2 + 6);
              }
              uVar17 = FUN_0277dc30(param_3,param_2 + 8);
              if ((uVar17 & 1) == 0) {
              }
              else {
                local_dc = *(undefined4 *)(param_2 + 10);
                uVar21 = *(undefined1 *)(param_2 + 9);
                uVar18 = *(undefined1 *)((long)param_2 + 0x13);
                uVar26 = param_2[8];
              }
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar31 = *plVar36;
    }
  }
  puVar1 = param_3 + 2;
  uVar16 = FUN_0277d6c4(puVar1);
  lVar32 = *plVar36;
  if (lVar32 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[2];
      uStack_84 = param_3[3];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar32 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(puVar1);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 2) {
              uVar12 = param_2[4];
              uVar7 = *(undefined1 *)(param_2 + 5);
              uVar8 = *(undefined1 *)((long)param_2 + 0xb);
              local_d8 = *(undefined4 *)(param_2 + 6);
              uVar17 = FUN_0277dc30(puVar1,param_2);
              if ((uVar17 & 1) != 0) {
                uVar11 = *param_2;
                uVar5 = *(undefined1 *)(param_2 + 1);
                uVar6 = *(undefined1 *)((long)param_2 + 3);
                local_cc = *(undefined4 *)(param_2 + 2);
              }
              uVar17 = FUN_0277dc30(puVar1,param_2 + 8);
              if ((uVar17 & 1) != 0) {
                uVar26 = param_2[8];
                uVar21 = *(undefined1 *)(param_2 + 9);
                uVar18 = *(undefined1 *)((long)param_2 + 0x13);
                local_dc = *(undefined4 *)(param_2 + 10);
              }
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar32 = *plVar36;
    }
  }
  puVar1 = param_3 + 4;
  uVar16 = FUN_0277d6c4(puVar1);
  lVar31 = *plVar36;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[4];
      uStack_84 = param_3[5];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(puVar1);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 3) {
              uVar26 = param_2[8];
              uVar21 = *(undefined1 *)(param_2 + 9);
              uVar18 = *(undefined1 *)((long)param_2 + 0x13);
              local_dc = *(undefined4 *)(param_2 + 10);
              uVar17 = FUN_0277dc30(puVar1,param_2);
              if ((uVar17 & 1) != 0) {
                uVar11 = *param_2;
                uVar5 = *(undefined1 *)(param_2 + 1);
                uVar6 = *(undefined1 *)((long)param_2 + 3);
                local_cc = *(undefined4 *)(param_2 + 2);
              }
              uVar17 = FUN_0277dc30(puVar1,param_2 + 4);
              if ((uVar17 & 1) != 0) {
                uVar12 = param_2[4];
                uVar7 = *(undefined1 *)(param_2 + 5);
                uVar8 = *(undefined1 *)((long)param_2 + 0xb);
                local_d8 = *(undefined4 *)(param_2 + 6);
              }
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar31 = *plVar36;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 0x10);
  lVar32 = *plVar36;
  local_c0 = uVar30;
  uVar22 = uVar3;
  uVar19 = uVar4;
  uVar27 = uVar10;
  if (lVar32 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[0x10];
      uStack_84 = param_3[0x11];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar32 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 0x10);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 4) {
              local_c0 = *(undefined4 *)(param_2 + 0x22);
              uVar22 = *(undefined1 *)(param_2 + 0x21);
              uVar19 = *(undefined1 *)((long)param_2 + 0x43);
              uVar27 = param_2[0x20];
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar32 = *plVar36;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 6);
  lVar31 = *plVar36;
  local_fc = uVar30;
  local_110 = uVar30;
  uVar25 = uVar3;
  uVar9 = uVar3;
  uVar23 = uVar4;
  uVar33 = uVar4;
  uVar29 = uVar10;
  uVar13 = uVar10;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[6];
      uStack_84 = param_3[7];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 6);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 5) {
              local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
              uVar13 = param_2[0xc];
              uVar9 = *(undefined1 *)(param_2 + 0xd);
              uVar22 = *(undefined1 *)(param_2 + 0x21);
              uVar33 = *(undefined1 *)((long)param_2 + 0x1b);
              uVar19 = *(undefined1 *)((long)param_2 + 0x43);
              uVar27 = param_2[0x20];
              local_110 = *(undefined4 *)(param_2 + 0xe);
              local_c0 = *(undefined4 *)(param_2 + 0x22);
              FUN_01adab50(&local_90,&local_a8);
              puVar15 = local_a8;
              local_70 = CONCAT22(local_70._2_2_,local_a8._0_2_);
              uVar16 = local_70;
              local_6c[0] = 6;
              local_a8 = (undefined *)CONCAT44(local_a8._4_4_,6);
              local_70._0_1_ = (byte)puVar15;
              bVar14 = (byte)local_70 >> 6;
              local_70 = uVar16;
              if ((bVar14 & 1) != 0) {
                local_fc = *(undefined4 *)(param_2 + 0x12);
                uVar25 = *(undefined1 *)(param_2 + 0x11);
                uVar23 = *(undefined1 *)((long)param_2 + 0x23);
                uVar29 = param_2[0x10];
              }
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar31 = *plVar36;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 8);
  puVar15 = PTR_DAT_04bc0510;
  lVar32 = *plVar36;
  if (lVar32 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[8];
      uStack_84 = param_3[9];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar32 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 8);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 != 6) break;
            lVar32 = *plVar36;
            uVar29 = param_2[0x10];
            uVar25 = *(undefined1 *)(param_2 + 0x11);
            uVar22 = *(undefined1 *)(param_2 + 0x21);
            uVar23 = *(undefined1 *)((long)param_2 + 0x23);
            local_fc = *(undefined4 *)(param_2 + 0x12);
            uVar19 = *(undefined1 *)((long)param_2 + 0x43);
            uVar27 = param_2[0x20];
            local_c0 = *(undefined4 *)(param_2 + 0x22);
            uVar16 = FUN_0277d6c4(param_2 + 0xc);
            lVar31 = *plVar36;
            if (lVar31 != 0) {
              lVar32 = *(long *)(lVar32 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
              if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                local_a8 = puVar15 + 0x10;
                local_98 = 0;
                local_a0 = *(undefined4 *)(param_2 + 0xc);
                uStack_9c = *(undefined4 *)(param_2 + 0xe);
                uVar16 = FUN_0277d6c4(&local_a0);
                plVar36 = (long *)PTR_DAT_04bb43c0;
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar31 = *(long *)(lVar31 + 0x57e58);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                    lVar31 = *(long *)PTR_DAT_04bc0428;
                    uVar16 = FUN_0277d6c4(param_2 + 0xc);
                    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
                      lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
                      if (lVar31 != 0) {
                        local_98 = lVar31;
                      }
                    }
                  }
                }
                local_6c[0] = local_6c[0] & 0xffff0000;
                FUN_01adab50(&local_a8,local_6c);
                uVar16 = local_6c[0];
                local_74[0] = (undefined2)local_6c[0];
                uVar28 = local_74[0];
                local_70 = 6;
                local_6c[0] = 6;
                local_74[0]._0_1_ = (byte)uVar16;
                bVar14 = (byte)local_74[0] >> 6;
                local_74[0] = uVar28;
                if ((bVar14 & 1) != 0) {
                  uVar13 = param_2[0xc];
                  uVar9 = *(undefined1 *)(param_2 + 0xd);
                  uVar33 = *(undefined1 *)((long)param_2 + 0x1b);
                  local_110 = *(undefined4 *)(param_2 + 0xe);
                }
                break;
              }
            }
            plVar36 = (long *)PTR_DAT_04bb43c0;
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar32 = *plVar36;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 10);
  lVar31 = *plVar36;
  uVar34 = uVar30;
  uVar24 = uVar3;
  uVar20 = uVar4;
  uVar28 = uVar10;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[10];
      uStack_84 = param_3[0xb];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*plVar36 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 10);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 7) {
              uVar34 = *(undefined4 *)(param_2 + 0x16);
              uVar24 = *(undefined1 *)(param_2 + 0x15);
              uVar20 = *(undefined1 *)((long)param_2 + 0x2b);
              uVar28 = param_2[0x14];
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar31 = *plVar36;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 0xc);
  lVar32 = *plVar36;
  uVar35 = uVar30;
  uVar37 = uVar10;
  uVar38 = uVar3;
  uVar39 = uVar4;
  if (lVar32 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[0xc];
      uStack_84 = param_3[0xd];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar31 = *(long *)(lVar32 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 0xc);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      uVar16 = 0;
      do {
        local_70 = uVar16;
        if ((uVar16 != 0) && (local_6c[0] = uVar16, uVar16 < 0xe)) {
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16);
          uVar2 = uVar16 + 7;
          if (-1 < (int)uVar16) {
            uVar2 = uVar16;
          }
          if (((uint)((int)uVar2 >> 3) < 2) &&
             (local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar16),
             (*(byte *)((long)local_74 + (ulong)(uint)((int)uVar2 >> 3)) >> (ulong)(uVar16 & 7) & 1)
             != 0)) {
            if (uVar16 == 8) {
              uVar35 = *(undefined4 *)(param_2 + 0x1a);
              uVar37 = param_2[0x18];
              uVar38 = *(undefined1 *)(param_2 + 0x19);
              uVar39 = *(undefined1 *)((long)param_2 + 0x33);
            }
            break;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0xe);
      lVar32 = *(long *)PTR_DAT_04bb43c0;
    }
  }
  uVar16 = FUN_0277d6c4(param_3 + 0xe);
  lVar31 = *(long *)PTR_DAT_04bb43c0;
  if (lVar31 != 0) {
    lVar32 = *(long *)(lVar32 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8);
    if ((uVar16 < *(uint *)(lVar32 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar32 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
      local_80 = 0;
      local_88 = param_3[0xe];
      uStack_84 = param_3[0xf];
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uVar16 = FUN_0277d6c4(&local_88);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar31 = *(long *)(lVar31 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar31 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar31 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(param_3 + 0xe);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
          if (uVar16 < *(uint *)(lVar31 + 0x1d8)) {
            lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar31 != 0) {
              local_80 = lVar31;
            }
          }
        }
      }
      local_74[0] = 0;
      FUN_01adab50(&local_90,local_74);
      local_70 = 0;
      do {
        if ((local_70 != 0) && (local_70 < 0xe)) {
          uVar16 = local_70 + 7;
          if (-1 < (int)local_70) {
            uVar16 = local_70;
          }
          if (((uint)((int)uVar16 >> 3) < 2) &&
             ((*(byte *)((long)local_74 + (ulong)(uint)((int)uVar16 >> 3)) >> (ulong)(local_70 & 7)
              & 1) != 0)) {
            if (local_70 == 10) {
              uVar10 = param_2[0x1c];
              uVar3 = *(undefined1 *)(param_2 + 0x1d);
              uVar30 = *(undefined4 *)(param_2 + 0x1e);
              uVar4 = *(undefined1 *)((long)param_2 + 0x3b);
            }
            break;
          }
        }
        local_70 = local_70 + 1;
      } while (local_70 != 0xe);
    }
  }
  *(undefined4 *)(param_1 + 6) = local_d8;
  param_1[8] = uVar26;
  *(undefined1 *)(param_1 + 9) = uVar21;
  *(undefined4 *)(param_1 + 0xe) = local_110;
  param_1[0x18] = uVar37;
  *(undefined1 *)(param_1 + 0x19) = uVar38;
  *(undefined1 *)((long)param_1 + 0x33) = uVar39;
  *param_1 = uVar11;
  *(undefined4 *)(param_1 + 0x1a) = uVar35;
  *(undefined4 *)(param_1 + 0x1e) = uVar30;
  *(undefined1 *)(param_1 + 0x21) = uVar22;
  *(undefined1 *)(param_1 + 1) = uVar5;
  *(undefined1 *)((long)param_1 + 3) = uVar6;
  *(undefined4 *)(param_1 + 2) = local_cc;
  param_1[4] = uVar12;
  *(undefined1 *)(param_1 + 5) = uVar7;
  *(undefined1 *)((long)param_1 + 0xb) = uVar8;
  *(undefined1 *)((long)param_1 + 0x13) = uVar18;
  *(undefined4 *)(param_1 + 10) = local_dc;
  param_1[0xc] = uVar13;
  *(undefined1 *)(param_1 + 0xd) = uVar9;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar33;
  param_1[0x10] = uVar29;
  *(undefined1 *)(param_1 + 0x11) = uVar25;
  *(undefined1 *)((long)param_1 + 0x23) = uVar23;
  *(undefined4 *)(param_1 + 0x12) = local_fc;
  param_1[0x14] = uVar28;
  *(undefined1 *)(param_1 + 0x15) = uVar24;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar20;
  *(undefined4 *)(param_1 + 0x16) = uVar34;
  param_1[0x1c] = uVar10;
  *(undefined1 *)(param_1 + 0x1d) = uVar3;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar4;
  param_1[0x20] = uVar27;
  *(undefined1 *)((long)param_1 + 0x43) = uVar19;
  *(undefined4 *)(param_1 + 0x22) = local_c0;
  return;
}

