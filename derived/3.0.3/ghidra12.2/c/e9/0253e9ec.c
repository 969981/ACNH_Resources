
bool FUN_0253e9ec(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(DAT_04da6480 + 0x4060);
  uVar1 = (uint)uVar7 >> 0x10 & 0xff;
  uVar5 = (uint)((ulong)uVar7 >> 0x18) & 0xff;
  if (uVar1 == 1) {
    bVar2 = false;
    bVar3 = false;
    if (uVar5 == 1) {
      iVar6 = (int)(char)((ulong)uVar7 >> 0x20);
      bVar3 = SBORROW4(iVar6,2);
      bVar2 = iVar6 + -2 < 0;
    }
    return bVar2 != bVar3;
  }
  if (uVar1 != 0xc) {
    return false;
  }
  bVar2 = false;
  bVar3 = true;
  bVar4 = false;
  if (uVar5 == 0x1f && ((uint)((ulong)uVar7 >> 0x20) & 0xff) == 0x17) {
    iVar6 = (int)(char)((ulong)uVar7 >> 0x28);
    bVar4 = SBORROW4(iVar6,0x38);
    bVar2 = iVar6 + -0x38 < 0;
    bVar3 = iVar6 == 0x38;
  }
  return !bVar3 && bVar2 == bVar4;
}

