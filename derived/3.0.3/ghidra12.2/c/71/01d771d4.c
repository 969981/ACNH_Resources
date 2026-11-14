
void * FUN_01d771d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  
  if (DAT_05370cd0 != (void *)0x0) {
    return DAT_05370cd0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    pvVar3 = malloc(0x88);
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
        goto LAB_01d7725c;
      }
    }
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x30))(plVar2,0x88,8);
  }
LAB_01d7725c:
  FUN_038c69f0((long)pvVar3 + 0x68,param_1,3);
  *(undefined2 *)((long)pvVar3 + 0x30) = 0;
  *(undefined1 *)((long)pvVar3 + 0x32) = 0;
  DAT_05370cc8 = (long)pvVar3 + 0x68;
  *(undefined ***)((long)pvVar3 + 0x68) = &PTR_FUN_04a5a508;
  *(undefined8 *)((long)pvVar3 + 0x4c) = 0;
  *(undefined8 *)((long)pvVar3 + 0x54) = 0;
  *(undefined8 *)((long)pvVar3 + 0x5c) = 0;
  *(undefined4 *)((long)pvVar3 + 100) = 0;
  *(undefined8 *)((long)pvVar3 + 0x10) = 0x1000000000;
  *(undefined8 *)((long)pvVar3 + 0x18) = 0;
  *(undefined8 *)((long)pvVar3 + 0x20) = 0xffffffff00000000;
  *(undefined4 *)((long)pvVar3 + 0x28) = 0xffffffff;
  *(undefined4 *)((long)pvVar3 + 0x34) = 0xffffffff;
  *(undefined1 *)((long)pvVar3 + 0x48) = 1;
  *(void **)pvVar3 = pvVar3;
  *(void **)((long)pvVar3 + 8) = pvVar3;
  DAT_05370cd0 = pvVar3;
  *(undefined8 *)((long)pvVar3 + 0x38) = 0;
  *(undefined8 *)((long)pvVar3 + 0x40) = 0;
  return pvVar3;
}

