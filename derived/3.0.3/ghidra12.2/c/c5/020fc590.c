
void FUN_020fc590(undefined8 *param_1,code *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  char *pcVar12;
  int iVar13;
  char cVar14;
  uint *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined *local_78;
  long lStack_70;
  uint local_68;
  uint local_64;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[2] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar4 = PTR_DAT_04bb4138;
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_04bb40b8;
  puVar1 = PTR_DAT_04bb40b0;
  lVar16 = *(long *)puVar4;
  if ((lVar16 != 0) &&
     ((uVar18 = *(uint *)(lVar16 + 0x1c0), uVar17 = uVar18, 0 < (int)uVar18 ||
      (((*(long *)(lVar16 + 0xb0) != 0 &&
        (puVar15 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
       (uVar17 = *puVar15, uVar17 != 0)))))) {
    if (param_2 != (code *)0x0) {
      uVar18 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcVar12 = PTR_DAT_04bb40b0;
LAB_020fc83c:
      if ((int)*(uint *)(lVar16 + 0x1c0) < 1) {
        if (((((*(long *)(lVar16 + 0xb0) != 0) &&
              (puVar15 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
             ((*(uint *)(lVar16 + 200) <= uVar18 ||
              (*(char *)(*(long *)(lVar16 + 0xd0) + (long)(int)uVar18) != '\0')))) &&
            ((uVar18 < *puVar15 && (puVar15[1] != 0)))) && ((ushort)puVar15[2] != 0)) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar15 = (uint *)((ulong)(puVar15[1] * uVar18 + (uint)(ushort)puVar15[2] * 8 + iVar13) +
                            (long)puVar15);
          goto joined_r0x020fc9a0;
        }
      }
      else if (uVar18 < *(uint *)(lVar16 + 0x1c0)) {
        uVar8 = uVar18;
        if (*(uint *)(lVar16 + 0x1b0) <= uVar18) {
          uVar8 = 0;
        }
        puVar15 = *(uint **)(*(long *)(lVar16 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x020fc9a0:
        if ((puVar15 != (uint *)0x0) && (*puVar15 != 0)) {
          cVar14 = *pcVar12;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *pcVar12 = '\x01';
              *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar8 = *(uint *)(puVar5 + 0x78);
              if (-1 < (int)uVar8) {
                if ((((char *)((ulong)uVar8 + (long)puVar15) != (char *)0x0) &&
                    (*(char *)((ulong)uVar8 + (long)puVar15) != '\0')) &&
                   (uVar9 = (*param_2)(puVar15), puVar6 = PTR_PTR_04bc1178,
                   puVar4 = PTR_DAT_04bb40b0, pcVar12 = PTR_DAT_04bb40b0, (uVar9 & 1) != 0)) {
                  local_64 = 0;
                  if (*puVar15 == 0) goto LAB_020fcab8;
                  cVar14 = *PTR_DAT_04bb40b0;
                  goto LAB_020fc9fc;
                }
                break;
              }
              if (uVar8 != 0xffffffff) break;
            }
            lVar10 = (long)puVar15 - (ulong)*puVar15;
            if ((*puVar15 == 0) || (lVar10 == 0)) break;
            lVar3 = 0xc;
            if (*(char *)(lVar10 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            if (lVar3 + lVar10 == 0) break;
            uVar9 = (ulong)*(ushort *)(lVar10 + 8);
            *(undefined4 *)(puVar5 + 0x78) = 0xfffffffe;
            if (uVar9 == 0) break;
            piVar7 = (int *)(lVar3 + lVar10 + 4);
            while (piVar7[-1] != 0x454b2adc) {
              piVar7 = piVar7 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_020fc830;
            }
            iVar13 = 0;
            if (*piVar7 != -1) {
              iVar13 = *piVar7;
            }
            *(int *)(puVar5 + 0x78) = iVar13;
            if (*puVar15 == 0) break;
          } while( true );
        }
      }
      goto LAB_020fc830;
    }
    uVar8 = 0;
    cVar14 = *PTR_DAT_04bb40b0;
    do {
      if ((int)uVar18 < 1) {
        if ((((*(long *)(lVar16 + 0xb0) != 0) &&
             (puVar15 = *(uint **)(*(long *)(lVar16 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
            ((*(uint *)(lVar16 + 200) <= uVar8 ||
             (*(char *)(*(long *)(lVar16 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
           (((uVar8 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar15 = (uint *)((ulong)(puVar15[1] * uVar8 + (uint)(ushort)puVar15[2] * 8 + iVar13) +
                            (long)puVar15);
          goto joined_r0x020fc810;
        }
      }
      else if (uVar8 < uVar18) {
        uVar2 = uVar8;
        if (*(uint *)(lVar16 + 0x1b0) <= uVar8) {
          uVar2 = 0;
        }
        puVar15 = *(uint **)(*(long *)(lVar16 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x020fc810:
        if ((puVar15 != (uint *)0x0) && (*puVar15 != 0)) {
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar1 = 1;
              *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
            }
            else if (*(int *)(puVar5 + 0x78) != -1) break;
            lVar10 = (long)puVar15 - (ulong)*puVar15;
            if ((*puVar15 == 0) || (lVar10 == 0)) break;
            lVar3 = 0xc;
            if (*(char *)(lVar10 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            if (lVar3 + lVar10 == 0) break;
            uVar9 = (ulong)*(ushort *)(lVar10 + 8);
            *(undefined4 *)(puVar5 + 0x78) = 0xfffffffe;
            if (uVar9 == 0) break;
            piVar7 = (int *)(lVar3 + lVar10 + 4);
            while (piVar7[-1] != 0x454b2adc) {
              piVar7 = piVar7 + 2;
              uVar9 = uVar9 - 1;
              if (uVar9 == 0) goto LAB_020fc6b0;
            }
            iVar13 = 0;
            if (*piVar7 != -1) {
              iVar13 = *piVar7;
            }
            *(int *)(puVar5 + 0x78) = iVar13;
            if (*puVar15 == 0) break;
          } while( true );
        }
      }
LAB_020fc6b0:
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar17);
  }
  return;
  while( true ) {
    puVar11 = (uint *)(ulong)*puVar15;
    lVar10 = 0;
    if ((*puVar15 == 0) || (puVar15 == puVar11)) goto LAB_020fcabc;
    lVar10 = 0xc;
    if (*(char *)((long)puVar15 + (10 - (long)puVar11)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar3 = (long)puVar15 + (lVar10 - (long)puVar11);
    if (lVar3 == 0) break;
    uVar9 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar11));
    *(undefined4 *)(puVar5 + 0x80) = 0xfffffffe;
    lVar10 = 0;
    if (uVar9 == 0) goto LAB_020fcabc;
    piVar7 = (int *)(lVar3 + 4);
    while (piVar7[-1] != 0x2f1b930d) {
      piVar7 = piVar7 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        lVar10 = 0;
        goto LAB_020fcabc;
      }
    }
    iVar13 = 0;
    if (*piVar7 != -1) {
      iVar13 = *piVar7;
    }
    *(int *)(puVar5 + 0x80) = iVar13;
    if (*puVar15 == 0) break;
LAB_020fc9fc:
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar8 = *(uint *)(puVar5 + 0x80);
      if (-1 < (int)uVar8) {
        lVar10 = (ulong)uVar8 + (long)puVar15;
        goto LAB_020fcabc;
      }
      if (uVar8 != 0xffffffff) break;
    }
  }
LAB_020fcab8:
  lVar10 = 0;
LAB_020fcabc:
  lStack_70 = *(long *)puVar6;
  if (lVar10 != 0) {
    lStack_70 = lVar10;
  }
  local_78 = puVar1;
  uVar9 = FUN_020fc100(&local_64,&local_68,&local_78);
  if (((uVar9 & 1) != 0) && (uVar9 = (ulong)local_64, local_68 < 0x20)) {
    if (0x22 < local_64) {
      uVar9 = 0;
    }
    *(uint *)((long)param_1 + uVar9 * 4) =
         *(uint *)((long)param_1 + uVar9 * 4) | 1 << (ulong)(local_68 & 0x1f);
  }
  pcVar12 = PTR_DAT_04bb40b0;
LAB_020fc830:
  uVar18 = uVar18 + 1;
  if (uVar18 == uVar17) {
    return;
  }
  goto LAB_020fc83c;
}

