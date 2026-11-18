
void FUN_036e8070(long param_1,byte param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined **local_48;
  byte *pbStack_40;
  byte local_24 [4];
  
  uVar3 = 0x200;
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  *(uint *)(param_1 + 0x1a70) = *(uint *)(param_1 + 0x1a70) & 0xfffffdff | uVar3;
  puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
  local_24[0] = param_2;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) {
    pbStack_40 = local_24;
    local_48 = &PTR_FUN_04b45538;
    iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar1 != 0) {
      lVar5 = (long)iVar1 << 3;
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      do {
        (*(code *)*local_48)(&local_48,*puVar4);
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if (lVar5 == 0) {
      puVar2 = &DAT_055c04a0;
    }
    else {
      puVar2 = &DAT_055c04a0;
      if (*(long *)(lVar5 + 0x330) != 0) {
        puVar2 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
        iVar1 = FUN_006bd550(*puVar2,0);
        if (iVar1 != 0x758f7eaf) {
          puVar4 = &DAT_055c04a0;
        }
        puVar2 = puVar4;
      }
    }
    iVar1 = *(int *)(puVar2 + 7);
    if ((((((DAT_05ac0a90 == iVar1) || (DAT_05ac0aa0 == iVar1)) || (DAT_05ac0ab0 == iVar1)) ||
         ((DAT_05ac0ac0 == iVar1 || (DAT_05ac0ad0 == iVar1)))) ||
        ((DAT_05ac0ae0 == iVar1 || ((DAT_05ac0af0 == iVar1 || (DAT_05ac0b00 == iVar1)))))) ||
       ((DAT_05ac0b10 == iVar1 || (DAT_05ac0b20 == iVar1)))) {
      pbStack_40 = local_24;
      local_48 = &PTR_FUN_04b45560;
      iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
      if (iVar1 != 0) {
        lVar5 = (long)iVar1 << 3;
        puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
        do {
          (*(code *)*local_48)(&local_48,*puVar4);
          lVar5 = lVar5 + -8;
          puVar4 = puVar4 + 1;
        } while (lVar5 != 0);
      }
    }
  }
  return;
}

