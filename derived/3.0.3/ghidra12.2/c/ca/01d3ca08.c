
/* WARNING: Type propagation algorithm not settling */

void FUN_01d3ca08(long param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined1 local_4 [4];
  
  *(undefined4 *)(param_1 + 0x440) = 0;
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0xc0);
  }
  else {
    local_4[0] = 0;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0xc0);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x140);
  }
  else {
    local_4[0] = 1;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x140);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x1c0);
  }
  else {
    local_4[0] = 2;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x1c0);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x240);
  }
  else {
    local_4[0] = 3;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x240);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x2c0);
  }
  else {
    local_4[0] = 4;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x2c0);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x340);
  }
  else {
    local_4[0] = 5;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x340);
  }
  if ((bVar3 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x3c0);
  }
  else {
    local_4[0] = 6;
    FUN_01d3cca0(param_1,local_4);
    bVar3 = *(byte *)(param_1 + 0x3c0);
  }
  if ((bVar3 & 1) != 0) {
    local_4[0] = 7;
    FUN_01d3cca0(param_1,local_4);
  }
  puVar4 = PTR_DAT_04bb5038;
  puVar1 = (undefined2 *)(param_1 + 0x444);
  bVar3 = *PTR_DAT_04bb5038;
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *puVar2 = 0xffff;
  *(undefined1 *)(puVar2 + 1) = 0xff;
  bVar3 = puVar4[1];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[2];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[3];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[4];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[5];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[6];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  bVar3 = puVar4[7];
  bVar5 = 7 < bVar3;
  if (bVar5) {
    bVar3 = 0xff;
  }
  puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 2;
  if (bVar5) {
    puVar2 = puVar1;
  }
  *(undefined1 *)(puVar2 + 1) = 0xff;
  *puVar2 = 0xffff;
  *(undefined2 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
  if ((*(char *)(param_1 + 0x46e) != '\0') &&
     (*(undefined1 *)(param_1 + 0x46e) = 0, *(int *)(*(long *)(DAT_0537d558 + 0x10) + 0xaa0) != 3))
  {
    FUN_020e6f80(DAT_053e4ff0);
  }
  *(undefined2 *)(param_1 + 0x46f) = 0;
  return;
}

