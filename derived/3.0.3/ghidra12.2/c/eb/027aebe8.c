
byte FUN_027aebe8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 0xc0);
  lVar4 = *(long *)puVar1;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = *(uint *)(param_1 + 0xc0);
      uStack_4c = *(undefined4 *)(param_1 + 0xc4);
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar4 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_1 + 0xc0);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
             (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
            local_48 = lVar4;
          }
        }
      }
      uVar3 = FUN_01b032d0(&local_58);
      if ((uVar3 & 1) != 0) {
        uVar3 = FUN_01b032d0(&local_58);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if ((local_50 & 0x3000000) == 0) {
          return 0;
        }
        uVar3 = FUN_01b032d0(&local_58);
        if (((uVar3 & 1) != 0) && (uVar3 = FUN_01b032d0(&local_58), (uVar3 & 1) != 0)) {
          uVar3 = FUN_01b032d0(&local_58);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          if ((local_50 & 0x3000000) == 0) {
            return 0;
          }
          return local_50._3_1_ >> 6 & 1;
        }
      }
    }
  }
  return 0;
}

