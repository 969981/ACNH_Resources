
uint FUN_01afccf0(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  if (param_2 == 0x1618) {
    iVar4 = FUN_01aee3b4();
    return (uint)(iVar4 - 0xfU < 2);
  }
  if (param_2 == 0x3805) {
    iVar4 = FUN_01aee3b4();
    uVar5 = 0;
    if (4 < iVar4 - 10U) {
      uVar5 = 5;
    }
    return uVar5;
  }
  if (param_2 != 0x315a) {
    return 0;
  }
  puVar6 = *(uint **)(param_1 + 0x10);
  if (((puVar6 == (uint *)0x0) || (uVar5 = *puVar6, uVar5 == 0)) || (puVar6 == (uint *)(ulong)uVar5)
     ) goto LAB_01afce84;
  puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
  uVar5 = *puVar7;
  if (uVar5 == 0) goto LAB_01afce84;
  uVar8 = puVar7[1];
  if ((uVar8 == 0) || ((ulong)(ushort)puVar7[2] == 0)) {
LAB_01afcdf0:
    uVar8 = DAT_05326ec0;
  }
  else {
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) goto LAB_01afcdf0;
    uVar2 = 0;
    if ((ulong)uVar8 != 0) {
      uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar8);
    }
    if (uVar5 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar8 = *(uint *)PTR_DAT_04bc00c8;
    if ((uVar2 < uVar8) &&
       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 0xa4))
    goto LAB_01afce5c;
  }
  uVar2 = puVar7[1];
  if ((uVar2 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 != 0) {
      uVar3 = 0;
      if ((ulong)uVar2 != 0) {
        uVar3 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar2);
      }
      if (uVar5 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if ((uVar3 < uVar8) && (*(short *)(DAT_05326ec8 + (long)(int)uVar3 * 2) == 0xa6)) {
LAB_01afce5c:
        iVar4 = FUN_01aee3b4();
        if (iVar4 - 10U < 8) {
          return *(uint *)(&DAT_04057fe0 + (long)(int)(iVar4 - 10U) * 4);
        }
        return 3;
      }
    }
  }
LAB_01afce84:
  iVar4 = FUN_01aee3b4();
  uVar5 = 3;
  if (iVar4 - 0xfU < 2) {
    uVar5 = 4;
  }
  return uVar5;
}

