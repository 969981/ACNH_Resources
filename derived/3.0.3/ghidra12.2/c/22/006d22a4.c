
void FUN_006d22a4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  ulong __size;
  int iVar4;
  long lVar5;
  
  iVar4 = (int)*(ulong *)(param_2 + 0xb0);
  if (0 < iVar4) {
    __size = *(ulong *)(param_2 + 0xb0) & 0xffffffff;
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      pvVar3 = malloc(__size);
    }
    else {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return;
      }
      pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,__size,0x20);
    }
    if (pvVar3 != (void *)0x0) {
      *(int *)(param_1 + 0x50) = iVar4;
      *(void **)(param_1 + 0x58) = pvVar3;
    }
  }
  return;
}

