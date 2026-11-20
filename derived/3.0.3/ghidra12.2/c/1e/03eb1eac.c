
undefined8 * FUN_03eb1eac(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05b03ed0 != (undefined8 *)0x0) {
    return DAT_05b03ed0;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x160);
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
        goto LAB_03eb1f34;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x160,8);
  }
LAB_03eb1f34:
  FUN_038c69f0(puVar3 + 0x28,param_1,3);
  puVar3[0x28] = &PTR_FUN_04ba4ba8;
  DAT_05b03ec8 = puVar3 + 0x28;
  *puVar3 = &PTR_FUN_04ba4bc8;
  FUN_038e18e4(puVar3 + 1);
  *(undefined4 *)(puVar3 + 9) = 0;
  *(undefined4 *)((long)puVar3 + 0x4c) = 0;
  FUN_038e3114(puVar3 + 10,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x13) = 0;
  FUN_038e3114(puVar3 + 0x14,0,0x7fff);
  *(undefined4 *)(puVar3 + 0x1d) = 0;
  *(undefined8 *)((long)puVar3 + 0x124) = 0;
  puVar3[0x1e] = 0;
  *(undefined4 *)(puVar3 + 0x1f) = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)((long)puVar3 + 300) = 0x43960000c40c0000;
  puVar3[0x23] = 0;
  *(undefined1 *)(puVar3 + 0x24) = 0;
  *(undefined8 *)((long)puVar3 + 0x134) = 0;
  DAT_05b03ed0 = puVar3;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  return puVar3;
}

