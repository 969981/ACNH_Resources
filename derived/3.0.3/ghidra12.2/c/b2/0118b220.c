
void FUN_0118b220(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined **local_a8;
  char *pcStack_a0;
  undefined4 *local_98;
  char local_88 [4];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  
  (**(code **)(*param_2 + 0x18))();
  uVar2 = FUN_006bd550(param_2[1],0);
  pcStack_a0 = local_88;
  local_88[0] = '\0';
  lVar5 = *(long *)PTR_DAT_04bb5c90;
  uVar1 = *(uint *)(lVar5 + 0x50);
  local_a8 = &PTR_FUN_04983b68;
  local_98 = &local_84;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    local_84 = uVar2;
    do {
      lVar4 = *(long *)(lVar5 + 0x58);
      if (**(int **)(lVar4 + uVar6 * 8) != 0x7e3d1e46) {
        puStack_70 = &DAT_048f9750;
        local_80 = (undefined4)uVar6;
        local_60 = &DAT_048f9750;
        local_7c = **(undefined4 **)(lVar4 + uVar6 * 8);
        lVar4 = *(long *)(lVar4 + uVar6 * 8);
        local_68 = *(undefined8 *)(lVar4 + 0x18);
        local_58 = *(undefined8 *)(lVar4 + 0x28);
        local_78 = puVar3;
        (*(code *)*local_a8)(&local_a8,&local_80);
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    if (local_88[0] != '\0') {
      FUN_011b9ab0(&local_80,uVar2);
      puVar3 = (undefined *)FUN_011badd0(&local_80);
      goto LAB_0118b358;
    }
  }
  puVar3 = PTR_DAT_04c4b988;
LAB_0118b358:
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = puVar3;
  return;
}

