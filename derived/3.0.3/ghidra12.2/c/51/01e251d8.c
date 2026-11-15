
void * FUN_01e251d8(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  
  if (DAT_0538d0b0 != (void *)0x0) {
    return DAT_0538d0b0;
  }
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    __s = malloc(0x170);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar3 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        __s = (void *)0x0;
        goto LAB_01e25260;
      }
    }
    __s = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x170,8);
  }
LAB_01e25260:
  FUN_038c69f0((long)__s + 0x150,param_1,3);
  *(undefined ***)((long)__s + 0x150) = &PTR_FUN_04a5d110;
  DAT_0538d0a8 = (long)__s + 0x150;
  memset(__s,0,0x150);
  FUN_01e252c0(__s);
  DAT_0538d0b0 = __s;
  return __s;
}

