
void FUN_0180d960(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  
  FUN_0180d000();
  puVar1 = PTR_DAT_04bb2720;
  lVar6 = *(long *)PTR_DAT_04bb2720;
  iVar3 = 0;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x330) == 0) {
      iVar3 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar4,0);
      iVar3 = 0;
      if (((iVar2 == 0x758f7eaf) && (iVar3 = 0, *(long *)puVar1 != 0)) &&
         (lVar6 = *(long *)(*(long *)puVar1 + 0x330), iVar3 = 0, lVar6 != 0)) {
        iVar3 = *(int *)(lVar6 + 0x244);
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0x94) != iVar3) {
    return;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "TapIndoorSelectCloudIsland";
    iVar3 = FUN_02743000(&local_30);
    if ((iVar3 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
      pcVar5 = "CloudIsland";
      goto LAB_0180da74;
    }
  }
  pcVar5 = "00";
LAB_0180da74:
  FUN_038d13f0(param_1,pcVar5);
  return;
}

