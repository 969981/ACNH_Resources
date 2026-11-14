
void * FUN_01ddbdf8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  
  if (DAT_05383578 != (void *)0x0) {
    return DAT_05383578;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    pvVar4 = malloc(0xb0);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        pvVar4 = (void *)0x0;
        goto LAB_01ddbe80;
      }
    }
    pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0xb0,8);
  }
LAB_01ddbe80:
  FUN_038c69f0((long)pvVar4 + 0x90,param_1,3);
  DAT_05383570 = (long)pvVar4 + 0x90;
  *(undefined8 *)((long)pvVar4 + 0x18) = 0xffffffff;
  *(undefined8 *)((long)pvVar4 + 0x20) = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  *(undefined ***)((long)pvVar4 + 0x90) = &PTR_FUN_04a5bb70;
  *(undefined8 *)((long)pvVar4 + 0x28) = 0xffffffff;
  *(undefined2 *)((long)pvVar4 + 0x30) = 0;
  *(undefined4 *)((long)pvVar4 + 0x38) = 0;
  *(undefined8 *)((long)pvVar4 + 0x40) = 0;
  *(undefined4 *)((long)pvVar4 + 0x48) = 0;
  *(undefined8 *)((long)pvVar4 + 8) = 0;
  *(undefined **)((long)pvVar4 + 0x10) = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  *(undefined8 *)((long)pvVar4 + 0x50) = 0;
  *(undefined8 *)((long)pvVar4 + 0x58) = 0;
  *(undefined2 *)((long)pvVar4 + 0x88) = 0;
  DAT_05383578 = pvVar4;
  *(undefined8 *)((long)pvVar4 + 0x60) = 0;
  *(undefined **)((long)pvVar4 + 0x68) = puVar1;
  return pvVar4;
}

