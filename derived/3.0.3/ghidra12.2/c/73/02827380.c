
char * FUN_02827380(long param_1,char *param_2)

{
  uint *puVar1;
  char *pcVar2;
  uint *puVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined8 uVar12;
  char cVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  
  puVar1 = (uint *)(param_1 + 0x46f70);
  pcVar2 = (char *)(param_1 + 0x110);
  puVar11 = puVar1;
  uVar19 = 0;
  do {
    pcVar5 = pcVar2 + (ulong)*puVar11 * 0x3c8;
    if (299 < *puVar11) {
      pcVar5 = pcVar2;
    }
    if (*pcVar5 == '\0') {
      uVar8 = -uVar19;
      if (((uint)uVar8 & 0xffff) < 300) {
        uVar10 = *puVar11;
        if (uVar19 != 0) {
          uVar19 = ~uVar19;
          puVar14 = (uint *)(param_1 + (uVar19 & 0xffffffff) * 4 + 0x46f70);
          do {
            uVar16 = (uint)uVar19;
            uVar9 = uVar16 - 1;
            uVar19 = (ulong)uVar9;
            puVar3 = puVar14;
            if (299 < uVar16) {
              puVar3 = puVar1;
            }
            bVar7 = 299 < uVar8;
            uVar8 = uVar8 - 1;
            puVar14 = puVar14 + -1;
            puVar4 = puVar11;
            if (bVar7) {
              puVar4 = puVar1;
            }
            *puVar4 = *puVar3;
            puVar11 = puVar11 + -1;
          } while (uVar9 != 0xffffffff);
        }
        *puVar1 = uVar10;
        pcVar5 = pcVar2 + (ulong)uVar10 * 0x3c8;
        if (299 < uVar10) {
          pcVar5 = pcVar2;
        }
        memset(pcVar5,0,0x3c8);
        pcVar5[0xc0] = -2;
        pcVar5[0xc1] = -1;
        FUN_0277d4ac();
        pcVar5[200] = '\0';
        pcVar5[0xcc] = '\0';
        memset(pcVar5 + 0xce,0,0x2a2);
        pcVar5[0x370] = -2;
        pcVar5[0x371] = -1;
        pcVar5[0x374] = '\0';
        pcVar5[0x375] = '\0';
        pcVar5[0x376] = '\0';
        pcVar5[0x377] = '\0';
        pcVar5[0x378] = '\0';
        pcVar5[0x379] = '\0';
        pcVar5[0x37a] = '\0';
        pcVar5[0x37b] = '\0';
        pcVar5[0x37c] = '\0';
        pcVar5[0x37d] = '\0';
        pcVar5[0x37e] = '\0';
        pcVar5[0x37f] = '\0';
        pcVar5[0x380] = '\0';
        pcVar5[0x381] = '\0';
        pcVar5[0x382] = '\0';
        pcVar5[899] = '\0';
        pcVar5[900] = '\0';
        pcVar5[0x385] = '\0';
        pcVar5[0x386] = '\0';
        pcVar5[0x387] = '\0';
        pcVar5[0x388] = '\0';
        pcVar5[0x389] = '\0';
        pcVar5[0x38a] = '\0';
        pcVar5[0x38b] = '\0';
        pcVar5[0x38c] = '\0';
        pcVar5[0x38d] = '\0';
        pcVar5[0x38e] = '\0';
        pcVar5[0x38f] = '\0';
        pcVar5[0x390] = '\0';
        pcVar5[0x391] = '\0';
        pcVar5[0x392] = '\0';
        pcVar5[0x393] = '\0';
        pcVar5[0x394] = '\0';
        pcVar5[0x395] = '\0';
        pcVar5[0x396] = '\0';
        pcVar5[0x397] = '\0';
        pcVar5[0x398] = '\0';
        pcVar5[0x399] = '\0';
        pcVar5[0x39a] = '\0';
        pcVar5[0x39b] = '\0';
        pcVar5[0x39c] = '\0';
        pcVar5[0x39d] = '\0';
        pcVar5[0x39e] = '\0';
        pcVar5[0x39f] = '\0';
        pcVar5[0x3a0] = '\0';
        pcVar5[0x3a1] = '\0';
        pcVar5[0x3a2] = '\0';
        pcVar5[0x3a3] = '\0';
        pcVar5[0x3a4] = '\0';
        pcVar5[0x3a5] = '\0';
        pcVar5[0x3a6] = '\0';
        pcVar5[0x3a7] = '\0';
        pcVar5[0x3a8] = '\0';
        pcVar5[0x3a9] = '\0';
        pcVar5[0x3aa] = '\0';
        pcVar5[0x3ab] = '\0';
        pcVar5[0x3ac] = '\0';
        pcVar5[0x3ad] = '\0';
        pcVar5[0x3ae] = '\0';
        pcVar5[0x3af] = '\0';
        pcVar5[0x3b0] = '\0';
        pcVar5[0x3b1] = '\0';
        pcVar5[0x3b2] = '\0';
        pcVar5[0x3b3] = '\0';
        FUN_027adf94(pcVar5,param_2);
        pcVar5[0xcc] = param_2[0xcc];
        uVar12 = *(undefined8 *)(param_2 + 0xce);
        uVar15 = *(undefined8 *)(param_2 + 0x10e);
        uVar18 = *(undefined8 *)(param_2 + 0x116);
        uVar17 = *(undefined8 *)(param_2 + 0x126);
        *(undefined8 *)(pcVar5 + 0x11e) = *(undefined8 *)(param_2 + 0x11e);
        *(undefined8 *)(pcVar5 + 0x126) = uVar17;
        *(undefined8 *)(pcVar5 + 0x10e) = uVar15;
        *(undefined8 *)(pcVar5 + 0x116) = uVar18;
        uVar15 = *(undefined8 *)(param_2 + 0xee);
        uVar17 = *(undefined8 *)(param_2 + 0xf6);
        uVar18 = *(undefined8 *)(param_2 + 0xfe);
        *(undefined8 *)(pcVar5 + 0x106) = *(undefined8 *)(param_2 + 0x106);
        *(undefined8 *)(pcVar5 + 0xfe) = uVar18;
        *(undefined8 *)(pcVar5 + 0xf6) = uVar17;
        *(undefined8 *)(pcVar5 + 0xee) = uVar15;
        uVar15 = *(undefined8 *)(param_2 + 0xd6);
        uVar18 = *(undefined8 *)(param_2 + 0xde);
        uVar17 = *(undefined8 *)(param_2 + 0xe6);
        *(undefined8 *)(pcVar5 + 0xce) = uVar12;
        *(undefined8 *)(pcVar5 + 0xe6) = uVar17;
        *(undefined8 *)(pcVar5 + 0xde) = uVar18;
        *(undefined8 *)(pcVar5 + 0xd6) = uVar15;
        memcpy(pcVar5 + 0x12e,param_2 + 0x12e,0x1e0);
        uVar15 = *(undefined8 *)(param_2 + 0x316);
        uVar18 = *(undefined8 *)(param_2 + 0x326);
        uVar17 = *(undefined8 *)(param_2 + 0x30e);
        *(undefined8 *)(pcVar5 + 0x31e) = *(undefined8 *)(param_2 + 0x31e);
        *(undefined8 *)(pcVar5 + 0x326) = uVar18;
        *(undefined8 *)(pcVar5 + 0x30e) = uVar17;
        *(undefined8 *)(pcVar5 + 0x316) = uVar15;
        uVar15 = *(undefined8 *)(param_2 + 0x336);
        uVar18 = *(undefined8 *)(param_2 + 0x346);
        uVar17 = *(undefined8 *)(param_2 + 0x32e);
        *(undefined8 *)(pcVar5 + 0x33e) = *(undefined8 *)(param_2 + 0x33e);
        *(undefined8 *)(pcVar5 + 0x346) = uVar18;
        *(undefined8 *)(pcVar5 + 0x32e) = uVar17;
        *(undefined8 *)(pcVar5 + 0x336) = uVar15;
        uVar15 = *(undefined8 *)(param_2 + 0x356);
        uVar18 = *(undefined8 *)(param_2 + 0x366);
        uVar17 = *(undefined8 *)(param_2 + 0x34e);
        *(undefined8 *)(pcVar5 + 0x35e) = *(undefined8 *)(param_2 + 0x35e);
        *(undefined8 *)(pcVar5 + 0x366) = uVar18;
        *(undefined8 *)(pcVar5 + 0x34e) = uVar17;
        *(undefined8 *)(pcVar5 + 0x356) = uVar15;
        *(undefined2 *)(pcVar5 + 0x36e) = *(undefined2 *)(param_2 + 0x36e);
        *(undefined2 *)(pcVar5 + 0x370) = *(undefined2 *)(param_2 + 0x370);
        pcVar5 = pcVar2 + (ulong)*puVar1 * 0x3c8;
        if (299 < *puVar1) {
          pcVar5 = pcVar2;
        }
        FUN_02827184(param_1,pcVar5);
        uVar10 = *puVar1;
        goto LAB_02827844;
      }
      break;
    }
    puVar11 = puVar11 + 1;
    bVar7 = uVar19 != 0xfffffffffffffed5;
    uVar19 = uVar19 - 1;
  } while (bVar7);
  lVar20 = 0;
  uVar19 = 0;
  uVar10 = 0;
  do {
    uVar9 = *(uint *)(param_1 + 0x4741c + lVar20 * 4);
    pcVar5 = pcVar2 + (ulong)uVar9 * 0x3c8;
    if (299 < uVar9) {
      pcVar5 = pcVar2;
    }
    if (pcVar5[1] == '\0') {
      if (pcVar5[200] == '\0' || *(short *)(pcVar5 + 0xc0) == -2) {
        if (pcVar5[0xcc] != '\0') {
          if (*(short *)(pcVar5 + 0xc0) == -2) {
            cVar13 = pcVar5[0x5c];
            if (*pcVar5 == '\x04') {
              uVar9 = 6;
              if (cVar13 != '\0') {
                uVar9 = 7;
              }
              goto LAB_02827660;
            }
            uVar9 = 4;
            if (cVar13 != '\0') {
              uVar9 = 5;
            }
          }
          else {
            cVar13 = pcVar5[0x5c];
            uVar9 = 3;
          }
          if (((*pcVar5 == '\x04' || cVar13 != '\0') ||
              (uVar8 = FUN_027aeb20(pcVar5), (uVar8 & 1) != 0)) || (*(long *)(pcVar5 + 0x378) != 0))
          goto LAB_02827660;
        }
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 0;
    }
LAB_02827660:
    uVar16 = (int)lVar20 + 299;
    uVar6 = uVar9;
    if (uVar9 <= uVar10) {
      uVar16 = (uint)uVar19;
      uVar6 = uVar10;
    }
    uVar10 = uVar6;
    uVar19 = (ulong)uVar16;
    if ((lVar20 == -299) || (lVar20 = lVar20 + -1, uVar9 == 7)) {
      if (param_2[1] == '\0') {
        if ((param_2[200] == '\0') || (*(short *)(param_2 + 0xc0) == -2)) {
          if (param_2[0xcc] == '\0') {
            if (uVar10 < 2) {
              return (char *)0x0;
            }
          }
          else if (*(short *)(param_2 + 0xc0) == -2) {
            if (*param_2 == '\x04') {
              uVar9 = 6;
            }
            else {
              uVar9 = 4;
            }
            if (param_2[0x5c] != '\0') {
              uVar9 = uVar9 + 1;
            }
            if (uVar10 < uVar9) {
              return (char *)0x0;
            }
          }
          else if (uVar10 < 3) {
            return (char *)0x0;
          }
        }
        else if (uVar10 == 0) {
          return (char *)0x0;
        }
      }
      if (uVar16 < 300) {
        uVar10 = puVar1[uVar16];
        if (uVar16 != 0) {
          uVar16 = uVar16 - 1;
          puVar14 = (uint *)(param_1 + 0x46f70 + uVar19 * 4);
          puVar11 = (uint *)(param_1 + 0x46f70 + (ulong)uVar16 * 4);
          do {
            bVar7 = 299 < uVar16;
            uVar16 = uVar16 - 1;
            puVar3 = puVar11;
            if (bVar7) {
              puVar3 = puVar1;
            }
            bVar7 = 299 < uVar19;
            uVar19 = uVar19 - 1;
            puVar11 = puVar11 + -1;
            puVar4 = puVar14;
            if (bVar7) {
              puVar4 = puVar1;
            }
            *puVar4 = *puVar3;
            puVar14 = puVar14 + -1;
          } while (uVar16 != 0xffffffff);
        }
        *puVar1 = uVar10;
      }
      else {
        uVar10 = *puVar1;
      }
      pcVar5 = pcVar2 + (ulong)uVar10 * 0x3c8;
      if (299 < uVar10) {
        pcVar5 = pcVar2;
      }
      memset(pcVar5,0,0x3c8);
      pcVar5[0xc0] = -2;
      pcVar5[0xc1] = -1;
      FUN_0277d4ac();
      pcVar5[200] = '\0';
      pcVar5[0xcc] = '\0';
      memset(pcVar5 + 0xce,0,0x2a2);
      pcVar5[0x370] = -2;
      pcVar5[0x371] = -1;
      pcVar5[0x374] = '\0';
      pcVar5[0x375] = '\0';
      pcVar5[0x376] = '\0';
      pcVar5[0x377] = '\0';
      pcVar5[0x378] = '\0';
      pcVar5[0x379] = '\0';
      pcVar5[0x37a] = '\0';
      pcVar5[0x37b] = '\0';
      pcVar5[0x37c] = '\0';
      pcVar5[0x37d] = '\0';
      pcVar5[0x37e] = '\0';
      pcVar5[0x37f] = '\0';
      pcVar5[0x380] = '\0';
      pcVar5[0x381] = '\0';
      pcVar5[0x382] = '\0';
      pcVar5[899] = '\0';
      pcVar5[900] = '\0';
      pcVar5[0x385] = '\0';
      pcVar5[0x386] = '\0';
      pcVar5[0x387] = '\0';
      pcVar5[0x388] = '\0';
      pcVar5[0x389] = '\0';
      pcVar5[0x38a] = '\0';
      pcVar5[0x38b] = '\0';
      pcVar5[0x38c] = '\0';
      pcVar5[0x38d] = '\0';
      pcVar5[0x38e] = '\0';
      pcVar5[0x38f] = '\0';
      pcVar5[0x390] = '\0';
      pcVar5[0x391] = '\0';
      pcVar5[0x392] = '\0';
      pcVar5[0x393] = '\0';
      pcVar5[0x394] = '\0';
      pcVar5[0x395] = '\0';
      pcVar5[0x396] = '\0';
      pcVar5[0x397] = '\0';
      pcVar5[0x398] = '\0';
      pcVar5[0x399] = '\0';
      pcVar5[0x39a] = '\0';
      pcVar5[0x39b] = '\0';
      pcVar5[0x39c] = '\0';
      pcVar5[0x39d] = '\0';
      pcVar5[0x39e] = '\0';
      pcVar5[0x39f] = '\0';
      pcVar5[0x3a0] = '\0';
      pcVar5[0x3a1] = '\0';
      pcVar5[0x3a2] = '\0';
      pcVar5[0x3a3] = '\0';
      pcVar5[0x3a4] = '\0';
      pcVar5[0x3a5] = '\0';
      pcVar5[0x3a6] = '\0';
      pcVar5[0x3a7] = '\0';
      pcVar5[0x3a8] = '\0';
      pcVar5[0x3a9] = '\0';
      pcVar5[0x3aa] = '\0';
      pcVar5[0x3ab] = '\0';
      pcVar5[0x3ac] = '\0';
      pcVar5[0x3ad] = '\0';
      pcVar5[0x3ae] = '\0';
      pcVar5[0x3af] = '\0';
      pcVar5[0x3b0] = '\0';
      pcVar5[0x3b1] = '\0';
      pcVar5[0x3b2] = '\0';
      pcVar5[0x3b3] = '\0';
      FUN_027adf94(pcVar5,param_2);
      pcVar5[0xcc] = param_2[0xcc];
      uVar12 = *(undefined8 *)(param_2 + 0xce);
      uVar15 = *(undefined8 *)(param_2 + 0x10e);
      uVar18 = *(undefined8 *)(param_2 + 0x116);
      uVar17 = *(undefined8 *)(param_2 + 0x126);
      *(undefined8 *)(pcVar5 + 0x11e) = *(undefined8 *)(param_2 + 0x11e);
      *(undefined8 *)(pcVar5 + 0x126) = uVar17;
      *(undefined8 *)(pcVar5 + 0x10e) = uVar15;
      *(undefined8 *)(pcVar5 + 0x116) = uVar18;
      uVar15 = *(undefined8 *)(param_2 + 0xee);
      uVar17 = *(undefined8 *)(param_2 + 0xf6);
      uVar18 = *(undefined8 *)(param_2 + 0xfe);
      *(undefined8 *)(pcVar5 + 0x106) = *(undefined8 *)(param_2 + 0x106);
      *(undefined8 *)(pcVar5 + 0xfe) = uVar18;
      *(undefined8 *)(pcVar5 + 0xf6) = uVar17;
      *(undefined8 *)(pcVar5 + 0xee) = uVar15;
      uVar15 = *(undefined8 *)(param_2 + 0xd6);
      uVar18 = *(undefined8 *)(param_2 + 0xde);
      uVar17 = *(undefined8 *)(param_2 + 0xe6);
      *(undefined8 *)(pcVar5 + 0xce) = uVar12;
      *(undefined8 *)(pcVar5 + 0xe6) = uVar17;
      *(undefined8 *)(pcVar5 + 0xde) = uVar18;
      *(undefined8 *)(pcVar5 + 0xd6) = uVar15;
      memcpy(pcVar5 + 0x12e,param_2 + 0x12e,0x1e0);
      uVar15 = *(undefined8 *)(param_2 + 0x316);
      uVar18 = *(undefined8 *)(param_2 + 0x326);
      uVar17 = *(undefined8 *)(param_2 + 0x30e);
      *(undefined8 *)(pcVar5 + 0x31e) = *(undefined8 *)(param_2 + 0x31e);
      *(undefined8 *)(pcVar5 + 0x326) = uVar18;
      *(undefined8 *)(pcVar5 + 0x30e) = uVar17;
      *(undefined8 *)(pcVar5 + 0x316) = uVar15;
      uVar15 = *(undefined8 *)(param_2 + 0x336);
      uVar18 = *(undefined8 *)(param_2 + 0x346);
      uVar17 = *(undefined8 *)(param_2 + 0x32e);
      *(undefined8 *)(pcVar5 + 0x33e) = *(undefined8 *)(param_2 + 0x33e);
      *(undefined8 *)(pcVar5 + 0x346) = uVar18;
      *(undefined8 *)(pcVar5 + 0x32e) = uVar17;
      *(undefined8 *)(pcVar5 + 0x336) = uVar15;
      uVar15 = *(undefined8 *)(param_2 + 0x356);
      uVar18 = *(undefined8 *)(param_2 + 0x366);
      uVar17 = *(undefined8 *)(param_2 + 0x34e);
      *(undefined8 *)(pcVar5 + 0x35e) = *(undefined8 *)(param_2 + 0x35e);
      *(undefined8 *)(pcVar5 + 0x366) = uVar18;
      *(undefined8 *)(pcVar5 + 0x34e) = uVar17;
      *(undefined8 *)(pcVar5 + 0x356) = uVar15;
      *(undefined2 *)(pcVar5 + 0x36e) = *(undefined2 *)(param_2 + 0x36e);
      *(undefined2 *)(pcVar5 + 0x370) = *(undefined2 *)(param_2 + 0x370);
      pcVar5 = pcVar2 + (ulong)*puVar1 * 0x3c8;
      if (299 < *puVar1) {
        pcVar5 = pcVar2;
      }
      FUN_02827184(param_1,pcVar5);
      uVar10 = *puVar1;
LAB_02827844:
      pcVar5 = pcVar2 + (ulong)uVar10 * 0x3c8;
      if (299 < uVar10) {
        pcVar5 = pcVar2;
      }
      return pcVar5;
    }
  } while( true );
}

