
char * FUN_02826ca0(long param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  bool bVar9;
  ulong uVar10;
  char *pcVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  char cVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  
  puVar1 = (uint *)(param_1 + 0x46f70);
  pcVar2 = (char *)(param_1 + 0x110);
  puVar13 = puVar1;
  uVar21 = 0;
LAB_02826ce0:
  pcVar11 = pcVar2 + (ulong)*puVar13 * 0x3c8;
  if (299 < *puVar13) {
    pcVar11 = pcVar2;
  }
  if (*pcVar11 != '\0') goto code_r0x02826cf8;
  uVar10 = -uVar21;
  if (((uint)uVar10 & 0xffff) < 300) {
    uVar22 = *puVar13;
    if (uVar21 != 0) {
      uVar21 = ~uVar21;
      puVar16 = (uint *)(param_1 + (uVar21 & 0xffffffff) * 4 + 0x46f70);
      do {
        uVar18 = (uint)uVar21;
        uVar12 = uVar18 - 1;
        uVar21 = (ulong)uVar12;
        puVar3 = puVar16;
        if (299 < uVar18) {
          puVar3 = puVar1;
        }
        bVar9 = 299 < uVar10;
        uVar10 = uVar10 - 1;
        puVar16 = puVar16 + -1;
        puVar4 = puVar13;
        if (bVar9) {
          puVar4 = puVar1;
        }
        *puVar4 = *puVar3;
        puVar13 = puVar13 + -1;
      } while (uVar12 != 0xffffffff);
    }
    *puVar1 = uVar22;
    pcVar11 = pcVar2 + (ulong)uVar22 * 0x3c8;
    if (299 < uVar22) {
      pcVar11 = pcVar2;
    }
    goto LAB_02826fe4;
  }
  goto LAB_02826d80;
code_r0x02826cf8:
  puVar13 = puVar13 + 1;
  bVar9 = uVar21 == 0xfffffffffffffed5;
  uVar21 = uVar21 - 1;
  if (bVar9) goto LAB_02826d80;
  goto LAB_02826ce0;
LAB_02826d80:
  lVar23 = 0;
  uVar21 = 0;
  uVar22 = 0;
  do {
    uVar12 = *(uint *)(param_1 + 0x4741c + lVar23 * 4);
    pcVar11 = pcVar2 + (ulong)uVar12 * 0x3c8;
    if (299 < uVar12) {
      pcVar11 = pcVar2;
    }
    if (pcVar11[1] == '\0') {
      if (pcVar11[200] == '\0' || *(short *)(pcVar11 + 0xc0) == -2) {
        if (pcVar11[0xcc] != '\0') {
          if (*(short *)(pcVar11 + 0xc0) == -2) {
            cVar15 = pcVar11[0x5c];
            if (*pcVar11 == '\x04') {
              uVar12 = 6;
              if (cVar15 != '\0') {
                uVar12 = 7;
              }
              goto LAB_02826e50;
            }
            uVar12 = 4;
            if (cVar15 != '\0') {
              uVar12 = 5;
            }
          }
          else {
            cVar15 = pcVar11[0x5c];
            uVar12 = 3;
          }
          if (((!(*pcVar11 != '\x04' && cVar15 == '\0')) ||
              (uVar10 = FUN_027aeb20(pcVar11), (uVar10 & 1) != 0)) ||
             (*(long *)(pcVar11 + 0x378) != 0)) goto LAB_02826e50;
        }
        uVar12 = 2;
      }
      else {
        uVar12 = 1;
      }
    }
    else {
      uVar12 = 0;
    }
LAB_02826e50:
    uVar18 = (int)lVar23 + 299;
    uVar8 = uVar12;
    if (uVar12 <= uVar22) {
      uVar18 = (uint)uVar21;
      uVar8 = uVar22;
    }
    uVar22 = uVar8;
    uVar21 = (ulong)uVar18;
  } while ((lVar23 != -299) && (lVar23 = lVar23 + -1, uVar12 != 7));
  if (param_2[1] == '\0') {
    if ((param_2[200] == '\0') || (*(short *)(param_2 + 0xc0) == -2)) {
      if (param_2[0xcc] == '\0') {
        uVar12 = 2;
      }
      else {
        if (*(short *)(param_2 + 0xc0) == -2) {
          cVar15 = param_2[0x5c];
          if (*param_2 == '\x04') {
            uVar12 = 6;
            if (cVar15 != '\0') {
              uVar12 = 7;
            }
            goto LAB_02826f54;
          }
          uVar12 = 4;
          if (cVar15 != '\0') {
            uVar12 = 5;
          }
        }
        else {
          cVar15 = param_2[0x5c];
          uVar12 = 3;
        }
        if ((((*param_2 != '\x04') && (cVar15 == '\0')) &&
            (uVar10 = FUN_027aeb20(param_2), (uVar10 & 1) == 0)) &&
           (*(long *)(param_2 + 0x378) == 0)) {
          uVar12 = 2;
        }
      }
    }
    else {
      uVar12 = 1;
    }
  }
  else {
    uVar12 = 0;
  }
LAB_02826f54:
  if (uVar22 < uVar12) {
    pcVar11 = (char *)0x0;
  }
  else {
    if (uVar18 < 300) {
      uVar22 = puVar1[uVar18];
      if (uVar18 != 0) {
        uVar18 = uVar18 - 1;
        puVar16 = (uint *)(param_1 + 0x46f70 + uVar21 * 4);
        puVar13 = (uint *)(param_1 + 0x46f70 + (ulong)uVar18 * 4);
        do {
          bVar9 = 299 < uVar18;
          uVar18 = uVar18 - 1;
          puVar3 = puVar13;
          if (bVar9) {
            puVar3 = puVar1;
          }
          bVar9 = 299 < uVar21;
          uVar21 = uVar21 - 1;
          puVar13 = puVar13 + -1;
          puVar4 = puVar16;
          if (bVar9) {
            puVar4 = puVar1;
          }
          *puVar4 = *puVar3;
          puVar16 = puVar16 + -1;
        } while (uVar18 != 0xffffffff);
      }
      *puVar1 = uVar22;
    }
    else {
      uVar22 = *puVar1;
    }
    pcVar11 = pcVar2 + (ulong)uVar22 * 0x3c8;
    if (299 < uVar22) {
      pcVar11 = pcVar2;
    }
LAB_02826fe4:
    FUN_027adf94(pcVar11,param_2);
    pcVar11[0xcc] = param_2[0xcc];
    uVar20 = *(undefined8 *)(param_2 + 0xe6);
    uVar14 = *(undefined8 *)(param_2 + 0xd6);
    uVar5 = *(undefined8 *)(param_2 + 0xde);
    *(undefined8 *)(pcVar11 + 0xce) = *(undefined8 *)(param_2 + 0xce);
    uVar17 = *(undefined8 *)(param_2 + 0x10e);
    uVar19 = *(undefined8 *)(param_2 + 0x116);
    uVar6 = *(undefined8 *)(param_2 + 0x126);
    *(undefined8 *)(pcVar11 + 0x11e) = *(undefined8 *)(param_2 + 0x11e);
    *(undefined8 *)(pcVar11 + 0x126) = uVar6;
    *(undefined8 *)(pcVar11 + 0x10e) = uVar17;
    *(undefined8 *)(pcVar11 + 0x116) = uVar19;
    uVar17 = *(undefined8 *)(param_2 + 0xee);
    uVar6 = *(undefined8 *)(param_2 + 0xf6);
    uVar19 = *(undefined8 *)(param_2 + 0xfe);
    uVar7 = *(undefined8 *)(param_2 + 0x106);
    *(undefined8 *)(pcVar11 + 0xd6) = uVar14;
    *(undefined8 *)(pcVar11 + 0xde) = uVar5;
    *(undefined8 *)(pcVar11 + 0xe6) = uVar20;
    *(undefined8 *)(pcVar11 + 0xfe) = uVar19;
    *(undefined8 *)(pcVar11 + 0x106) = uVar7;
    *(undefined8 *)(pcVar11 + 0xee) = uVar17;
    *(undefined8 *)(pcVar11 + 0xf6) = uVar6;
    memcpy(pcVar11 + 0x12e,param_2 + 0x12e,0x1e0);
    uVar14 = *(undefined8 *)(param_2 + 0x316);
    uVar17 = *(undefined8 *)(param_2 + 0x31e);
    uVar19 = *(undefined8 *)(param_2 + 0x326);
    *(undefined8 *)(pcVar11 + 0x30e) = *(undefined8 *)(param_2 + 0x30e);
    *(undefined8 *)(pcVar11 + 0x326) = uVar19;
    *(undefined8 *)(pcVar11 + 0x31e) = uVar17;
    *(undefined8 *)(pcVar11 + 0x316) = uVar14;
    uVar14 = *(undefined8 *)(param_2 + 0x336);
    uVar17 = *(undefined8 *)(param_2 + 0x33e);
    uVar19 = *(undefined8 *)(param_2 + 0x346);
    *(undefined8 *)(pcVar11 + 0x32e) = *(undefined8 *)(param_2 + 0x32e);
    *(undefined8 *)(pcVar11 + 0x346) = uVar19;
    *(undefined8 *)(pcVar11 + 0x33e) = uVar17;
    *(undefined8 *)(pcVar11 + 0x336) = uVar14;
    uVar14 = *(undefined8 *)(param_2 + 0x356);
    uVar17 = *(undefined8 *)(param_2 + 0x35e);
    uVar19 = *(undefined8 *)(param_2 + 0x366);
    *(undefined8 *)(pcVar11 + 0x34e) = *(undefined8 *)(param_2 + 0x34e);
    *(undefined8 *)(pcVar11 + 0x366) = uVar19;
    *(undefined8 *)(pcVar11 + 0x35e) = uVar17;
    *(undefined8 *)(pcVar11 + 0x356) = uVar14;
    *(undefined2 *)(pcVar11 + 0x36e) = *(undefined2 *)(param_2 + 0x36e);
    *(undefined2 *)(pcVar11 + 0x370) = *(undefined2 *)(param_2 + 0x370);
    *(undefined4 *)(pcVar11 + 0x374) = *(undefined4 *)(param_2 + 0x374);
    *(undefined8 *)(pcVar11 + 0x378) = *(undefined8 *)(param_2 + 0x378);
    *(undefined8 *)(pcVar11 + 0x380) = *(undefined8 *)(param_2 + 0x380);
    *(undefined8 *)(pcVar11 + 0x388) = *(undefined8 *)(param_2 + 0x388);
    *(undefined8 *)(pcVar11 + 0x390) = *(undefined8 *)(param_2 + 0x390);
    *(undefined8 *)(pcVar11 + 0x398) = *(undefined8 *)(param_2 + 0x398);
    uVar14 = *(undefined8 *)(param_2 + 0x3a0);
    uVar17 = *(undefined8 *)(param_2 + 0x3a8);
    *(undefined4 *)(pcVar11 + 0x3b0) = *(undefined4 *)(param_2 + 0x3b0);
    *(undefined8 *)(pcVar11 + 0x3a0) = uVar14;
    *(undefined8 *)(pcVar11 + 0x3a8) = uVar17;
    pcVar11 = pcVar2 + (ulong)*puVar1 * 0x3c8;
    if (299 < *puVar1) {
      pcVar11 = pcVar2;
    }
    FUN_02827184(param_1,pcVar11);
    pcVar11 = pcVar2 + (ulong)*puVar1 * 0x3c8;
    if (299 < *puVar1) {
      pcVar11 = pcVar2;
    }
  }
  return pcVar11;
}

