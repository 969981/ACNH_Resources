
void * FUN_01c80600(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05352aa0 != (void *)0x0) {
    return DAT_05352aa0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x78);
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
        goto LAB_01c80688;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x78,8);
  }
LAB_01c80688:
  FUN_038c69f0((long)pvVar3 + 0x58,param_1,3);
  *(undefined ***)((long)pvVar3 + 0x58) = &PTR_FUN_04a43d00;
  DAT_05352a98 = (long)pvVar3 + 0x58;
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  *(undefined8 *)((long)pvVar3 + 0x10) = 0x800000000;
  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
  *(long *)((long)pvVar3 + 0x20) = (long)pvVar3 + 0x20;
  *(long *)((long)pvVar3 + 0x28) = (long)pvVar3 + 0x20;
  *(undefined2 *)((long)pvVar3 + 0x50) = 0;
  *(undefined1 *)((long)pvVar3 + 0x4c) = 0;
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  DAT_05352aa0 = pvVar3;
  *(undefined8 *)((long)pvVar3 + 0x30) = 0x800000000;
  *(undefined ***)((long)pvVar3 + 0x38) = &PTR_LAB_04b5e918;
  *(undefined4 *)((long)pvVar3 + 0x48) = 0x1e;
  return pvVar3;
}

