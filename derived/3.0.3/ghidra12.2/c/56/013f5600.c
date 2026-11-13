
bool FUN_013f5600(long param_1,ushort param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  char cVar18;
  long lVar19;
  ulong uVar20;
  undefined8 local_90;
  undefined *local_88;
  uint local_80;
  uint uStack_7c;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  uVar1 = (uint)param_2;
  if (uVar1 == 0x8ec) {
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
LAB_013f56a0:
      uVar17 = *(undefined8 *)PTR_DAT_04bb30a0;
      uVar3 = *(undefined1 *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    }
    else {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x20);
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_013f56a0;
      uVar17 = *(undefined8 *)PTR_DAT_04bb30a0;
      lVar11 = FUN_00a8c18c(uVar17);
      uVar3 = *(undefined1 *)(lVar11 + 4);
    }
    uVar8 = FUN_00a868d0(uVar17,uVar3);
    if ((uVar8 & 0xfffffffe) != 4) {
      return false;
    }
  }
  puVar2 = PTR_DAT_04bb27d0;
  plVar13 = *(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(*plVar13 + 0x476) < 2) {
LAB_013f58d0:
    if ((plVar13[5] == 0) || ((int)plVar13[0x10] != 1)) goto LAB_013f58e4;
  }
  else {
    if ((uVar1 - 0xd8a < 5) && ((1 << (ulong)(uVar1 - 0xd8a & 0x1f) & 0x19U) != 0)) {
      return false;
    }
    if (uVar1 == 0xfffe) goto LAB_013f58d0;
    local_70 = (uint)param_2;
    local_6c = 0;
    FUN_0277d4ac(&local_70);
    puVar6 = PTR_DAT_04bb43c0;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_70);
    lVar11 = *(long *)puVar6;
    if (lVar11 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_78 = 0;
        local_88 = PTR_DAT_04bc0510 + 0x10;
        local_80 = local_70;
        uStack_7c = local_6c;
        uVar8 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar6 == 0) {
LAB_013f58a8:
          local_68 = 0xbc;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_013f58a8;
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_70);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
             (puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
             puVar14 == (uint *)0x0)) goto LAB_013f58a8;
          local_68 = 0;
          uVar8 = *puVar14;
          if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
            local_68 = 0;
            if (*puVar15 != 0) {
              uVar8 = puVar15[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar11 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar8);
                  }
                  if (*puVar15 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                     local_68 < 0xbd)) goto LAB_013f58b4;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_013f58b4:
        local_64 = 0x60;
        if (local_68 == 0x60) {
          return false;
        }
      }
    }
    plVar13 = *(long **)puVar2;
    if (plVar13 != (long *)0x0) goto LAB_013f58d0;
LAB_013f58e4:
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      return true;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) {
      return true;
    }
  }
  if ((uVar1 - 0xd8a < 5) && ((1 << (ulong)(uVar1 - 0xd8a & 0x1f) & 0x19U) != 0)) {
    return false;
  }
  if (uVar1 == 0xfffe) {
    return true;
  }
  local_70 = (uint)param_2;
  local_6c = 0;
  FUN_0277d4ac(&local_70);
  puVar2 = PTR_DAT_04bb43c0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_70);
  lVar11 = *(long *)puVar2;
  if (lVar11 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      local_78 = 0;
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_80 = local_70;
      uStack_7c = local_6c;
      uVar8 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar2 == 0) {
LAB_013f5af8:
        local_68 = 0xbc;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_013f5af8;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(&local_70);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
           (puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
           puVar14 == (uint *)0x0)) goto LAB_013f5af8;
        local_68 = 0;
        uVar8 = *puVar14;
        if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
          local_68 = 0;
          if (*puVar15 != 0) {
            uVar8 = puVar15[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar11 != 0) {
                uVar12 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar12 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar8);
                }
                if (*puVar15 <= uVar12) {
                  uVar12 = 0xffffffff;
                }
                if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_68 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                   local_68 < 0xbd)) goto LAB_013f5b04;
              }
            }
            local_68 = 0;
          }
        }
      }
LAB_013f5b04:
      local_64 = 0x60;
      if (local_68 == 0x60) {
        return false;
      }
    }
  }
  local_88 = (undefined *)(ulong)param_2;
  FUN_0277d4ac(&local_88);
  plVar13 = (long *)(param_1 + 0x528);
  lVar11 = (**(code **)(*(long *)(param_1 + 0x528) + 0x20))(plVar13);
  uVar8 = FUN_0277d6c4(&local_88);
  if (((uVar8 >> 3 & 0x1fff) < 0x753) &&
     ((*(uint *)(lVar11 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
    return true;
  }
  lVar11 = (**(code **)(*plVar13 + 0x20))(plVar13);
  uVar20 = 0;
  do {
    if ((*(uint *)(lVar11 + (uVar20 >> 5) * 4) >> (ulong)((uint)uVar20 & 0x1f) & 1) != 0)
    goto LAB_013f5bb0;
    uVar8 = (uint)uVar20 + 1;
    uVar20 = (ulong)uVar8;
  } while (uVar8 != 15000);
  uVar20 = 0;
LAB_013f5bb0:
  lVar19 = (**(code **)(*plVar13 + 0x20))(plVar13);
  puVar6 = PTR_DAT_04bbfe58;
  puVar2 = PTR_DAT_04bb37e0;
  iVar10 = 15000;
  do {
    if ((*(uint *)(lVar19 + (ulong)(iVar10 - 1U >> 5) * 4) >> (ulong)(iVar10 - 1U & 0x1f) & 1) != 0)
    break;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (iVar10 != (int)uVar20) {
    local_90 = 0;
    cVar18 = '\0';
LAB_013f5d60:
    puVar14 = (uint *)(puVar6 + uVar20 * 8);
    if (0x752 < (uint)(uVar20 >> 3)) {
      puVar14 = (uint *)puVar6;
    }
    puVar15 = (uint *)puVar2;
    if ((uint)uVar20 < 0x3a99) {
      puVar15 = puVar14;
    }
    local_70 = *puVar15;
    local_6c = puVar15[1];
    uVar8 = FUN_0277d6c4(&local_70);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
    if ((uVar8 < *(uint *)(param_1 + 0x328)) &&
       (puVar14 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar8 * 8),
       puVar14 != (uint *)0x0)) {
      uVar8 = *puVar14;
      if (uVar8 == 0 || puVar14 == (uint *)(ulong)uVar8) {
LAB_013f5e30:
        local_64 = 0;
      }
      else {
        puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
        if (((*puVar16 == 0) || (uVar8 = puVar16[1], uVar8 == 0)) ||
           ((ulong)(ushort)puVar16[2] == 0)) goto LAB_013f5e30;
        lVar19 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar19 == 0) goto LAB_013f5e30;
        uVar12 = 0;
        if ((ulong)uVar8 != 0) {
          uVar12 = (uint)((ulong)((long)puVar14 - lVar19) / (ulong)uVar8);
        }
        if (*puVar16 <= uVar12) {
          uVar12 = 0xffffffff;
        }
        if ((DAT_051b69d0 <= uVar12) ||
           (uVar4 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar12 * 2), local_64 = (uint)uVar4,
           6 < uVar4)) goto LAB_013f5e30;
      }
      if (((6 < local_64) || (uVar8 = 1 << (ulong)(local_64 & 0x1f), (uVar8 & 0xd) != 0)) ||
         ((uVar8 & 0x50) == 0)) goto LAB_013f5e60;
      local_90 = CONCAT44(local_90._4_4_ + 1,(int)local_90);
    }
    else {
LAB_013f5e60:
      local_70 = *puVar15;
      local_6c = puVar15[1];
      uVar8 = FUN_0277d6c4(&local_70);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
      if ((((uVar8 < *(uint *)(param_1 + 0x328)) &&
           (puVar14 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar8 * 8),
           puVar14 != (uint *)0x0)) && (uVar8 = *puVar14, uVar8 != 0)) &&
         (puVar14 != (uint *)(ulong)uVar8)) {
        puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
        if (((*puVar15 != 0) && (uVar8 = puVar15[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar15[2] != 0)) {
          lVar19 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar15 + lVar19 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar19 != 0) {
            uVar12 = 0;
            if ((ulong)uVar8 != 0) {
              uVar12 = (uint)((ulong)((long)puVar14 - lVar19) / (ulong)uVar8);
            }
            if (*puVar15 <= uVar12) {
              uVar12 = 0xffffffff;
            }
            if (((uVar12 < DAT_051b69d0) &&
                (uVar4 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar12 * 2), uVar4 < 7)) &&
               (uVar4 == 2)) {
              local_90 = CONCAT44(local_90._4_4_,(int)local_90 + 1);
              goto LAB_013f5f34;
            }
          }
        }
      }
      cVar18 = cVar18 + '\x01';
    }
LAB_013f5f34:
    do {
      uVar8 = (int)uVar20 + 1;
      uVar20 = (ulong)uVar8;
      if (0x752 < uVar8 >> 3) {
        uVar8 = 0x3a95;
        goto LAB_013f5f64;
      }
    } while ((*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
    goto LAB_013f5d58;
  }
  cVar18 = '\0';
  local_90 = 0;
LAB_013f5bfc:
  uVar8 = FUN_0277d6c4(&local_88);
  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if ((uVar8 < *(uint *)(param_1 + 0x328)) &&
     (puVar14 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar8 * 8),
     puVar14 != (uint *)0x0)) {
    uVar8 = *puVar14;
    if (uVar8 == 0 || puVar14 == (uint *)(ulong)uVar8) {
LAB_013f5cac:
      local_70 = 0;
    }
    else {
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
      if (((*puVar15 == 0) || (uVar8 = puVar15[1], uVar8 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
      goto LAB_013f5cac;
      lVar11 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar15 + lVar11 + (ulong)(ushort)puVar15[2] * 8;
      if (lVar11 == 0) goto LAB_013f5cac;
      uVar12 = 0;
      if ((ulong)uVar8 != 0) {
        uVar12 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar8);
      }
      if (*puVar15 <= uVar12) {
        uVar12 = 0xffffffff;
      }
      if ((DAT_051b69d0 <= uVar12) ||
         (uVar4 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar12 * 2), local_70 = (uint)uVar4,
         6 < uVar4)) goto LAB_013f5cac;
    }
    if (((local_70 < 7) && (uVar8 = 1 << (ulong)(local_70 & 0x1f), (uVar8 & 0xd) == 0)) &&
       ((uVar8 & 0x50) != 0)) {
      if ((local_90 & 0xff00000000) == 0) {
        return (param_2 & 0xfffd) == 0x8d8;
      }
      return false;
    }
  }
  if ((local_90 & 0xff) == 0) {
    uVar9 = FUN_0277d6c4(&local_88);
    iVar10 = FUN_013eeb68(param_1,uVar9);
    if (iVar10 == 2) {
      bVar7 = uVar1 == 0x8ab;
      uVar8 = 0x149;
      goto LAB_013f5fd4;
    }
  }
  if (cVar18 != '\0') {
    return true;
  }
  bVar7 = uVar1 == 0x8ba;
  uVar8 = 0x148;
LAB_013f5fd4:
  return bVar7 || uVar1 == uVar8;
  while (uVar8 = uVar8 - 3, uVar8 != 0xfffffffd) {
LAB_013f5f64:
    uVar12 = uVar8 + 2;
    if ((((*(uint *)(lVar11 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0) ||
        (uVar12 = uVar8 + 1,
        (*(uint *)(lVar11 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)) ||
       (uVar12 = uVar8,
       (*(uint *)(lVar11 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
      uVar20 = (ulong)(uVar12 + 1);
      goto LAB_013f5d58;
    }
  }
  uVar20 = 0;
LAB_013f5d58:
  if (iVar10 == (int)uVar20) goto LAB_013f5bfc;
  goto LAB_013f5d60;
}

