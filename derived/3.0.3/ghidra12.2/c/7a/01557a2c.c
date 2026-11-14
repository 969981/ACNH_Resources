
void FUN_01557a2c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined *puStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 0x40) = 0;
  puVar4 = PTR_DAT_04bb3350;
  lVar8 = *(long *)puVar3;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = (undefined8 *)(lVar8 + 8);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0xa8);
  }
  local_78 = (long *)(PTR_DAT_04bb2020 + 0x10);
  pcStack_70 = "AsyncWorkerHeap";
  plVar6 = (long *)FUN_038c6d48(0,&local_78,*puVar1,8,1,0);
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    plVar7 = malloc(0x28);
  }
  else {
    plVar7 = plVar6;
    if (plVar6 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar8 != 0) {
        plVar7 = (long *)(lVar8 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x28,8);
  }
  *(undefined4 *)(plVar7 + 2) = 0;
  puVar3 = PTR_DAT_04bb5140;
  plVar7[3] = 0;
  plVar7[4] = 0;
  local_68 = PTR_DAT_04bb2120;
  pcStack_70 = puVar2 + 0x10;
  *plVar7 = (long)(puVar3 + 0x10);
  plVar7[1] = 0;
  *(long **)(param_1 + 0x38) = plVar7;
  local_78 = *(long **)(param_1 + 0x88);
  if (plVar6 != (long *)0x0) {
    local_78 = plVar6;
  }
  local_48 = 0;
  local_58 = "AsyncWorker";
  uStack_50 = 0;
  puStack_60 = pcStack_70;
  FUN_0082c840(plVar7,&local_78);
  (**(code **)(*plVar6 + 0x28))(plVar6);
  *(long **)(param_1 + 0x88) = plVar6;
  return;
}

