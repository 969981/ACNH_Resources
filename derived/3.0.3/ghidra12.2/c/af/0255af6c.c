
undefined8 FUN_0255af6c(byte *param_1,long param_2)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  uint *puVar17;
  byte bVar18;
  long *plVar19;
  uint uVar20;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_04bb27c0;
  if (*(char *)(param_2 + 0x13) != '\0') {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 == -1) {
      return 0;
    }
    local_64 = 1;
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 1 & 1) == 0) {
      local_64 = 0x13;
      puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar12 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar12 >> 0x13 & 1) == 0) {
        return 0;
      }
    }
  }
  if ((ulong)*param_1 < 8) {
    puVar12 = (uint *)PTR_DAT_04bb3238;
    if (DAT_054f5738 != 0) {
      puVar12 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
    uVar20 = *puVar12;
  }
  else {
    uVar20 = *(uint *)PTR_DAT_04bb3238;
  }
  if (uVar20 == 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb27c0;
  if (lVar14 == 0) {
    return 0;
  }
  plVar19 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) + ((ulong)(uVar20 >> 0x11) & 0x7ff8)
                      );
  if (((plVar19 == (long *)0x0) || ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar19 + 0x46) != uVar20)) {
    plVar19 = (long *)0x0;
  }
  if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar14 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar10 + 0x60))();
    pbVar1 = PTR_DAT_04bb3778;
    if (iVar8 < 0x11) {
      uVar20 = 1;
    }
    else {
      if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0255b10c;
      uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0255b10c:
    uVar20 = 0;
    pbVar1 = PTR_DAT_04bb3778;
  }
  if (plVar19 == (long *)0x0) {
    PTR_DAT_04bb3778 = pbVar1;
    return 0;
  }
  lVar14 = plVar19[0x2a];
  uVar2 = *(uint *)(plVar19 + 0x49);
  PTR_DAT_04bb3778 = pbVar1;
  if (((*pbVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar1), iVar8 != 0)) {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  puVar6 = PTR_DAT_04bb3770;
  uVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb3770);
  puVar7 = PTR_DAT_04bb39b0;
  if ((int)lVar14 != 1) {
    return 0;
  }
  if ((uVar9 & uVar20) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_0255b1cc:
    if (*pbVar15 < 8) goto LAB_0255b244;
LAB_0255b1d8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0255b23c:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_0255b244;
    }
    lVar14 = **(long **)PTR_DAT_04bb27d0;
    bVar16 = *(byte *)(lVar14 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar12 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar12 = (uint *)(lVar14 + 0x48);
      }
      if ((*puVar12 & 8) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x471);
      }
    }
    bVar18 = *pbVar15;
    bVar16 = bVar18;
    if (7 < bVar18) {
      bVar16 = 0xff;
    }
    local_68 = CONCAT31(local_68._1_3_,bVar16);
    if (7 < bVar18) goto LAB_0255b23c;
LAB_0255b260:
    if (DAT_054f5738 == 0) goto LAB_0255b280;
    lVar14 = *(long *)puVar5;
    puVar12 = (uint *)(DAT_054f5738 + (ulong)bVar18 * 4 + 0xde8);
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar15 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0255b1cc;
      }
      goto LAB_0255b1d8;
    }
LAB_0255b244:
    bVar18 = *pbVar15;
    bVar16 = bVar18;
    if (7 < bVar18) {
      bVar16 = 0xff;
    }
    local_68 = CONCAT31(local_68._1_3_,bVar16);
    if (bVar18 < 8) goto LAB_0255b260;
LAB_0255b280:
    lVar14 = *(long *)puVar5;
    puVar12 = (uint *)PTR_DAT_04bb3238;
  }
  if (lVar14 != 0) {
    uVar20 = *puVar12;
    if ((((uVar20 == 0) ||
         (plVar10 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                              ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar20)) {
      plVar10 = (long *)0x0;
    }
    if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
      plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar14 = *(long *)puVar5;
      iVar8 = (**(code **)(*plVar11 + 0x60))();
      if (iVar8 < 0x11) {
        uVar20 = 1;
      }
      else {
        if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_0255b324;
        uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0255b324:
      uVar20 = 0;
    }
    if (plVar10 != (long *)0x0) {
      lVar14 = plVar10[0x2a];
      uVar2 = *(uint *)(plVar10 + 0x49);
      if (((*pbVar1 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
        *(undefined **)puVar6 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3770);
      if (((((int)lVar14 == 1) && ((uVar9 & uVar20) != 0)) && ((uVar2 >> 4 & 1) != 0)) &&
         (iVar8 = FUN_00a74b78(&local_68), iVar8 == 7)) {
        return 0;
      }
    }
  }
  if ((((*(byte *)((long)plVar19 + 0x17cf) >> 4 & 1) != 0) &&
      (iVar8 = FUN_00a74b78(param_1), iVar8 != 0x13)) && (iVar8 != 9)) {
    return 0;
  }
  local_64 = 0;
  if (plVar19[0xe] != 0) {
    uVar20 = *(uint *)(plVar19[0xe] + 0x280);
    local_64 = 0;
    if (uVar20 < 0x149) {
      local_64 = uVar20;
    }
  }
  puVar12 = (uint *)FUN_0251d928(local_64);
  lVar14 = *(long *)puVar7;
  if (lVar14 == 0) {
LAB_0255b4f8:
    uVar20 = *puVar12;
    if ((uVar20 != 0) && (puVar12 != (uint *)(ulong)uVar20)) {
      puVar17 = (uint *)((long)puVar12 - (long)(ulong)uVar20);
      uVar20 = *puVar17;
      if ((uVar20 != 0) && (uVar13 = (ulong)puVar17[1], puVar17[1] != 0)) {
        if ((ulong)(ushort)puVar17[2] != 0) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar14) / uVar13);
            }
            if (uVar20 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc2ff0) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar2 * 2),
               uVar3 < 9 && (uVar3 & 0xfffe) == 2)) goto LAB_0255b624;
          }
        }
        if ((ulong)(ushort)puVar17[2] != 0) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if (uVar13 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar14) / uVar13);
            }
            if (uVar20 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc2ff0) &&
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar2 * 2),
               uVar3 < 9 && (uVar3 & 0xfffe) == 2)) goto LAB_0255b624;
          }
        }
      }
    }
    uVar13 = FUN_024257d0(puVar12);
    if (((uVar13 & 1) != 0) ||
       (((uVar13 = FUN_02425918(puVar12), (uVar13 & 1) != 0 ||
         (uVar13 = FUN_0242572c(puVar12), (uVar13 & 1) != 0)) ||
        (uVar13 = FUN_02425688(puVar12), (uVar13 & 1) != 0)))) goto LAB_0255b624;
    uVar13 = FUN_02425918(puVar12);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_2 + 0x12) == '\0') {
      FUN_02373fd0(plVar19,0);
      goto LAB_0255b674;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) == 0) {
LAB_0255b478:
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar1 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar14 + 0x15c) != 0) {
          pbVar1 = (byte *)(lVar14 + 0x158);
        }
        bVar18 = *(byte *)(plVar19 + 0x3dd);
        bVar16 = *pbVar1;
        if (7 < bVar16) {
          bVar16 = 0xff;
        }
        if (7 < bVar18) {
          bVar18 = 0xff;
        }
        if (bVar16 != bVar18) {
          local_64 = 1;
          local_68 = 0;
          if (plVar19[0xe] != 0) {
            uVar20 = *(uint *)(plVar19[0xe] + 0x280);
            local_68 = 0;
            if (uVar20 < 0x149) {
              local_68 = uVar20;
            }
          }
          if ((local_68 == 1) && (uVar13 = FUN_02324acc(plVar19), (uVar13 & 1) != 0))
          goto LAB_0255b624;
        }
      }
      goto LAB_0255b4f8;
    }
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar1 = (byte *)(lVar14 + 0x158);
    }
    bVar18 = *(byte *)(plVar19 + 0x3dd);
    bVar16 = *pbVar1;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    if (7 < bVar18) {
      bVar18 = 0xff;
    }
    if (bVar16 == bVar18) goto LAB_0255b478;
    if (plVar19[0xe] == 0) {
      local_68 = 0;
LAB_0255b450:
      local_64 = 0;
      if (local_68 == 0) {
        uVar13 = FUN_02324acc(plVar19);
        if ((uVar13 & 1) != 0) goto LAB_0255b624;
        lVar14 = *(long *)puVar7;
        if (lVar14 == 0) goto LAB_0255b4f8;
      }
      goto LAB_0255b478;
    }
    uVar20 = *(uint *)(plVar19[0xe] + 0x280);
    if (uVar20 != 9) {
      local_68 = 0;
      if (uVar20 < 0x149) {
        local_68 = uVar20;
      }
      goto LAB_0255b450;
    }
LAB_0255b624:
    if (*(char *)(param_2 + 0x12) == '\0') {
      FUN_0236a88c(plVar19,6,1,0);
      goto LAB_0255b674;
    }
  }
  uVar13 = FUN_0243e550(plVar19,param_2);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
LAB_0255b674:
  FUN_0255aba8(param_1,param_2);
  return 1;
}

