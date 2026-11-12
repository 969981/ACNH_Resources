
void FUN_00883068(undefined8 param_1)

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
  pcStack_38 = "FishingConventionSpring";
  local_40 = puVar1;
  iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
  if (iVar3 == -1) {
    pcStack_38 = "FishingConventionSummer";
    local_40 = puVar1;
    iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
    if (iVar3 == -1) {
      pcStack_38 = "FishingConventionAutumn";
      local_40 = puVar2 + 0x10;
      iVar3 = FUN_00883150(param_1,&local_40,&local_18,1);
      if (iVar3 == -1) {
        pcStack_38 = "FishingConventionWinter";
        local_40 = puVar2 + 0x10;
        FUN_00883150(param_1,&local_40,&local_18,1);
      }
    }
  }
  return;
}

