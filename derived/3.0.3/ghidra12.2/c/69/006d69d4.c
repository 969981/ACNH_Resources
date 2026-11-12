
ulong FUN_006d69d4(long *param_1,ulong *param_2,void *param_3,ulong param_4,void *param_5,
                  ulong param_6)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  void *__ptr;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    __ptr = malloc(0x41740);
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
        uVar5 = nn::util::CompressGzip(param_2,param_3,param_4,param_5,param_6,(void *)0x0,0x41740);
        return uVar5;
      }
    }
    __ptr = (void *)(**(code **)(*param_1 + 0x30))(param_1,0x41740,8);
  }
  uVar2 = nn::util::CompressGzip(param_2,param_3,param_4,param_5,param_6,__ptr,0x41740);
  if (__ptr != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  return (ulong)(uVar2 & 1);
}

