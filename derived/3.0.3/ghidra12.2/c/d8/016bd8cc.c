
void FUN_016bd8cc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  undefined1 uStack_1;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    FUN_0252d11c(&uStack_1);
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "IsHotelEditTutorial";
    iVar2 = FUN_02753180(&uStack_1,&local_30);
    if (iVar2 != 0) goto LAB_016bd9c8;
  }
  puVar1 = PTR_DAT_04bb2720;
  lVar5 = *(long *)PTR_DAT_04bb2720;
  iVar2 = 0;
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0x330) == 0) {
      iVar2 = 0;
    }
    else {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar3 = FUN_006bd550(*puVar4,0);
      iVar2 = 0;
      if (iVar3 == 0x758f7eaf) {
        iVar2 = 0;
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(*(long *)puVar1 + 0x330);
          iVar2 = 0;
          if (lVar5 != 0) {
            iVar2 = *(int *)(lVar5 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) != iVar2) {
    return;
  }
  FUN_0252d11c(&uStack_1);
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "IsStopSaveForHotel";
  iVar2 = FUN_02753180(&uStack_1,&local_30);
  if (iVar2 == 0) {
    return;
  }
LAB_016bd9c8:
  lVar5 = *(long *)PTR_DAT_04bb27f0;
  if (lVar5 != 0) {
    *(uint *)(lVar5 + 0x43c) = *(uint *)(lVar5 + 0x43c) | 0x10;
  }
  return;
}

