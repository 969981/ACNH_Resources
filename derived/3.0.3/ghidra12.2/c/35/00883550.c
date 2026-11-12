
void FUN_00883550(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  puVar2 = PTR_DAT_04bb2020;
  local_18 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "InsectConvention1";
  local_40 = puVar1;
  iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
  if (iVar3 == -1) {
    pcStack_38 = "InsectConvention2";
    local_40 = puVar1;
    iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
    if (iVar3 == -1) {
      pcStack_38 = "InsectConvention3";
      local_40 = puVar2 + 0x10;
      iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
      if (iVar3 == -1) {
        pcStack_38 = "InsectConvention4";
        local_40 = puVar2 + 0x10;
        FUN_00883150(param_1,&local_40,&local_18,1);
      }
    }
  }
  return;
}

