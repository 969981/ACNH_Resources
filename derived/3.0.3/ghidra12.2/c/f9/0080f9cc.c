
void FUN_0080f9cc(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  undefined4 local_48;
  
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = (undefined8 *)(lVar9 + 8);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0xa8);
  }
  local_78 = (long *)(PTR_DAT_04bb2020 + 0x10);
  pcStack_70 = "ParallelExecutorHeap";
  plVar6 = (long *)FUN_038c6d48(0,&local_78,*puVar1,8,1,0);
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    pvVar8 = malloc(0x10);
  }
  else {
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar9 != 0) {
        plVar7 = (long *)(lVar9 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar8 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_0080faa4;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
  }
LAB_0080faa4:
  *(void **)(param_1 + 0x48) = pvVar8;
  pcStack_70 = puVar2 + 0x10;
  local_48 = 0;
  puStack_58 = PTR_DAT_04bb2120;
  local_78 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    local_78 = plVar6;
  }
  local_50 = param_1 + 8;
  local_68 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
  local_60 = pcStack_70;
  FUN_0082c840(param_1 + 0x18,&local_78);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  *(long **)(param_1 + 0x50) = plVar6;
  return;
}

