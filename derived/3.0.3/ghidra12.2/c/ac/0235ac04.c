
ushort FUN_0235ac04(undefined4 param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68,param_1), iVar5 != 0))
  {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68,param_1);
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    puVar6 = &DAT_054f0b60;
  }
  else {
    lVar1 = *(long *)PTR_DAT_04bb4718 + 0x20;
    puVar6 = (uint *)FUN_0250f090(lVar1,param_1);
    if (puVar6 == (uint *)0x0) {
      puVar7 = (uint *)FUN_0250f090(lVar1,0);
      puVar6 = &DAT_054f0b60;
      if (puVar7 != (uint *)0x0) {
        puVar6 = puVar7;
      }
    }
  }
  uVar3 = *puVar6;
  if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    if ((*puVar7 != 0) && ((uVar3 = puVar7[1], uVar3 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc2ff8) &&
           (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc2ff8 + 8) + (long)(int)uVar2 * 2), uVar4 < 2))
        {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

