
undefined8 FUN_026219b0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  local_48 = (undefined *)0x16a2;
  FUN_0277d4ac(&local_48);
  *param_2 = (undefined4)local_48;
  param_2[1] = local_48._4_4_;
  uVar2 = FUN_0261eff4(param_3);
  puVar1 = PTR_DAT_04bb43c0;
  if (((uVar2 & 0xffff) < 0x800) &&
     ((*(byte *)(param_1 + (((ulong)uVar2 & 0xfff8) >> 3) + 0xe98e0) >> (ulong)(uVar2 & 7) & 1) != 0
     )) {
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *param_2;
    uStack_3c = param_2[1];
    lVar5 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar5 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
           (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8), lVar5 != 0)) {
          local_38 = lVar5;
        }
      }
    }
    FUN_01b058c8(&local_48,(ulong)uVar2);
    uVar4 = 1;
    *param_2 = local_40;
    param_2[1] = uStack_3c;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

