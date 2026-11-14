
void FUN_01958cc0(long param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(8);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      return;
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,8,8);
  }
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x150) = pvVar3;
    *(undefined4 *)(param_1 + 0x148) = 4;
  }
  return;
}

