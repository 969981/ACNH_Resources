
void FUN_036a02c0(int *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = 0;
  lVar4 = 5;
  do {
    puVar3 = (undefined8 *)((long)param_1 + lVar2);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[0x1f] = puVar3 + 0x20;
    puVar3[0x1e] = puVar3 + 0x1f;
    puVar3[0x1d] = puVar3 + 0x1e;
    puVar3[0x1c] = puVar3 + 0x1d;
    puVar3[0x1b] = puVar3 + 0x1c;
    puVar3[0x1a] = puVar3 + 0x1b;
    puVar3[0x19] = puVar3 + 0x1a;
    puVar3[0x18] = puVar3 + 0x19;
    puVar3[0x17] = puVar3 + 0x18;
    puVar3[0x16] = puVar3 + 0x17;
    puVar3[0x15] = puVar3 + 0x16;
    puVar3[0x14] = puVar3 + 0x15;
    puVar3[0x13] = puVar3 + 0x14;
    puVar3[0x12] = puVar3 + 0x13;
    puVar3[0x11] = puVar3 + 0x12;
    puVar3[0x10] = puVar3 + 0x11;
    puVar3[0xf] = puVar3 + 0x10;
    puVar3[0xe] = puVar3 + 0xf;
    puVar3[0xd] = puVar3 + 0xe;
    puVar3[0xc] = puVar3 + 0xd;
    puVar3[0xb] = puVar3 + 0xc;
    puVar3[10] = puVar3 + 0xb;
    puVar3[9] = puVar3 + 10;
    puVar3[0x20] = puVar3 + 0x21;
    puVar3[0x21] = puVar3 + 0x22;
    puVar3[0x22] = puVar3 + 0x23;
    puVar3[0x23] = puVar3 + 0x24;
    puVar3[8] = puVar3 + 9;
    puVar3[0x24] = puVar3 + 0x25;
    puVar3[0x25] = puVar3 + 0x26;
    puVar3[0x26] = puVar3 + 0x27;
    puVar3[0x27] = puVar3 + 0x28;
    puVar3[7] = puVar3 + 8;
    puVar3[0x28] = puVar3 + 0x29;
    puVar3[0x29] = puVar3 + 0x2a;
    puVar3[0x2a] = puVar3 + 0x2b;
    puVar3[0x2b] = puVar3 + 0x2c;
    puVar3[6] = puVar3 + 7;
    puVar3[0x2c] = puVar3 + 0x2d;
    puVar3[0x2d] = puVar3 + 0x2e;
    puVar3[0x2e] = puVar3 + 0x2f;
    puVar3[0x2f] = puVar3 + 0x30;
    puVar3[5] = puVar3 + 6;
    puVar3[0x30] = puVar3 + 0x31;
    puVar3[0x31] = puVar3 + 0x32;
    puVar3[0x32] = puVar3 + 0x33;
    puVar3[0x33] = puVar3 + 0x34;
    puVar3[0x34] = puVar3 + 0x35;
    puVar3[0x35] = 0;
    puVar5 = puVar3 + 4;
    *puVar5 = puVar3 + 5;
    lVar1 = (long)param_1 + lVar2 + 0x1b0;
    puVar3[2] = puVar5;
    puVar3[3] = puVar5;
    if (lVar1 != 0) {
      *puVar3 = 0x3200000000;
      puVar3[1] = lVar1;
    }
    lVar4 = lVar4 + -1;
    lVar2 = lVar2 + 0x340;
  } while (lVar4 != 0);
  param_1[0x411] = 0;
  *(undefined1 *)(param_1 + 0x410) = 0;
  if (0 < *param_1) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 4);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 4) = puVar5;
      puVar3 = puVar5;
    } while (lVar2 < *param_1);
  }
  *param_1 = 0;
  if (0 < param_1[0xd0]) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0xd4);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xd2) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 0xd4) = puVar5;
      puVar3 = puVar5;
    } while (lVar2 < param_1[0xd0]);
  }
  param_1[0xd0] = 0;
  if (0 < param_1[0x1a0]) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x1a4);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x1a2) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 0x1a4) = puVar5;
      puVar3 = puVar5;
    } while (lVar2 < param_1[0x1a0]);
  }
  param_1[0x1a0] = 0;
  if (0 < param_1[0x270]) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x274);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x272) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 0x274) = puVar5;
      puVar3 = puVar5;
    } while (lVar2 < param_1[0x270]);
  }
  param_1[0x270] = 0;
  if (0 < param_1[0x340]) {
    lVar2 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x344);
    do {
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x342) + lVar2 * 8);
      lVar2 = lVar2 + 1;
      *puVar5 = puVar3;
      *(undefined8 **)(param_1 + 0x344) = puVar5;
      puVar3 = puVar5;
    } while (lVar2 < param_1[0x340]);
  }
  param_1[0x340] = 0;
  return;
}

