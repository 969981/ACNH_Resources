
int FUN_028fdef0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb43c0;
  iVar7 = 0;
  uVar8 = 0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar1 = param_1 + ((long)((ulong)uVar8 << 0x20) >> 0x1d);
    uVar3 = FUN_0277d6c4(lVar1);
    lVar5 = *(long *)puVar2;
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        uVar4 = FUN_0277d7b4(lVar1,param_2);
        if ((uVar4 & 1) != 0) {
          return iVar7;
        }
        lVar5 = *(long *)puVar2;
      }
    }
    iVar7 = iVar7 + 1;
    uVar8 = uVar8 + 1;
    lVar6 = lVar5;
  } while (iVar7 != 0x40);
  return -1;
}

