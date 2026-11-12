
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a75190(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  byte bVar22;
  uint uVar23;
  long *plVar24;
  bool bVar25;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  if (*(long *)PTR_DAT_04bb6278 != 0) {
    cVar4 = *(char *)(*(long *)PTR_DAT_04bb6278 + 0x3e4);
    if (cVar4 == '\x03') {
      FUN_02507c6c(local_6c,1,1,1,0);
      puVar1 = PTR_DAT_04bb5038;
      uVar23 = (uint)local_6c[0];
      local_74 = local_68;
      local_78[0] = 0xff;
      if (local_6c[0] < 8) {
        local_78[0] = local_6c[0];
      }
      local_70 = local_64;
      if (local_6c[0] < 8) {
        bVar25 = true;
        while( true ) {
          if ((((7 < *(byte *)(param_1 + 8) || *(byte *)(param_1 + 8) != uVar23) ||
               (uVar7 = FUN_00a738a0(local_78,0), (uVar7 & 1) == 0)) &&
              (uVar7 = FUN_00a738a0(local_78,0), (uVar7 & 1) != 0)) &&
             (iVar5 = FUN_00a74b78(local_78), iVar5 == 10)) {
            FUN_00a76460(param_1,local_78,0xffffffffffffffff,10,0x13,3);
            bVar25 = false;
          }
          uVar7 = (ulong)uVar23;
          do {
            if (uVar7 == 7) goto LAB_00a7542c;
            uVar7 = uVar7 + 1;
            uVar8 = FUN_02507924(local_78,puVar1 + uVar7);
          } while ((uVar8 & 1) == 0);
          bVar22 = puVar1[uVar7];
          uVar23 = (uint)bVar22;
          if (7 < uVar23) break;
          local_78[0] = bVar22;
        }
LAB_00a7542c:
        if (!bVar25) goto LAB_00a75448;
      }
      if (*(long *)PTR_DAT_04bb6278 != 0) {
        *(undefined1 *)(*(long *)PTR_DAT_04bb6278 + 0x3e4) = 4;
      }
    }
    else if (cVar4 == '\x01') {
      FUN_02507c6c(local_6c,1,1,1,0);
      uVar23 = (uint)local_6c[0];
      local_74 = local_68;
      local_78[0] = 0xff;
      if (local_6c[0] < 8) {
        local_78[0] = local_6c[0];
      }
      local_70 = local_64;
      if (local_6c[0] < 8) {
        bVar25 = true;
        while( true ) {
          if (((7 < *(byte *)(param_1 + 8) || *(byte *)(param_1 + 8) != uVar23) ||
              (uVar7 = FUN_00a738a0(local_78,0), (uVar7 & 1) == 0)) &&
             ((uVar7 = FUN_00a738a0(local_78,0), (uVar7 & 1) == 0 ||
              ((uVar7 = FUN_00a738a0(local_78,0), (uVar7 & 1) != 0 &&
               (iVar5 = FUN_00a74b78(local_78), iVar5 != 10)))))) {
            uVar6 = FUN_00a76844(DAT_04da4ab8,0x13);
            if (uVar6 == 0xffffffff) {
              bVar25 = false;
            }
            else {
              iVar5 = *(int *)(param_1 + 0x414);
              puVar11 = (undefined1 *)(param_1 + 0x10 + (ulong)uVar6 * 0x20);
              bVar25 = false;
              *puVar11 = (char)uVar23;
              *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar11 + 0x10) = 10;
              puVar11[0x18] = 1;
              iVar13 = *(int *)(param_1 + 0x410);
              *(undefined4 *)(puVar11 + 0x1c) = 0;
              if (iVar13 < iVar5) {
                bVar25 = false;
                *(undefined1 **)(*(long *)(param_1 + 0x418) + (long)iVar13 * 8) = puVar11;
                *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + 1;
              }
            }
          }
          uVar7 = (ulong)uVar23;
          do {
            if (uVar7 == 7) goto LAB_00a75420;
            uVar7 = uVar7 + 1;
            uVar8 = FUN_02507924(local_78,PTR_DAT_04bb5038 + uVar7);
          } while ((uVar8 & 1) == 0);
          uVar23 = (uint)(byte)PTR_DAT_04bb5038[uVar7];
          if (7 < uVar23) break;
          local_78[0] = PTR_DAT_04bb5038[uVar7];
        }
LAB_00a75420:
        if (!bVar25) goto LAB_00a75448;
      }
      FUN_00a7c9f4();
    }
  }
LAB_00a75448:
  if (1 < *(int *)(param_1 + 0x410)) {
    lVar10 = *(long *)(param_1 + 0x418);
    uVar6 = 0;
    uVar23 = *(int *)(param_1 + 0x410) - 1;
    do {
      if ((int)uVar23 <= (int)uVar6) break;
      lVar19 = *(long *)(lVar10 + (ulong)uVar6 * 8);
      uVar7 = (ulong)uVar6;
      if ((uVar23 - uVar6 & 1) == 0) {
        lVar16 = lVar19;
        uVar8 = uVar7;
      }
      else {
        uVar8 = uVar7 + 1;
        lVar16 = *(long *)(lVar10 + uVar8 * 8);
        if (*(byte *)(lVar16 + 0x18) < *(byte *)(lVar19 + 0x18)) {
          *(long *)(lVar10 + uVar8 * 8) = lVar19;
          *(long *)(lVar10 + uVar7 * 8) = lVar16;
          lVar16 = lVar19;
        }
      }
      uVar20 = (ulong)uVar23;
      uVar23 = uVar6;
      if (~uVar7 + uVar20 != 0) {
        plVar24 = (long *)(lVar10 + 8 + uVar8 * 8);
        do {
          lVar19 = *plVar24;
          if (*(byte *)(lVar19 + 0x18) < *(byte *)(lVar16 + 0x18)) {
            plVar24[-1] = lVar19;
            *plVar24 = lVar16;
            uVar23 = (uint)uVar8;
          }
          else {
            lVar16 = lVar19;
          }
          lVar19 = plVar24[1];
          if (*(byte *)(lVar19 + 0x18) < *(byte *)(lVar16 + 0x18)) {
            uVar23 = (uint)uVar8 + 1;
            *plVar24 = lVar19;
            plVar24[1] = lVar16;
          }
          else {
            lVar16 = lVar19;
          }
          uVar8 = uVar8 + 2;
          plVar24 = plVar24 + 2;
        } while (uVar20 != uVar8);
      }
      if ((int)uVar23 <= (int)uVar6) break;
      lVar19 = *(long *)(lVar10 + (ulong)uVar23 * 8);
      uVar8 = (ulong)uVar23;
      uVar6 = uVar23;
      do {
        lVar16 = lVar10 + uVar8 * 8;
        lVar21 = *(long *)(lVar16 + -8);
        if (*(byte *)(lVar19 + 0x18) < *(byte *)(lVar21 + 0x18)) {
          uVar6 = (uint)uVar8;
          *(long *)(lVar16 + -8) = lVar19;
          *(long *)(lVar10 + uVar8 * 8) = lVar21;
        }
        else {
          lVar19 = lVar21;
        }
        uVar8 = uVar8 - 1;
      } while ((long)uVar7 < (long)uVar8);
    } while (uVar6 != uVar23);
  }
  if ((*(int *)(param_1 + 0x614) != 0) && (*(int *)(param_1 + 0x614) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x610) * 4;
    if (0x12 < *(uint *)(param_1 + 0x610)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x5f8);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x614) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x63c) != 0) && (*(int *)(param_1 + 0x63c) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x638) * 4;
    if (0x12 < *(uint *)(param_1 + 0x638)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x620);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x63c) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x664) != 0) && (*(int *)(param_1 + 0x664) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x660) * 4;
    if (0x12 < *(uint *)(param_1 + 0x660)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x648);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x664) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x68c) != 0) && (*(int *)(param_1 + 0x68c) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x688) * 4;
    if (0x12 < *(uint *)(param_1 + 0x688)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x670);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x68c) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x6b4) != 0) && (*(int *)(param_1 + 0x6b4) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x6b0) * 4;
    if (0x12 < *(uint *)(param_1 + 0x6b0)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x698);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6b4) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x6dc) != 0) && (*(int *)(param_1 + 0x6dc) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x6d8) * 4;
    if (0x12 < *(uint *)(param_1 + 0x6d8)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x6c0);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x6dc) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x704) != 0) && (*(int *)(param_1 + 0x704) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x700) * 4;
    if (0x12 < *(uint *)(param_1 + 0x700)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x6e8);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x704) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x72c) != 0) && (*(int *)(param_1 + 0x72c) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x728) * 4;
    if (0x12 < *(uint *)(param_1 + 0x728)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x710);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x72c) = 3;
    }
  }
  if ((*(int *)(param_1 + 0x754) != 0) && (*(int *)(param_1 + 0x754) == 2)) {
    puVar2 = &DAT_04da4858 + (ulong)*(uint *)(param_1 + 0x750) * 4;
    if (0x12 < *(uint *)(param_1 + 0x750)) {
      puVar2 = &DAT_04da4858;
    }
    uVar7 = (*(code *)puVar2[2])(param_1 + 0x738);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x754) = 3;
    }
  }
  lVar10 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    lVar19 = param_1 + lVar10;
    if ((*(int *)(lVar19 + 0x614) != 0) && (*(int *)(lVar19 + 0x614) == 3)) {
      pbVar12 = (byte *)(lVar19 + 0x5f8);
      puVar2 = &DAT_04da4858 + (ulong)*(uint *)(lVar19 + 0x610) * 4;
      if (0x12 < *(uint *)(lVar19 + 0x610)) {
        puVar2 = &DAT_04da4858;
      }
      uVar7 = (*(code *)puVar2[3])(pbVar12);
      if ((uVar7 & 1) != 0) {
        local_6c[0] = *pbVar12;
        if (local_6c[0] < 8) {
          lVar16 = *(long *)PTR_DAT_04bb39b0;
          pbVar17 = PTR_DAT_04bb32e0;
          if (lVar16 == 0) {
            if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00a758dc;
LAB_00a75954:
            bVar22 = *pbVar17;
            if (7 < bVar22) {
              bVar22 = 0xff;
            }
          }
          else {
            if (*(int *)(lVar16 + 0x15c) != 0) {
              pbVar17 = (byte *)(lVar16 + 0x158);
            }
            if ((*pbVar17 < 8) ||
               (((*(int *)(lVar16 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar17 < 8))))
            goto LAB_00a75954;
LAB_00a758dc:
            pbVar17 = PTR_DAT_04bb5038;
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_00a75954;
            lVar16 = **(long **)PTR_DAT_04bb27d0;
            bVar22 = *(byte *)(lVar16 + 0x473);
            pbVar14 = PTR_DAT_04bb5038;
            if ((long)(char)bVar22 != 0xffffffffffffffff) {
              puVar3 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
              if (7 < bVar22) {
                puVar3 = (uint *)(lVar16 + 0x48);
              }
              if ((*puVar3 & 8) != 0) {
                pbVar14 = (byte *)(lVar16 + 0x471);
              }
            }
            bVar22 = *pbVar14;
            if (7 < bVar22) goto LAB_00a75954;
          }
          if (7 < bVar22) {
            bVar22 = 0xff;
          }
          if ((bVar22 == local_6c[0]) && (lVar16 = *(long *)PTR_DAT_04bb27c0, lVar16 != 0)) {
            uVar23 = *(uint *)PTR_DAT_04bb32f8;
            if (((uVar23 == 0) ||
                ((plVar24 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                      ((ulong)(uVar23 >> 0x11) & 0x7ff8)), plVar24 == (long *)0x0 ||
                 ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)))) ||
               (*(uint *)(plVar24 + 0x46) != uVar23)) {
              plVar24 = (long *)0x0;
            }
            if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar16 = *(long *)PTR_DAT_04bb27c0;
              iVar5 = (**(code **)(*plVar9 + 0x60))();
              if (iVar5 < 0x11) {
                uVar23 = 1;
              }
              else {
                if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_00a75a28;
                uVar23 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_00a75a28:
              uVar23 = 0;
            }
            if (plVar24 != (long *)0x0) {
              if (((*PTR_DAT_04bb3280 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
                *(undefined **)PTR_DAT_04bb3278 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb3280);
              }
              uVar6 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb3278);
              if ((uVar23 & uVar6) == 1) {
                FUN_00901830(plVar24);
              }
            }
          }
        }
        else {
          local_6c[0] = 0xff;
        }
        uVar23 = FUN_00a75000(param_1,pbVar12);
        if (uVar23 != 0xffffffff) {
          puVar11 = (undefined1 *)(param_1 + 0x520 + (ulong)uVar23 * 0x18);
          *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
          *puVar11 = 0xff;
          *(undefined4 *)(puVar11 + 0x10) = 0;
        }
        *(undefined4 *)(lVar19 + 0x614) = 0;
        bVar22 = *(byte *)(param_1 + 0x780);
        if ((bVar22 >> 1 & 1) != 0) {
          uVar7 = FUN_02555e90(local_6c,0,1);
          if ((uVar7 & 1) != 0) {
            FUN_025557c0(local_6c,0);
          }
          FUN_00a71bb8(param_1,local_6c,0xffffffffffffffff,0xe);
          bVar22 = *(byte *)(param_1 + 0x780);
        }
        if ((bVar22 >> 2 & 1) != 0) {
          uVar7 = FUN_02555e90(local_6c,0,1);
          if ((uVar7 & 1) != 0) {
            FUN_025557c0(local_6c,0);
          }
          FUN_00a71bb8(param_1,local_6c,0xffffffffffffffff,0xf);
          bVar22 = *(byte *)(param_1 + 0x780);
        }
        if (((bVar22 >> 4 & 1) != 0) &&
           (((uVar7 = FUN_02555518(local_6c,0,1), (uVar7 & 1) == 0 ||
             (uVar7 = FUN_025557c0(local_6c,0), (uVar7 & 1) == 0)) ||
            (uVar7 = FUN_00a71bb8(param_1,local_6c,0xffffffffffffffff,0x11), (uVar7 & 1) == 0)))) {
          *(byte *)(param_1 + 0x780) = *(byte *)(param_1 + 0x780) | 0x20;
        }
      }
    }
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0x168);
  if ((*(byte *)(param_1 + 0x780) >> 5 & 1) == 0) goto LAB_00a75cf0;
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar12 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00a75c28;
LAB_00a75c94:
    local_6c[0] = *pbVar12;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar12 = (byte *)(lVar10 + 0x158);
    }
    if ((*pbVar12 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8)))) goto LAB_00a75c94;
LAB_00a75c28:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00a75c8c:
      pbVar12 = PTR_DAT_04bb5038;
      goto LAB_00a75c94;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar22 = *(byte *)(lVar10 + 0x473);
    pbVar12 = PTR_DAT_04bb5038;
    if ((long)(char)bVar22 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
      if (7 < bVar22) {
        puVar3 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar12 = (byte *)(lVar10 + 0x471);
      }
    }
    local_6c[0] = *pbVar12;
    if (7 < local_6c[0]) goto LAB_00a75c8c;
  }
  uVar7 = FUN_02555518(local_6c,0,1);
  if ((((uVar7 & 1) != 0) && (uVar7 = FUN_025557c0(local_6c,0), (uVar7 & 1) != 0)) &&
     (uVar7 = FUN_00a71bb8(param_1,local_6c,0xffffffffffffffff,0x11), (uVar7 & 1) != 0)) {
    *(byte *)(param_1 + 0x780) = *(byte *)(param_1 + 0x780) & 0xdf;
  }
LAB_00a75cf0:
  uVar23 = *(uint *)(param_1 + 0x410);
  if (0 < (int)uVar23) {
    uVar7 = 0;
    do {
      if (*(int *)(param_1 + 0x614) == 0) {
        lVar10 = 0;
joined_r0x00a75d7c:
        if (uVar7 < uVar23) goto LAB_00a75d80;
LAB_00a75dac:
        if (_DAT_00000010 < 0x13) goto LAB_00a75db8;
      }
      else {
        if (*(int *)(param_1 + 0x63c) == 0) {
          lVar10 = 1;
          goto joined_r0x00a75d7c;
        }
        if (*(int *)(param_1 + 0x664) == 0) {
          lVar10 = 2;
        }
        else if (*(int *)(param_1 + 0x68c) == 0) {
          lVar10 = 3;
        }
        else if (*(int *)(param_1 + 0x6b4) == 0) {
          lVar10 = 4;
        }
        else if (*(int *)(param_1 + 0x6dc) == 0) {
          lVar10 = 5;
        }
        else if (*(int *)(param_1 + 0x704) == 0) {
          lVar10 = 6;
        }
        else {
          if (*(int *)(param_1 + 0x72c) != 0) {
            if (*(int *)(param_1 + 0x754) == 0) {
              lVar10 = 8;
              goto joined_r0x00a75d7c;
            }
            break;
          }
          lVar10 = 7;
        }
        if (uVar23 <= uVar7) goto LAB_00a75dac;
LAB_00a75d80:
        pbVar12 = *(byte **)(*(long *)(param_1 + 0x418) + uVar7 * 8);
        if (*(int *)(pbVar12 + 0x10) < 0x13) {
          if (*(int *)(pbVar12 + 0x10) == 0x10) {
LAB_00a75db8:
            pbVar12 = local_6c;
            local_6c[0] = 0xff;
          }
          uVar6 = FUN_00a75000(param_1,pbVar12);
          if (uVar6 != 0xffffffff) {
            lVar19 = *(long *)(*(long *)(param_1 + 0x418) + uVar7 * 8);
            uVar8 = FUN_00a738a0(lVar19,0);
            if ((uVar8 & 1) == 0) {
              puVar2 = &DAT_04da4858 + (ulong)*(uint *)(lVar19 + 0x10) * 4;
              if (0x12 < *(uint *)(lVar19 + 0x10)) {
                puVar2 = &DAT_04da4858;
              }
              uVar8 = (*(code *)*puVar2)(lVar19);
              uVar23 = *(uint *)(param_1 + 0x410);
              if ((uVar8 & 1) != 0) {
                lVar19 = uVar7 * 8;
                pbVar12 = (byte *)(param_1 + 0x5f8 + lVar10 * 0x28);
                lVar10 = *(long *)(param_1 + 0x418);
                pbVar17 = *(byte **)(lVar10 + lVar19);
                bVar22 = *pbVar17;
                if (7 < bVar22) {
                  bVar22 = 0xff;
                }
                *pbVar12 = bVar22;
                uVar18 = *(undefined8 *)(pbVar17 + 8);
                *(undefined8 *)(pbVar12 + 8) = uVar18;
                *(undefined8 *)(pbVar12 + 0x10) = uVar18;
                *(undefined4 *)(pbVar12 + 0x18) = *(undefined4 *)(pbVar17 + 0x10);
                pbVar12[0x1c] = 1;
                pbVar12[0x1d] = 0;
                pbVar12[0x1e] = 0;
                pbVar12[0x1f] = 0;
                *(undefined4 *)(pbVar12 + 0x20) = *(undefined4 *)(pbVar17 + 0x1c);
                pbVar12 = (byte *)(param_1 + 0x520 + (ulong)uVar6 * 0x18);
                bVar22 = **(byte **)(lVar10 + lVar19);
                if (7 < bVar22) {
                  bVar22 = 0xff;
                }
                *pbVar12 = bVar22;
                *(undefined8 *)(pbVar12 + 8) = *(undefined8 *)(*(long *)(lVar10 + lVar19) + 8);
                *(undefined4 *)(pbVar12 + 0x10) = *(undefined4 *)(*(long *)(lVar10 + lVar19) + 0x14)
                ;
                if (*(char *)(*(long *)(lVar10 + lVar19) + 0x18) == '\x03') {
                  *(undefined1 *)(*(long *)(lVar10 + lVar19) + 0x18) = 6;
                  uVar23 = *(uint *)(param_1 + 0x410);
                }
              }
            }
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar23);
  }
  lVar10 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    lVar19 = param_1 + lVar10;
    if ((*(int *)(lVar19 + 0x614) != 0) && (*(int *)(lVar19 + 0x614) == 1)) {
      puVar2 = &DAT_04da4858 + (ulong)*(uint *)(lVar19 + 0x610) * 4;
      if (0x12 < *(uint *)(lVar19 + 0x610)) {
        puVar2 = &DAT_04da4858;
      }
      uVar7 = (*(code *)puVar2[1])((byte *)(lVar19 + 0x5f8));
      if ((uVar7 & 1) != 0) {
        bVar22 = *(byte *)(lVar19 + 0x5f8);
        *(undefined4 *)(lVar19 + 0x614) = 2;
        if (bVar22 < 8) {
          lVar19 = *(long *)PTR_DAT_04bb39b0;
          pbVar12 = PTR_DAT_04bb32e0;
          if (lVar19 == 0) {
            if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00a76000;
LAB_00a76078:
            bVar15 = *pbVar12;
            if (7 < bVar15) {
              bVar15 = 0xff;
            }
          }
          else {
            if (*(int *)(lVar19 + 0x15c) != 0) {
              pbVar12 = (byte *)(lVar19 + 0x158);
            }
            if ((*pbVar12 < 8) ||
               (((*(int *)(lVar19 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8))))
            goto LAB_00a76078;
LAB_00a76000:
            pbVar12 = PTR_DAT_04bb5038;
            if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_00a76078;
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar15 = *(byte *)(lVar19 + 0x473);
            pbVar17 = PTR_DAT_04bb5038;
            if ((long)(char)bVar15 != 0xffffffffffffffff) {
              puVar3 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
              if (7 < bVar15) {
                puVar3 = (uint *)(lVar19 + 0x48);
              }
              if ((*puVar3 & 8) != 0) {
                pbVar17 = (byte *)(lVar19 + 0x471);
              }
            }
            bVar15 = *pbVar17;
            if (7 < bVar15) goto LAB_00a76078;
          }
          if (7 < bVar15) {
            bVar15 = 0xff;
          }
          if ((bVar15 == bVar22) && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)) {
            uVar23 = *(uint *)PTR_DAT_04bb32f8;
            if (((uVar23 == 0) ||
                ((plVar24 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                      ((ulong)(uVar23 >> 0x11) & 0x7ff8)), plVar24 == (long *)0x0 ||
                 ((*(uint *)(plVar24 + 0x49) >> 1 & 1) != 0)))) ||
               (*(uint *)(plVar24 + 0x46) != uVar23)) {
              plVar24 = (long *)0x0;
            }
            if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
              plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68)
                                                  );
              lVar19 = *(long *)PTR_DAT_04bb27c0;
              iVar5 = (**(code **)(*plVar9 + 0x60))();
              if (iVar5 < 0x11) {
                uVar23 = 1;
              }
              else {
                if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_00a7614c;
                uVar23 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
              }
            }
            else {
LAB_00a7614c:
              uVar23 = 0;
            }
            if (plVar24 != (long *)0x0) {
              if (((*PTR_DAT_04bb3280 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
                *(undefined **)PTR_DAT_04bb3278 = puVar1;
                __cxa_guard_release(PTR_DAT_04bb3280);
              }
              uVar6 = (**(code **)(*plVar24 + 0x20))(plVar24,PTR_DAT_04bb3278);
              if ((uVar23 & uVar6) == 1) {
                FUN_0090172c(plVar24);
              }
            }
          }
        }
      }
    }
    lVar10 = lVar10 + 0x28;
  } while (lVar10 != 0x168);
  uVar23 = *(uint *)(param_1 + 0x410);
  if (0 < (int)uVar23) {
    iVar5 = -uVar23;
    uVar7 = (ulong)uVar23;
    do {
      uVar8 = uVar7 - 1;
      uVar23 = (uint)uVar8;
      if (uVar23 < *(uint *)(param_1 + 0x410)) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x418) + (uVar8 & 0xffffffff) * 8);
        if (*(int *)(lVar10 + 0x10) == 3) {
          if (*(char *)(lVar10 + 0x18) != '\x03') goto LAB_00a76270;
        }
        else if (*(int *)(lVar10 + 0x10) != 9) {
LAB_00a76270:
          *(undefined8 *)(lVar10 + 0x10) = 0x13;
          if (-1 < (int)uVar23) goto LAB_00a76278;
        }
      }
      else {
        if ((_DAT_00000010 == 9) ||
           (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x418) + (uVar8 & 0xffffffff) * 8) + 0x10)
                 = 0x13, (int)uVar23 < 0)) goto LAB_00a761f4;
LAB_00a76278:
        iVar13 = *(int *)(param_1 + 0x410);
        if ((int)uVar23 < iVar13) {
          if ((int)uVar7 < iVar13) {
            memmove((void *)(*(long *)(param_1 + 0x418) + (uVar8 & 0xffffffff) * 8),
                    (void *)(*(long *)(param_1 + 0x418) + (uVar7 & 0xffffffff) * 8),
                    -(ulong)((uint)(iVar5 + iVar13) >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(uint)(iVar5 + iVar13) << 3);
            iVar13 = *(int *)(param_1 + 0x410);
          }
          *(int *)(param_1 + 0x410) = iVar13 + -1;
        }
      }
LAB_00a761f4:
      iVar5 = iVar5 + 1;
      bVar25 = 1 < uVar7;
      uVar7 = uVar8;
    } while (bVar25);
  }
  if (DAT_04da4854 != '\0') {
    DAT_04da4854 = DAT_04da4854 + -1;
  }
  if ((*(long *)PTR_DAT_04bb6278 != 0) && (*(long *)PTR_DAT_04bb27d0 != 0)) {
    FUN_00a7baa0();
  }
  return;
}

