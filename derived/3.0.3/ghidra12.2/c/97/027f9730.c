
undefined4 FUN_027f9730(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  if (param_1 == 0) {
    cVar3 = '\0';
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "UpgradePocket40";
    local_30 = puVar1;
    iVar4 = FUN_0274b8d0(param_1,&local_30);
    if (iVar4 == 0) {
      pcStack_28 = "UpgradePocket30";
      local_30 = puVar1;
      iVar4 = FUN_0274b8d0(param_1,&local_30);
      cVar3 = iVar4 != 0;
    }
    else {
      cVar3 = '\x02';
    }
  }
  uVar5 = 0x1e;
  if (cVar3 != '\x01') {
    uVar5 = 0x14;
  }
  uVar2 = 0x28;
  if (cVar3 != '\x02') {
    uVar2 = uVar5;
  }
  return uVar2;
}

