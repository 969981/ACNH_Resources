
ushort FUN_01ae3bc0(long param_1)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  uint *puVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  char cVar20;
  uint local_68 [2];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0xe;
  }
  iVar5 = FUN_01afcfa0();
  if (iVar5 != 0) {
    iVar5 = FUN_01afcfa0(param_1);
    if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(param_1), puVar8 == (ushort *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar2 = *puVar8 >> 3 & 3;
      uVar13 = 0;
      if (uVar2 != 3) {
        uVar13 = uVar2;
      }
    }
    if (uVar13 == 1) {
      local_68[0] = 0;
      uVar16 = FUN_01afee38(param_1,local_68);
      if ((uVar16 & 1) == 0) {
        return 0xe;
      }
      if ((int)*(uint *)(DAT_0532a7d0 + 0x1c0) < 1) {
        if (*(long *)(DAT_0532a7d0 + 0xb0) == 0) {
          return 0xe;
        }
        puVar19 = *(uint **)(*(long *)(DAT_0532a7d0 + 0xb0) + 8);
        if (puVar19 == (uint *)0x0) {
          return 0xe;
        }
        if ((local_68[0] < *(uint *)(DAT_0532a7d0 + 200)) &&
           (*(char *)(*(long *)(DAT_0532a7d0 + 0xd0) + (long)(int)local_68[0]) == '\0')) {
          return 0xe;
        }
        if (*puVar19 <= local_68[0]) {
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
        puVar19 = (uint *)((ulong)(puVar19[1] * local_68[0] + (uint)(ushort)puVar19[2] * 8 + iVar5)
                          + (long)puVar19);
      }
      else {
        if (*(uint *)(DAT_0532a7d0 + 0x1c0) <= local_68[0]) {
          return 0xe;
        }
        if (*(uint *)(DAT_0532a7d0 + 0x1b0) <= local_68[0]) {
          local_68[0] = 0;
        }
        puVar19 = *(uint **)(*(long *)(DAT_0532a7d0 + 0x1b8) + (ulong)local_68[0] * 8);
      }
      if (puVar19 == (uint *)0x0) {
        return 0xe;
      }
      uVar18 = *puVar19;
      if (uVar18 == 0) {
        return 0;
      }
      if (puVar19 == (uint *)(ulong)uVar18) {
        return 0;
      }
      puVar14 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
      if (*puVar14 == 0) {
        return 0;
      }
      uVar18 = puVar14[1];
      if (uVar18 == 0) {
        return 0;
      }
      if ((ulong)(ushort)puVar14[2] == 0) {
        return 0;
      }
      lVar9 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
      if (lVar9 == 0) {
        return 0;
      }
      uVar7 = 0;
      if ((ulong)uVar18 != 0) {
        uVar7 = (uint)((ulong)((long)puVar19 - lVar9) / (ulong)uVar18);
      }
      if (*puVar14 <= uVar7) {
        uVar7 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc0308 <= uVar7) {
        return 0;
      }
      uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0308 + 8) + (long)(int)uVar7 * 2);
      if (uVar13 < 0xf) {
        return uVar13;
      }
      return 0;
    }
    if (uVar13 != 0) {
      return 0xe;
    }
    iVar5 = FUN_01ae3a80(param_1);
    iVar6 = FUN_01afcfa0(param_1);
    puVar4 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    if (iVar6 < iVar5) {
      return 0xe;
    }
    puVar19 = *(uint **)(param_1 + 0x10);
    if (puVar19 == (uint *)0x0) {
      return 0xe;
    }
    uVar18 = *puVar19;
    if (uVar18 == 0) {
      return 0xe;
    }
    cVar20 = *PTR_DAT_04bbfe88;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *puVar3 = 1;
        memset(puVar4,0xff,0x1ac);
        uVar18 = *puVar19;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x120);
        uVar16 = (ulong)uVar7;
        if (-1 < (int)uVar7) {
          if ((short *)(uVar16 + (long)puVar19) == (short *)0x0) {
            return 0xe;
          }
          if (*(short *)(uVar16 + (long)puVar19) == -1) {
            return 0xe;
          }
          puVar19 = *(uint **)(param_1 + 0x10);
          if ((puVar19 == (uint *)0x0) || (uVar18 = *puVar19, uVar18 == 0)) goto LAB_01ae4308;
          goto LAB_01ae40a0;
        }
        if (uVar7 != 0xffffffff) {
          return 0xe;
        }
      }
      puVar14 = (uint *)(ulong)uVar18;
      if (puVar14 == (uint *)0x0) {
        return 0xe;
      }
      if (puVar19 == puVar14) {
        return 0xe;
      }
      lVar9 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar14)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar19 + (lVar9 - (long)puVar14);
      if (lVar9 == 0) {
        return 0xe;
      }
      uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
      if (uVar16 == 0) {
        return 0xe;
      }
      piVar15 = (int *)(lVar9 + 4);
      while (piVar15[-1] != -0x34a14cc1) {
        piVar15 = piVar15 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          return 0xe;
        }
      }
      iVar6 = 0;
      if (*piVar15 != -1) {
        iVar6 = *piVar15;
      }
      *(int *)(puVar4 + 0x120) = iVar6;
      uVar18 = *puVar19;
      if (uVar18 == 0) {
        return 0xe;
      }
    } while( true );
  }
  iVar5 = FUN_01ad7260(param_1);
  if (iVar5 != 0) {
    iVar5 = FUN_01ad7260(param_1);
    if ((iVar5 == 0) || (puVar8 = (ushort *)FUN_01afd600(param_1), puVar8 == (ushort *)0x0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = *puVar8 & 7;
      uVar7 = FUN_01ad7260(param_1);
      if (uVar7 <= uVar18) {
        uVar18 = 0;
      }
    }
    iVar5 = FUN_01ad7260(param_1);
    puVar4 = PTR_DAT_04bbfe90;
    puVar3 = PTR_DAT_04bbfe88;
    if (((iVar5 < (int)uVar18) || (puVar19 = *(uint **)(param_1 + 0x10), puVar19 == (uint *)0x0)) ||
       (uVar7 = *puVar19, uVar7 == 0)) goto switchD_01ae4170_default;
    cVar20 = *PTR_DAT_04bbfe88;
    do {
      if (cVar20 == '\0') {
        cVar20 = '\x01';
        *puVar3 = 1;
        memset(puVar4,0xff,0x1ac);
        uVar7 = *puVar19;
      }
      else {
        uVar17 = *(uint *)(puVar4 + 0x120);
        uVar16 = (ulong)uVar17;
        if (-1 < (int)uVar17) {
          if (((short *)(uVar16 + (long)puVar19) == (short *)0x0) ||
             (*(short *)(uVar16 + (long)puVar19) == -1)) goto switchD_01ae4170_default;
          puVar19 = *(uint **)(param_1 + 0x10);
          if ((puVar19 == (uint *)0x0) || (uVar7 = *puVar19, uVar7 == 0)) goto LAB_01ae4124;
          goto LAB_01ae3ffc;
        }
        if (uVar17 != 0xffffffff) goto switchD_01ae4170_default;
      }
      puVar14 = (uint *)(ulong)uVar7;
      uVar13 = 0xe;
      if ((puVar14 == (uint *)0x0) || (puVar19 == puVar14)) break;
      lVar9 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar14)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar19 + (lVar9 - (long)puVar14);
      if (lVar9 == 0) goto switchD_01ae4170_default;
      uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
      if (uVar16 == 0) goto switchD_01ae4170_default;
      piVar15 = (int *)(lVar9 + 4);
      while (piVar15[-1] != -0x34a14cc1) {
        piVar15 = piVar15 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto switchD_01ae4170_default;
      }
      iVar5 = 0;
      if (*piVar15 != -1) {
        iVar5 = *piVar15;
      }
      *(int *)(puVar4 + 0x120) = iVar5;
      uVar13 = 0xe;
      uVar7 = *puVar19;
    } while (uVar7 != 0);
    goto LAB_01ae4188;
  }
  goto LAB_01ae4198;
  while( true ) {
    if (((int)uVar16 != -1) || (lVar9 = (long)puVar19 - (ulong)uVar18, lVar9 == 0))
    goto LAB_01ae4308;
    lVar1 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar9 == 0) goto LAB_01ae4308;
    uVar16 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_01ae4308;
    puVar14 = (uint *)(lVar1 + lVar9 + 4);
    while (puVar14[-1] != 0xcb5eb33f) {
      puVar14 = puVar14 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_01ae4308;
    }
    uVar7 = 0xffff;
    uVar18 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar18 = *puVar14;
    }
    uVar16 = (ulong)uVar18;
    *(uint *)(puVar4 + 0x120) = uVar18;
    uVar18 = *puVar19;
    if (uVar18 == 0) break;
LAB_01ae40a0:
    if (-1 < (int)uVar16) {
      if ((ushort *)((long)puVar19 + uVar16) == (ushort *)0x0) {
LAB_01ae4308:
        uVar7 = 0xffff;
      }
      else {
        uVar7 = (uint)*(ushort *)((long)puVar19 + uVar16);
      }
      break;
    }
  }
  uVar7 = uVar7 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if (*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar7) {
    return 0xe;
  }
  lVar9 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar7 * 8);
  if (lVar9 == 0) {
    return 0xe;
  }
  switch(iVar5) {
  case 0:
    uVar11 = 0x29;
    uVar12 = 0xece3e00c;
    break;
  case 1:
    uVar11 = 0x2c;
    uVar12 = 0x3218b32;
    break;
  case 2:
    uVar11 = 0x2e;
    uVar12 = 0xe8163031;
    break;
  case 3:
    uVar12 = 0x7d45b0f;
    uVar11 = 0x30;
    break;
  case 4:
    uVar11 = 0x32;
    uVar12 = 0xe5084076;
    break;
  case 5:
    uVar11 = 0x34;
    uVar12 = 0xaca2b48;
    break;
  case 6:
    uVar11 = 0x36;
    uVar12 = 0xe1fd904b;
    break;
  case 7:
    uVar12 = 0xe3ffb75;
    uVar11 = 0x38;
    break;
  default:
    return 0xe;
  }
  pbVar10 = (byte *)FUN_01a61680(lVar9,uVar11,uVar12,0);
  if (pbVar10 == (byte *)0x0) {
    return 0;
  }
  if (*pbVar10 < 0xf) {
    return (ushort)*pbVar10;
  }
  return 0;
  while( true ) {
    if (((int)uVar16 != -1) || (lVar9 = (long)puVar19 - (ulong)uVar7, lVar9 == 0))
    goto LAB_01ae4124;
    lVar1 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar9 == 0) goto LAB_01ae4124;
    uVar16 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)(puVar4 + 0x120) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_01ae4124;
    puVar14 = (uint *)(lVar1 + lVar9 + 4);
    while (puVar14[-1] != 0xcb5eb33f) {
      puVar14 = puVar14 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_01ae4124;
    }
    uVar17 = 0xffff;
    uVar7 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar7 = *puVar14;
    }
    uVar16 = (ulong)uVar7;
    *(uint *)(puVar4 + 0x120) = uVar7;
    uVar7 = *puVar19;
    if (uVar7 == 0) break;
LAB_01ae3ffc:
    if (-1 < (int)uVar16) {
      if ((ushort *)((long)puVar19 + uVar16) == (ushort *)0x0) {
LAB_01ae4124:
        uVar17 = 0xffff;
      }
      else {
        uVar17 = (uint)*(ushort *)((long)puVar19 + uVar16);
      }
      break;
    }
  }
  uVar17 = uVar17 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if ((uVar17 < *(uint *)(DAT_0532a7c8 + 0x1d8)) &&
     (lVar9 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar17 * 8), lVar9 != 0)) {
    switch(uVar18) {
    case 0:
      uVar11 = 0x17;
      uVar12 = 0xa3249a9d;
      break;
    case 1:
      uVar11 = 0x19;
      uVar12 = 0x4ce6f1a3;
      break;
    case 2:
      uVar11 = 0x1b;
      uVar12 = 0xa7d14aa0;
      break;
    case 3:
      uVar11 = 0x1d;
      uVar12 = 0x4813219e;
      break;
    case 4:
      uVar12 = 0xaacf3ae7;
      uVar11 = 0x1f;
      break;
    case 5:
      uVar11 = 0x21;
      uVar12 = 0x450d51d9;
      break;
    case 6:
      uVar11 = 0x23;
      uVar12 = 0xae3aeada;
      break;
    case 7:
      uVar11 = 0x25;
      uVar12 = 0x41f881e4;
      break;
    default:
      goto switchD_01ae4170_default;
    }
    pbVar10 = (byte *)FUN_01a61680(lVar9,uVar11,uVar12,0);
    if ((pbVar10 == (byte *)0x0) || (uVar13 = (ushort)*pbVar10, 0xe < uVar13)) {
      uVar13 = 0;
    }
  }
  else {
switchD_01ae4170_default:
    uVar13 = 0xe;
  }
LAB_01ae4188:
  if (uVar13 != 0xe) {
    return uVar13;
  }
LAB_01ae4198:
  puVar19 = *(uint **)(param_1 + 0x10);
  if (puVar19 == (uint *)0x0) {
    uVar13 = 0xe;
  }
  else {
    uVar18 = *puVar19;
    uVar13 = 0;
    if ((uVar18 != 0) && (puVar19 != (uint *)(ulong)uVar18)) {
      puVar14 = (uint *)((long)puVar19 - (long)(ulong)uVar18);
      uVar13 = 0;
      if (*puVar14 != 0) {
        uVar18 = puVar14[1];
        if ((uVar18 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar14 + lVar9 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar9 != 0) {
            uVar7 = 0;
            if ((ulong)uVar18 != 0) {
              uVar7 = (uint)((ulong)((long)puVar19 - lVar9) / (ulong)uVar18);
            }
            if (*puVar14 <= uVar7) {
              uVar7 = 0xffffffff;
            }
            if ((uVar7 < *(uint *)PTR_DAT_04bc0030) &&
               (uVar13 = *(ushort *)(*(long *)(PTR_DAT_04bc0030 + 8) + (long)(int)uVar7 * 2),
               uVar13 < 0xf)) goto LAB_01ae4234;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_01ae4234:
  if (uVar13 == 0xe) {
    return 0xe;
  }
  return uVar13;
}

