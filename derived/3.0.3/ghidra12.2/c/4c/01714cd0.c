
bool FUN_01714cd0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined **local_58;
  char *local_50;
  long local_48;
  
  local_58 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_50 = "CommonOcarinaKeepPose";
  (**(code **)(*param_1 + 0x10))(param_1,&local_58);
  puVar1 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar5 = *(long *)puVar1;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = (char *)*param_2;
      local_58 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar5 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
            local_48 = lVar5;
          }
        }
      }
      uVar3 = FUN_01ad9630(&local_58);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_01ad9780(&local_58), (uVar3 & 1) != 0)) {
        uVar2 = FUN_01ad78cc(&local_58);
        if (uVar2 < 0x75) {
          puVar4 = (undefined8 *)(&PTR_DAT_04913408)[uVar2];
        }
        else {
          puVar4 = &DAT_0407ebb1;
        }
        FUN_038d1270(param_1,"Common%sKeepPose",puVar4);
        lVar5 = FUN_0171ee68(param_1);
        return lVar5 != 0;
      }
    }
  }
  return false;
}

