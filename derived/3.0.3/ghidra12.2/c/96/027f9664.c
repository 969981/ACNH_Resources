
undefined4 FUN_027f9664(byte *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  byte local_34 [4];
  undefined *local_30;
  char *pcStack_28;
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar5 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar5 == 0) {
    cVar3 = '\0';
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "UpgradePocket40";
    local_30 = puVar1;
    iVar4 = FUN_0274b8d0(lVar5,&local_30);
    if (iVar4 == 0) {
      pcStack_28 = "UpgradePocket30";
      local_30 = puVar1;
      iVar4 = FUN_0274b8d0(lVar5,&local_30);
      cVar3 = iVar4 != 0;
    }
    else {
      cVar3 = '\x02';
    }
  }
  uVar6 = 0x1e;
  if (cVar3 != '\x01') {
    uVar6 = 0x14;
  }
  uVar2 = 0x28;
  if (cVar3 != '\x02') {
    uVar2 = uVar6;
  }
  return uVar2;
}

