
void FUN_009c3400(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_0492c9d0;
  param_1[0x9be] = &PTR_LAB_0492e268;
  piVar5 = (int *)(param_1 + 0x9c5);
  if (0 < *piVar5) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x9c6] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x9c7];
      param_1[0x9c7] = puVar4;
    } while (lVar6 < *piVar5);
  }
  *piVar5 = 0;
  param_1[0x553] = &PTR_LAB_0492e268;
  if (0 < *(int *)(param_1 + 0x55a)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x55b] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x55c];
      param_1[0x55c] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x55a));
  }
  puVar3 = PTR_DAT_04bb3380;
  param_1[0x50a] = &PTR_LAB_0492de10;
  *(undefined4 *)(param_1 + 0x55a) = 0;
  param_1[0x552] = 0;
  param_1[0x54d] = puVar3 + 0x10;
  if (0 < *(int *)(param_1 + 0x511)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x512] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x513];
      param_1[0x513] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x511));
  }
  *(undefined4 *)(param_1 + 0x511) = 0;
  param_1[0x403] = &PTR_LAB_0492d9b8;
  if (0 < *(int *)(param_1 + 0x40a)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x40b] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x40c];
      param_1[0x40c] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x40a));
  }
  *(undefined4 *)(param_1 + 0x40a) = 0;
  param_1[0x3c0] = &PTR_LAB_0492ccb0;
  if (0 < *(int *)(param_1 + 0x3c7)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x3c8] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x3c9];
      param_1[0x3c9] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x3c7));
  }
  *(undefined4 *)(param_1 + 0x3c7) = 0;
  param_1[0x37d] = &PTR_LAB_0492ccb0;
  if (0 < *(int *)(param_1 + 900)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x385] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x386];
      param_1[0x386] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 900));
  }
  *(undefined4 *)(param_1 + 900) = 0;
  param_1[0x33a] = &PTR_LAB_0492ccb0;
  if (0 < *(int *)(param_1 + 0x341)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x342] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x343];
      param_1[0x343] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x341));
  }
  *(undefined4 *)(param_1 + 0x341) = 0;
  param_1[0x31a] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x321)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x322] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x323];
      param_1[0x323] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x321));
  }
  *(undefined4 *)(param_1 + 0x321) = 0;
  param_1[0x2fa] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x301)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x302] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x303];
      param_1[0x303] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x301));
  }
  *(undefined4 *)(param_1 + 0x301) = 0;
  param_1[0x2da] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x2e1)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x2e2] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x2e3];
      param_1[0x2e3] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x2e1));
  }
  *(undefined4 *)(param_1 + 0x2e1) = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x2c2] = puVar3 + 0x10;
  param_1[0x2d9] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x2d3] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2a2] = &PTR_LAB_0492d108;
  param_1[0x2d4] = puVar1;
  param_1[0x2ce] = puVar1;
  param_1[0x2c8] = puVar1;
  if (0 < *(int *)(param_1 + 0x2a9)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x2aa] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x2ab];
      param_1[0x2ab] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x2a9));
  }
  *(undefined4 *)(param_1 + 0x2a9) = 0;
  param_1[0x282] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x289)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x28a] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x28b];
      param_1[0x28b] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x289));
  }
  *(undefined4 *)(param_1 + 0x289) = 0;
  param_1[0x262] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x269)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x26a] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x26b];
      param_1[0x26b] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x269));
  }
  puVar1 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x269) = 0;
  param_1[0x261] = 0;
  param_1[0x25c] = puVar1;
  param_1[0x256] = puVar1;
  param_1[0x250] = puVar1;
  param_1[0x24a] = puVar3 + 0x10;
  param_1[0x25b] = 0;
  param_1[0x255] = 0;
  param_1[0x24f] = 0;
  param_1[0x22a] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x231)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x232] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x233];
      param_1[0x233] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x231));
  }
  *(undefined4 *)(param_1 + 0x231) = 0;
  param_1[0x20a] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x211)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x212] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x213];
      param_1[0x213] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x211));
  }
  *(undefined4 *)(param_1 + 0x211) = 0;
  param_1[0x1ea] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x1f1)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x1f2] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[499];
      param_1[499] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x1f1));
  }
  *(undefined4 *)(param_1 + 0x1f1) = 0;
  param_1[0x1ca] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x1d1)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x1d2] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x1d3];
      param_1[0x1d3] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x1d1));
  }
  puVar1 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x1d1) = 0;
  param_1[0x1c9] = 0;
  param_1[0x1c4] = puVar1;
  param_1[0x1be] = puVar1;
  param_1[0x1b8] = puVar1;
  param_1[0x1b2] = puVar1;
  param_1[0x1ac] = puVar3 + 0x10;
  param_1[0x1c3] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1b7] = 0;
  param_1[0x1b1] = 0;
  param_1[0x185] = &PTR_LAB_0492d560;
  if (0 < *(int *)(param_1 + 0x18c)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x18d] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x18e];
      param_1[0x18e] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x18c));
  }
  *(undefined4 *)(param_1 + 0x18c) = 0;
  param_1[0x165] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x16c)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x16d] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x16e];
      param_1[0x16e] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x16c));
  }
  *(undefined4 *)(param_1 + 0x16c) = 0;
  param_1[0x145] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x14c)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x14d] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x14e];
      param_1[0x14e] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x14c));
  }
  puVar1 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x144] = 0;
  param_1[0x13f] = puVar1;
  param_1[0x139] = puVar1;
  param_1[0x133] = puVar1;
  param_1[0x12d] = puVar1;
  param_1[0x127] = puVar1;
  param_1[0x121] = puVar3 + 0x10;
  param_1[0x13e] = 0;
  param_1[0x138] = 0;
  param_1[0x132] = 0;
  param_1[300] = 0;
  param_1[0x126] = 0;
  param_1[0x101] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x108)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x109] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x10a];
      param_1[0x10a] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x108));
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0xe1] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0xe8)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0xe9] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0xea];
      param_1[0xea] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0xe8));
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xc1] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 200)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0xc9] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0xca];
      param_1[0xca] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 200));
  }
  puVar2 = puVar2 + 0x10;
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc0] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = puVar2;
  param_1[0xb5] = puVar2;
  param_1[0xaf] = puVar2;
  param_1[0xb4] = 0;
  param_1[0xa9] = puVar3;
  param_1[0xae] = 0;
  param_1[0xa3] = puVar3;
  param_1[0xa8] = 0;
  param_1[0x9d] = puVar3;
  param_1[0xa2] = 0;
  param_1[0x97] = puVar3;
  param_1[0x9c] = 0;
  param_1[0x91] = puVar3;
  param_1[0x96] = 0;
  param_1[0x71] = &PTR_LAB_0492d108;
  if (0 < *(int *)(param_1 + 0x78)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x79] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x7a];
      param_1[0x7a] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x6b] = puVar2;
  param_1[0x70] = 0;
  param_1[0x65] = puVar2;
  param_1[0x6a] = 0;
  param_1[0x5f] = puVar3;
  param_1[100] = 0;
  param_1[0x1c] = &PTR_LAB_0492ccb0;
  if (0 < *(int *)(param_1 + 0x23)) {
    lVar6 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x24] + lVar6 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar6 = lVar6 + 1;
      *puVar4 = param_1[0x25];
      param_1[0x25] = puVar4;
    } while (lVar6 < *(int *)(param_1 + 0x23));
  }
  *(undefined4 *)(param_1 + 0x23) = 0;
  return;
}

