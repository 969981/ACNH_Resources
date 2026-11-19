
void FUN_03c83bf0(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  long lVar6;
  ushort uVar7;
  
  FUN_003878f0(param_1,0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_5,param_2,param_3,
               param_4);
  uVar3 = *(ushort *)((long)param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  uVar4 = uVar3 >> 2 & 1;
  *param_1 = &DAT_04b734b0;
  *(ushort *)((long)param_1 + 0x114) = uVar3 & 0xffbf;
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
  if (param_1[0x21] != lVar6) {
    uVar4 = 1;
  }
  uVar7 = 4;
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  *(ushort *)((long)param_1 + 0x114) = uVar7 | uVar3 & 0xffbb;
  if (param_1[0x21] != lVar6) {
    param_1[0x21] = lVar6;
  }
  lVar6 = FUN_0037e610(param_1,"LetterAnimOn");
  if (lVar6 != 0) {
    *(long *)(param_5 + 0x18) = *(long *)(param_5 + 0x18) + 10;
  }
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *param_1 = &PTR_FUN_04b84810;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = param_1 + 0x2c;
  param_1[0x2d] = param_1 + 0x2c;
  lVar6 = param_2;
  if ((param_3 != 0) &&
     (lVar6 = param_3, *(short *)(param_4 + 0x40) != 0 || *(short *)(param_4 + 0x44) != 0)) {
    lVar6 = param_2;
  }
  bVar2 = *(byte *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar6 + 0x5e) & 1;
  *(byte *)(param_1 + 0x30) = bVar2 & 0xfe | bVar1;
  bVar1 = bVar1 | (*(byte *)(lVar6 + 0x5e) >> 2 & 1) << 1;
  *(byte *)(param_1 + 0x30) = bVar2 & 0xfc | bVar1;
  bVar1 = bVar1 | (*(byte *)(lVar6 + 0x5e) >> 3 & 1) << 2;
  *(byte *)(param_1 + 0x30) = bVar2 & 0xf8 | bVar1;
  bVar5 = *(byte *)(lVar6 + 0x5e) & 0x10;
  *(byte *)(param_1 + 0x30) = bVar5 | bVar2 & 0xe0 | bVar1 | 8;
  bVar5 = bVar5 | bVar1 | 8 | (byte)((*(ushort *)(lVar6 + 0x5e) >> 10 & 1) << 5);
  *(byte *)(param_1 + 0x30) = bVar2 & 0xc0 | bVar5;
  *(byte *)(param_1 + 0x30) = bVar2 & 0x80 | bVar5 | (byte)(*(ushort *)(lVar6 + 0x5e) >> 5) & 0x40;
  return;
}

