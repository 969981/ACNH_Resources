
uint FUN_036e58b0(long param_1)

{
  ushort uVar1;
  int iVar2;
  
  if (DAT_05ab8198 != (ushort *)0x0) {
    uVar1 = *DAT_05ab8198;
    if ((uVar1 & 1) != 0) {
      if (((uVar1 ^ 0xffff) & 3) == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = (uint)(((uVar1 ^ 0xffff) & 5) == 0) << 1;
      }
      goto LAB_036e58cc;
    }
  }
  iVar2 = *(int *)(param_1 + 0x10);
LAB_036e58cc:
  if (iVar2 == 2) {
    return *(uint *)(param_1 + 0xd8);
  }
  if (iVar2 == 1) {
    return (uint)*(ushort *)(param_1 + 0x2e);
  }
  return 0xffff;
}

