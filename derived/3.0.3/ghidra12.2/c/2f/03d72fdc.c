
void * FUN_03d72fdc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  undefined1 auStack_130 [64];
  char *local_f0;
  int local_e8;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  local_38 = 0;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "XLink";
  puStack_50 = &DAT_0407d7d3;
  puStack_40 = &DAT_0407ebb1;
  local_58 = local_68;
  local_48 = local_68;
  FUN_03d704f0(auStack_130,&local_68,param_1 + 0x38);
  *local_f0 = '\0';
  if (local_f0 != "LP_Sample") {
    iVar1 = 9;
    if (local_e8 < 10) {
      iVar1 = local_e8 + -1;
    }
    memcpy(local_f0,"LP_Sample",(long)iVar1);
    local_f0[iVar1] = '\0';
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x2b8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar2 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar2 = (undefined8 *)(lVar3 + 0xa8);
    }
    pvVar4 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x2b8,8);
  }
  FUN_03d70f1c(pvVar4,auStack_130,0);
  return pvVar4;
}

