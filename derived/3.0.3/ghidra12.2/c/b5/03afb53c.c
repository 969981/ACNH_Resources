
undefined8 * FUN_03afb53c(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aea910 != (undefined8 *)0x0) {
    return DAT_05aea910;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x8a8);
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
        goto LAB_03afb5c4;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x8a8,8);
  }
LAB_03afb5c4:
  FUN_038c69f0(puVar3 + 0x111,param_1,3);
  DAT_05aea908 = puVar3 + 0x111;
  puVar3[0x111] = &PTR_FUN_04b727d8;
  *puVar3 = &PTR_FUN_04b727f8;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined4 *)(puVar3 + 0x102) = 0;
  puVar3[0x103] = 0;
  puVar3[0x106] = 0xffffffff00000000;
  puVar3[0x105] = puVar3 + 0x104;
  puVar3[0x104] = puVar3 + 0x104;
  FUN_038e18e4(puVar3 + 0x107);
  puVar3[0x110] = 0;
  puVar3[0x10f] = 0;
  puVar3[3] = "0:off";
  puVar3[4] = &DAT_0405f313;
  *(undefined4 *)((long)puVar3 + 0x834) = 8;
  DAT_05aea910 = puVar3;
  return puVar3;
}

