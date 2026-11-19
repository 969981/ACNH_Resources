
void FUN_0387d620(long param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  
  iVar1 = *(int *)(param_2 + 0x18);
  *(int *)(param_1 + 0x10) = iVar1;
  puVar3 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "enl::SDKLibraryUse";
  plVar4 = (long *)FUN_038c6d48(iVar1 + 0x2000,&local_40,*(undefined8 *)(param_2 + 0x10),8,1,0);
  *(long **)(param_1 + 8) = plVar4;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x600000);
  }
  else {
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      pvVar6 = (void *)0x0;
      if (plVar4 == (long *)0x0) goto LAB_0387d6dc;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x600000,0x1000);
  }
LAB_0387d6dc:
  *(void **)(param_1 + 0x30) = pvVar6;
  if ((*param_2 >> 1 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x1c);
    local_40 = puVar3 + 0x10;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    pcStack_38 = "enl::HttpLibraryUse";
    uVar7 = FUN_038c6d48(uVar2,&local_40,*(undefined8 *)(param_2 + 0x10),8,1,0);
    *(undefined8 *)(param_1 + 0x18) = uVar7;
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 4);
  return;
}

