
uint FUN_006d6b18(long *param_1,undefined8 *param_2,void *param_3,ulong param_4,void *param_5,
                 ulong param_6)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  void *__ptr;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    __ptr = malloc(0x1bf8);
  }
  else {
    param_1 = (long *)*param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_1 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        param_1 = (long *)(lVar3 + 0xa8);
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) {
        __ptr = (void *)0x0;
        goto LAB_006d6bac;
      }
    }
    __ptr = (void *)(**(code **)(*param_1 + 0x30))(param_1,0x1bf8,8);
  }
LAB_006d6bac:
  uVar2 = nn::util::DecompressGzip(param_3,param_4,param_5,param_6,__ptr,0x1bf8);
  if ((uVar2 & 1) != 0) {
    uVar4 = nn::util::GetGzipDecompressedSize(param_5,param_6);
    *param_2 = uVar4;
  }
  if (__ptr != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  return uVar2 & 1;
}

