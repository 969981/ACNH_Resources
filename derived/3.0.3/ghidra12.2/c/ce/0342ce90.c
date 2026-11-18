
undefined8 FUN_0342ce90(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  char cVar13;
  long lVar14;
  ushort uVar15;
  ushort uVar16;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = (uint *)0x0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_80 = puVar1;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 != (uint *)0x0)) {
        local_70 = puVar10;
      }
    }
  }
  local_90 = *param_2;
  uStack_8c = param_2[1];
  lVar14 = *(long *)puVar4;
  local_88 = (uint *)0x0;
  local_98 = puVar1;
  uVar5 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar4 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
         (puVar10 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar10 != (uint *)0x0)) {
        local_88 = puVar10;
      }
    }
  }
  puVar3 = local_70;
  puVar10 = local_88;
  puVar1 = PTR_DAT_04bbfe90;
  if (local_70 == (uint *)0x0) {
    return 0;
  }
  uVar5 = *local_70;
  uVar15 = 0;
  if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
    puVar11 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    uVar15 = 0;
    if (*puVar11 != 0) {
      uVar5 = puVar11[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar14 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             uVar15 < 0x5b6)) goto LAB_0342d08c;
        }
      }
      uVar15 = 0;
    }
  }
LAB_0342d08c:
  if (uVar15 == 0) {
    return 0;
  }
  uVar5 = *local_70;
  local_64 = 0;
  if ((uVar5 != 0) && (local_70 != (uint *)(ulong)uVar5)) {
    puVar11 = (uint *)((long)local_70 - (long)(ulong)uVar5);
    local_64 = 0;
    if (*puVar11 != 0) {
      uVar5 = puVar11[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar14 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)local_70 - lVar14) / (ulong)uVar5);
          }
          if (*puVar11 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
             (local_64 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
             local_64 < 0x5b6)) goto LAB_0342d148;
        }
      }
      local_64 = 0;
    }
  }
LAB_0342d148:
  if (local_88 != (uint *)0x0) {
    uVar5 = *local_88;
    local_68 = 0;
    if ((uVar5 == 0) || (local_88 == (uint *)(ulong)uVar5)) goto LAB_0342d1e4;
    puVar11 = (uint *)((long)local_88 - (long)(ulong)uVar5);
    local_68 = 0;
    if (*puVar11 == 0) goto LAB_0342d1e4;
    uVar5 = puVar11[1];
    if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
      lVar14 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar14 != 0) {
        uVar2 = 0;
        if ((ulong)uVar5 != 0) {
          uVar2 = (uint)((ulong)((long)local_88 - lVar14) / (ulong)uVar5);
        }
        if (*puVar11 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc0020) &&
           (local_68 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar2 * 2),
           local_68 < 0x5b6)) goto LAB_0342d1e4;
      }
    }
  }
  local_68 = 0;
LAB_0342d1e4:
  if (local_64 == local_68) {
    if (local_70 == (uint *)0x0) {
      uVar15 = 0xffff;
    }
    else {
      uVar5 = *local_70;
      if (uVar5 != 0) {
        cVar13 = *PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(puVar1,0xff,0x1ac);
            uVar5 = *puVar3;
          }
          else {
            uVar2 = *(uint *)(puVar1 + 0x108);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar3) == (ushort *)0x0) break;
              uVar15 = *(ushort *)((ulong)uVar2 + (long)puVar3);
              goto LAB_0342d308;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar5;
          uVar15 = 0;
          if ((puVar11 == (uint *)0x0) || (uVar15 = 0, puVar3 == puVar11)) goto LAB_0342d308;
          lVar14 = 0xc;
          if (*(char *)((long)puVar3 + (10 - (long)puVar11)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar3 + (lVar14 - (long)puVar11);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar3 + (8 - (long)puVar11));
          *(undefined4 *)(puVar1 + 0x108) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar12 = (int *)(lVar14 + 4);
          while (piVar12[-1] != 0x2169dc7) {
            piVar12 = piVar12 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0342d304;
          }
          uVar15 = 0;
          iVar6 = 0;
          if (*piVar12 != -1) {
            iVar6 = *piVar12;
          }
          *(int *)(puVar1 + 0x108) = iVar6;
          uVar5 = *puVar3;
          if (uVar5 == 0) goto LAB_0342d308;
        } while( true );
      }
LAB_0342d304:
      uVar15 = 0;
    }
LAB_0342d308:
    puVar1 = PTR_DAT_04bbfe90;
    if (puVar10 == (uint *)0x0) {
      uVar16 = 0xffff;
    }
    else {
      uVar5 = *puVar10;
      if (uVar5 != 0) {
        cVar13 = *PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            memset(puVar1,0xff,0x1ac);
            uVar5 = *puVar10;
          }
          else {
            uVar2 = *(uint *)(puVar1 + 0x108);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar10) == (ushort *)0x0) break;
              uVar16 = *(ushort *)((ulong)uVar2 + (long)puVar10);
              goto LAB_0342d418;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar3 = (uint *)(ulong)uVar5;
          uVar16 = 0;
          if ((puVar3 == (uint *)0x0) || (uVar16 = 0, puVar10 == puVar3)) goto LAB_0342d418;
          lVar14 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar3)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar10 + (lVar14 - (long)puVar3);
          if (lVar14 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar3));
          *(undefined4 *)(puVar1 + 0x108) = 0xfffffffe;
          if (uVar8 == 0) break;
          piVar12 = (int *)(lVar14 + 4);
          while (piVar12[-1] != 0x2169dc7) {
            piVar12 = piVar12 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_0342d414;
          }
          uVar16 = 0;
          iVar6 = 0;
          if (*piVar12 != -1) {
            iVar6 = *piVar12;
          }
          *(int *)(puVar1 + 0x108) = iVar6;
          uVar5 = *puVar10;
          if (uVar5 == 0) goto LAB_0342d418;
        } while( true );
      }
LAB_0342d414:
      uVar16 = 0;
    }
LAB_0342d418:
    uVar8 = FUN_01ae2170(&local_80);
    if ((uVar8 & 1) != 0) {
      if (uVar16 < uVar15) {
        return 1;
      }
      if (uVar15 < uVar16) {
        return 0xffffffff;
      }
    }
    local_64 = FUN_01ae3210(&local_80);
    local_68 = FUN_01ae3210(&local_98);
    if (local_64 != local_68) {
      if ((local_64 != DAT_05752440) && (local_68 == DAT_05752440)) {
        return 1;
      }
      if ((local_64 == DAT_05752440) && (local_68 != DAT_05752440)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752444) && (local_68 == DAT_05752444)) {
        return 1;
      }
      if ((local_64 == DAT_05752444) && (local_68 != DAT_05752444)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752448) && (local_68 == DAT_05752448)) {
        return 1;
      }
      if ((local_64 == DAT_05752448) && (local_68 != DAT_05752448)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575244c) && (local_68 == DAT_0575244c)) {
        return 1;
      }
      if ((local_64 == DAT_0575244c) && (local_68 != DAT_0575244c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752450) && (local_68 == DAT_05752450)) {
        return 1;
      }
      if ((local_64 == DAT_05752450) && (local_68 != DAT_05752450)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752454) && (local_68 == DAT_05752454)) {
        return 1;
      }
      if ((local_64 == DAT_05752454) && (local_68 != DAT_05752454)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752458) && (local_68 == DAT_05752458)) {
        return 1;
      }
      if ((local_64 == DAT_05752458) && (local_68 != DAT_05752458)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575245c) && (local_68 == DAT_0575245c)) {
        return 1;
      }
      if ((local_64 == DAT_0575245c) && (local_68 != DAT_0575245c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752460) && (local_68 == DAT_05752460)) {
        return 1;
      }
      if ((local_64 == DAT_05752460) && (local_68 != DAT_05752460)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752464) && (local_68 == DAT_05752464)) {
        return 1;
      }
      if ((local_64 == DAT_05752464) && (local_68 != DAT_05752464)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752468) && (local_68 == DAT_05752468)) {
        return 1;
      }
      if ((local_64 == DAT_05752468) && (local_68 != DAT_05752468)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575246c) && (local_68 == DAT_0575246c)) {
        return 1;
      }
      if ((local_64 == DAT_0575246c) && (local_68 != DAT_0575246c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752470) && (local_68 == DAT_05752470)) {
        return 1;
      }
      if ((local_64 == DAT_05752470) && (local_68 != DAT_05752470)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752474) && (local_68 == DAT_05752474)) {
        return 1;
      }
      if ((local_64 == DAT_05752474) && (local_68 != DAT_05752474)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752478) && (local_68 == DAT_05752478)) {
        return 1;
      }
      if ((local_64 == DAT_05752478) && (local_68 != DAT_05752478)) {
        return 0xffffffff;
      }
    }
    local_64 = FUN_01ae3bc0(&local_80);
    local_68 = FUN_01ae3bc0(&local_98);
    if (local_64 != local_68) {
      if ((local_64 != DAT_05752440) && (local_68 == DAT_05752440)) {
        return 1;
      }
      if ((local_64 == DAT_05752440) && (local_68 != DAT_05752440)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752444) && (local_68 == DAT_05752444)) {
        return 1;
      }
      if ((local_64 == DAT_05752444) && (local_68 != DAT_05752444)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752448) && (local_68 == DAT_05752448)) {
        return 1;
      }
      if ((local_64 == DAT_05752448) && (local_68 != DAT_05752448)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575244c) && (local_68 == DAT_0575244c)) {
        return 1;
      }
      if ((local_64 == DAT_0575244c) && (local_68 != DAT_0575244c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752450) && (local_68 == DAT_05752450)) {
        return 1;
      }
      if ((local_64 == DAT_05752450) && (local_68 != DAT_05752450)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752454) && (local_68 == DAT_05752454)) {
        return 1;
      }
      if ((local_64 == DAT_05752454) && (local_68 != DAT_05752454)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752458) && (local_68 == DAT_05752458)) {
        return 1;
      }
      if ((local_64 == DAT_05752458) && (local_68 != DAT_05752458)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575245c) && (local_68 == DAT_0575245c)) {
        return 1;
      }
      if ((local_64 == DAT_0575245c) && (local_68 != DAT_0575245c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752460) && (local_68 == DAT_05752460)) {
        return 1;
      }
      if ((local_64 == DAT_05752460) && (local_68 != DAT_05752460)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752464) && (local_68 == DAT_05752464)) {
        return 1;
      }
      if ((local_64 == DAT_05752464) && (local_68 != DAT_05752464)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752468) && (local_68 == DAT_05752468)) {
        return 1;
      }
      if ((local_64 == DAT_05752468) && (local_68 != DAT_05752468)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_0575246c) && (local_68 == DAT_0575246c)) {
        return 1;
      }
      if ((local_64 == DAT_0575246c) && (local_68 != DAT_0575246c)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752470) && (local_68 == DAT_05752470)) {
        return 1;
      }
      if ((local_64 == DAT_05752470) && (local_68 != DAT_05752470)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752474) && (local_68 == DAT_05752474)) {
        return 1;
      }
      if ((local_64 == DAT_05752474) && (local_68 != DAT_05752474)) {
        return 0xffffffff;
      }
      if ((local_64 != DAT_05752478) && (local_68 == DAT_05752478)) {
        return 1;
      }
      if ((local_64 == DAT_05752478) && (local_68 != DAT_05752478)) {
        return 0xffffffff;
      }
    }
    iVar6 = FUN_0277d6c4(param_2);
    iVar7 = FUN_0277d6c4(param_1);
    if (iVar7 != iVar6) {
      uVar9 = FUN_0343bbb0(param_1,param_2);
      return uVar9;
    }
  }
  return 0;
}

