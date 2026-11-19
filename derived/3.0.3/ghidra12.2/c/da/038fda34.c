
undefined8 * FUN_038fda34(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05ae78f0 != (undefined8 *)0x0) {
    return DAT_05ae78f0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x730);
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
        goto LAB_038fdac0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x730,8);
  }
LAB_038fdac0:
  FUN_038c69f0(puVar3 + 0xe2,param_1,3);
  puVar3[0xe2] = PTR_DAT_04bd1020 + 0x10;
  DAT_05ae78e8 = puVar3 + 0xe2;
  FUN_038f98c0(puVar3);
  *(undefined4 *)(puVar3 + 200) = 0x880;
  *puVar3 = &PTR_LAB_04b65c08;
  *(undefined4 *)((long)puVar3 + 0x644) = 0;
  *(undefined4 *)(puVar3 + 0xc9) = 0;
  *(undefined4 *)((long)puVar3 + 0x64c) = 0;
  *(undefined4 *)(puVar3 + 0xca) = 0;
  *(undefined4 *)((long)puVar3 + 0x654) = 0;
  *(undefined4 *)(puVar3 + 0xcb) = 0;
  *(undefined4 *)((long)puVar3 + 0x65c) = 0;
  puVar3[0xcc] = 0;
  puVar3[0xcd] = 0;
  puVar3[0xce] = 0;
  *(undefined1 *)((long)puVar3 + 0x70b) = 0;
  *(undefined1 *)((long)puVar3 + 0x68c) = 0;
  puVar3[0xd0] = (undefined1 *)((long)puVar3 + 0x68c);
  *(undefined4 *)(puVar3 + 0xd1) = 0x80;
  puVar3[0xcf] = &DAT_048fc708;
  *(undefined4 *)((long)puVar3 + 0x644) = 0;
  *(undefined4 *)(puVar3 + 0xc9) = 0;
  *(undefined4 *)((long)puVar3 + 0x64c) = 0;
  *(undefined4 *)(puVar3 + 0xca) = 0;
  *(undefined4 *)((long)puVar3 + 0x654) = 0;
  *(undefined4 *)(puVar3 + 0xcb) = 0;
  *(undefined4 *)((long)puVar3 + 0x65c) = 0;
  DAT_05ae78f0 = puVar3;
  return puVar3;
}

