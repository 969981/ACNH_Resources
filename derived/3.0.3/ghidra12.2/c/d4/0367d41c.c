
undefined8 FUN_0367d41c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x40);
  }
  else {
    plVar2 = *(long **)(*(long *)(param_1 + 0x280) + 0x10);
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x40,8);
  }
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  puVar4[2] = 0;
  *(undefined1 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 5) = 0;
  *(undefined2 *)(puVar4 + 6) = 0x100;
  *(undefined4 *)((long)puVar4 + 0x34) = 0;
  *(undefined1 *)(puVar4 + 7) = 0;
  __ptr = *(void **)(param_1 + 0x290);
  *(undefined8 **)(param_1 + 0x290) = puVar4;
  if (__ptr != (void *)0x0) {
    FUN_0346ab60(__ptr);
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x290);
  }
  FUN_0346ac8c(puVar4,*(undefined8 *)(*(long *)(param_1 + 0x280) + 0x10));
  FUN_0346b620(*(undefined8 *)(param_1 + 0x290));
  return 0;
}

