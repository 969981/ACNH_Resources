
/* WARNING: Removing unreachable block (ram,0x0285e8dc) */
/* WARNING: Removing unreachable block (ram,0x0285e7dc) */
/* WARNING: Removing unreachable block (ram,0x0285e78c) */
/* WARNING: Removing unreachable block (ram,0x0285e68c) */
/* WARNING: Removing unreachable block (ram,0x0285e63c) */
/* WARNING: Removing unreachable block (ram,0x0285e53c) */
/* WARNING: Removing unreachable block (ram,0x0285e620) */
/* WARNING: Removing unreachable block (ram,0x0285e668) */
/* WARNING: Removing unreachable block (ram,0x0285e770) */
/* WARNING: Removing unreachable block (ram,0x0285e7b8) */
/* WARNING: Removing unreachable block (ram,0x0285e8c0) */
/* WARNING: Removing unreachable block (ram,0x0285e908) */

void FUN_0285e508(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = FUN_020fd7d8(param_2);
  param_1[2] = uVar3;
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 4) = uVar1;
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    *(undefined8 *)(param_1 + 0x14) = uVar5;
  }
  param_1[0x20] = param_2[0x20];
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  param_1[0x26] = param_2[0x26];
  param_1[0x27] = param_2[0x27];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  param_1[0x36] = param_2[0x36];
  param_1[0x37] = param_2[0x37];
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  param_1[0xb4] = param_2[0xb4];
  if ((byte)param_2[0xb7] < 10) {
    bVar4 = param_2[0xb7];
  }
  else {
    bVar4 = 10;
  }
  param_1[0xb7] = bVar4;
  param_1[0xba] = param_2[0xba];
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  uVar3 = FUN_020fd7d8(param_2 + 0x3c);
  param_1[0x3e] = uVar3;
  if (*(int *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar5;
  }
  param_1[0x5c] = param_2[0x5c];
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  param_1[0x62] = param_2[0x62];
  param_1[99] = param_2[99];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_2 + 0x68);
  param_1[0x6a] = param_2[0x6a];
  param_1[0x6b] = param_2[0x6b];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined2 *)(param_1 + 0x70) = *(undefined2 *)(param_2 + 0x70);
  param_1[0x72] = param_2[0x72];
  param_1[0x73] = param_2[0x73];
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  param_1[0xb5] = param_2[0xb5];
  if ((byte)param_2[0xb8] < 10) {
    uVar3 = param_2[0xb8];
  }
  else {
    uVar3 = 10;
  }
  param_1[0xb8] = uVar3;
  param_1[0xbb] = param_2[0xbb];
  param_1[0x78] = param_2[0x78];
  param_1[0x79] = param_2[0x79];
  uVar3 = FUN_020fd7d8(param_2 + 0x78);
  param_1[0x7a] = uVar3;
  if (*(int *)(param_2 + 0x7c) == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x7c);
    uVar2 = *(undefined8 *)(param_2 + 0x84);
    uVar5 = *(undefined8 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined8 *)(param_1 + 0x7c) = uVar1;
    *(undefined8 *)(param_1 + 0x84) = uVar2;
    *(undefined8 *)(param_1 + 0x8c) = uVar5;
  }
  param_1[0x98] = param_2[0x98];
  *(undefined2 *)(param_1 + 0x9c) = *(undefined2 *)(param_2 + 0x9c);
  param_1[0x9e] = param_2[0x9e];
  param_1[0x9f] = param_2[0x9f];
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined2 *)(param_1 + 0xa4) = *(undefined2 *)(param_2 + 0xa4);
  param_1[0xa6] = param_2[0xa6];
  param_1[0xa7] = param_2[0xa7];
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined2 *)(param_1 + 0xac) = *(undefined2 *)(param_2 + 0xac);
  param_1[0xae] = param_2[0xae];
  param_1[0xaf] = param_2[0xaf];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0xb6] = param_2[0xb6];
  if ((byte)param_2[0xb9] < 10) {
    uVar3 = param_2[0xb9];
  }
  else {
    uVar3 = 10;
  }
  param_1[0xb9] = uVar3;
  param_1[0xbc] = param_2[0xbc];
  return;
}

