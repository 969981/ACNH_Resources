
void * FUN_0217b5d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_053fb030 != (void *)0x0) {
    return DAT_053fb030;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0xb88);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_0217b65c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0xb88,8);
  }
LAB_0217b65c:
  FUN_038c69f0((long)pvVar3 + 0xb68,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xb68) = &PTR_FUN_04a75bc8;
  DAT_053faf80 = (long)pvVar3 + 0xb68;
  FUN_0217b6ac(pvVar3);
  DAT_053fb030 = pvVar3;
  return pvVar3;
}

