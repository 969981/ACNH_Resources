
void * FUN_007eb2fc(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_04cb54b8 != (void *)0x0) {
    return DAT_04cb54b8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x100);
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
        goto LAB_007eb384;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x100,8);
  }
LAB_007eb384:
  FUN_038c69f0((long)pvVar3 + 0xe0,param_1,3);
  *(undefined ***)((long)pvVar3 + 0xe0) = &PTR_FUN_04917130;
  DAT_04cb54b0 = (long)pvVar3 + 0xe0;
  FUN_007eb3e4(pvVar3);
  *(undefined1 *)((long)pvVar3 + 200) = 0;
  *(undefined8 *)((long)pvVar3 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar3 + 0xcc) = 0;
  *(undefined8 *)((long)pvVar3 + 0xd1) = 0;
  DAT_04cb54b8 = pvVar3;
  return pvVar3;
}

