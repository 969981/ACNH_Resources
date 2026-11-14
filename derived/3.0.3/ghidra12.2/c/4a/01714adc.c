
bool FUN_01714adc(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_58;
  char *local_50;
  long local_48;
  
  if ((param_3 & 1) == 0) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "CommonOcarinaSound";
    (**(code **)(*param_1 + 0x10))(param_1,&local_58);
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      local_50 = (char *)*param_2;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar2 = FUN_0277d6c4(param_2);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
            local_48 = lVar6;
          }
        }
      }
      uVar3 = FUN_01ad9630(&local_58);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_01ad78cc(&local_58);
        if ((param_3 & 1) == 0) {
          if (uVar2 < 0x75) {
            puVar5 = *(undefined8 **)(PTR_DAT_04bb4678 + (ulong)uVar2 * 8 + 0x370);
          }
          else {
            puVar5 = &DAT_0407ebb1;
          }
          pcVar4 = "Common%sSound";
        }
        else if (uVar2 < 0x75) {
          pcVar4 = "Npc%sSound";
          puVar5 = *(undefined8 **)(PTR_DAT_04bb4678 + (ulong)uVar2 * 8 + 0x370);
        }
        else {
          puVar5 = &DAT_0407ebb1;
          pcVar4 = "Npc%sSound";
        }
        FUN_038d1270(param_1,pcVar4,puVar5);
        lVar6 = FUN_0171ee68(param_1);
        return lVar6 != 0;
      }
    }
  }
  return false;
}

