
uint FUN_002c40a0(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  
  puVar6 = PTR_DAT_04bce1e8;
  puVar5 = PTR_DAT_04bce1e0;
  puVar4 = PTR_DAT_04bce1d8;
  iVar8 = 100;
  do {
    uVar2 = *(ushort *)puVar5;
    uVar3 = *(ushort *)puVar6;
    uVar7 = FUN_0028d5ac(&DAT_04c612a0);
    uVar1 = (uint)uVar2 + (int)((ulong)((uint)uVar3 - (uint)uVar2) * (uVar7 & 0xffffffff) >> 0x20);
    if ((uint)*(ushort *)puVar4 != (uVar1 & 0xffff) && (uVar1 & 0xffff) != 0) {
      return uVar1;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return 0;
}

