
void FUN_03422930(undefined4 *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined *local_58;
  undefined4 local_50;
  uint local_4c;
  long local_48;
  undefined8 local_28;
  
  local_28 = 0x3920;
  FUN_0277d4ac(&local_28);
  puVar1 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = local_28._4_4_;
  local_50 = (undefined4)local_28;
  local_4c = local_28._4_4_;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(&local_28);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
        local_48 = lVar5;
      }
    }
  }
  if (param_2 < 0xdc) {
    uVar3 = FUN_01377be0(&local_58);
    if ((uVar3 & 1) == 0) {
      uVar4 = local_4c;
    }
    else {
      uVar3 = FUN_01377be0(&local_58);
      uVar4 = local_4c;
      if ((uVar3 & 1) != 0) {
        uVar4 = local_4c & 0xffff0000 | param_2;
      }
    }
  }
  *param_1 = local_50;
  param_1[1] = uVar4;
  return;
}

