
undefined1 * FUN_027adf94(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  cVar2 = param_2[0x5c];
  param_1[0x5c] = cVar2;
  if (cVar2 == '\x02') {
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x14) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x1c);
    uVar5 = *(undefined8 *)(param_2 + 0x24);
    uVar6 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x24) = uVar5;
    *(undefined8 *)(param_1 + 0x2c) = uVar6;
  }
  else if (cVar2 == '\x01') {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    uVar3 = FUN_020fd7d8();
    param_1[6] = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    uVar6 = *(undefined8 *)(param_2 + 8);
    param_1[0x20] = param_2[0x20];
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined8 *)(param_1 + 8) = uVar6;
  }
  else if (cVar2 == '\0') {
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    param_1[0x1c] = param_2[0x1c];
    *(undefined8 *)(param_1 + 4) = uVar4;
    *(undefined8 *)(param_1 + 0xc) = uVar5;
    *(undefined8 *)(param_1 + 0x14) = uVar6;
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    uVar1 = *(uint *)(param_2 + 0x38);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0x38) = uVar1;
  }
  cVar2 = param_2[0xb8];
  param_1[0xb8] = cVar2;
  if (cVar2 == '\x02') {
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar5 = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = uVar5;
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x78);
    uVar5 = *(undefined8 *)(param_2 + 0x80);
    uVar6 = *(undefined8 *)(param_2 + 0x88);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    *(undefined8 *)(param_1 + 0x88) = uVar6;
  }
  else if (cVar2 == '\x01') {
    param_1[0x60] = param_2[0x60];
    param_1[0x61] = param_2[0x61];
    uVar3 = FUN_020fd7d8();
    param_1[0x62] = uVar3;
    uVar4 = *(undefined8 *)(param_2 + 0x6c);
    uVar5 = *(undefined8 *)(param_2 + 0x74);
    uVar3 = param_2[0x7c];
    *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
    param_1[0x7c] = uVar3;
    *(undefined8 *)(param_1 + 0x74) = uVar5;
    *(undefined8 *)(param_1 + 0x6c) = uVar4;
  }
  else if (cVar2 == '\0') {
    uVar4 = *(undefined8 *)(param_2 + 0x60);
    uVar5 = *(undefined8 *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    param_1[0x78] = param_2[0x78];
    *(undefined8 *)(param_1 + 0x60) = uVar4;
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    uVar4 = *(undefined8 *)(param_2 + 0x7c);
    uVar5 = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
    *(undefined8 *)(param_1 + 0x84) = uVar5;
    *(undefined8 *)(param_1 + 0x7c) = uVar4;
    uVar1 = *(uint *)(param_2 + 0x94);
    if (1 < uVar1) {
      uVar1 = 0;
    }
    *(uint *)(param_1 + 0x94) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_2 + 0xc0);
  param_1[0xc2] = param_2[0xc2];
  param_1[0xc3] = param_2[0xc3];
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  param_1[200] = param_2[200];
  return param_1;
}

