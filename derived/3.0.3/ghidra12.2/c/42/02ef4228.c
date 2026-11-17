
void FUN_02ef4228(uint param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
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
  if (9 < *(uint *)(lVar4 + 0x224) || (1 << (ulong)(*(uint *)(lVar4 + 0x224) & 0x1f) & 0x3deU) == 0)
  {
    return;
  }
  uVar7 = *(ushort *)(lVar4 + 0x228);
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  uVar6 = 0x80;
  switch(uVar1) {
  case 2:
    uVar6 = 0x100;
  case 1:
    uVar7 = uVar7 & 0xfc7f;
    goto LAB_02ef4314;
  case 3:
    uVar6 = uVar7 & 0xfc7f;
    uVar7 = 0x200;
LAB_02ef4314:
    uVar7 = (uVar6 | uVar7) & 0xf3ff;
    break;
  case 4:
    uVar7 = uVar7 & 0xf07f | 0x400;
    break;
  case 5:
    uVar7 = uVar7 & 0xf07f | 0x800;
    break;
  default:
    uVar7 = uVar7 & 0xf07f;
    if (uVar1 == 6) {
      uVar7 = uVar7 | 0x1000;
      goto LAB_02ef4358;
    }
  }
  uVar7 = uVar7 & 0xefff;
LAB_02ef4358:
  *(ushort *)(lVar4 + 0x228) = uVar7;
  return;
}

