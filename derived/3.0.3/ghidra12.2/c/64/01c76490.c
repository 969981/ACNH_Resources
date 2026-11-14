
undefined8 * FUN_01c76490(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_053512e0 != (undefined8 *)0x0) {
    return DAT_053512e0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x448);
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
        goto LAB_01c76518;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x448,8);
  }
LAB_01c76518:
  FUN_038c69f0(puVar3 + 0x85,param_1,3);
  DAT_053512d8 = puVar3 + 0x85;
  *puVar3 = 0;
  puVar3[0x85] = &PTR_FUN_04a43268;
  puVar3[3] = puVar3 + 2;
  puVar3[4] = 0xffffffff00000000;
  puVar3[2] = puVar3 + 2;
  FUN_038e18e4(puVar3 + 5);
  memset(puVar3 + 0xd,0,0x1b9);
  puVar3[0x45] = 0;
  puVar3[0x46] = 0;
  puVar3[0x47] = 0;
  puVar3[0x48] = 0;
  puVar3[0x49] = 0;
  puVar3[0x4a] = 0;
  puVar3[0x4b] = 0;
  puVar3[0x4c] = 0;
  puVar3[0x4d] = 0;
  puVar3[0x4e] = 0;
  *(undefined1 *)(puVar3 + 0x4f) = 0;
  *(undefined1 *)(puVar3 + 0x50) = 0;
  memset(puVar3 + 0x51,0,0x169);
  puVar3[0x7f] = 0;
  puVar3[0x80] = 0;
  puVar3[0x81] = 0;
  puVar3[0x82] = 0;
  *(undefined1 *)(puVar3 + 0x83) = 0;
  *(undefined2 *)(puVar3 + 0x84) = 0;
  *(undefined4 *)((long)puVar3 + 0x24) = 0x20;
  DAT_053512e0 = puVar3;
  return puVar3;
}

