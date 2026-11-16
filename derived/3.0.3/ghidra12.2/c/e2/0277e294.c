
uint FUN_0277e294(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = *(ushort *)(lVar4 + 0x1f8);
    uVar1 = *(uint *)(lVar4 + 0x1d8);
    uVar3 = (uVar3 & 0xffff) - (uint)uVar2;
    if ((uVar3 < uVar1) &&
       (lVar4 = *(long *)(lVar4 + 0x1e0), *(long *)(lVar4 + (long)(int)uVar3 * 8) != 0)) {
      local_38 = 0;
      local_40 = *param_1;
      uStack_3c = param_1[1];
      local_48 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_40);
      uVar3 = (uVar3 & 0xffff) - (uint)uVar2;
      if ((uVar3 < uVar1) && (*(long *)(lVar4 + (long)(int)uVar3 * 8) != 0)) {
        lVar4 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
          local_38 = lVar4;
        }
      }
      uVar3 = FUN_01ae59b0(&local_48);
      goto LAB_0277e37c;
    }
  }
  uVar3 = 0;
LAB_0277e37c:
  return uVar3 & 1;
}

