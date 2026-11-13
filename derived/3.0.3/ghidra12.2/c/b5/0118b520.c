
undefined4 FUN_0118b520(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_98;
  undefined4 *puStack_90;
  undefined8 local_88;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_74 = 0x7e3d1e46;
  puStack_90 = &local_74;
  lVar5 = *(long *)PTR_DAT_04bb5c90;
  local_98 = &PTR_FUN_04983be0;
  uVar2 = *(uint *)(lVar5 + 0x50);
  uVar4 = 0x7e3d1e46;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    local_88 = param_1;
    do {
      lVar3 = *(long *)(lVar5 + 0x58);
      if (**(int **)(lVar3 + uVar6 * 8) != 0x7e3d1e46) {
        puStack_60 = &DAT_048f9750;
        local_70 = (undefined4)uVar6;
        local_50 = &DAT_048f9750;
        local_6c = **(undefined4 **)(lVar3 + uVar6 * 8);
        lVar3 = *(long *)(lVar3 + uVar6 * 8);
        local_58 = *(undefined8 *)(lVar3 + 0x18);
        local_48 = *(undefined8 *)(lVar3 + 0x28);
        local_68 = puVar1;
        (*(code *)*local_98)(&local_98,&local_70);
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    uVar4 = local_74;
  }
  return uVar4;
}

