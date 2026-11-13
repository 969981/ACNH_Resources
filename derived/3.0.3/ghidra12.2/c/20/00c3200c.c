
ulong FUN_00c3200c(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auStack_34 [4];
  undefined *local_30;
  char *local_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "Unlock_MncBox";
  local_30 = puVar1;
  uVar4 = FUN_02758850(&local_30);
  if ((int)uVar4 != 0) {
    local_28 = "MncBoxProgress";
    local_30 = puVar1;
    iVar2 = FUN_02758850(&local_30);
    if (iVar2 == 6) {
      uVar4 = 0;
    }
    else {
      FUN_00c31ec4(&local_30,&DAT_04e50068);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar2 = FUN_02757a80(auStack_34,&local_30), iVar2 == 0)) {
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50070);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50078);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50080);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50088);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50090);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e50098);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      FUN_00c31ec4(&local_30,&DAT_04e500a0);
      (**(code **)(local_30 + 0x18))(&local_30);
      (**(code **)(local_30 + 0x18))(&local_30);
      if (((local_28 == "") || (*local_28 == '\0')) ||
         (iVar3 = FUN_02757a80(auStack_34,&local_30), iVar3 == 0)) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = (ulong)(iVar2 == 8);
    }
  }
  return uVar4;
}

