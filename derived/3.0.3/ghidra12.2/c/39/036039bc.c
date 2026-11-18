
void FUN_036039bc(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  param_1 = param_1 + param_2 * 8;
  plVar1 = (long *)(param_1 + 0x140);
  lVar6 = *(long *)(param_1 + 0x140);
  bVar2 = *(byte *)(lVar6 + 0x242);
  bVar3 = *(byte *)(lVar6 + 0x241);
  uVar7 = (uint)(bVar2 >> 4);
  *(byte *)(lVar6 + 0x242) = bVar2 & 0xfe | (byte)(param_3 & 1);
  uVar5 = bVar2 & 0xe | param_3 & 1;
  if ((bVar3 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  if ((bVar3 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar3 & 0x30;
  if (((bVar3 ^ 0xff) & 0xf) == 0 && (uVar5 & uVar7) != 0xf) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x242);
  bVar3 = *(byte *)(lVar6 + 0x241);
  *(byte *)(lVar6 + 0x242) = bVar2 & 0xfd | (byte)(param_3 & 2);
  uVar5 = bVar2 & 0xd | param_3 & 2;
  if ((bVar3 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = (uint)(bVar2 >> 4);
  if ((bVar3 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar3 & 0x30;
  if ((((bVar3 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x242);
  bVar3 = *(byte *)(lVar6 + 0x241);
  *(byte *)(lVar6 + 0x242) = bVar2 & 0xfb | (byte)(param_3 & 4);
  uVar5 = bVar2 & 0xb | param_3 & 4;
  if ((bVar3 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = (uint)(bVar2 >> 4);
  if ((bVar3 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar3 & 0x30;
  if ((((bVar3 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x242);
  bVar3 = *(byte *)(lVar6 + 0x241);
  *(byte *)(lVar6 + 0x242) = bVar2 & 0xf7 | (byte)(param_3 & 8);
  uVar5 = bVar2 & 7 | param_3 & 8;
  if ((bVar3 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = (uint)(bVar2 >> 4);
  if ((bVar3 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar3 & 0x30;
  if ((((bVar3 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x241);
  uVar5 = *(byte *)(lVar6 + 0x242) & 0xf;
  uVar7 = *(byte *)(lVar6 + 0x242) & 0xffffffef | param_3 & 0x10;
  *(char *)(lVar6 + 0x242) = (char)uVar7;
  if ((bVar2 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = uVar7 >> 4;
  if ((bVar2 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar2 & 0x30;
  if ((((bVar2 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  uVar5 = *(byte *)(lVar6 + 0x242) & 0xf;
  uVar7 = *(byte *)(lVar6 + 0x242) & 0xffffffdf | param_3 & 0x20;
  bVar2 = *(byte *)(lVar6 + 0x241);
  *(char *)(lVar6 + 0x242) = (char)uVar7;
  if ((bVar2 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = uVar7 >> 4;
  if ((bVar2 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar2 & 0x30;
  if ((((bVar2 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x241);
  uVar5 = *(byte *)(lVar6 + 0x242) & 0xf;
  uVar7 = *(byte *)(lVar6 + 0x242) & 0xffffffbf | param_3 & 0x40;
  *(char *)(lVar6 + 0x242) = (char)uVar7;
  if ((bVar2 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar7 = uVar7 >> 4;
  if ((bVar2 & 0x10) != 0) {
    uVar7 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar7) | bVar2 & 0x30;
  if ((((bVar2 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar7) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  lVar6 = *plVar1;
  bVar2 = *(byte *)(lVar6 + 0x241);
  uVar7 = param_3 & 0xffffff80 | *(byte *)(lVar6 + 0x242) & 0x7f;
  uVar5 = *(byte *)(lVar6 + 0x242) & 0xf;
  if ((bVar2 & 0x20) != 0) {
    uVar5 = 0xf;
  }
  uVar4 = uVar7 >> 4 & 0xf;
  *(char *)(lVar6 + 0x242) = (char)uVar7;
  if ((bVar2 & 0x10) != 0) {
    uVar4 = 0xffffffff;
  }
  *(byte *)(lVar6 + 0x241) = (byte)(uVar5 & uVar4) | bVar2 & 0x30;
  if ((((bVar2 ^ 0xff) & 0xf) == 0) && ((uVar5 & uVar4) != 0xf)) {
    *(byte *)(lVar6 + 0x281) = *(byte *)(lVar6 + 0x281) | 0x10;
  }
  return;
}

