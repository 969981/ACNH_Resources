
undefined8 FUN_01b489c8(long param_1,uint param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x5c) == '\0' && *(char *)(param_1 + 0xb8) == '\0') {
    if (*(char *)(param_1 + 0xcc) == '\0') {
      uVar7 = FUN_027aef1c(param_1,0);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
    }
    else {
      uVar5 = FUN_027af0b0(param_1,0);
      uVar4 = (uint)*(ushort *)(param_1 + 0x36e) - (uint)*(ushort *)(DAT_05336138 + 0x1f8);
      if (*(uint *)(DAT_05336138 + 0x1d8) <= uVar4) {
        return 0;
      }
      if (*(long *)(*(long *)(DAT_05336138 + 0x1e0) + (long)(int)uVar4 * 8) == 0 ||
          ((uVar5 ^ 0xffffffff) & 1) != 0) {
        return 0;
      }
    }
    lVar6 = FUN_02831c80(param_3 + 0x15ae0,param_1);
    if ((lVar6 != 0) && ((param_2 & 1) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bb32e8;
      uVar3 = *(ushort *)(lVar8 + 0x4060);
      bVar1 = *(byte *)(lVar8 + 0x4062);
      bVar2 = *(byte *)(lVar8 + 0x4063);
      uVar7 = nn::time::IsValidDate((uint)uVar3,(uint)bVar1,(uint)bVar2);
      if ((uVar7 & 1) == 0) {
        return 1;
      }
      *(ushort *)(lVar6 + 0xbc) = uVar3;
      *(byte *)(lVar6 + 0xbe) = bVar1;
      *(byte *)(lVar6 + 0xbf) = bVar2;
      return 1;
    }
  }
  else {
    lVar6 = FUN_01b48af0(param_1,param_2 & 1,param_3);
  }
  if (lVar6 == 0) {
    return 0;
  }
  return 1;
}

