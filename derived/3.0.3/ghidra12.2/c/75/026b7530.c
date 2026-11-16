
ulong FUN_026b7530(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb43c0;
  uVar6 = 0;
  lVar8 = param_1 + 0x1094c;
  do {
    if ((*(uint *)(param_3 + (uVar6 >> 5 & 0x7ffffff) * 4) >> (ulong)((uint)uVar6 & 0x1f) & 1) != 0)
    {
      lVar7 = *(long *)puVar1;
      uVar3 = FUN_0277d6c4(lVar8);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar4 = FUN_0277d7b4(lVar8,param_2), (uVar4 & 1) != 0)) goto LAB_026b7670;
      }
    }
    uVar6 = uVar6 + 1;
    lVar8 = lVar8 + 0x2c;
  } while (uVar6 != 0x18);
  uVar4 = 0xffffffffffffffe0;
  uVar6 = 0xffffffff;
  param_1 = param_1 + 0x10d6c;
  do {
    uVar3 = (int)uVar4 + 0x38;
    if ((*(uint *)(param_3 + (ulong)(uVar3 >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
      lVar8 = *(long *)puVar1;
      uVar3 = FUN_0277d6c4(param_1);
      if (*(long *)puVar1 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = FUN_0277d7b4(param_1,param_2), (uVar5 & 1) != 0)) {
          uVar6 = (ulong)((int)uVar4 + 0x38);
          goto LAB_026b7670;
        }
      }
    }
    bVar2 = 0xfffffffffffffffe < uVar4;
    uVar4 = uVar4 + 1;
    param_1 = param_1 + 0x2c;
    if (bVar2) {
LAB_026b7670:
      return uVar6 & 0xffffffff;
    }
  } while( true );
}

