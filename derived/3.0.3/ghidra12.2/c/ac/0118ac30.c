
undefined8 FUN_0118ac30(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_c8;
  char *pcStack_c0;
  undefined **local_b8;
  undefined4 *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  char local_38 [4];
  undefined4 local_34;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  if (param_1 != 0) {
    local_38[0] = '\0';
    local_98 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    pcStack_c0 = local_38;
    local_88 = 0;
    lVar5 = *(long *)PTR_DAT_04bb5c90;
    local_c8 = &PTR_FUN_04983bb8;
    local_b8 = &local_a8;
    puStack_b0 = &local_34;
    uVar3 = *(uint *)(lVar5 + 0x50);
    if (0 < (int)uVar3) {
      uVar6 = 0;
      local_a8 = puVar1;
      puStack_a0 = puVar2;
      local_90 = puVar2;
      do {
        lVar4 = *(long *)(lVar5 + 0x58);
        if (**(int **)(lVar4 + uVar6 * 8) != 0x7e3d1e46) {
          local_80 = (undefined4)uVar6;
          local_7c = **(undefined4 **)(lVar4 + uVar6 * 8);
          lVar4 = *(long *)(lVar4 + uVar6 * 8);
          local_68 = *(undefined8 *)(lVar4 + 0x18);
          local_58 = *(undefined8 *)(lVar4 + 0x28);
          local_78 = puVar1;
          puStack_70 = puVar2;
          local_60 = puVar2;
          (*(code *)*local_c8)(&local_c8,&local_80);
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
      if (local_38[0] != '\0') {
        *(undefined4 *)(param_1 + 0x10) = (undefined4)local_98;
        *(undefined4 *)(param_1 + 0x14) = local_98._4_4_;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)local_88;
        *(undefined4 *)(param_1 + 0x24) = local_88._4_4_;
        return 1;
      }
    }
  }
  return 0;
}

