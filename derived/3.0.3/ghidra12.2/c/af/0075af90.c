
void * FUN_0075af90(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_04c95ca8 != (void *)0x0) {
    return DAT_04c95ca8;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0xee0);
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
        goto LAB_0075b018;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0xee0,8);
  }
LAB_0075b018:
  FUN_038c69f0((long)pvVar4 + 0xec0,param_1,3);
  *(undefined ***)((long)pvVar4 + 0xec0) = &PTR_FUN_04906808;
  lVar5 = 0;
  DAT_04c95ca0 = (long)pvVar4 + 0xec0;
  do {
    puVar1 = (undefined8 *)((long)pvVar4 + lVar5);
    lVar5 = lVar5 + 0x20;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  } while (lVar5 != 0xec0);
  lVar5 = 0;
  do {
    puVar1 = (undefined8 *)((long)pvVar4 + lVar5);
    lVar5 = lVar5 + 0x20;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined4 *)((long)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  } while (lVar5 != 0xec0);
  FUN_0075b0c0(pvVar4);
  DAT_04c95ca8 = pvVar4;
  return pvVar4;
}

