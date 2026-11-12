
void FUN_006daa24(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  size_t __size;
  long lVar4;
  
  __size = *(size_t *)(param_2 + 0xe0);
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(__size);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    pvVar3 = (void *)0x0;
    if (plVar2 != (long *)0x0) {
      pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,__size,8);
    }
  }
  *(void **)(param_1 + 0x58) = pvVar3;
  *(size_t *)(param_1 + 0x60) = __size;
  return;
}

