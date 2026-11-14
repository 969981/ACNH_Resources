
void FUN_0176d870(long param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  int *piVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  char *__src;
  undefined4 uVar17;
  long lVar18;
  int iVar19;
  undefined8 uVar20;
  char *pcVar21;
  void *__dest;
  void *__src_00;
  float fVar22;
  short local_68 [2];
  uint local_64;
  
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x170));
  fVar22 = fVar22 * 8.381903e-08;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (45.0 <= fVar22) {
    bVar4 = false;
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar22)) {
      bVar4 = fVar22 < 315.0;
      bVar5 = fVar22 == 315.0;
      bVar6 = false;
    }
  }
  if (bVar5 || bVar4 != bVar6) {
    bVar4 = false;
    if ((45.0 <= fVar22) && (bVar4 = false, !NAN(fVar22))) {
      bVar4 = fVar22 < 135.0;
    }
    if (!bVar4) {
      uVar7 = (uint)(fVar22 < 135.0);
      if (225.0 <= fVar22) {
        uVar7 = 1;
      }
      cVar1 = *(char *)(param_1 + 0x6e8);
      goto joined_r0x0176d914;
    }
    uVar7 = 3;
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 2;
    cVar1 = *(char *)(param_1 + 0x6e8);
joined_r0x0176d914:
    if (cVar1 != '\0') {
      uVar7 = *(uint *)(&DAT_04130c24 + (ulong)uVar7 * 4);
    }
  }
  if ((*(char *)(DAT_05292338 + 0xe9e) == '\0') || (*(uint *)(DAT_05292338 + 0xea0) != uVar7)) {
    lVar18 = DAT_05292338 + 0xe78;
  }
  else {
    lVar18 = DAT_05292338 + 0xe9c;
  }
  local_64 = uVar7;
  FUN_007ef010(local_68,lVar18);
  if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
    piVar12 = (int *)(DAT_05292338 + 0xf90);
  }
  else {
    piVar12 = (int *)(DAT_05292338 + 0xf90);
    if (*(uint *)(DAT_05292338 + 0xea0) == uVar7) {
      piVar12 = (int *)(DAT_05292338 + 0xf9c);
    }
  }
  sVar3 = *(short *)PTR_DAT_04bb3170;
  if (local_68[0] != sVar3) {
    *(short *)(param_1 + 0x770) = sVar3;
    *(short *)(param_1 + 0x7a0) = sVar3;
    *(long *)(param_1 + 0x760) = param_1 + 0x770;
    *(undefined1 *)(param_1 + 0x72d) = 1;
    *(undefined4 *)(param_1 + 0x730) = 0;
    *(long *)(param_1 + 0x768) = param_1 + 0x7a0;
    *(undefined8 *)(param_1 + 2000) = 0;
    *(short *)(param_1 + 0x758) = local_68[0];
    *(short *)(param_1 + 0x75a) = local_68[0];
    *(undefined2 *)(param_1 + 0x7d8) = 1;
    local_64 = uVar7;
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
    lVar18 = *(long *)(param_1 + 0x2b0);
    (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
    if (lVar18 == DAT_0528cdd8) {
LAB_0176db20:
      local_64 = (uint)local_64._1_3_ << 8;
      uVar16 = *(undefined8 *)(param_1 + 0x348);
      uVar17 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      uVar20 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar18) == '\0') goto LAB_0176dcfc;
        lVar9 = *(long *)(param_1 + 0x348) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_0176dcfc;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_0176dcfc;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_0176dcfc:
      FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
      local_64 = local_64 & 0xffffff00;
      uVar16 = *(undefined8 *)(param_1 + 0x3e0);
      uVar17 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      uVar20 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar18) == '\0') goto LAB_0176de3c;
        lVar9 = *(long *)(param_1 + 0x3e0) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') goto LAB_0176de30;
        if (*(char *)(lVar9 + 2) == '\0') goto LAB_0176de38;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
LAB_0176de28:
      lVar18 = 0;
      goto LAB_0176de3c;
    }
    uVar14 = 0;
    bVar4 = true;
    do {
      cVar1 = *(char *)(*(long *)(param_1 + 0x2b0) + uVar14);
      if (cVar1 != *(char *)(DAT_0528cdd8 + uVar14)) break;
      if (cVar1 == '\0') {
        if (bVar4) goto LAB_0176db20;
        break;
      }
      bVar4 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      local_64 = (uint)local_64._1_3_ << 8;
      uVar16 = *(undefined8 *)(param_1 + 0x348);
      uVar17 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      uVar20 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar18) == '\0') goto LAB_0176dd98;
        lVar9 = *(long *)(param_1 + 0x348) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_0176dd98;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_0176dd98;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_0176dd98:
      FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
      local_64 = local_64 & 0xffffff00;
      uVar16 = *(undefined8 *)(param_1 + 0x3e0);
      uVar17 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      uVar20 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar18) == '\0') goto LAB_0176de3c;
        lVar9 = *(long *)(param_1 + 0x3e0) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') goto LAB_0176de30;
        if (*(char *)(lVar9 + 2) == '\0') goto LAB_0176de38;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      goto LAB_0176de28;
    }
    goto LAB_0176de64;
  }
  local_64 = uVar7;
  if (*piVar12 != -1) {
    *(undefined1 *)(param_1 + 0x99a) = 1;
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
    (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(param_1 + 0x2a8);
    lVar18 = *(long *)(param_1 + 0x2b0);
    (**(code **)(DAT_0528cdd0 + 0x18))(&DAT_0528cdd0);
    if (lVar18 == DAT_0528cdd8) {
LAB_0176dc08:
      local_64 = (uint)local_64._1_3_ << 8;
      uVar16 = *(undefined8 *)(param_1 + 0x348);
      uVar17 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      uVar20 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar18) == '\0') goto LAB_0176dea8;
        lVar9 = *(long *)(param_1 + 0x348) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_0176dea8;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_0176dea8;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_0176dea8:
      FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
      local_64 = local_64 & 0xffffff00;
      uVar16 = *(undefined8 *)(param_1 + 0x3e0);
      uVar17 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      uVar20 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar18) == '\0') goto LAB_0176dfec;
        lVar9 = *(long *)(param_1 + 0x3e0) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') goto LAB_0176dfe0;
        if (*(char *)(lVar9 + 2) == '\0') goto LAB_0176dfe8;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
LAB_0176dfd8:
      lVar18 = 0;
      goto LAB_0176dfec;
    }
    uVar14 = 0;
    bVar4 = true;
    do {
      cVar1 = *(char *)(*(long *)(param_1 + 0x2b0) + uVar14);
      if (cVar1 != *(char *)(DAT_0528cdd8 + uVar14)) break;
      if (cVar1 == '\0') {
        if (bVar4) goto LAB_0176dc08;
        break;
      }
      bVar4 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    if (*(char *)(param_1 + 0x6e8) != '\0') {
      local_64 = (uint)local_64._1_3_ << 8;
      uVar16 = *(undefined8 *)(param_1 + 0x348);
      uVar17 = *(undefined4 *)(param_1 + 0x350);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      uVar20 = *(undefined8 *)(param_1 + 0x348);
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x348) + lVar18) == '\0') goto LAB_0176df48;
        lVar9 = *(long *)(param_1 + 0x348) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_0176df48;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_0176df48;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_0176df48:
      FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
      local_64 = local_64 & 0xffffff00;
      uVar16 = *(undefined8 *)(param_1 + 0x3e0);
      uVar17 = *(undefined4 *)(param_1 + 1000);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      uVar20 = *(undefined8 *)(param_1 + 0x3e0);
      (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
      lVar18 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar18) == '\0') goto LAB_0176dfec;
        lVar9 = *(long *)(param_1 + 0x3e0) + lVar18;
        if (*(char *)(lVar9 + 1) == '\0') goto LAB_0176dfe0;
        if (*(char *)(lVar9 + 2) == '\0') goto LAB_0176dfe8;
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      goto LAB_0176dfd8;
    }
    goto LAB_0176e014;
  }
  goto LAB_0176e05c;
LAB_0176de30:
  lVar18 = lVar18 + 1;
  goto LAB_0176de3c;
LAB_0176de38:
  lVar18 = lVar18 + 2;
LAB_0176de3c:
  FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
LAB_0176de64:
  bVar4 = false;
  if (DAT_05292338 != 0) {
    if (*(char *)(DAT_05292338 + 0xe9e) == '\0') goto LAB_0176e050;
    bVar2 = *(byte *)(DAT_05292338 + 0xedc);
    if (*(uint *)(DAT_05292338 + 0xea0) == uVar7) {
      bVar4 = (char)bVar2 < '\0';
      local_64 = uVar7;
      goto LAB_0176e058;
    }
    goto LAB_0176e054;
  }
  goto LAB_0176e058;
LAB_0176dfe0:
  lVar18 = lVar18 + 1;
  goto LAB_0176dfec;
  while( true ) {
    pcVar21 = DAT_0528cde8;
    lVar15 = lVar11;
    while( true ) {
      lVar15 = lVar15 + -1;
      if (*(char *)(lVar9 + uVar14) != *pcVar21) break;
      if (*(char *)(lVar9 + uVar14) == '\0') goto LAB_0176e31c;
      lVar9 = lVar9 + 1;
      pcVar21 = pcVar21 + 1;
      if (lVar15 == 0) goto LAB_0176e31c;
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == (iVar19 - iVar8) + 1) break;
LAB_0176e2a0:
    lVar9 = *(long *)(param_1 + 0x2b0);
    (**(code **)(DAT_0528cde0 + 0x18))(&DAT_0528cde0);
    if ((char *)(lVar9 + uVar14) == DAT_0528cde8) {
LAB_0176e31c:
      if ((int)uVar14 != -1) {
        return;
      }
      break;
    }
  }
  goto LAB_0176e324;
LAB_0176dfe8:
  lVar18 = lVar18 + 2;
LAB_0176dfec:
  FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528c7e0,&DAT_0528c7f0,&local_64);
LAB_0176e014:
  bVar4 = false;
  if (DAT_05292338 != 0) {
    if (*(char *)(DAT_05292338 + 0xe9e) == '\0') {
LAB_0176e050:
      bVar2 = *(byte *)(DAT_05292338 + 0xedc);
LAB_0176e054:
      bVar4 = (bool)(bVar2 >> 4 & 1);
      local_64 = uVar7;
    }
    else {
      bVar4 = (bool)(*(byte *)(DAT_05292338 + 0xedc) >> 4 & 1);
      if (*(uint *)(DAT_05292338 + 0xea0) == uVar7) {
        bVar4 = (char)*(byte *)(DAT_05292338 + 0xedc) < '\0';
      }
      local_64 = uVar7;
    }
  }
LAB_0176e058:
  *(bool *)(param_1 + 0xad8) = bVar4;
LAB_0176e05c:
  __src = *(char **)(param_1 + 0xbe8);
  if ((*__src != '\0') &&
     ((*(char *)(param_1 + 0x72d) == '\0' || (*(char *)(param_1 + 0x99a) == '\0')))) {
    lVar18 = 0;
    do {
      if (__src[lVar18] == '\0') goto LAB_0176e0bc;
      if (__src[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0176e0bc;
      }
      if (__src[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0176e0bc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0176e0bc:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    lVar9 = 0;
    do {
      iVar19 = (int)lVar18;
      if (DAT_0528d028[lVar9] == '\0') {
LAB_0176e114:
        iVar8 = (int)lVar9;
        if (iVar19 < iVar8) {
          return;
        }
LAB_0176e12c:
        if (0 < (int)lVar9) {
          uVar14 = 0;
          pcVar21 = __src;
          while ((**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020), __src + uVar14 != DAT_0528d028)
          {
            pcVar10 = DAT_0528d028;
            pcVar13 = pcVar21;
            lVar18 = lVar9;
            while( true ) {
              lVar18 = lVar18 + -1;
              if (*pcVar13 != *pcVar10) break;
              if (*pcVar13 == '\0') goto LAB_0176e1bc;
              pcVar10 = pcVar10 + 1;
              pcVar13 = pcVar13 + 1;
              if (lVar18 == 0) goto LAB_0176e1bc;
            }
            uVar14 = uVar14 + 1;
            pcVar21 = pcVar21 + 1;
            if (uVar14 == (iVar19 - iVar8) + 1) {
              return;
            }
          }
LAB_0176e1bc:
          if ((int)uVar14 == -1) {
            return;
          }
          goto LAB_0176e1c4;
        }
        goto LAB_0176e1a8;
      }
      if (DAT_0528d028[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0176e114;
      }
      if (DAT_0528d028[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        iVar8 = (int)lVar9;
        if (iVar19 < iVar8) {
          return;
        }
        goto LAB_0176e12c;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (-1 < iVar19) {
LAB_0176e1a8:
      (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
LAB_0176e1c4:
      lVar18 = param_1 + 0x2a8;
      (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar18);
      lVar9 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar9) == '\0') goto LAB_0176e21c;
        lVar11 = *(long *)(param_1 + 0x2b0) + lVar9;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_0176e21c;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_0176e21c;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_0176e21c:
      (**(code **)(DAT_0528cde0 + 0x18))(&DAT_0528cde0);
      lVar11 = 0;
      do {
        iVar19 = (int)lVar9;
        if (DAT_0528cde8[lVar11] == '\0') {
LAB_0176e274:
          iVar8 = (int)lVar11;
          if (iVar19 < iVar8) goto LAB_0176e324;
LAB_0176e28c:
          if ((int)lVar11 < 1) goto LAB_0176e308;
          uVar14 = 0;
          goto LAB_0176e2a0;
        }
        if (DAT_0528cde8[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0176e274;
        }
        if (DAT_0528cde8[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          iVar8 = (int)lVar11;
          if (iVar8 <= iVar19) goto LAB_0176e28c;
          goto LAB_0176e324;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      if (iVar19 < 0) {
LAB_0176e324:
        pcVar21 = *(char **)(param_1 + 0x348);
        if (pcVar21 != __src) {
          lVar9 = 0;
          do {
            if (__src[lVar9] == '\0') goto LAB_0176e370;
            if (__src[lVar9 + 1] == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_0176e370;
            }
            if (__src[lVar9 + 2] == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_0176e370;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0176e370:
          iVar19 = (int)lVar9;
          if (*(int *)(param_1 + 0x350) <= (int)lVar9) {
            iVar19 = *(int *)(param_1 + 0x350) + -1;
          }
          memcpy(pcVar21,__src,(long)iVar19);
          pcVar21[iVar19] = '\0';
        }
        __dest = *(void **)(param_1 + 0x3e0);
        (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar18);
        __src_00 = *(void **)(param_1 + 0x2b0);
        if (__dest != __src_00) {
          (**(code **)(*(long *)(param_1 + 0x2a8) + 0x18))(lVar18);
          lVar18 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x2b0) + lVar18) == '\0') goto LAB_0176e41c;
            lVar9 = *(long *)(param_1 + 0x2b0) + lVar18;
            if (*(char *)(lVar9 + 1) == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_0176e41c;
            }
            if (*(char *)(lVar9 + 2) == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_0176e41c;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_0176e41c:
          iVar19 = (int)lVar18;
          if (*(int *)(param_1 + 1000) <= (int)lVar18) {
            iVar19 = *(int *)(param_1 + 1000) + -1;
          }
          memcpy(__dest,__src_00,(long)iVar19);
          *(undefined1 *)((long)__dest + (long)iVar19) = 0;
        }
        local_64 = local_64 & 0xffffff00;
        uVar16 = *(undefined8 *)(param_1 + 0x3e0);
        uVar17 = *(undefined4 *)(param_1 + 1000);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
        uVar20 = *(undefined8 *)(param_1 + 0x3e0);
        (**(code **)(*(long *)(param_1 + 0x3d8) + 0x18))(param_1 + 0x3d8);
        lVar18 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x3e0) + lVar18) == '\0') goto LAB_0176e4bc;
          lVar9 = *(long *)(param_1 + 0x3e0) + lVar18;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_0176e4bc;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_0176e4bc;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_0176e4bc:
        FUN_038d0770(uVar16,0,uVar17,uVar20,lVar18,&DAT_0528ccc0,param_1 + 0x340,&local_64);
        *(undefined1 *)(param_1 + 0x72c) = 1;
      }
      else {
LAB_0176e308:
        (**(code **)(DAT_0528cde0 + 0x18))(&DAT_0528cde0);
      }
    }
  }
  return;
}

