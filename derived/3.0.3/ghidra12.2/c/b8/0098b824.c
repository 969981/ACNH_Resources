
long * FUN_0098b824(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  
  if (DAT_04cfba28 != (long *)0x0) {
    return DAT_04cfba28;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    plVar3 = malloc(0x798);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_0098b8ac;
      }
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x798,8);
  }
LAB_0098b8ac:
  FUN_038c69f0(plVar3 + 0xef,param_1,3);
  plVar3[0xef] = (long)&PTR_FUN_0492b0f0;
  DAT_04cfba20 = plVar3 + 0xef;
  *plVar3 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(plVar3 + 1,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)plVar3 + 0x75c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(plVar3 + 0xec) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)plVar3 + 0x764) = uVar1;
  *(uint *)(plVar3 + 0xed) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar3 + 0x18))(plVar3);
  memset(__s,0,0x754);
  plVar3[0xee] = 0;
  DAT_04cfba28 = plVar3;
  return plVar3;
}

