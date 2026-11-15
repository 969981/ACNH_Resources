
void FUN_02408968(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  byte local_34 [4];
  undefined *local_30;
  char *pcStack_28;
  
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xfffffffe;
  if ((uVar2 & 1) != 0) {
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_0253b9d0(local_34);
    if (*(char *)(param_1 + 0x1900) != '\0') {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "EquipLicenseHelmet";
      local_30 = puVar1;
      iVar3 = FUN_0274bce0(local_34,&local_30);
      if (iVar3 != 0) {
        FUN_02471f38(local_34,PTR_DAT_04bb37e0,1,0xffffffff);
        pcStack_28 = "EquipLicenseHelmet";
        local_30 = puVar1;
        FUN_0274bfe8(local_34,&local_30,0);
      }
    }
  }
  return;
}

