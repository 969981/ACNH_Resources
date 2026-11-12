
void * FUN_007b348c(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  
  if (DAT_04ca9180 != (void *)0x0) {
    return DAT_04ca9180;
  }
  lVar3 = *(long *)PTR_DAT_04bb2698;
  if (lVar3 == 0) {
    __s = malloc(400);
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
        goto LAB_007b3514;
      }
    }
    __s = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,400,8);
  }
LAB_007b3514:
  FUN_038c69f0((long)__s + 0x170,param_1,3);
  *(undefined ***)((long)__s + 0x170) = &PTR_FUN_04912458;
  DAT_04ca9178 = (long)__s + 0x170;
  memset(__s,0,0x150);
  *(undefined4 *)((long)__s + 0x168) = 0;
  *(long *)((long)__s + 0x158) = (long)__s + 0x158;
  *(long *)((long)__s + 0x160) = (long)__s + 0x158;
  *(undefined ***)((long)__s + 0x150) = &PTR_LAB_04912478;
  DAT_04ca9180 = __s;
  return __s;
}

