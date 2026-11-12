
void FUN_006dbf24(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  size_t __size;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  __size = *(size_t *)(param_2 + 0xd0);
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar5 = malloc(__size);
    *(void **)(param_1 + 0x58) = pvVar5;
    *(size_t *)(param_1 + 0x60) = __size;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar6 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    uVar4 = 0;
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,__size,8);
    }
    lVar6 = *(long *)puVar1;
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(size_t *)(param_1 + 0x60) = __size;
    if (lVar6 != 0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      pvVar5 = (void *)0x0;
      if (plVar3 != (long *)0x0) {
        pvVar5 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,__size,8);
      }
      goto LAB_006dbfec;
    }
  }
  pvVar5 = malloc(__size);
LAB_006dbfec:
  *(void **)(param_1 + 0x70) = pvVar5;
  *(size_t *)(param_1 + 0x78) = __size;
  return;
}

