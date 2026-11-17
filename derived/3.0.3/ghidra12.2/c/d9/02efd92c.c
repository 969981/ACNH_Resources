
void FUN_02efd92c(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined4 local_48;
  undefined2 local_44;
  byte local_42;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bb2720;
  local_42 = *param_4;
  local_50 = PTR_DAT_04bc7080 + 0x10;
  if (7 < local_42) {
    local_42 = 0xff;
  }
  local_48 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_44 = 1;
  local_40 = 0xffffffff;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    lVar5 = *(long *)PTR_DAT_04bb2720;
    if ((lVar5 != 0) && (*(long *)(lVar5 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      if ((iVar2 == 0x758f7eaf) &&
         (((*(long *)puVar1 != 0 && (lVar5 = *(long *)(*(long *)puVar1 + 0x330), lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x244) != 0)))) {
        uVar4 = 0;
        goto LAB_02efda18;
      }
    }
  }
  uVar4 = 1;
LAB_02efda18:
  local_38 = 2;
  if (*(int *)(param_1 + 8) != 0x25) {
    local_38 = uVar4;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "WherearenStorageSeq";
  FUN_02ec113c(param_2,&local_60,&local_50);
  return;
}

