
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0243b3e0(ulong param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  long lVar18;
  uint *puVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  undefined4 local_90;
  undefined4 uStack_8c;
  char local_88;
  char local_87;
  undefined4 local_7c;
  byte local_78 [4];
  undefined4 local_74;
  undefined2 local_70;
  byte local_6c [4];
  undefined4 local_68;
  undefined2 local_64;
  
  uVar9 = FUN_02549590();
  puVar5 = PTR_DAT_04bb4718;
  puVar1 = PTR_DAT_04bb39b0;
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar9 & 1) != 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb4718;
  if (*(int *)(lVar14 + 0x2374) != 0) {
    return 0;
  }
  local_90 = 2;
  if ((*(uint *)(lVar14 + 0x200) >> 2 & 1) != 0) {
    return 0;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  if (lVar18 == 0) {
    uVar9 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0243b4d4;
LAB_0243b540:
    puVar19 = (uint *)(lVar14 + uVar9 * 4 + 0xde8);
  }
  else {
    pbVar17 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar18 + 0x158);
    }
    uVar9 = (ulong)*pbVar17;
    if ((*pbVar17 < 8) ||
       ((*(int *)(lVar18 + 0x15c) != 0 &&
        (uVar9 = (ulong)*(byte *)(lVar14 + 0x11a5), *(byte *)(lVar14 + 0x11a5) < 8))))
    goto LAB_0243b540;
LAB_0243b4d4:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar18 + 0x473);
      pbVar17 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar19 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar19 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar19 & 8) != 0) {
          pbVar17 = (byte *)(lVar18 + 0x471);
        }
      }
      uVar9 = (ulong)*pbVar17;
      if (*pbVar17 < 8) goto LAB_0243b540;
    }
    uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0243b540;
    puVar19 = (uint *)PTR_DAT_04bb3238;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return 0;
  }
  uVar21 = *puVar19;
  if ((((uVar21 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                            ((ulong)(uVar21 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar21)) {
    plVar20 = (long *)0x0;
  }
  if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar3;
    iVar7 = (**(code **)(*plVar10 + 0x60))();
    pbVar17 = PTR_DAT_04bb3778;
    if (iVar7 < 0x11) {
      uVar21 = 0;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0243b5f0;
      uVar21 = 5U >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0243b5f0:
    uVar21 = 1;
    pbVar17 = PTR_DAT_04bb3778;
  }
  if (plVar20 == (long *)0x0) {
    PTR_DAT_04bb3778 = pbVar17;
    return 0;
  }
  lVar14 = plVar20[0x2a];
  PTR_DAT_04bb3778 = pbVar17;
  if (((*pbVar17 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar17), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  puVar3 = PTR_DAT_04bb3770;
  uVar8 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb3770);
  if ((int)lVar14 != 1) {
    return 0;
  }
  if ((uVar21 != 0 || ((uVar8 ^ 1) & 1) != 0) || ((param_1 & 1) != 0)) goto LAB_0243b8c8;
  local_90 = 7;
  plVar20[0x318] = plVar20[0x328];
  plVar20[0x318] = 0;
  plVar20[0x319] = plVar20[0x329];
  plVar20[0x319] = 0;
  plVar20[0x31a] = plVar20[0x32a];
  plVar20[0x31a] = 0;
  *(short *)(plVar20 + 0x31b) = (short)plVar20[0x32b];
  plVar20[0x314] = plVar20[0x324];
  plVar20[0x314] = 0;
  plVar20[0x315] = plVar20[0x325];
  plVar20[0x315] = 0;
  plVar20[0x316] = plVar20[0x326];
  plVar20[0x316] = 0;
  plVar20[0x317] = plVar20[0x327];
  plVar20[0x317] = 0;
  plVar20[0x310] = plVar20[800];
  plVar20[0x310] = 0;
  plVar20[0x311] = plVar20[0x321];
  plVar20[0x311] = 0;
  plVar20[0x312] = plVar20[0x322];
  plVar20[0x312] = 0;
  plVar20[0x313] = plVar20[0x323];
  plVar20[0x313] = 0;
  plVar20[0x30c] = plVar20[0x31c];
  plVar20[0x30d] = plVar20[0x31d];
  plVar20[0x30e] = plVar20[0x31e];
  plVar20[0x30f] = plVar20[799];
  lVar14 = 0;
  if (plVar20[0xe] != 0) {
    lVar14 = plVar20[0xe] + 0x278;
  }
  FUN_03ebb160(lVar14,7);
  if (*(long *)puVar5 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar19 = &DAT_054f08d0;
      if (iVar7 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar19 = &DAT_054f08d0;
    }
  }
  else {
    puVar19 = (uint *)(*(long *)puVar5 + 0x200);
  }
  local_90 = 2;
  *puVar19 = *puVar19 | 4;
  lVar14 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar14 + 0x2440) + 0xf0))(lVar14 + 0x2440);
  *(undefined4 *)(*(long *)puVar5 + 0x11a8) = *puVar11;
  FUN_02507c6c(local_6c,1,1,1,0);
  puVar6 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb3238;
  lVar14 = *(long *)puVar1;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_0243b824:
    if (*pbVar15 < 8) goto LAB_0243b890;
LAB_0243b830:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0243b888:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_0243b890;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar14 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar19 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar19 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar19 & 8) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x471);
      }
    }
    uVar16 = (uint)*pbVar15;
    if (7 < *pbVar15) goto LAB_0243b888;
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)puVar5 != 0)) {
        pbVar15 = (byte *)(*(long *)puVar5 + 0x11a5);
        goto LAB_0243b824;
      }
      goto LAB_0243b830;
    }
LAB_0243b890:
    uVar16 = (uint)*pbVar15;
    if (7 < uVar16) {
      uVar16 = 0xff;
    }
  }
  local_74 = local_68;
  uVar13 = (uint)local_6c[0];
  local_78[0] = 0xff;
  if (local_6c[0] < 8) {
    local_78[0] = local_6c[0];
  }
  local_70 = local_64;
  if (local_6c[0] < 8) {
    if (7 < uVar16) {
      uVar16 = 0xff;
    }
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    do {
      uVar22 = uVar16;
      if (uVar13 != uVar16) {
        puVar11 = (undefined4 *)puVar4;
        if (*(long *)puVar5 != 0) {
          puVar11 = (undefined4 *)(*(long *)puVar5 + (ulong)uVar13 * 4 + 0xde8);
        }
        local_7c = *puVar11;
        FUN_0071c8d0(&local_90,&local_7c,puVar4,0);
        plVar20 = (long *)CONCAT44(uStack_8c,local_90);
        if (plVar20 != (long *)0x0) {
          if (((*pbVar17 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar17), iVar7 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(pbVar17);
          }
          uVar9 = (**(code **)(*plVar20 + 0x20))(plVar20,puVar3);
          if ((uVar9 & 1) == 0) {
            local_87 = '\0';
          }
        }
        lVar14 = CONCAT44(uStack_8c,local_90);
        if (((lVar14 != 0) && (local_88 != '\0')) && (local_87 != '\0')) {
          *(uint *)(lVar14 + 0x17d0) = *(uint *)(lVar14 + 0x17d0) & 0xfdffffff;
        }
        uVar22 = (uint)local_78[0];
      }
      if (7 < uVar22) break;
      uVar9 = (ulong)uVar22;
      if (uVar9 + 1 == 8) break;
      pbVar15 = puVar6 + uVar9 + 1;
      uVar12 = FUN_02507924(local_78,pbVar15);
      if ((uVar12 & 1) == 0) {
        if (uVar9 + 2 == 8) break;
        pbVar15 = puVar6 + uVar9 + 2;
        uVar12 = FUN_02507924(local_78,pbVar15);
        if ((uVar12 & 1) == 0) {
          if (uVar9 + 3 == 8) break;
          pbVar15 = puVar6 + uVar9 + 3;
          uVar12 = FUN_02507924(local_78,pbVar15);
          if ((uVar12 & 1) == 0) {
            if (uVar9 + 4 == 8) break;
            pbVar15 = puVar6 + uVar9 + 4;
            uVar12 = FUN_02507924(local_78,pbVar15);
            if ((uVar12 & 1) == 0) {
              if (uVar9 + 5 == 8) break;
              pbVar15 = puVar6 + uVar9 + 5;
              uVar12 = FUN_02507924(local_78,pbVar15);
              if ((uVar12 & 1) == 0) {
                if (uVar9 + 6 == 8) break;
                pbVar15 = puVar6 + uVar9 + 6;
                uVar12 = FUN_02507924(local_78,pbVar15);
                if ((uVar12 & 1) == 0) {
                  if (uVar9 + 7 == 8) break;
                  pbVar15 = puVar6 + uVar9 + 7;
                  uVar12 = FUN_02507924(local_78,pbVar15);
                  if ((uVar12 & 1) == 0) {
                    if (uVar22 == 0) break;
                    pbVar15 = puVar6 + uVar9 + 8;
                    FUN_02507924(local_78,pbVar15);
                  }
                }
              }
            }
          }
        }
      }
      local_78[0] = *pbVar15;
      uVar13 = (uint)local_78[0];
    } while (uVar13 < 8);
  }
LAB_0243b8c8:
  if (uVar21 == 0 && ((uVar8 ^ 1) & 1) == 0) {
    return 1;
  }
  return 0;
}

