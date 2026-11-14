
uint FUN_016dc334(void)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
      ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
       (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) ||
     (uVar3 = *(ushort *)PTR_DAT_04bb6298, uVar3 == 0xffff)) {
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
      return 0;
    }
    uVar3 = *(ushort *)PTR_DAT_04bb6298;
    if (uVar3 == 0xffff) {
      uVar2 = 0;
      goto LAB_016dc470;
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
    if (0xff < uVar3) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3)) {
      return 0;
    }
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar3 & 0xffffffffU) * 8);
  if (0xff < uVar3) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  uVar2 = *puVar1 >> 0x15 & 1;
LAB_016dc470:
  return uVar2 ^ 1;
}

