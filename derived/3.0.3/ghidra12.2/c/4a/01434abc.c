
undefined4 FUN_01434abc(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x2cc);
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x2c8);
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
        local_38 = lVar5;
      }
    }
  }
  uVar4 = FUN_01ae6c68(&local_48);
  if (*(uint *)(param_1 + 0x280) < 4) {
    puVar1 = &DAT_041028b0;
    if ((uVar4 & 1) == 0) {
      puVar1 = &DAT_041024f0;
    }
    uVar3 = *(undefined4 *)(puVar1 + (long)(int)*(uint *)(param_1 + 0x280) * 4);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

