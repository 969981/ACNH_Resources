
char * FUN_02831a10(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  byte bVar15;
  
  uVar14 = 0;
  bVar15 = 0;
  do {
    uVar4 = *(uint *)(param_1 + uVar14 * 4 + 0x15950);
    pcVar6 = param_1 + (ulong)uVar4 * 0x374;
    if (99 < uVar4) {
      pcVar6 = param_1;
    }
    if (*pcVar6 != '\0') {
      if (uVar14 != bVar15) {
        if (bVar15 < 100) {
          lVar9 = (ulong)bVar15 * 4;
          uVar8 = *(uint *)(param_1 + lVar9 + 0x15950);
          *(uint *)(param_1 + lVar9 + 0x15950) = uVar4;
          *(uint *)(param_1 + uVar14 * 4 + 0x15950) = uVar8;
        }
        else {
          uVar8 = uVar4;
        }
        pcVar6 = param_1 + (ulong)uVar8 * 0x374;
        if (99 < uVar8) {
          pcVar6 = param_1;
        }
        memset(pcVar6,0,0x374);
        pcVar13 = pcVar6 + 0xc0;
        pcVar13[0] = -2;
        pcVar13[1] = -1;
        pcVar6[0xc3] = '\0';
        FUN_0277d4ac(pcVar13);
        pcVar6[200] = '\0';
        pcVar6[0xcc] = '\0';
        memset(pcVar6 + 0xce,0,0x2a2);
        pcVar6[0x370] = -2;
        pcVar6[0x371] = -1;
      }
      bVar15 = bVar15 + 1;
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 100);
  lVar9 = 0;
  bVar15 = 0;
  do {
    lVar5 = lVar9 + 0x15950;
    lVar9 = lVar9 + 4;
    pcVar6 = param_1 + (ulong)*(uint *)(param_1 + lVar5) * 0x374;
    if (99 < *(uint *)(param_1 + lVar5)) {
      pcVar6 = param_1;
    }
    if (*pcVar6 != '\0') {
      bVar15 = bVar15 + 1;
    }
  } while (lVar9 != 400);
  if (bVar15 < 100) {
    lVar9 = (ulong)bVar15 * 4;
    pcVar6 = param_1 + (ulong)*(uint *)(param_1 + lVar9 + 0x15950) * 0x374;
    if (99 < *(uint *)(param_1 + lVar9 + 0x15950)) {
      pcVar6 = param_1;
    }
    FUN_027adf94(pcVar6,param_2);
    pcVar6[0xcc] = *(char *)(param_2 + 0xcc);
    uVar12 = *(undefined8 *)(param_2 + 0xe6);
    uVar7 = *(undefined8 *)(param_2 + 0xd6);
    uVar1 = *(undefined8 *)(param_2 + 0xde);
    *(undefined8 *)(pcVar6 + 0xce) = *(undefined8 *)(param_2 + 0xce);
    uVar10 = *(undefined8 *)(param_2 + 0x10e);
    uVar11 = *(undefined8 *)(param_2 + 0x116);
    uVar2 = *(undefined8 *)(param_2 + 0x126);
    *(undefined8 *)(pcVar6 + 0x11e) = *(undefined8 *)(param_2 + 0x11e);
    *(undefined8 *)(pcVar6 + 0x126) = uVar2;
    *(undefined8 *)(pcVar6 + 0x10e) = uVar10;
    *(undefined8 *)(pcVar6 + 0x116) = uVar11;
    uVar10 = *(undefined8 *)(param_2 + 0xee);
    uVar2 = *(undefined8 *)(param_2 + 0xf6);
    uVar11 = *(undefined8 *)(param_2 + 0xfe);
    uVar3 = *(undefined8 *)(param_2 + 0x106);
    *(undefined8 *)(pcVar6 + 0xd6) = uVar7;
    *(undefined8 *)(pcVar6 + 0xde) = uVar1;
    *(undefined8 *)(pcVar6 + 0xe6) = uVar12;
    *(undefined8 *)(pcVar6 + 0xfe) = uVar11;
    *(undefined8 *)(pcVar6 + 0x106) = uVar3;
    *(undefined8 *)(pcVar6 + 0xee) = uVar10;
    *(undefined8 *)(pcVar6 + 0xf6) = uVar2;
    memcpy(pcVar6 + 0x12e,(void *)(param_2 + 0x12e),0x1e0);
    uVar7 = *(undefined8 *)(param_2 + 0x316);
    uVar10 = *(undefined8 *)(param_2 + 0x31e);
    uVar11 = *(undefined8 *)(param_2 + 0x326);
    *(undefined8 *)(pcVar6 + 0x30e) = *(undefined8 *)(param_2 + 0x30e);
    *(undefined8 *)(pcVar6 + 0x326) = uVar11;
    *(undefined8 *)(pcVar6 + 0x31e) = uVar10;
    *(undefined8 *)(pcVar6 + 0x316) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x336);
    uVar10 = *(undefined8 *)(param_2 + 0x33e);
    uVar11 = *(undefined8 *)(param_2 + 0x346);
    *(undefined8 *)(pcVar6 + 0x32e) = *(undefined8 *)(param_2 + 0x32e);
    *(undefined8 *)(pcVar6 + 0x346) = uVar11;
    *(undefined8 *)(pcVar6 + 0x33e) = uVar10;
    *(undefined8 *)(pcVar6 + 0x336) = uVar7;
    uVar7 = *(undefined8 *)(param_2 + 0x356);
    uVar10 = *(undefined8 *)(param_2 + 0x35e);
    uVar11 = *(undefined8 *)(param_2 + 0x366);
    *(undefined8 *)(pcVar6 + 0x34e) = *(undefined8 *)(param_2 + 0x34e);
    *(undefined8 *)(pcVar6 + 0x366) = uVar11;
    *(undefined8 *)(pcVar6 + 0x35e) = uVar10;
    *(undefined8 *)(pcVar6 + 0x356) = uVar7;
    *(undefined2 *)(pcVar6 + 0x36e) = *(undefined2 *)(param_2 + 0x36e);
    *(undefined2 *)(pcVar6 + 0x370) = *(undefined2 *)(param_2 + 0x370);
    pcVar6 = param_1 + (ulong)*(uint *)(param_1 + lVar9 + 0x15950) * 0x374;
    if (99 < *(uint *)(param_1 + lVar9 + 0x15950)) {
      pcVar6 = param_1;
    }
    *pcVar6 = '\x02';
    pcVar6 = param_1 + (ulong)*(uint *)(param_1 + lVar9 + 0x15950) * 0x374;
    if (99 < *(uint *)(param_1 + lVar9 + 0x15950)) {
      pcVar6 = param_1;
    }
  }
  else {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}

