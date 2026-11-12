
undefined8 FUN_008d9be0(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  char *__dest;
  undefined4 uVar4;
  undefined *local_40;
  char *local_38;
  
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  *(undefined4 *)(param_1 + 0x307b0) = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0x307b4) = *param_2;
  *(undefined4 *)(param_1 + 0x307b8) = param_2[1];
  uVar4 = param_2[2];
  *(undefined1 *)(param_1 + 0x37fb4) = 1;
  pcVar3 = *(char **)(param_1 + 0x306a0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(param_1 + 0x307bc) = uVar4;
  local_38 = "cFishBait";
  if (pcVar3 != "cFishBait") {
    iVar1 = 9;
    if (*(int *)(param_1 + 0x306a8) < 10) {
      iVar1 = *(int *)(param_1 + 0x306a8) + -1;
    }
    memcpy(pcVar3,"cFishBait",(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  __dest = *(char **)(param_1 + 0x306d8);
  (**(code **)(local_40 + 0x18))(&local_40);
  pcVar3 = local_38;
  if (__dest != local_38) {
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar2 = 0;
    do {
      if (local_38[lVar2] == '\0') goto LAB_008d9d1c;
      if (local_38[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_008d9d1c;
      }
      if (local_38[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_008d9d1c;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_008d9d1c:
    iVar1 = (int)lVar2;
    if (*(int *)(param_1 + 0x306e0) <= (int)lVar2) {
      iVar1 = *(int *)(param_1 + 0x306e0) + -1;
    }
    memcpy(__dest,pcVar3,(long)iVar1);
    __dest[iVar1] = '\0';
  }
  FUN_03ebb160(param_1 + 0x408,0x22);
  return 1;
}

