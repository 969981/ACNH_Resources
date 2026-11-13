
void FUN_014438a4(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
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
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar1 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1 + 0x2c8);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
        local_38 = lVar4;
      }
    }
  }
  bVar2 = FUN_01aeaed0(&local_48);
  *(byte *)(param_1 + 0x540) = bVar2 & 1;
  return;
}

