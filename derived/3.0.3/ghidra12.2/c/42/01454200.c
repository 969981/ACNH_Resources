
void FUN_01454200(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  puVar1 = PTR_DAT_04bb43c0;
  uStack_3c = *(undefined4 *)(param_1 + 0x2cc);
  local_38 = 0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *(undefined4 *)(param_1 + 0x2c8);
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
        local_38 = lVar4;
      }
    }
  }
  uVar3 = FUN_01aeb510(&local_48);
  *(undefined4 *)(param_1 + 0x540) = uVar3;
  return;
}

