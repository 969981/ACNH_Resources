
undefined4 FUN_01dbf2fc(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 local_34;
  undefined4 **local_30;
  undefined4 **ppuStack_28;
  undefined4 *local_20;
  undefined4 ***local_18;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x380);
  uVar3 = uVar1 - 0xf;
  if ((uVar3 < 0xf) && ((0x5251U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
    return *(undefined4 *)(&DAT_04178b50 + (long)(int)uVar3 * 4);
  }
  if ((uVar1 & 0xfffffffd) == 0x20) {
    return 3;
  }
  if (uVar1 == 0x26) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x388);
    uVar3 = uVar1 - 0xf;
    if ((uVar3 < 0xf) && ((0x5251U >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
      return *(undefined4 *)(&DAT_04178b50 + (long)(int)uVar3 * 4);
    }
    if ((uVar1 & 0xfffffffd) == 0x20) {
      return 3;
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x60);
    if (0xb < iVar2) {
      return 5;
    }
    if ((5 < iVar2) && (iVar2 != 0xb)) {
      return 4;
    }
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x8b34a75) {
      return 6;
    }
  }
  local_20 = &local_34;
  local_30 = &local_20;
  local_34 = 0;
  uVar1 = *(uint *)(*(long *)PTR_DAT_04bb3728 + 0xb0);
  ppuStack_28 = local_30;
  if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_18 = &local_30;
  uVar4 = (*(code *)(&PTR_LAB_04a431b8)[uVar1])(&local_18,*(long *)PTR_DAT_04bb3728 + 0x58);
  if ((uVar4 & 1) == 0) {
    local_34 = 0;
  }
  return local_34;
}

