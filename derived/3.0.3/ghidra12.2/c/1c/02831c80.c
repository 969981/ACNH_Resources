
char * FUN_02831c80(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  byte bVar16;
  
  uVar15 = 0;
  bVar16 = 0;
  do {
    uVar5 = *(uint *)(param_1 + uVar15 * 4 + 0x9740);
    pcVar7 = param_1 + (ulong)uVar5 * 0x3c8;
    if (0x27 < uVar5) {
      pcVar7 = param_1;
    }
    if (*pcVar7 != '\0') {
      if (uVar15 != bVar16) {
        if (bVar16 < 0x28) {
          lVar10 = (ulong)bVar16 * 4;
          uVar9 = *(uint *)(param_1 + lVar10 + 0x9740);
          *(uint *)(param_1 + lVar10 + 0x9740) = uVar5;
          *(uint *)(param_1 + uVar15 * 4 + 0x9740) = uVar9;
        }
        else {
          uVar9 = uVar5;
        }
        pcVar7 = param_1 + (ulong)uVar9 * 0x3c8;
        if (0x27 < uVar9) {
          pcVar7 = param_1;
        }
        memset(pcVar7,0,0x3c8);
        pcVar14 = pcVar7 + 0xc0;
        pcVar14[0] = -2;
        pcVar14[1] = -1;
        pcVar7[0xc3] = '\0';
        FUN_0277d4ac(pcVar14);
        pcVar7[200] = '\0';
        pcVar7[0xcc] = '\0';
        memset(pcVar7 + 0xce,0,0x2a2);
        pcVar7[0x370] = -2;
        pcVar7[0x371] = -1;
        pcVar7[0x374] = '\0';
        pcVar7[0x375] = '\0';
        pcVar7[0x376] = '\0';
        pcVar7[0x377] = '\0';
        pcVar7[0x378] = '\0';
        pcVar7[0x379] = '\0';
        pcVar7[0x37a] = '\0';
        pcVar7[0x37b] = '\0';
        pcVar7[0x37c] = '\0';
        pcVar7[0x37d] = '\0';
        pcVar7[0x37e] = '\0';
        pcVar7[0x37f] = '\0';
        pcVar7[0x380] = '\0';
        pcVar7[0x381] = '\0';
        pcVar7[0x382] = '\0';
        pcVar7[899] = '\0';
        pcVar7[900] = '\0';
        pcVar7[0x385] = '\0';
        pcVar7[0x386] = '\0';
        pcVar7[0x387] = '\0';
        pcVar7[0x388] = '\0';
        pcVar7[0x389] = '\0';
        pcVar7[0x38a] = '\0';
        pcVar7[0x38b] = '\0';
        pcVar7[0x38c] = '\0';
        pcVar7[0x38d] = '\0';
        pcVar7[0x38e] = '\0';
        pcVar7[0x38f] = '\0';
        pcVar7[0x390] = '\0';
        pcVar7[0x391] = '\0';
        pcVar7[0x392] = '\0';
        pcVar7[0x393] = '\0';
        pcVar7[0x394] = '\0';
        pcVar7[0x395] = '\0';
        pcVar7[0x396] = '\0';
        pcVar7[0x397] = '\0';
        pcVar7[0x398] = '\0';
        pcVar7[0x399] = '\0';
        pcVar7[0x39a] = '\0';
        pcVar7[0x39b] = '\0';
        pcVar7[0x39c] = '\0';
        pcVar7[0x39d] = '\0';
        pcVar7[0x39e] = '\0';
        pcVar7[0x39f] = '\0';
        pcVar7[0x3a0] = '\0';
        pcVar7[0x3a1] = '\0';
        pcVar7[0x3a2] = '\0';
        pcVar7[0x3a3] = '\0';
        pcVar7[0x3a4] = '\0';
        pcVar7[0x3a5] = '\0';
        pcVar7[0x3a6] = '\0';
        pcVar7[0x3a7] = '\0';
        pcVar7[0x3a8] = '\0';
        pcVar7[0x3a9] = '\0';
        pcVar7[0x3aa] = '\0';
        pcVar7[0x3ab] = '\0';
        pcVar7[0x3ac] = '\0';
        pcVar7[0x3ad] = '\0';
        pcVar7[0x3ae] = '\0';
        pcVar7[0x3af] = '\0';
        pcVar7[0x3b0] = '\0';
        pcVar7[0x3b1] = '\0';
        pcVar7[0x3b2] = '\0';
        pcVar7[0x3b3] = '\0';
      }
      bVar16 = bVar16 + 1;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != 0x28);
  lVar10 = 0;
  bVar16 = 0;
  do {
    lVar6 = lVar10 + 0x9740;
    lVar10 = lVar10 + 4;
    pcVar7 = param_1 + (ulong)*(uint *)(param_1 + lVar6) * 0x3c8;
    if (0x27 < *(uint *)(param_1 + lVar6)) {
      pcVar7 = param_1;
    }
    if (*pcVar7 != '\0') {
      bVar16 = bVar16 + 1;
    }
  } while (lVar10 != 0xa0);
  if (bVar16 < 0x28) {
    lVar10 = (ulong)bVar16 * 4;
    pcVar7 = param_1 + (ulong)*(uint *)(param_1 + lVar10 + 0x9740) * 0x3c8;
    if (0x27 < *(uint *)(param_1 + lVar10 + 0x9740)) {
      pcVar7 = param_1;
    }
    FUN_027adf94(pcVar7,param_2);
    pcVar7[0xcc] = *(char *)(param_2 + 0xcc);
    uVar13 = *(undefined8 *)(param_2 + 0xe6);
    uVar8 = *(undefined8 *)(param_2 + 0xd6);
    uVar1 = *(undefined8 *)(param_2 + 0xde);
    *(undefined8 *)(pcVar7 + 0xce) = *(undefined8 *)(param_2 + 0xce);
    uVar11 = *(undefined8 *)(param_2 + 0x10e);
    uVar12 = *(undefined8 *)(param_2 + 0x116);
    uVar2 = *(undefined8 *)(param_2 + 0x126);
    *(undefined8 *)(pcVar7 + 0x11e) = *(undefined8 *)(param_2 + 0x11e);
    *(undefined8 *)(pcVar7 + 0x126) = uVar2;
    *(undefined8 *)(pcVar7 + 0x10e) = uVar11;
    *(undefined8 *)(pcVar7 + 0x116) = uVar12;
    uVar11 = *(undefined8 *)(param_2 + 0xee);
    uVar2 = *(undefined8 *)(param_2 + 0xf6);
    uVar12 = *(undefined8 *)(param_2 + 0xfe);
    uVar3 = *(undefined8 *)(param_2 + 0x106);
    *(undefined8 *)(pcVar7 + 0xd6) = uVar8;
    *(undefined8 *)(pcVar7 + 0xde) = uVar1;
    *(undefined8 *)(pcVar7 + 0xe6) = uVar13;
    *(undefined8 *)(pcVar7 + 0xfe) = uVar12;
    *(undefined8 *)(pcVar7 + 0x106) = uVar3;
    *(undefined8 *)(pcVar7 + 0xee) = uVar11;
    *(undefined8 *)(pcVar7 + 0xf6) = uVar2;
    memcpy(pcVar7 + 0x12e,(void *)(param_2 + 0x12e),0x1e0);
    uVar8 = *(undefined8 *)(param_2 + 0x316);
    uVar11 = *(undefined8 *)(param_2 + 0x31e);
    uVar12 = *(undefined8 *)(param_2 + 0x326);
    *(undefined8 *)(pcVar7 + 0x30e) = *(undefined8 *)(param_2 + 0x30e);
    *(undefined8 *)(pcVar7 + 0x326) = uVar12;
    *(undefined8 *)(pcVar7 + 0x31e) = uVar11;
    *(undefined8 *)(pcVar7 + 0x316) = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x336);
    uVar11 = *(undefined8 *)(param_2 + 0x33e);
    uVar12 = *(undefined8 *)(param_2 + 0x346);
    *(undefined8 *)(pcVar7 + 0x32e) = *(undefined8 *)(param_2 + 0x32e);
    *(undefined8 *)(pcVar7 + 0x346) = uVar12;
    *(undefined8 *)(pcVar7 + 0x33e) = uVar11;
    *(undefined8 *)(pcVar7 + 0x336) = uVar8;
    uVar8 = *(undefined8 *)(param_2 + 0x356);
    uVar11 = *(undefined8 *)(param_2 + 0x35e);
    uVar12 = *(undefined8 *)(param_2 + 0x366);
    *(undefined8 *)(pcVar7 + 0x34e) = *(undefined8 *)(param_2 + 0x34e);
    *(undefined8 *)(pcVar7 + 0x366) = uVar12;
    *(undefined8 *)(pcVar7 + 0x35e) = uVar11;
    *(undefined8 *)(pcVar7 + 0x356) = uVar8;
    *(undefined2 *)(pcVar7 + 0x36e) = *(undefined2 *)(param_2 + 0x36e);
    *(undefined2 *)(pcVar7 + 0x370) = *(undefined2 *)(param_2 + 0x370);
    *(undefined4 *)(pcVar7 + 0x374) = *(undefined4 *)(param_2 + 0x374);
    *(undefined8 *)(pcVar7 + 0x378) = *(undefined8 *)(param_2 + 0x378);
    *(undefined8 *)(pcVar7 + 0x380) = *(undefined8 *)(param_2 + 0x380);
    *(undefined8 *)(pcVar7 + 0x388) = *(undefined8 *)(param_2 + 0x388);
    *(undefined8 *)(pcVar7 + 0x390) = *(undefined8 *)(param_2 + 0x390);
    *(undefined8 *)(pcVar7 + 0x398) = *(undefined8 *)(param_2 + 0x398);
    uVar8 = *(undefined8 *)(param_2 + 0x3a8);
    uVar4 = *(undefined4 *)(param_2 + 0x3b0);
    *(undefined8 *)(pcVar7 + 0x3a0) = *(undefined8 *)(param_2 + 0x3a0);
    *(undefined4 *)(pcVar7 + 0x3b0) = uVar4;
    *(undefined8 *)(pcVar7 + 0x3a8) = uVar8;
    pcVar7 = param_1 + (ulong)*(uint *)(param_1 + lVar10 + 0x9740) * 0x3c8;
    if (0x27 < *(uint *)(param_1 + lVar10 + 0x9740)) {
      pcVar7 = param_1;
    }
    *pcVar7 = '\x02';
    pcVar7 = param_1 + (ulong)*(uint *)(param_1 + lVar10 + 0x9740) * 0x3c8;
    if (0x27 < *(uint *)(param_1 + lVar10 + 0x9740)) {
      pcVar7 = param_1;
    }
  }
  else {
    pcVar7 = (char *)0x0;
  }
  return pcVar7;
}

