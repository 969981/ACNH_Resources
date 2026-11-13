
long FUN_01303600(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  FUN_0131aa38(param_1 + 0x38,param_2 + 0x38);
  lVar4 = 0;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  do {
    puVar1 = (undefined4 *)(param_2 + 0xf8 + lVar4);
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 0x10;
    *(undefined4 *)(lVar2 + 0xf8) = *puVar1;
    *(undefined4 *)(lVar2 + 0xfc) = puVar1[1];
    *(undefined4 *)(lVar2 + 0x100) = puVar1[2];
    *(undefined4 *)(lVar2 + 0x104) = puVar1[3];
  } while (lVar4 != 0x240);
  lVar4 = 0x338;
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0x578);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0x7b8);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0x9f8);
  *(undefined4 *)(param_1 + 0xa10) = *(undefined4 *)(param_2 + 0xa10);
  *(undefined4 *)(param_1 + 0xa14) = *(undefined4 *)(param_2 + 0xa14);
  *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_2 + 0xa20);
  *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_2 + 0xa24);
  lVar4 = 0xa28;
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0xc68);
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0xea8);
  lVar4 = 0xea8;
  do {
    puVar1 = (undefined4 *)(param_2 + lVar4);
    puVar3 = (undefined4 *)(param_1 + lVar4);
    lVar4 = lVar4 + 0x10;
    *puVar3 = *puVar1;
    puVar3[1] = puVar1[1];
    puVar3[2] = puVar1[2];
    puVar3[3] = puVar1[3];
  } while (lVar4 != 0x10e8);
  lVar4 = 0;
  do {
    puVar1 = (undefined4 *)(param_2 + 0x10e8 + lVar4);
    lVar2 = param_1 + lVar4;
    lVar4 = lVar4 + 0x10;
    *(undefined4 *)(lVar2 + 0x10e8) = *puVar1;
    *(undefined4 *)(lVar2 + 0x10ec) = puVar1[1];
    *(undefined4 *)(lVar2 + 0x10f0) = puVar1[2];
    *(undefined4 *)(lVar2 + 0x10f4) = puVar1[3];
  } while (lVar4 != 0x240);
  *(undefined4 *)(param_1 + 0x1338) = *(undefined4 *)(param_2 + 0x1338);
  *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_2 + 0x1348);
  *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_2 + 0x134c);
  *(undefined4 *)(param_1 + 0x1360) = *(undefined4 *)(param_2 + 0x1360);
  *(undefined4 *)(param_1 + 0x1370) = *(undefined4 *)(param_2 + 0x1370);
  *(undefined4 *)(param_1 + 0x1374) = *(undefined4 *)(param_2 + 0x1374);
  return param_1;
}

