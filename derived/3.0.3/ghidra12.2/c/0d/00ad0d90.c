
void * FUN_00ad0d90(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_04da96c0 != (void *)0x0) {
    return DAT_04da96c0;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0x8820);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_00ad0e18;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x8820,8);
  }
LAB_00ad0e18:
  puVar1 = (undefined8 *)((long)pvVar4 + 0x8800);
  FUN_038c69f0(puVar1,param_1,3);
  *puVar1 = &PTR_FUN_049337b8;
  lVar5 = 0;
  DAT_04da95b0 = puVar1;
  do {
    puVar1 = (undefined8 *)((long)pvVar4 + lVar5);
    lVar5 = lVar5 + 0x80;
    *puVar1 = &PTR_LAB_049337d8;
    puVar1[4] = &PTR_LAB_049337d8;
    puVar1[8] = &PTR_LAB_049337d8;
    puVar1[0xc] = &PTR_LAB_049337d8;
  } while (lVar5 != 0x4000);
  lVar5 = 0x4000;
  do {
    puVar1 = (undefined8 *)((long)pvVar4 + lVar5);
    lVar5 = lVar5 + 0x100;
    *puVar1 = &PTR_LAB_04933800;
    puVar1[4] = &PTR_LAB_04933800;
    puVar1[8] = &PTR_LAB_04933800;
    puVar1[0xc] = &PTR_LAB_04933800;
    puVar1[0x10] = &PTR_LAB_04933800;
    puVar1[0x14] = &PTR_LAB_04933800;
    puVar1[0x18] = &PTR_LAB_04933800;
    puVar1[0x1c] = &PTR_LAB_04933800;
  } while (puVar1 + 0x20 != (undefined8 *)((long)pvVar4 + 0x8000));
  memset((undefined8 *)((long)pvVar4 + 0x8000),0,0x800);
  FUN_00ad0ee8(pvVar4);
  DAT_04da96c0 = pvVar4;
  return pvVar4;
}

