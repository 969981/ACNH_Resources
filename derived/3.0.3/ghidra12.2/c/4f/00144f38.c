
/* WARNING: Type propagation algorithm not settling */

int FUN_00144f38(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  double dVar4;
  byte *__nptr;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  long lVar13;
  byte bVar14;
  undefined1 uVar15;
  uint uVar16;
  long lVar17;
  undefined1 uVar18;
  long *plVar19;
  double *pdVar20;
  uint uVar21;
  double dVar22;
  undefined4 uVar23;
  double *pdVar24;
  char *pcVar25;
  uint *puVar26;
  uint uVar27;
  double *pdVar28;
  double *pdVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  char *pcVar33;
  double dVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  char *pcVar37;
  char *pcVar38;
  double dVar39;
  double dVar40;
  long lVar41;
  long lVar42;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  char local_15c0 [324];
  char acStack_147c [4];
  long alStack_1478 [128];
  uint local_1078;
  undefined1 local_1074 [4];
  undefined1 local_1070 [8];
  undefined8 local_1068;
  double adStack_1060 [510];
  byte *local_68;
  
  local_68 = (byte *)0x0;
  memset(&local_1078,0,0x1000);
  memset(alStack_1478,0,0x400);
  memset(local_15c0,0,0x146);
  pdVar20 = (double *)*param_4;
  lVar41 = param_4[1];
  lVar13 = param_4[2];
  uVar30 = *(uint *)(param_4 + 3);
  uVar27 = *(uint *)((long)param_4 + 0x1c);
  bVar14 = *param_3;
  local_15e0 = param_3;
  if (bVar14 != 0) {
    lVar42 = 0;
    iVar8 = 0;
    plVar19 = alStack_1478;
LAB_00144fec:
    pbVar9 = local_15e0 + 1;
    while (bVar14 == 0x25) {
      if (*pbVar9 != 0x25) {
        iVar8 = iVar8 + 1;
        local_15e0 = pbVar9;
        lVar10 = FUN_001463a0(pbVar9,&local_15e0);
        lVar32 = 0;
        lVar17 = (long)iVar8;
        if (lVar10 != 0) {
          lVar17 = lVar10;
        }
        lVar31 = 0;
        uVar16 = 0;
        lVar10 = lVar17;
        if (lVar17 <= lVar42) {
          lVar10 = lVar42;
        }
        lVar42 = lVar10;
        pbVar9 = local_15e0;
        goto switchD_001450ac_caseD_1;
      }
      bVar14 = pbVar9[1];
      pbVar9 = pbVar9 + 2;
      if (bVar14 == 0) goto LAB_0014545c;
    }
    local_15e0 = pbVar9;
    goto LAB_00145454;
  }
  goto LAB_00145630;
switchD_001450ac_caseD_1:
  local_15e0 = pbVar9;
  __nptr = local_15e0;
  bVar14 = *local_15e0;
  uVar21 = bVar14 - 0x20;
  if ((uVar21 < 0x30 && (1L << ((ulong)uVar21 & 0x3f) & 0x900003ff6c09U) != 0) ||
     (uVar3 = bVar14 - 0x68, uVar3 < 0x13 && (1 << (ulong)(uVar3 & 0x1f) & 0x40211U) != 0)) {
    pbVar9 = local_15e0 + 1;
    if (0x4b < bVar14) {
      if (bVar14 < 0x6c) {
        if (bVar14 == 0x4c) {
          uVar16 = uVar16 | 0x80;
          goto switchD_001450ac_caseD_1;
        }
        if (bVar14 != 0x4f) {
          if (bVar14 == 0x68) {
            uVar16 = uVar16 | 0x10;
          }
          goto switchD_001450ac_caseD_1;
        }
      }
      else if (bVar14 == 0x6c) {
        if ((uVar16 >> 5 & 1) != 0) goto LAB_001451b4;
      }
      else {
        if (bVar14 == 0x71) {
LAB_001451b4:
          uVar16 = uVar16 | 0x40;
          goto switchD_001450ac_caseD_1;
        }
        if (bVar14 != 0x7a) goto switchD_001450ac_caseD_1;
      }
      uVar16 = uVar16 | 0x20;
      goto switchD_001450ac_caseD_1;
    }
    switch((ulong)uVar21) {
    case 0:
      uVar16 = uVar16 | 1;
      break;
    case 3:
      uVar16 = uVar16 | 8;
      break;
    case 10:
      uVar16 = uVar16 | 0x4000;
      iVar8 = iVar8 + 1;
      local_15e0 = pbVar9;
      lVar10 = FUN_001463a0(pbVar9,&local_15e0);
      lVar32 = (long)iVar8;
      if (lVar10 != 0) {
        lVar32 = lVar10;
      }
      lVar10 = lVar32;
      if (lVar32 <= lVar42) {
        lVar10 = lVar42;
      }
      lVar42 = lVar10;
      pbVar9 = local_15e0;
      break;
    case 0xb:
      uVar16 = uVar16 | 2;
      break;
    case 0xd:
      uVar16 = uVar16 & 0xfffffeff | 4;
      break;
    case 0xe:
      if (*pbVar9 == 0x2a) {
        local_15e0 = local_15e0 + 2;
        uVar16 = uVar16 | 0x10000;
        iVar8 = iVar8 + 1;
        lVar10 = FUN_001463a0(local_15e0,&local_15e0);
        lVar31 = (long)iVar8;
        if (lVar10 != 0) {
          lVar31 = lVar10;
        }
        lVar10 = lVar31;
        if (lVar31 <= lVar42) {
          lVar10 = lVar42;
        }
        lVar42 = lVar10;
        pbVar9 = local_15e0;
      }
      else {
        uVar16 = uVar16 | 0x8000;
        local_15e0 = pbVar9;
        lVar31 = strtol((char *)pbVar9,(char **)&local_15e0,10);
        pbVar9 = local_15e0;
      }
      break;
    case 0x10:
      uVar16 = (uVar16 << 6 ^ 0xffffffff) & 0x100 | uVar16;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
      uVar16 = uVar16 | 0x2000;
      local_15e0 = pbVar9;
      lVar32 = strtol((char *)__nptr,(char **)&local_15e0,10);
      pbVar9 = local_15e0;
    }
    goto switchD_001450ac_caseD_1;
  }
  if (lVar17 - 0x81U < 0xffffffffffffff80) {
    return -1;
  }
  lVar17 = lVar17 + -1;
  if (bVar14 < 0x58) {
    if (bVar14 == 0x45) {
      *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 7;
      uVar21 = 0x41000;
      goto LAB_001453dc;
    }
    if (bVar14 == 0x47) {
      *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 7;
      uVar16 = uVar16 | 0x81000;
      goto LAB_001453e4;
    }
    if (bVar14 == 0x53) {
      uVar16 = uVar16 | 8;
      goto switchD_00145254_caseD_73;
    }
    goto switchD_00145254_caseD_68;
  }
  switch(bVar14) {
  case 99:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 3;
    uVar16 = uVar16 | 0x20000;
    break;
  case 100:
  case 0x69:
    uVar23 = 3;
    goto LAB_001453a0;
  case 0x65:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 7;
    uVar16 = uVar16 | 0x40000;
    break;
  case 0x66:
    uVar23 = 7;
    goto LAB_001453a0;
  case 0x67:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 7;
    uVar16 = uVar16 | 0x80000;
    break;
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x76:
  case 0x77:
    goto switchD_00145254_caseD_68;
  case 0x6e:
    uVar23 = 4;
    goto LAB_001453a0;
  case 0x6f:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 3;
    uVar16 = uVar16 | 0x400;
    break;
  case 0x70:
    uVar23 = 2;
LAB_001453a0:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = uVar23;
    break;
  case 0x73:
switchD_00145254_caseD_73:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 1;
    break;
  case 0x75:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 3;
    uVar16 = uVar16 | 0x200;
    break;
  case 0x78:
    *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 3;
    uVar21 = 0xa00;
LAB_001453dc:
    uVar16 = uVar16 | uVar21;
    break;
  default:
    if (bVar14 == 0x58) {
      *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 3;
      uVar21 = 0x1a00;
      goto LAB_001453dc;
    }
    goto switchD_00145254_caseD_68;
  }
LAB_001453e4:
  lVar17 = lVar17 * 0x20;
  *(uint *)(local_1074 + lVar17) = uVar16;
  *(long *)(local_1070 + lVar17 + 8) = lVar31;
  *(long *)(local_1070 + lVar17) = lVar32;
  if ((uVar16 >> 0xe & 1) != 0) {
    lVar32 = lVar32 + -1;
    *(long *)(local_1070 + lVar17) = lVar32;
    lVar10 = lVar32 * 0x20;
    *(undefined4 *)(alStack_1478 + lVar32 * 4 + 0x80) = 9;
    *(undefined8 *)(local_1074 + lVar10) = 0;
    *(undefined8 *)(local_1070 + lVar10 + 4) = 0;
    *(undefined4 *)((long)adStack_1060 + lVar10 + -4) = 0;
  }
  if ((uVar16 >> 0x10 & 1) != 0) {
    lVar31 = lVar31 + -1;
    *(long *)(local_1070 + lVar17 + 8) = lVar31;
    lVar17 = lVar31 * 0x20;
    *(undefined4 *)(alStack_1478 + lVar31 * 4 + 0x80) = 9;
    *(undefined8 *)(local_1074 + lVar17) = 0;
    *(undefined8 *)(local_1070 + lVar17 + 4) = 0;
    *(undefined4 *)((long)adStack_1060 + lVar17 + -4) = 0;
  }
  *plVar19 = (long)(local_15e0 + 1);
  plVar19 = plVar19 + 1;
LAB_00145454:
  bVar14 = *local_15e0;
  if (bVar14 == 0) goto LAB_0014545c;
  goto LAB_00144fec;
switchD_00145254_caseD_68:
  *(undefined4 *)(alStack_1478 + lVar17 * 4 + 0x80) = 0;
  goto LAB_001453e4;
LAB_0014545c:
  if (0 < lVar42) {
    pdVar24 = adStack_1060;
    do {
      uVar16 = *(uint *)((long)pdVar24 + -0x14);
      pdVar28 = pdVar20;
      if ((uVar16 >> 0xe & 1) != 0) {
        if ((int)uVar30 < 0) {
          uVar21 = uVar30 + 8;
          if (0xfffffff8 < uVar30) goto LAB_001454ac;
          pdVar20 = (double *)(lVar41 + (int)uVar30);
          uVar30 = uVar21;
        }
        else {
          uVar21 = uVar30;
LAB_001454ac:
          pdVar28 = pdVar20 + 1;
          uVar30 = uVar21;
        }
        adStack_1060[(long)pdVar24[-2] * 4] = (double)(long)(int)*(uint *)pdVar20;
      }
      pdVar29 = pdVar28;
      if ((uVar16 >> 0x10 & 1) != 0) {
        if ((int)uVar30 < 0) {
          uVar21 = uVar30 + 8;
          if (0xfffffff8 < uVar30) goto LAB_001454f0;
          pdVar28 = (double *)(lVar41 + (int)uVar30);
          uVar30 = uVar21;
        }
        else {
          uVar21 = uVar30;
LAB_001454f0:
          pdVar29 = pdVar28 + 1;
          uVar30 = uVar21;
        }
        adStack_1060[(long)pdVar24[-1] * 4] = (double)(long)(int)*(uint *)pdVar28;
      }
      pdVar20 = pdVar29;
      uVar21 = uVar30;
      switch(*(undefined4 *)(pdVar24 + -3)) {
      case 0:
      case 1:
      case 2:
      case 4:
switchD_00145524_caseD_0:
        if (((int)uVar30 < 0) && (uVar21 = uVar30 + 8, uVar30 < 0xfffffff9)) {
          pdVar29 = (double *)(lVar41 + (int)uVar30);
        }
        else {
          pdVar20 = pdVar29 + 1;
        }
        dVar40 = *pdVar29;
        goto LAB_00145554;
      case 3:
        if ((((((uVar16 ^ 0xffffffff) & 0x240) == 0) || ((uVar16 >> 6 & 1) != 0)) ||
            (((uVar16 ^ 0xffffffff) & 0x220) == 0)) || ((uVar16 >> 5 & 1) != 0))
        goto switchD_00145524_caseD_0;
        if ((uVar16 >> 9 & 1) == 0) {
          if (((int)uVar30 < 0) && (uVar21 = uVar30 + 8, uVar30 < 0xfffffff9)) {
            pdVar29 = (double *)(lVar41 + (int)uVar30);
          }
          else {
            pdVar20 = pdVar29 + 1;
          }
          dVar40 = (double)(long)(int)*(uint *)pdVar29;
        }
        else {
          if (((int)uVar30 < 0) && (uVar21 = uVar30 + 8, uVar30 < 0xfffffff9)) {
            pdVar29 = (double *)(lVar41 + (int)uVar30);
          }
          else {
            pdVar20 = pdVar29 + 1;
          }
          dVar40 = (double)(ulong)*(uint *)pdVar29;
        }
LAB_00145554:
        *pdVar24 = dVar40;
        uVar30 = uVar21;
        break;
      case 7:
        if ((int)uVar27 < 0) {
          uVar16 = uVar27 + 0x10;
          if (0xfffffff0 < uVar27) goto LAB_001455c4;
          pdVar29 = (double *)(lVar13 + (int)uVar27);
        }
        else {
          uVar16 = uVar27;
LAB_001455c4:
          pdVar20 = pdVar29 + 1;
        }
        *pdVar24 = *pdVar29;
        uVar27 = uVar16;
        break;
      case 9:
        *(undefined4 *)(pdVar24 + -3) = 3;
      }
      pdVar24 = pdVar24 + 4;
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
  }
LAB_00145630:
  iVar8 = 0;
  lVar41 = 0;
  pcVar33 = "0123456789abcdefghijklmnopqrstuvwxyz";
  plVar19 = alStack_1478;
  local_68 = param_3;
  do {
    while( true ) {
      while (bVar14 = *param_3, bVar14 != 0x25) {
        if (bVar14 == 0) {
          return iVar8;
        }
        do {
          iVar6 = (*param_2)(bVar14,param_1);
          if (iVar6 == -1) {
            return iVar8;
          }
          param_3 = param_3 + 1;
          bVar14 = *param_3;
          iVar8 = iVar8 + 1;
        } while ((bVar14 != 0) && (bVar14 != 0x25));
        local_68 = param_3;
      }
      local_68 = param_3 + 1;
      if (param_3[1] != 0x25) break;
      param_3 = param_3 + 2;
      local_68 = param_3;
      iVar6 = (*param_2)(0x25,param_1);
      if (iVar6 == -1) {
        return iVar8;
      }
      iVar8 = iVar8 + 1;
    }
    lVar42 = FUN_001463a0(local_68,&local_68);
    lVar13 = lVar41;
    if (lVar42 != 0) {
      lVar13 = lVar42 + -1;
    }
    lVar42 = lVar13 * 0x20;
    uVar30 = *(uint *)(local_1074 + lVar42);
    puVar26 = (uint *)((ulong)(alStack_1478 + lVar13 * 4 + 0x80) | 4);
    if ((uVar30 >> 0xe & 1) == 0) {
      dVar39 = *(double *)(local_1070 + lVar42);
      lVar41 = lVar41 + 1;
      dVar40 = dVar39;
    }
    else {
      dVar40 = *(double *)(local_1070 + lVar42);
      lVar41 = lVar41 + 2;
      dVar39 = adStack_1060[(long)dVar40 * 4];
      if ((long)dVar39 < 0) {
        dVar39 = (double)-(long)dVar39;
        uVar30 = uVar30 & 0xfffffeff | 4;
        *puVar26 = uVar30;
      }
    }
    if ((uVar30 >> 0x10 & 1) == 0) {
      if ((uVar30 >> 0xf & 1) == 0) {
        dVar34 = -NAN;
      }
      else {
        dVar34 = *(double *)(local_1070 + lVar42 + 8);
      }
    }
    else {
      lVar41 = lVar41 + 1;
      dVar34 = adStack_1060[*(long *)(local_1070 + lVar42 + 8) * 4];
      if ((long)dVar34 < 0) {
        dVar34 = -NAN;
      }
    }
    iVar6 = SUB84(dVar39,0);
    switch((int)alStack_1478[lVar13 * 4 + 0x80]) {
    case 1:
      pcVar25 = (char *)adStack_1060[lVar13 * 4];
      if (pcVar25 == (char *)0x0) {
        if ((dVar34 == -NAN) || (4 < (long)dVar34)) {
          uVar30 = uVar30 & 0xfffffff7;
          pcVar25 = "(nil)";
          *puVar26 = uVar30;
          dVar34 = 2.47032822920623e-323;
        }
        else {
          dVar34 = 0.0;
          pcVar25 = "";
        }
      }
      else if (dVar34 == -NAN) {
        dVar34 = (double)strlen(pcVar25);
      }
      dVar40 = dVar34;
      if (0x7ffffffffffffffe < (ulong)dVar34) {
        dVar40 = NAN;
      }
      if ((uVar30 >> 3 & 1) != 0) {
        iVar7 = (*param_2)(0x22,param_1);
        if (iVar7 == -1) {
          return iVar8;
        }
        iVar8 = iVar8 + 1;
        uVar30 = *puVar26;
      }
      lVar42 = (long)dVar39 - (long)dVar40;
      lVar13 = lVar42;
      if (((uVar30 >> 2 & 1) == 0) && (lVar13 = lVar42 + -1, 0 < lVar42)) {
        iVar6 = iVar8 + iVar6;
        do {
          iVar7 = (*param_2)(0x20,param_1);
          if (iVar7 == -1) {
            return iVar8;
          }
          iVar8 = iVar8 + 1;
          lVar13 = lVar42 + -1;
          bVar5 = 0 < lVar42;
          lVar42 = lVar13;
        } while (lVar13 != 0 && bVar5);
        lVar13 = -1;
        iVar8 = iVar6 - SUB84(dVar40,0);
      }
      iVar6 = iVar8;
      if (dVar34 != 0.0) {
        iVar7 = iVar8 + SUB84(dVar34,0);
        do {
          iVar6 = iVar8;
          if (*pcVar25 == '\0') break;
          iVar6 = (*param_2)(*pcVar25,param_1);
          if (iVar6 == -1) {
            return iVar8;
          }
          pcVar25 = pcVar25 + 1;
          iVar8 = iVar8 + 1;
          dVar34 = (double)((long)dVar34 + -1);
          iVar6 = iVar7;
        } while (dVar34 != 0.0);
      }
      uVar30 = *puVar26;
      if (((uVar30 >> 2 & 1) != 0) && (0 < lVar13)) {
        iVar8 = iVar6 + (int)lVar13;
        lVar13 = lVar13 + 1;
        do {
          iVar7 = (*param_2)(0x20,param_1);
          if (iVar7 == -1) {
            return iVar6;
          }
          lVar13 = lVar13 + -1;
          iVar6 = iVar6 + 1;
        } while (1 < lVar13);
        uVar30 = *puVar26;
        iVar6 = iVar8;
      }
      if ((uVar30 >> 3 & 1) == 0) {
LAB_00146020:
        iVar8 = iVar6;
      }
      else {
        iVar8 = (*param_2)(0x22,param_1);
        if (iVar8 == -1) {
          return iVar6;
        }
        iVar8 = iVar6 + 1;
      }
      break;
    case 2:
      dVar40 = adStack_1060[lVar13 * 4];
      if (dVar40 == 0.0) {
        lVar13 = (long)dVar39 + -5;
        if ((uVar30 >> 2 & 1) == 0) {
          lVar42 = lVar13;
        }
        else {
          lVar42 = (long)dVar39 + -6;
          if (5 < (long)dVar39) {
            iVar6 = iVar8 + iVar6;
            do {
              iVar7 = (*param_2)(0x20,param_1);
              if (iVar7 == -1) {
                return iVar8;
              }
              lVar13 = lVar13 + -1;
              iVar8 = iVar8 + 1;
            } while (0 < lVar13);
            lVar42 = -1;
            iVar8 = iVar6 + -5;
          }
        }
        iVar6 = iVar8 + 5;
        uVar18 = 0x28;
        lVar13 = 0;
        do {
          iVar7 = (*param_2)(uVar18,param_1);
          if (iVar7 == -1) {
            return iVar8 + (int)lVar13;
          }
          lVar17 = lVar13 + 1;
          uVar18 = (&DAT_040dca0c)[lVar13];
          lVar13 = lVar17;
        } while (lVar17 != 5);
        if ((((byte)*puVar26 >> 2 & 1) != 0) || (lVar42 < 1)) goto LAB_00146020;
        iVar8 = iVar6 + (int)lVar42;
        lVar42 = lVar42 + 1;
        do {
          iVar7 = (*param_2)(0x20,param_1);
          if (iVar7 == -1) {
            return iVar6;
          }
          lVar42 = lVar42 + -1;
          iVar6 = iVar6 + 1;
        } while (1 < lVar42);
      }
      else {
        uVar16 = 0;
        bVar14 = 0;
        pcVar33 = "0123456789abcdefghijklmnopqrstuvwxyz";
        if ((uVar30 & 0x1000) != 0) {
          pcVar33 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }
        uVar27 = 1;
        bVar5 = true;
        dVar22 = 7.90505033345994e-323;
LAB_00145ae4:
        if (dVar34 == -NAN) {
          dVar34 = 4.94065645841247e-324;
        }
        pcVar25 = acStack_147c;
        if (dVar40 == 0.0) {
          pcVar38 = acStack_147c;
        }
        else {
          pcVar37 = acStack_147c;
          do {
            dVar4 = 0.0;
            if (dVar22 != 0.0) {
              dVar4 = (double)((ulong)dVar40 / (ulong)dVar22);
            }
            pcVar25 = pcVar25 + -1;
            pcVar38 = pcVar37 + -1;
            *pcVar37 = pcVar33[(long)dVar40 - (long)dVar4 * (long)dVar22];
            bVar1 = (ulong)dVar22 <= (ulong)dVar40;
            dVar40 = dVar4;
            pcVar37 = pcVar38;
          } while (bVar1);
        }
        bVar1 = (bool)(bVar14 ^ 1);
        if (uVar27 == 0) {
          bVar1 = true;
        }
        lVar13 = (long)acStack_147c - (long)pcVar25;
        lVar42 = (long)dVar39 - lVar13;
        sVar11 = (long)dVar34 - lVar13;
        if ((bVar1) || (0 < (long)sVar11)) {
          if (0 < (long)sVar11) {
            memset(pcVar38 + (long)(acStack_147c + 1) + -(long)(pcVar25 + (long)dVar34),0x30,sVar11)
            ;
            lVar42 = lVar42 - sVar11;
            pcVar38 = pcVar38 + (long)acStack_147c + -(long)(pcVar25 + (long)dVar34);
            uVar30 = *puVar26;
          }
        }
        else {
          lVar42 = lVar42 + -1;
          *pcVar38 = '0';
          pcVar38 = pcVar38 + -1;
        }
        bVar5 = (bool)(uVar27 != 0 & bVar5);
        lVar13 = lVar42 + -2;
        if (!bVar5) {
          lVar13 = lVar42;
        }
        lVar13 = lVar13 - (ulong)(uVar16 != 0 || (uVar30 & 3) != 0);
        lVar42 = lVar13;
        if (((uVar30 & 0x104) == 0) && (lVar42 = lVar13 + -1, 0 < lVar13)) {
          iVar6 = iVar8 + (int)lVar13;
          do {
            iVar7 = (*param_2)(0x20,param_1);
            if (iVar7 == -1) {
              return iVar8;
            }
            iVar8 = iVar8 + 1;
            lVar42 = lVar13 + -1;
            bVar1 = 0 < lVar13;
            lVar13 = lVar42;
          } while (lVar42 != 0 && bVar1);
          lVar42 = -1;
          iVar8 = iVar6;
        }
        if (uVar16 == 0) {
          if ((*puVar26 >> 1 & 1) != 0) {
            uVar12 = 0x2b;
            goto LAB_00145d3c;
          }
          if ((*puVar26 & 1) != 0) {
            uVar12 = 0x20;
            goto LAB_00145d3c;
          }
        }
        else {
          uVar12 = 0x2d;
LAB_00145d3c:
          iVar6 = (*param_2)(uVar12,param_1);
          if (iVar6 == -1) {
            return iVar8;
          }
          iVar8 = iVar8 + 1;
        }
        if (bVar5) {
          iVar6 = (*param_2)(0x30,param_1);
          if (iVar6 == -1) {
            return iVar8;
          }
          if ((*(byte *)((long)puVar26 + 1) >> 4 & 1) == 0) {
            uVar12 = 0x78;
          }
          else {
            uVar12 = 0x58;
          }
          iVar6 = (*param_2)(uVar12,param_1);
          if (iVar6 == -1) {
            return iVar8 + 1;
          }
          iVar8 = iVar8 + 2;
        }
        lVar13 = lVar42;
        if (((*puVar26 & 0x104) == 0x100) && (lVar13 = lVar42 + -1, 0 < lVar42)) {
          iVar6 = iVar8 + (int)lVar42;
          do {
            iVar7 = (*param_2)(0x30,param_1);
            if (iVar7 == -1) {
              return iVar8;
            }
            iVar8 = iVar8 + 1;
            lVar13 = lVar42 + -1;
            bVar5 = 0 < lVar42;
            lVar42 = lVar13;
          } while (lVar13 != 0 && bVar5);
          lVar13 = -1;
          iVar8 = iVar6;
        }
        pcVar25 = pcVar38 + 1;
        iVar7 = iVar8;
        if (pcVar25 <= acStack_147c) {
          iVar7 = ((int)local_15c0 + 0x144 + iVar8) - (int)pcVar38;
          lVar42 = (long)acStack_147c - (long)pcVar38;
          do {
            iVar6 = (*param_2)(*pcVar25,param_1);
            if (iVar6 == -1) {
              return iVar8;
            }
            iVar8 = iVar8 + 1;
            pcVar25 = pcVar25 + 1;
            lVar42 = lVar42 + -1;
          } while (lVar42 != 0);
        }
        iVar8 = iVar7;
        if ((((byte)*puVar26 >> 2 & 1) != 0) && (0 < lVar13)) {
          iVar6 = iVar7 + (int)lVar13;
          lVar13 = lVar13 + 1;
          do {
            iVar8 = (*param_2)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar7;
            }
            lVar13 = lVar13 + -1;
            iVar7 = iVar7 + 1;
          } while (1 < lVar13);
          goto LAB_00146020;
        }
      }
      break;
    case 3:
      dVar40 = adStack_1060[lVar13 * 4];
      if ((uVar30 >> 0x11 & 1) == 0) {
        uVar27 = uVar30 >> 3 & 1;
        if ((uVar30 >> 10 & 1) == 0) {
          dVar22 = (double)-(long)dVar40;
          if (-1 < (long)dVar40) {
            dVar22 = dVar40;
          }
          uVar16 = 0;
          dVar4 = dVar40;
          if ((uVar30 & 0x200) == 0) {
            uVar16 = (uint)((ulong)dVar40 >> 0x3f);
            dVar4 = dVar22;
          }
          pcVar25 = "0123456789abcdefghijklmnopqrstuvwxyz";
          if ((uVar30 & 0x1000) != 0) {
            pcVar25 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          }
          bVar5 = (uVar30 & 0x800) != 0;
          if (bVar5) {
            uVar16 = 0;
            pcVar33 = pcVar25;
          }
          bVar14 = 0;
          dVar22 = 4.94065645841247e-323;
          if (bVar5) {
            dVar22 = 7.90505033345994e-323;
          }
          if ((uVar30 & 0x800) != 0) {
            dVar4 = dVar40;
          }
          dVar40 = dVar4;
        }
        else {
          uVar16 = 0;
          bVar5 = false;
          bVar14 = 1;
          dVar22 = 3.95252516672997e-323;
        }
        goto LAB_00145ae4;
      }
      if ((uVar30 >> 2 & 1) == 0) {
        if ((long)dVar39 < 2) {
          dVar39 = (double)((long)dVar39 + -1);
        }
        else {
          iVar6 = iVar8 + iVar6;
          do {
            iVar7 = (*param_2)(0x20,param_1);
            if (iVar7 == -1) {
              return iVar8;
            }
            dVar39 = (double)((long)dVar39 + -1);
            iVar8 = iVar8 + 1;
          } while (1 < (long)dVar39);
          dVar39 = 0.0;
          iVar8 = iVar6 + -1;
        }
      }
      iVar6 = (*param_2)(SUB84(dVar40,0) & 0xff,param_1);
      if (iVar6 == -1) {
        return iVar8;
      }
      iVar6 = iVar8 + 1;
      if ((((byte)*puVar26 >> 2 & 1) == 0) || ((long)dVar39 < 2)) goto LAB_00146020;
      iVar8 = iVar8 + SUB84(dVar39,0);
      lVar13 = (long)dVar39 + 1;
      do {
        iVar7 = (*param_2)(0x20,param_1);
        if (iVar7 == -1) {
          return iVar6;
        }
        lVar13 = lVar13 + -1;
        iVar6 = iVar6 + 1;
      } while (2 < lVar13);
      break;
    case 4:
      if (((uVar30 >> 6 & 1) == 0) && ((uVar30 >> 5 & 1) == 0)) {
        if ((uVar30 >> 4 & 1) == 0) {
          *(int *)adStack_1060[lVar13 * 4] = iVar8;
        }
        else {
          *(short *)adStack_1060[lVar13 * 4] = (short)iVar8;
        }
      }
      else {
        *(long *)adStack_1060[lVar13 * 4] = (long)iVar8;
      }
      break;
    case 7:
      local_15d0 = 0;
      uStack_15c8 = 0;
      local_15e0 = (byte *)0x25;
      uStack_15d8 = 0;
      sVar11 = strlen((char *)&local_15e0);
      if ((uVar30 >> 0xd & 1) == 0) {
        dVar39 = -NAN;
        if ((uVar30 >> 0xe & 1) != 0) {
          dVar39 = adStack_1060[(long)dVar40 * 4];
        }
      }
      else {
        dVar39 = dVar40;
      }
      if ((uVar30 >> 0xf & 1) == 0) {
        dVar40 = -NAN;
        if ((uVar30 >> 0x10 & 1) != 0) {
          pdVar20 = adStack_1060 + *(long *)(local_1070 + lVar42 + 8) * 4;
          goto LAB_00145948;
        }
      }
      else {
        pdVar20 = (double *)(local_1070 + lVar42 + 8);
LAB_00145948:
        dVar40 = *pdVar20;
      }
      puVar36 = (undefined1 *)((long)&local_15e0 + 1);
      if ((uVar30 >> 2 & 1) != 0) {
        local_15e0._0_2_ = CONCAT11(0x2d,(char)local_15e0);
        puVar36 = (undefined1 *)((long)&local_15e0 + 2);
      }
      if ((uVar30 >> 1 & 1) != 0) {
        *puVar36 = 0x2b;
        puVar36 = puVar36 + 1;
      }
      if ((uVar30 & 1) != 0) {
        *puVar36 = 0x20;
        uVar30 = *puVar26;
        puVar36 = puVar36 + 1;
      }
      puVar35 = puVar36;
      if ((uVar30 >> 3 & 1) != 0) {
        puVar35 = puVar36 + 1;
        *puVar36 = 0x23;
      }
      *puVar35 = 0;
      lVar42 = 0x20 - sVar11;
      if (-1 < (long)dVar39) {
        if (0x144 < (long)dVar39) {
          dVar39 = 1.60571334898405e-321;
        }
        iVar6 = FUN_001460b8(puVar35,lVar42,&DAT_040e1d15,dVar39);
        puVar35 = puVar35 + iVar6;
        lVar42 = lVar42 - iVar6;
      }
      if (-1 < (long)dVar40) {
        lVar17 = 0x144;
        for (dVar39 = adStack_1060[lVar13 * 4]; 10.0 <= dVar39; dVar39 = dVar39 / 10.0) {
          lVar17 = lVar17 + -1;
        }
        dVar39 = (double)(lVar17 + -1);
        if ((long)dVar40 <= lVar17) {
          dVar39 = dVar40;
        }
        iVar6 = FUN_001460b8(puVar35,lVar42,&DAT_040f1f06,dVar39);
        puVar35 = puVar35 + iVar6;
      }
      uVar30 = *puVar26;
      puVar36 = puVar35;
      if ((uVar30 >> 5 & 1) != 0) {
        puVar36 = puVar35 + 1;
        *puVar35 = 0x6c;
        uVar30 = *puVar26;
      }
      if ((uVar30 >> 0x12 & 1) == 0) {
        uVar18 = 0x66;
        if ((uVar30 >> 0x13 & 1) != 0) {
          uVar15 = 0x47;
          uVar18 = 0x67;
          goto LAB_00145a5c;
        }
      }
      else {
        uVar15 = 0x45;
        uVar18 = 0x65;
LAB_00145a5c:
        if ((uVar30 & 0x1000) != 0) {
          uVar18 = uVar15;
        }
      }
      dVar40 = adStack_1060[lVar13 * 4];
      *puVar36 = uVar18;
      puVar36[1] = 0;
      sprintf(local_15c0,(char *)&local_15e0,dVar40);
      pcVar25 = (char *)((ulong)local_15c0 | 1);
      cVar2 = local_15c0[0];
      while (cVar2 != '\0') {
        iVar6 = (*param_2)(cVar2,param_1);
        if (iVar6 == -1) {
          return iVar8;
        }
        iVar8 = iVar8 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar25 + 1;
      }
    }
    param_3 = (byte *)*plVar19;
    plVar19 = plVar19 + 1;
    local_68 = param_3;
  } while( true );
}

