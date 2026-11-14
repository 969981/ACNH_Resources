
ushort FUN_01ae3210(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ushort uVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  uint *puVar19;
  char cVar20;
  uint local_68;
  uint local_64;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0xe;
  }
  iVar5 = FUN_01ad7260();
  if (iVar5 != 0) {
    iVar5 = FUN_01ad7260(param_1);
    if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(param_1), puVar9 == (ushort *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = *puVar9 & 7;
      uVar6 = FUN_01ad7260(param_1);
      if (uVar6 <= uVar8) {
        uVar8 = 0;
      }
    }
    iVar5 = FUN_01ad7260(param_1);
    puVar4 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    if (((iVar5 < (int)uVar8) || (puVar19 = *(uint **)(param_1 + 0x10), puVar19 == (uint *)0x0)) ||
       (uVar6 = *puVar19, uVar6 == 0)) goto switchD_01ae347c_default;
    cVar20 = *PTR_DAT_04bbfe88;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *puVar3 = 1;
        memset(puVar4,0xff,0x1ac);
        uVar6 = *puVar19;
      }
      else {
        uVar18 = *(uint *)(puVar4 + 0x120);
        uVar17 = (ulong)uVar18;
        if (-1 < (int)uVar18) {
          if (((short *)(uVar17 + (long)puVar19) == (short *)0x0) ||
             (*(short *)(uVar17 + (long)puVar19) == -1)) goto switchD_01ae347c_default;
          puVar19 = *(uint **)(param_1 + 0x10);
          if ((puVar19 == (uint *)0x0) || (uVar6 = *puVar19, uVar6 == 0)) goto LAB_01ae3430;
          goto LAB_01ae33ac;
        }
        if (uVar18 != 0xffffffff) goto switchD_01ae347c_default;
      }
      puVar16 = (uint *)(ulong)uVar6;
      uVar14 = 0xe;
      if ((puVar16 == (uint *)0x0) || (uVar14 = 0xe, puVar19 == puVar16)) break;
      lVar10 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar16)) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar19 + (lVar10 - (long)puVar16);
      if (lVar10 == 0) goto switchD_01ae347c_default;
      uVar17 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar16));
      *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
      if (uVar17 == 0) goto switchD_01ae347c_default;
      piVar15 = (int *)(lVar10 + 4);
      while (piVar15[-1] != -0x34a14cc1) {
        piVar15 = piVar15 + 2;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) goto switchD_01ae347c_default;
      }
      iVar5 = 0;
      if (*piVar15 != -1) {
        iVar5 = *piVar15;
      }
      *(int *)(puVar4 + 0x120) = iVar5;
      uVar14 = 0xe;
      uVar6 = *puVar19;
    } while (uVar6 != 0);
    goto LAB_01ae3494;
  }
  goto LAB_01ae34a4;
  while( true ) {
    if (((int)uVar17 != -1) || (lVar10 = (long)puVar19 - (ulong)uVar8, lVar10 == 0))
    goto LAB_01ae38e8;
    lVar1 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar10 == 0) goto LAB_01ae38e8;
    uVar17 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_01ae38e8;
    puVar16 = (uint *)(lVar1 + lVar10 + 4);
    while (puVar16[-1] != 0xcb5eb33f) {
      puVar16 = puVar16 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01ae38e8;
    }
    uVar6 = 0xffff;
    uVar8 = 0;
    if (*puVar16 != 0xffffffff) {
      uVar8 = *puVar16;
    }
    uVar17 = (ulong)uVar8;
    *(uint *)(puVar4 + 0x120) = uVar8;
    uVar8 = *puVar19;
    if (uVar8 == 0) break;
LAB_01ae37d4:
    if (-1 < (int)uVar17) {
      if ((ushort *)((long)puVar19 + uVar17) == (ushort *)0x0) {
LAB_01ae38e8:
        uVar6 = 0xffff;
      }
      else {
        uVar6 = (uint)*(ushort *)((long)puVar19 + uVar17);
      }
      break;
    }
  }
  uVar6 = uVar6 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if (*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar6) {
    return 0xe;
  }
  lVar10 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar6 * 8);
  if (lVar10 == 0) {
    return 0xe;
  }
  switch(iVar5) {
  case 0:
    uVar12 = 0x28;
    uVar13 = 0x545f8769;
    break;
  case 1:
    uVar12 = 0x2b;
    uVar13 = 0xbb9dec57;
    break;
  case 2:
    uVar12 = 0x2d;
    uVar13 = 0x50aa5754;
    break;
  case 3:
    uVar12 = 0x2f;
    uVar13 = 0xbf683c6a;
    break;
  case 4:
    uVar12 = 0x31;
    uVar13 = 0x5db42713;
    break;
  case 5:
    uVar12 = 0x33;
    uVar13 = 0xb2764c2d;
    break;
  case 6:
    uVar12 = 0x35;
    uVar13 = 0x5941f72e;
    break;
  case 7:
    uVar12 = 0x37;
    uVar13 = 0xb6839c10;
    break;
  default:
    return 0xe;
  }
  pbVar11 = (byte *)FUN_01a61680(lVar10,uVar12,uVar13,0);
  if (pbVar11 == (byte *)0x0) {
    return 0;
  }
  if (*pbVar11 < 0xf) {
    return (ushort)*pbVar11;
  }
  return 0;
  while( true ) {
    if (((int)uVar17 != -1) || (lVar10 = (long)puVar19 - (ulong)uVar6, lVar10 == 0))
    goto LAB_01ae3430;
    lVar1 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar10 == 0) goto LAB_01ae3430;
    uVar17 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
    if (uVar17 == 0) goto LAB_01ae3430;
    puVar16 = (uint *)(lVar1 + lVar10 + 4);
    while (puVar16[-1] != 0xcb5eb33f) {
      puVar16 = puVar16 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01ae3430;
    }
    uVar18 = 0xffff;
    uVar6 = 0;
    if (*puVar16 != 0xffffffff) {
      uVar6 = *puVar16;
    }
    uVar17 = (ulong)uVar6;
    *(uint *)(puVar4 + 0x120) = uVar6;
    uVar6 = *puVar19;
    if (uVar6 == 0) break;
LAB_01ae33ac:
    if (-1 < (int)uVar17) {
      if ((ushort *)((long)puVar19 + uVar17) == (ushort *)0x0) {
LAB_01ae3430:
        uVar18 = 0xffff;
      }
      else {
        uVar18 = (uint)*(ushort *)((long)puVar19 + uVar17);
      }
      break;
    }
  }
  uVar18 = uVar18 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if ((uVar18 < *(uint *)(DAT_0532a7c8 + 0x1d8)) &&
     (lVar10 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar18 * 8), lVar10 != 0)) {
    switch(uVar8) {
    case 0:
      uVar12 = 0x16;
      uVar13 = 0x1b98fdf8;
      break;
    case 1:
      uVar13 = 0xf45a96c6;
      uVar12 = 0x18;
      break;
    case 2:
      uVar12 = 0x1a;
      uVar13 = 0x1f6d2dc5;
      break;
    case 3:
      uVar13 = 0xf0af46fb;
      uVar12 = 0x1c;
      break;
    case 4:
      uVar13 = 0x12735d82;
      uVar12 = 0x1e;
      break;
    case 5:
      uVar13 = 0xfdb136bc;
      uVar12 = 0x20;
      break;
    case 6:
      uVar12 = 0x22;
      uVar13 = 0x16868dbf;
      break;
    case 7:
      uVar12 = 0x24;
      uVar13 = 0xf944e681;
      break;
    default:
      goto switchD_01ae347c_default;
    }
    pbVar11 = (byte *)FUN_01a61680(lVar10,uVar12,uVar13,0);
    if ((pbVar11 == (byte *)0x0) || (uVar14 = (ushort)*pbVar11, 0xe < uVar14)) {
      uVar14 = 0;
    }
  }
  else {
switchD_01ae347c_default:
    uVar14 = 0xe;
  }
LAB_01ae3494:
  if (uVar14 != 0xe) {
    return uVar14;
  }
LAB_01ae34a4:
  puVar19 = *(uint **)(param_1 + 0x10);
  if (puVar19 == (uint *)0x0) {
    uVar14 = 0xe;
  }
  else {
    uVar8 = *puVar19;
    uVar14 = 0;
    if ((uVar8 != 0) && (puVar19 != (uint *)(ulong)uVar8)) {
      puVar16 = (uint *)((long)puVar19 - (long)(ulong)uVar8);
      uVar14 = 0;
      if (*puVar16 != 0) {
        uVar8 = puVar16[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar16 + lVar10 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar10 != 0) {
            uVar6 = 0;
            if ((ulong)uVar8 != 0) {
              uVar6 = (uint)((ulong)((long)puVar19 - lVar10) / (ulong)uVar8);
            }
            if (*puVar16 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0028) &&
               (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0028 + 8) + (long)(int)uVar6 * 2),
               uVar14 < 0xf)) goto LAB_01ae3540;
          }
        }
        uVar14 = 0;
      }
    }
  }
LAB_01ae3540:
  if (uVar14 != 0xe) {
    return uVar14;
  }
  iVar5 = FUN_01afcfa0(param_1);
  if (iVar5 == 0) {
    return 0xe;
  }
  iVar5 = FUN_01afcfa0(param_1);
  if ((iVar5 == 0) || (puVar9 = (ushort *)FUN_01afd600(param_1), puVar9 == (ushort *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar2 = *puVar9 >> 3 & 3;
    uVar14 = 0;
    if (uVar2 != 3) {
      uVar14 = uVar2;
    }
  }
  if (uVar14 == 1) {
    local_68 = 0;
    uVar17 = FUN_01afee38(param_1,&local_68);
    if ((uVar17 & 1) != 0) {
      local_64 = local_68;
      if ((int)*(uint *)(DAT_0532a7d0 + 0x1c0) < 1) {
        if (*(long *)(DAT_0532a7d0 + 0xb0) == 0) {
          return 0xe;
        }
        puVar19 = *(uint **)(*(long *)(DAT_0532a7d0 + 0xb0) + 8);
        if (puVar19 == (uint *)0x0) {
          return 0xe;
        }
        if ((local_68 < *(uint *)(DAT_0532a7d0 + 200)) &&
           (*(char *)(*(long *)(DAT_0532a7d0 + 0xd0) + (long)(int)local_68) == '\0')) {
          return 0xe;
        }
        if (*puVar19 <= local_68) {
          return 0xe;
        }
        if (puVar19[1] == 0) {
          return 0xe;
        }
        if ((ushort)puVar19[2] == 0) {
          return 0xe;
        }
        iVar5 = 0xc;
        if (*(char *)((long)puVar19 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        lVar10 = (ulong)(puVar19[1] * local_68 + (uint)(ushort)puVar19[2] * 8 + iVar5) +
                 (long)puVar19;
      }
      else {
        if (*(uint *)(DAT_0532a7d0 + 0x1c0) <= local_68) {
          return 0xe;
        }
        uVar8 = local_68;
        if (*(uint *)(DAT_0532a7d0 + 0x1b0) <= local_68) {
          uVar8 = 0;
        }
        lVar10 = *(long *)(*(long *)(DAT_0532a7d0 + 0x1b8) + (ulong)uVar8 * 8);
      }
      if (lVar10 != 0) {
        uVar8 = FUN_03853b94();
        if ((uVar8 < *(uint *)PTR_DAT_04bc0300) &&
           (uVar14 = *(ushort *)(*(long *)(PTR_DAT_04bc0300 + 8) + (long)(int)uVar8 * 2),
           uVar14 < 0xf)) {
          return uVar14;
        }
        return 0;
      }
    }
  }
  else if (uVar14 == 0) {
    iVar5 = FUN_01ae3a80(param_1);
    iVar7 = FUN_01afcfa0(param_1);
    puVar4 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    if (((iVar5 <= iVar7) && (puVar19 = *(uint **)(param_1 + 0x10), puVar19 != (uint *)0x0)) &&
       (uVar8 = *puVar19, uVar8 != 0)) {
      cVar20 = *PTR_DAT_04bbfe88;
      do {
        if (cVar20 == '\0') {
          cVar20 = '\x01';
          *puVar3 = 1;
          memset(puVar4,0xff,0x1ac);
          uVar8 = *puVar19;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x120);
          uVar17 = (ulong)uVar6;
          if (-1 < (int)uVar6) {
            if ((short *)(uVar17 + (long)puVar19) == (short *)0x0) {
              return 0xe;
            }
            if (*(short *)(uVar17 + (long)puVar19) == -1) {
              return 0xe;
            }
            puVar19 = *(uint **)(param_1 + 0x10);
            if ((puVar19 == (uint *)0x0) || (uVar8 = *puVar19, uVar8 == 0)) goto LAB_01ae38e8;
            goto LAB_01ae37d4;
          }
          if (uVar6 != 0xffffffff) {
            return 0xe;
          }
        }
        puVar16 = (uint *)(ulong)uVar8;
        if (puVar16 == (uint *)0x0) {
          return 0xe;
        }
        if (puVar19 == puVar16) {
          return 0xe;
        }
        lVar10 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar16)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar19 + (lVar10 - (long)puVar16);
        if (lVar10 == 0) {
          return 0xe;
        }
        uVar17 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar16));
        *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
        if (uVar17 == 0) {
          return 0xe;
        }
        piVar15 = (int *)(lVar10 + 4);
        while (piVar15[-1] != -0x34a14cc1) {
          piVar15 = piVar15 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) {
            return 0xe;
          }
        }
        iVar7 = 0;
        if (*piVar15 != -1) {
          iVar7 = *piVar15;
        }
        *(int *)(puVar4 + 0x120) = iVar7;
        uVar8 = *puVar19;
        if (uVar8 == 0) {
          return 0xe;
        }
      } while( true );
    }
  }
  return 0xe;
}

