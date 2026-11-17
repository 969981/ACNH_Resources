
void FUN_02ef413c(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  byte local_8 [4];
  byte local_4 [4];
  
  pbVar2 = (byte *)(DAT_056b6f18 + 0xef4);
  if (DAT_056b6f18 == 0) {
    uVar3 = 0xffffffff;
    pbVar2 = PTR_DAT_04bb32e0;
  }
  else {
    uVar3 = *(undefined4 *)(DAT_056b6f18 + 0xef8);
  }
  bVar5 = *pbVar2;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  local_4[0] = bVar5;
  lVar4 = FUN_02ef3b00(uVar3,local_4);
  if ((lVar4 == 0) && (local_8[0] = bVar5, lVar4 = FUN_02ef3c90(local_8), lVar4 == 0)) {
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x210);
  if (lVar4 == 0) {
    return;
  }
  if (9 < *(uint *)(lVar4 + 0x224) || (1 << (ulong)(*(uint *)(lVar4 + 0x224) & 0x1f) & 0x3ceU) == 0)
  {
    return;
  }
  uVar1 = 0;
  if (param_1 < 3) {
    uVar1 = param_1;
  }
  if (uVar1 == 1) {
    uVar6 = *(ushort *)(lVar4 + 0x228) | 0x20;
  }
  else {
    uVar6 = *(ushort *)(lVar4 + 0x228) & 0xffdf;
    if (uVar1 == 2) {
      uVar6 = uVar6 | 0x40;
      goto LAB_02ef4214;
    }
  }
  uVar6 = uVar6 & 0xffbf;
LAB_02ef4214:
  *(ushort *)(lVar4 + 0x228) = uVar6;
  return;
}

