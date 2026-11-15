
void FUN_02346960(long param_1,short *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  char *pcVar17;
  long *local_58;
  undefined2 local_50;
  short local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  uint local_24;
  
  lVar8 = FUN_0234a720();
  if (lVar8 == 0) {
    return;
  }
  if ((*(long *)(lVar8 + 0x288) != 0) &&
     (uVar6 = *(uint *)(*(long *)(lVar8 + 0x288) + 0x10), 0 < (int)uVar6)) {
    uVar12 = 0;
    do {
      lVar15 = *(long *)(lVar8 + 0x288);
      if (lVar15 != 0) {
        uVar2 = uVar12;
        if (*(uint *)(lVar15 + 0x10) <= uVar12) {
          uVar2 = 0;
        }
        lVar15 = *(long *)(lVar15 + 0x18) + (ulong)uVar2 * 0x48;
        *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) & 0xfffffff7;
      }
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
  }
  local_58 = (long *)CONCAT44(local_58._4_4_,1);
  if ((*(uint *)(param_1 + 0x15f4) >> 1 & 1) == 0) {
LAB_02346ad0:
    bVar5 = true;
  }
  else {
    pbVar9 = (byte *)FUN_02335d54(param_1);
    if (7 < (ulong)*pbVar9) goto LAB_02346ad0;
    puVar13 = (uint *)PTR_DAT_04bb3238;
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar13 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar9 * 4 + 0xde8);
    }
    local_24 = *puVar13;
    FUN_0071c8d0(&local_58,&local_24,PTR_DAT_04bb3238,0);
    plVar4 = local_58;
    if (local_58 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar10 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bb3770);
      if ((uVar10 & 1) == 0) {
        local_50 = local_50 & 0xff;
      }
    }
    bVar5 = true;
    if (((local_58 != (long *)0x0) && ((char)local_50 != '\0')) && (local_50._1_1_ != '\0')) {
      bVar5 = (int)local_58[0x302] != 4;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = *param_2;
  if (local_50 != -2) {
    local_4e = param_2[1];
    local_48 = 0;
    local_4c = *(undefined4 *)(param_2 + 2);
    local_58 = (long *)(PTR_DAT_04bc0510 + 0x10);
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_50);
    if (*(long *)puVar3 == 0) {
LAB_02346c24:
      local_24 = 0x21;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02346c24;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar6) ||
         (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar13 == (uint *)0x0)) goto LAB_02346c24;
      uVar6 = *puVar13;
      local_24 = 0;
      if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
        puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
        local_24 = 0;
        if (*puVar14 != 0) {
          uVar6 = puVar14[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar15 != 0) {
              uVar12 = 0;
              if ((ulong)uVar6 != 0) {
                uVar12 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
              }
              if (*puVar14 <= uVar12) {
                uVar12 = 0xffffffff;
              }
              if ((uVar12 < *(uint *)PTR_DAT_04bc0148) &&
                 (local_24 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar12 * 2),
                 local_24 < 0xa2)) goto LAB_02346c28;
            }
          }
          local_24 = 0;
        }
      }
    }
LAB_02346c28:
    if (local_24 - 10 < 0xb) {
      bVar1 = false;
      if ((0x40fU >> (ulong)(local_24 - 10 & 0x1f) & 1) == 0) {
        bVar1 = bVar5;
      }
      bVar5 = bVar1;
    }
  }
  lVar15 = *(long *)(lVar8 + 0x288);
  if (lVar15 != 0) {
    *(bool *)(lVar8 + 0x339) = bVar5;
    uVar6 = *(uint *)(lVar15 + 0x10);
    if (0 < (int)uVar6) {
      bVar1 = false;
      if (*(char *)(lVar8 + 0x33a) == '\0') {
        bVar1 = bVar5;
      }
      if (bVar1) {
        uVar12 = 0;
        do {
          uVar2 = uVar12;
          if (*(uint *)(lVar15 + 0x10) <= uVar12) {
            uVar2 = 0;
          }
          puVar13 = (uint *)(*(long *)(lVar15 + 0x18) + (ulong)uVar2 * 0x48 + 0x18);
          uVar2 = *puVar13;
          if ((uVar2 >> 3 & 1) == 0) {
            *puVar13 = uVar2 | 1;
            uVar2 = uVar12;
            if (*(uint *)(lVar15 + 0x10) <= uVar12) {
              uVar2 = 0;
            }
            lVar16 = *(long *)(lVar15 + 0x18) + (ulong)uVar2 * 0x48;
            *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) | 2;
          }
          else {
            *puVar13 = uVar2 & 0xfffffffe;
          }
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
      }
      else {
        uVar12 = 0;
        do {
          uVar2 = uVar12;
          if (*(uint *)(lVar15 + 0x10) <= uVar12) {
            uVar2 = 0;
          }
          uVar12 = uVar12 + 1;
          lVar16 = *(long *)(lVar15 + 0x18) + (ulong)uVar2 * 0x48;
          *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) & 0xfffffffe;
        } while (uVar6 != uVar12);
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = *param_2;
  if (local_50 == -2) {
    return;
  }
  local_4e = param_2[1];
  local_48 = 0;
  local_4c = *(undefined4 *)(param_2 + 2);
  local_58 = (long *)(PTR_DAT_04bc0510 + 0x10);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
         (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar13 != (uint *)0x0)) {
        uVar6 = *puVar13;
        uVar11 = 0;
        if ((uVar6 != 0) && (puVar13 != (uint *)(ulong)uVar6)) {
          puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar6);
          uVar11 = 0;
          if (*puVar14 != 0) {
            uVar6 = puVar14[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar14 + lVar15 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar15 != 0) {
                uVar12 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar13 - lVar15) / (ulong)uVar6);
                }
                if (*puVar14 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *(uint *)PTR_DAT_04bc0148) &&
                   (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar12 * 2),
                   uVar11 < 0xa2)) goto LAB_02346e64;
              }
            }
            uVar11 = 0;
          }
        }
        goto LAB_02346e64;
      }
    }
  }
  uVar11 = 0x21;
LAB_02346e64:
  puVar3 = PTR_PTR_04bb2238;
  if ((((uVar11 == 0x15) || (uVar11 == 9)) && (*(long *)(lVar8 + 0x288) != 0)) &&
     (uVar6 = *(uint *)(*(long *)(lVar8 + 0x288) + 0x10), 0 < (int)uVar6)) {
    uVar12 = 0;
    do {
      if (*(long *)(lVar8 + 0x290) == 0) {
        pcVar17 = *(char **)(puVar3 + 8);
      }
      else {
        puVar13 = *(uint **)(*(long *)(lVar8 + 0x290) + 0xd0);
        uVar2 = uVar12;
        if (*puVar13 <= uVar12) {
          uVar2 = 0;
        }
        pcVar17 = (char *)(*(ulong *)(*(long *)(*(long *)(puVar13 + 2) + (ulong)uVar2 * 0x20) + 0x18
                                     ) & 0xfffffffffffffffe);
      }
      if (((((*pcVar17 == 'H') && (pcVar17[1] == 'a')) &&
           ((pcVar17[2] == 'v' && ((pcVar17[3] == 'o' && (pcVar17[4] == 'k')))))) &&
          (pcVar17[5] == '_')) &&
         ((((pcVar17[6] == 'S' && (pcVar17[7] == 't')) && (pcVar17[8] == 'o')) &&
          ((pcVar17[9] == 'p' && (lVar15 = *(long *)(lVar8 + 0x288), lVar15 != 0)))))) {
        uVar2 = uVar12;
        if (*(uint *)(lVar15 + 0x10) <= uVar12) {
          uVar2 = 0;
        }
        lVar15 = *(long *)(lVar15 + 0x18) + (ulong)uVar2 * 0x48;
        *(uint *)(lVar15 + 0x18) = *(uint *)(lVar15 + 0x18) | 8;
      }
      uVar12 = uVar12 + 1;
    } while (uVar6 != uVar12);
  }
  return;
}

