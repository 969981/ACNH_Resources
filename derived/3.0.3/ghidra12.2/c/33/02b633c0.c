
/* WARNING: Removing unreachable block (ram,0x02b6341c) */
/* WARNING: Removing unreachable block (ram,0x02b6342c) */

float FUN_02b633c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  char cVar16;
  int *piVar17;
  float fVar18;
  float fVar19;
  uint local_68 [2];
  uint *local_60;
  undefined4 local_58 [2];
  byte local_50;
  uint local_4c;
  undefined4 local_24;
  
  lVar12 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0xa8) == 0)) || (*(char *)(lVar12 + 0x11c8) != '\0')) {
    fVar19 = -500.0;
  }
  else {
    local_68[0] = local_68[0] & 0xffffff00;
    sVar5 = *(short *)PTR_DAT_04bb6298;
    if (sVar5 == -1) {
      local_58[0] = 7;
    }
    else {
      puVar13 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar13 = (uint *)PTR_DAT_04bc39f8;
      }
      local_58[0] = 7;
      if ((*puVar13 & 2) != 0) {
        local_58[0] = 5;
      }
    }
    fVar19 = (float)FUN_00962700(*(long *)(lVar12 + 0xa8),param_1,local_58,1,local_68);
  }
  local_58[0] = 0;
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0x148);
  }
  FUN_02a58ea0(local_58,puVar2,param_1);
  puVar6 = PTR_DAT_04bb5008;
  local_68[0] = local_4c;
  if (local_4c != 0) {
    lVar12 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar12 + 0x1e0) < 1) {
      if (((((*(long *)(lVar12 + 0xd0) != 0) &&
            (puVar13 = *(uint **)(*(long *)(lVar12 + 0xd0) + 8), puVar13 != (uint *)0x0)) &&
           ((*(uint *)(lVar12 + 0xe8) <= local_4c ||
            (*(char *)(*(long *)(lVar12 + 0xf0) + (long)(int)local_4c) != '\0')))) &&
          ((local_4c < *puVar13 && (puVar13[1] != 0)))) && ((ushort)puVar13[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * local_4c + (uint)(ushort)puVar13[2] * 8 + iVar14) +
                          (long)puVar13);
        goto joined_r0x02b635a8;
      }
    }
    else if (local_4c < *(uint *)(lVar12 + 0x1e0)) {
      uVar9 = local_4c;
      if (*(uint *)(lVar12 + 0x1d0) <= local_4c) {
        uVar9 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar12 + 0x1d8) + (ulong)uVar9 * 8);
joined_r0x02b635a8:
      if ((puVar13 != (uint *)0x0) &&
         (uVar9 = *puVar13, uVar9 != 0 && puVar13 != (uint *)(ulong)uVar9)) {
        puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
        if ((*puVar15 != 0) &&
           ((uVar9 = puVar15[1], uVar9 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
          lVar12 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar12 != 0) {
            uVar10 = 0;
            if ((ulong)uVar9 != 0) {
              uVar10 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar9);
            }
            if (*puVar15 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if (uVar10 < *(uint *)PTR_DAT_04bc46a8) {
              uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar10 * 2);
              if (uVar4 < 5) {
                if (uVar4 == 4) {
                  FUN_02b72930(local_68,local_4c);
                  puVar7 = PTR_DAT_04bc4658;
                  puVar6 = PTR_DAT_04bc4650;
                  fVar19 = 0.0;
                  if ((local_60 == (uint *)0x0) || (uVar9 = *local_60, uVar9 == 0)) {
LAB_02b63958:
                    local_24 = 0;
                    uVar11 = FUN_02b677c0(&local_24,local_4c);
                    uVar1 = local_24;
                    if ((uVar11 & 1) == 0) {
                      uVar1 = 0;
                    }
                    fVar18 = (float)FUN_02b57b70(uVar1,0);
                    return fVar19 / 10.0 + fVar18;
                  }
                  cVar16 = *PTR_DAT_04bc4650;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar7 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                      *puVar6 = 1;
                      *(undefined4 *)(puVar7 + 0x30) = 0xffffffff;
                      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                      uVar9 = *local_60;
                    }
                    else {
                      uVar10 = *(uint *)(puVar7 + 4);
                      if (-1 < (int)uVar10) {
                        if ((float *)((ulong)uVar10 + (long)local_60) != (float *)0x0) {
                          fVar19 = *(float *)((ulong)uVar10 + (long)local_60);
                        }
                        goto LAB_02b63958;
                      }
                      if (uVar10 != 0xffffffff) goto LAB_02b63958;
                    }
                    puVar13 = (uint *)(ulong)uVar9;
                    if ((puVar13 == (uint *)0x0) || (local_60 == puVar13)) goto LAB_02b63958;
                    lVar12 = 0xc;
                    if (*(char *)((long)local_60 + (10 - (long)puVar13)) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)local_60 + (lVar12 - (long)puVar13);
                    if (lVar12 == 0) goto LAB_02b63958;
                    uVar11 = (ulong)*(ushort *)((long)local_60 + (8 - (long)puVar13));
                    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
                    if (uVar11 == 0) goto LAB_02b63958;
                    piVar17 = (int *)(lVar12 + 4);
                    while (piVar17[-1] != 0x6efc082c) {
                      piVar17 = piVar17 + 2;
                      uVar11 = uVar11 - 1;
                      if (uVar11 == 0) goto LAB_02b63958;
                    }
                    iVar14 = 0;
                    if (*piVar17 != -1) {
                      iVar14 = *piVar17;
                    }
                    *(int *)(puVar7 + 4) = iVar14;
                    uVar9 = *local_60;
                    if (uVar9 == 0) goto LAB_02b63958;
                  } while( true );
                }
                if (uVar4 == 1) {
                  local_68[0] = 0;
                  uVar11 = FUN_02b677c0(local_68,local_4c);
                  uVar9 = local_68[0];
                  if ((uVar11 & 1) == 0) {
                    uVar9 = 0;
                  }
                  uVar10 = FUN_02b5afe0(uVar9);
                  puVar8 = PTR_DAT_04bb5bd0;
                  puVar7 = PTR_DAT_04bb5bc8;
                  lVar12 = *(long *)puVar6;
                  fVar19 = 0.0;
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x5f0);
                  if (((*(uint *)(lVar12 + 0x5d0) <= uVar10) ||
                      (puVar13 = *(uint **)(*(long *)(lVar12 + 0x5d8) + (long)(int)uVar10 * 8),
                      puVar13 == (uint *)0x0)) || (uVar10 = *puVar13, uVar10 == 0)) {
LAB_02b63998:
                    fVar18 = (float)FUN_02b57b70(uVar9,0);
                    return fVar18 + fVar19 / 10.0;
                  }
                  cVar16 = *PTR_DAT_04bb5bc8;
                  do {
                    if (cVar16 == '\0') {
                      cVar16 = '\x01';
                      *(undefined8 *)puVar8 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                      *puVar7 = 1;
                      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
                      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                      uVar10 = *puVar13;
                    }
                    else {
                      uVar3 = *(uint *)(puVar8 + 0xc);
                      if (-1 < (int)uVar3) {
                        if ((float *)((ulong)uVar3 + (long)puVar13) != (float *)0x0) {
                          fVar19 = *(float *)((ulong)uVar3 + (long)puVar13);
                        }
                        goto LAB_02b63998;
                      }
                      if (uVar3 != 0xffffffff) goto LAB_02b63998;
                    }
                    puVar15 = (uint *)(ulong)uVar10;
                    if ((puVar15 == (uint *)0x0) || (puVar13 == puVar15)) goto LAB_02b63998;
                    lVar12 = 0xc;
                    if (*(char *)((long)puVar13 + (10 - (long)puVar15)) != '\0') {
                      lVar12 = 0x1c;
                    }
                    lVar12 = (long)puVar13 + (lVar12 - (long)puVar15);
                    if (lVar12 == 0) goto LAB_02b63998;
                    uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar15));
                    *(undefined4 *)(puVar8 + 0xc) = 0xfffffffe;
                    if (uVar11 == 0) goto LAB_02b63998;
                    piVar17 = (int *)(lVar12 + 4);
                    while (piVar17[-1] != 0x6efc082c) {
                      piVar17 = piVar17 + 2;
                      uVar11 = uVar11 - 1;
                      if (uVar11 == 0) goto LAB_02b63998;
                    }
                    iVar14 = 0;
                    if (*piVar17 != -1) {
                      iVar14 = *piVar17;
                    }
                    *(int *)(puVar8 + 0xc) = iVar14;
                    uVar10 = *puVar13;
                    if (uVar10 == 0) goto LAB_02b63998;
                  } while( true );
                }
                if (uVar4 != 0) {
                  return fVar19;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = FUN_02b58c80(local_4c,local_50 & 1);
  lVar12 = *(long *)puVar6;
  fVar18 = 0.0;
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x9f0);
  if ((*(uint *)(lVar12 + 0x9d0) <= uVar9) ||
     (puVar13 = *(uint **)(*(long *)(lVar12 + 0x9d8) + (long)(int)uVar9 * 8), puVar13 == (uint *)0x0
     )) goto LAB_02b6368c;
  uVar9 = *puVar13;
  if (uVar9 == 0 || puVar13 == (uint *)(ulong)uVar9) {
LAB_02b6366c:
    uVar9 = 0;
  }
  else {
    puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
    if (((*puVar15 == 0) || (uVar9 = puVar15[1], uVar9 == 0)) || ((ulong)(ushort)puVar15[2] == 0))
    goto LAB_02b6366c;
    lVar12 = 0xc;
    if (*(char *)((long)puVar15 + 10) != '\0') {
      lVar12 = 0x1c;
    }
    lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
    if (lVar12 == 0) goto LAB_02b6366c;
    uVar10 = 0;
    if ((ulong)uVar9 != 0) {
      uVar10 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar9);
    }
    if (*puVar15 <= uVar10) {
      uVar10 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc46d0 <= uVar10) ||
       (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46d0 + 8) + (long)(int)uVar10 * 2),
       uVar9 = (uint)uVar4, 2 < uVar4)) goto LAB_02b6366c;
  }
  if (uVar9 < 3) {
    fVar18 = *(float *)(&DAT_0417fb9c + (long)(int)uVar9 * 4);
  }
LAB_02b6368c:
  return fVar19 + fVar18;
}

