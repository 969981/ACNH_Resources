
void * FUN_03c19eec(long *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  char *pcVar5;
  long lVar6;
  undefined *local_40;
  char *pcStack_38;
  
  if (DAT_05aeca38 != (void *)0x0) {
    return DAT_05aeca38;
  }
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar4 = malloc(0x30);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_03c19f78;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x30,8);
  }
LAB_03c19f78:
  FUN_038c69f0((long)pvVar4 + 0x10,param_1,3);
  *(undefined ***)((long)pvVar4 + 0x10) = &PTR_FUN_04b7d8b0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "IsUseCPUProfiler";
  DAT_05aeca30 = (long)pvVar4 + 0x10;
  pcVar5 = (char *)FUN_038b0130(*(undefined8 *)PTR_DAT_04bb2668,&local_40,1);
  if (pcVar5 == (char *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *pcVar5 != '\0';
  }
  *(bool *)((long)pvVar4 + 8) = bVar1;
  DAT_05aeca38 = pvVar4;
  return pvVar4;
}

