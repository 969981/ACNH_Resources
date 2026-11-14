
void FUN_014ee438(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  
  uStack_2c = param_2;
  local_30 = FUN_014e8b30();
  iVar1 = *(int *)(param_4 + 0x38);
  if (iVar1 - 2U < 4) {
    local_28 = param_3;
    local_24 = iVar1;
    if (DAT_05aed670 == 0) {
      puVar3 = &DAT_055c04a0;
    }
    else {
      puVar3 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar3 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar2 = FUN_006bd550(*puVar3,0);
        puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar2 != 0x758f7eaf) {
          puVar3 = &DAT_055c04a0;
        }
      }
    }
    FUN_0153e900(&local_30,iVar1,*(undefined4 *)(puVar3 + 7));
  }
  return;
}

