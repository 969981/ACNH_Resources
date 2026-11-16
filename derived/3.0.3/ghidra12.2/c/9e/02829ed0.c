
void FUN_02829ed0(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40;
  undefined4 local_38;
  uint local_34;
  
  if (((*PTR_DAT_04bb8aa8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar3 != 0))
  {
    FUN_00dd5f80(PTR_DAT_04bb8aa0);
    __cxa_guard_release(PTR_DAT_04bb8aa8);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
    uVar5 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar5 * 4) == 0x36) goto LAB_02829f3c;
      uVar5 = uVar5 + 1;
    } while (*(uint *)PTR_DAT_04bb8aa0 != uVar5);
  }
  uVar5 = 0;
LAB_02829f3c:
  local_38 = (undefined4)uVar5;
  FUN_028285c8(param_1,param_2,&local_38,param_3);
  puVar1 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *(uint *)(param_1 + 4);
  uStack_44 = *(undefined4 *)(param_1 + 8);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4((uint *)(param_1 + 4));
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
        local_40 = lVar6;
      }
    }
  }
  uVar5 = FUN_01b032d0(&local_50);
  if (((uVar5 & 1) != 0) &&
     ((uVar5 = FUN_01b032d0(&local_50), (uVar5 & 1) == 0 || ((local_48 & 0x3000000) == 0)))) {
    local_34 = 3;
    uVar5 = FUN_01b032d0(&local_50);
    if ((uVar5 & 1) != 0) {
      local_48 = CONCAT13(local_48._3_1_ & 0xfc | (byte)local_34 & 3,(undefined3)local_48);
    }
    local_34 = 0xb;
    uVar5 = FUN_01b032d0(&local_50);
    if ((uVar5 & 1) != 0) {
      uVar5 = FUN_01b032d0(&local_50);
      if (((uVar5 & 1) == 0) || ((local_48 & 0x3000000) == 0)) {
        bVar4 = local_48._3_1_ & 0xc3;
      }
      else {
        bVar4 = (byte)((local_34 & 0xf) << 2) | local_48._3_1_ & 0xc3;
      }
      local_48 = CONCAT13(bVar4,(undefined3)local_48);
    }
    uVar5 = FUN_01b032d0(&local_50);
    if (((((uVar5 & 1) != 0) && (uVar5 = FUN_01b032d0(&local_50), (uVar5 & 1) != 0)) &&
        ((local_48 & 0x3000000) != 0)) && (uVar5 = FUN_01b032d0(&local_50), (uVar5 & 1) != 0)) {
      local_48 = local_48 | 0x40000000;
    }
  }
  *(uint *)(param_2 + 0xc0) = local_48;
  *(undefined4 *)(param_2 + 0xc4) = uStack_44;
  return;
}

