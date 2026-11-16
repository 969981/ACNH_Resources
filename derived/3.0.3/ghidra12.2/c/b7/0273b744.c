
void FUN_0273b744(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  undefined **local_40;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)(param_2 + 0x1c0);
  if ((int)uVar1 < 1) {
    if ((*(long *)(param_2 + 0xb0) != 0) &&
       (puVar4 = *(uint **)(*(long *)(param_2 + 0xb0) + 8), puVar4 != (uint *)0x0)) {
      uVar1 = *puVar4;
      goto joined_r0x0273b7b8;
    }
  }
  else {
joined_r0x0273b7b8:
    if (param_3 < uVar1) {
      lVar5 = *(long *)(param_2 + 0x1e0);
      if (*(uint *)(param_2 + 0x1d8) <= param_3) {
        param_3 = 0;
      }
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      puVar3 = *(undefined **)(lVar5 + (long)(int)param_3 * 0x28 + 0x10);
      goto LAB_0273b7f8;
    }
  }
  if (((DAT_05577c48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05577c48), iVar2 != 0)) {
    local_40 = &PTR_LAB_048f9770;
    puStack_38 = &DAT_0407ebb1;
    FUN_00cf7f30(&DAT_05577c28,&local_40);
    __cxa_guard_release(&DAT_05577c48);
  }
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  puVar3 = PTR_DAT_04c4b988;
  *param_1 = (long)&PTR_LAB_048f9770;
LAB_0273b7f8:
  param_1[1] = (long)puVar3;
  return;
}

