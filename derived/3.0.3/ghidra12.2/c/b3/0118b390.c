
uint FUN_0118b390(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined **local_a0;
  int *local_98;
  undefined8 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_34;
  
  puVar3 = PTR_DAT_04bb5c90;
  local_34 = 0x7e3d1e46;
  local_98 = &local_34;
  local_a0 = &PTR_FUN_04983b90;
  lVar7 = *(long *)PTR_DAT_04bb5c90;
  uVar5 = *(uint *)(lVar7 + 0x50);
  if (0 < (int)uVar5) {
    uVar8 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_90 = param_1;
    do {
      lVar6 = *(long *)(lVar7 + 0x58);
      if (**(int **)(lVar6 + uVar8 * 8) != 0x7e3d1e46) {
        local_80 = (undefined4)uVar8;
        local_7c = **(undefined4 **)(lVar6 + uVar8 * 8);
        lVar6 = *(long *)(lVar6 + uVar8 * 8);
        local_68 = *(undefined8 *)(lVar6 + 0x18);
        local_58 = *(undefined8 *)(lVar6 + 0x28);
        local_78 = puVar1;
        puStack_70 = puVar2;
        local_60 = puVar2;
        (*(code *)*local_a0)(&local_a0,&local_80);
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    if (local_34 != 0x7e3d1e46) {
      FUN_011b9ab0(&local_80);
      iVar4 = FUN_011ba8b0(&local_80);
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,iVar4);
      if (iVar4 == 1) {
        uVar5 = FUN_011baa50(&local_80);
        local_a0 = (undefined **)(PTR_DAT_04bbb978 + 0x10);
        lVar7 = *(long *)puVar3;
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x498);
        if (uVar5 < *(uint *)(lVar7 + 0x478)) {
          local_98 = *(int **)(*(long *)(lVar7 + 0x480) + (long)(int)uVar5 * 8);
        }
        else {
          local_98 = (int *)0x0;
        }
        uVar5 = FUN_0119fcd0(&local_a0);
        goto LAB_0118b4e0;
      }
    }
  }
  uVar5 = 0;
LAB_0118b4e0:
  return uVar5 & 1;
}

