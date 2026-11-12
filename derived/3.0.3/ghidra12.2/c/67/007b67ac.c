
undefined1 FUN_007b67ac(long param_1)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  ulong __size;
  
  if (*(char *)(param_1 + 8) != '\0') goto LAB_007b67c8;
  nn::fs::QueryMountAddOnContentCacheSize((ulong *)(param_1 + 0x10),1000);
  lVar2 = DAT_05ae7600;
  pvVar6 = *(void **)(param_1 + 0x20);
  __size = *(size_t *)(param_1 + 0x10);
  if (pvVar6 == (void *)0x0) {
    if (__size == 0) goto LAB_007b67c8;
    if (DAT_05ae7600 == 0) {
      pvVar6 = malloc(__size);
LAB_007b68e8:
      *(void **)(param_1 + 0x20) = pvVar6;
      if (pvVar6 == (void *)0x0) goto LAB_007b67c8;
      __size = *(ulong *)(param_1 + 0x10);
      goto LAB_007b67f8;
    }
    plVar4 = *(long **)(param_1 + 0x18);
    if (plVar4 != (long *)0x0) {
LAB_007b68ac:
      pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      goto LAB_007b68e8;
    }
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar2 + 8);
    if (lVar5 != 0) {
      plVar4 = (long *)(lVar5 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_007b68ac;
  }
  else {
LAB_007b67f8:
    iVar3 = nn::fs::MountAddOnContent("DLC01",1000,pvVar6,__size);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      goto LAB_007b67c8;
    }
    cVar1 = *(char *)(param_1 + 8);
    *(undefined1 *)(param_1 + 8) = 0;
    DataMemoryBarrier(2,3);
    if (cVar1 != '\0') {
      nn::fs::Unmount("DLC01");
    }
    pvVar6 = *(void **)(param_1 + 0x20);
    if (pvVar6 == (void *)0x0) goto LAB_007b67c8;
    if (DAT_05ae7600 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
LAB_007b67c8:
  return *(undefined1 *)(param_1 + 8);
}

