
byte FUN_01a45f64(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
        local_40 = lVar4;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 8);
  uVar3 = FUN_01aee3b4(&local_50);
  if (uVar3 < 0x1c) {
    uVar1 = uVar3 + 7;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    if ((uint)((int)uVar1 >> 3) < 4) {
      return *(byte *)(lVar4 + (ulong)(uint)((int)uVar1 >> 3)) >> (ulong)(uVar3 & 7) & 1;
    }
  }
  return 0;
}

