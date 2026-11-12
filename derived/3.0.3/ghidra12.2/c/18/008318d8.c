
void FUN_008318d8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
      iVar1 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  iVar1 = *(int *)(puVar7 + 7);
  local_28 = 0;
  if (iVar1 == -0x7975b8e8) {
    iVar1 = FUN_00831bb0(1);
    local_30 = 0;
    if (iVar1 != -1) {
      local_30 = iVar1;
    }
    piVar4 = &local_30;
LAB_008319e0:
    uVar2 = FUN_00831a94(piVar4);
    uVar2 = *param_1 & 0xf | (uVar2 & 0xff) << 8;
  }
  else {
    if (iVar1 == -0x3e092032) {
      iVar1 = FUN_00831bb0(2);
      local_34 = 0;
      if (iVar1 != -1) {
        local_34 = iVar1;
      }
      piVar4 = &local_34;
      goto LAB_008319e0;
    }
    if (iVar1 == -0x17df00c3) {
      iVar1 = FUN_00831bb0(0);
      local_2c = 0;
      if (iVar1 != -1) {
        local_2c = iVar1;
      }
      piVar4 = &local_2c;
      goto LAB_008319e0;
    }
    uVar5 = FUN_03782ad0(&local_28);
    if ((uVar5 & 1) == 0) {
      if (iVar1 == -0x6efba09b) {
        *param_1 = *param_1 & 0xf | 0x20;
      }
      goto LAB_008319f4;
    }
    local_24 = local_28;
    uVar2 = *param_1 & 0xf | (local_28 & 0xff) << 8 | 0x10;
  }
  *param_1 = uVar2;
LAB_008319f4:
  if (*(long *)(DAT_05231900 + 0x118) != 0) {
    iVar1 = FUN_00831e00(*(undefined1 *)(*(long *)(DAT_05231900 + 0x118) + 0xc68));
    uVar2 = *param_1;
    local_38 = 0;
    if (iVar1 != -1) {
      local_38 = iVar1;
    }
    uVar3 = FUN_00831cf0(&local_38);
    *param_1 = uVar2 & 0xfff0 | uVar3 & 0xf;
  }
  return;
}

