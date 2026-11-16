
undefined8 * FUN_0275a6cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_0557e208 != (undefined8 *)0x0) {
    return DAT_0557e208;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x50);
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
        puVar3 = (undefined8 *)0x0;
        goto LAB_0275a754;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x50,8);
  }
LAB_0275a754:
  FUN_038c69f0(puVar3 + 6,param_1,3);
  *(undefined4 *)(puVar3 + 2) = 0;
  DAT_0557e200 = puVar3 + 6;
  puVar3[6] = &PTR_FUN_04a90cc0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined4 *)((long)puVar3 + 0x2c) = 0;
  *puVar3 = 0x500000000;
  puVar3[1] = 2;
  *(undefined1 *)((long)puVar3 + 0x14) = 1;
  DAT_0557e208 = puVar3;
  return puVar3;
}

