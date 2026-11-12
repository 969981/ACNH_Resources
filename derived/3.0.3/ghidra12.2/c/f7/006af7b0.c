
undefined1  [16] FUN_006af7b0(char *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar6 = *(ushort *)(param_1 + 8);
  if ((uVar6 & 3) != 0) {
    return ZEXT816(0);
  }
  uVar7 = 2;
  if ((param_2 & 1) != 0) {
    uVar7 = 3;
  }
  uVar1 = uVar7;
  if (*param_1 != '\0') {
    uVar1 = uVar7 + 2;
  }
  uVar4 = 0;
  if (*param_1 != '\0') {
    uVar4 = (ulong)uVar7;
  }
  uVar7 = uVar1 + (byte)param_1[1];
  uVar2 = 0;
  if ((byte)param_1[1] != 0) {
    uVar2 = (ulong)(uVar1 << 8);
  }
  uVar1 = uVar7 + (byte)param_1[2];
  uVar3 = uVar2 | uVar4;
  if ((byte)param_1[2] != 0) {
    uVar3 = uVar2 | uVar4 | ((ulong)uVar7 & 0xff) << 0x10;
  }
  uVar7 = uVar1;
  if ((byte)param_1[3] != 0) {
    uVar7 = uVar1 + (uint)(byte)param_1[3] * 2;
    uVar3 = uVar3 | uVar1 * 0x1000000;
  }
  uVar1 = uVar7;
  if (param_1[4] != 0) {
    uVar1 = (uint)(byte)param_1[4] * 3 + uVar7;
    uVar3 = uVar3 | (ulong)(uVar7 & 0xff) << 0x20;
  }
  bVar5 = param_1[6];
  if (param_1[5] != 0) {
    uVar3 = uVar3 | (ulong)(uVar1 & 0xff) << 0x28;
    uVar1 = (uint)(byte)param_1[5] * 3 + uVar1;
  }
  uVar7 = uVar1;
  if (bVar5 != 0) {
    uVar7 = (uint)bVar5 * 3 + uVar1;
  }
  if (bVar5 != 0) {
    uVar3 = uVar3 | (ulong)(uVar1 & 0xff) << 0x30;
  }
  uVar1 = uVar7 + (uVar6 >> 2);
  uVar4 = 0;
  if (uVar6 != 0) {
    uVar4 = (ulong)uVar7 << 0x38;
  }
  uVar7 = uVar1;
  if ((param_3 & 0xffff) != 0) {
    uVar7 = param_3 & 0xffff;
  }
  uVar2 = 0;
  if ((byte)param_1[10] != 0) {
    uVar1 = uVar7 + (uint)(byte)param_1[10] * 2;
    uVar2 = (ulong)(uVar7 & 0xff);
  }
  auVar8._8_8_ = uVar2 | uVar1 << 0x10;
  auVar8._0_8_ = uVar4 | uVar3;
  return auVar8;
}

