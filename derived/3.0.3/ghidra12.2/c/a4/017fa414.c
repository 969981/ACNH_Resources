
bool FUN_017fa414(long param_1)

{
  undefined *puVar1;
  short sVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1 + 0xb4);
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(undefined4 *)(param_1 + 0xb4);
      uStack_4c = *(undefined4 *)(param_1 + 0xb8);
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1 + 0xb4);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
            local_48 = lVar4;
          }
        }
      }
      sVar2 = FUN_01b020f0(&local_58);
      return sVar2 == 0xb5;
    }
  }
  return false;
}

