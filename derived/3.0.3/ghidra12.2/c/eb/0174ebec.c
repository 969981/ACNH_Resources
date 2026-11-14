
ulong FUN_0174ebec(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1 + 0x298);
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_50 = *(undefined4 *)(param_1 + 0x298);
      local_48 = 0;
      uStack_4c = *(undefined4 *)(param_1 + 0x29c);
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1 + 0x298);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), lVar9 != 0)) {
            local_48 = lVar9;
          }
        }
      }
      iVar4 = FUN_01afcfa0(&local_58);
      if ((iVar4 == 0) || (puVar6 = (ushort *)FUN_01afd600(&local_58), puVar6 == (ushort *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar1 = *puVar6 >> 3 & 3;
        uVar8 = 0;
        if (uVar1 != 3) {
          uVar8 = uVar1;
        }
      }
      if (uVar8 == 0) {
        uVar7 = FUN_01ad7260(&local_58);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
        puVar6 = (ushort *)FUN_01afd600(&local_58);
        if (puVar6 == (ushort *)0x0) {
          return 0;
        }
        uVar3 = *puVar6 & 7;
        uVar5 = FUN_01ad7260(&local_58);
        if (uVar5 <= uVar3) {
          uVar3 = 0;
        }
        return (ulong)uVar3;
      }
    }
  }
  return 0;
}

