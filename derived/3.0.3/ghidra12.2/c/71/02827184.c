
void FUN_02827184(long param_1,undefined1 *param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined **local_60;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  uint local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2 + 0xc0);
  lVar6 = *(long *)puVar2;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_50 = 0;
      local_58 = *(uint *)(param_2 + 0xc0);
      local_54 = *(undefined4 *)(param_2 + 0xc4);
      local_60 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2 + 0xc0);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
            local_50 = lVar6;
          }
        }
      }
      uVar4 = FUN_01b032d0(&local_60);
      if ((((uVar4 & 1) == 0) || (uVar4 = FUN_01b032d0(&local_60), (uVar4 & 1) == 0)) ||
         ((local_58 & 0x3000000) == 0)) {
        local_44 = 2;
        uVar4 = FUN_01b032d0(&local_60);
        if ((uVar4 & 1) != 0) {
          local_58 = CONCAT13(local_58._3_1_ & 0xfc | (byte)local_44 & 3,(undefined3)local_58);
        }
        local_44 = 0;
        uVar4 = FUN_01b032d0(&local_60);
        if ((uVar4 & 1) == 0) {
          bVar5 = local_58._3_1_;
        }
        else {
          uVar4 = FUN_01b032d0(&local_60);
          if (((uVar4 & 1) == 0) || ((local_58 & 0x3000000) == 0)) {
            bVar5 = local_58._3_1_ & 0xc3;
          }
          else {
            bVar5 = (byte)((local_44 & 0xf) << 2) | local_58._3_1_ & 0xc3;
          }
        }
        param_2[0xc3] = bVar5;
        *(undefined2 *)(param_2 + 0xc0) = (undefined2)local_58;
        param_2[0xc2] = local_58._2_1_;
        *(undefined4 *)(param_2 + 0xc4) = local_54;
      }
    }
  }
  *param_2 = 3;
  iVar1 = *(int *)(param_1 + 0x47420) + 1;
  *(int *)(param_1 + 0x47420) = iVar1;
  *(int *)(param_2 + 0x374) = iVar1;
  return;
}

