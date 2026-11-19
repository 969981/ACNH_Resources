
undefined8 * FUN_03b1eba0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05aeaba8 != (undefined8 *)0x0) {
    return DAT_05aeaba8;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x460);
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
        goto LAB_03b1ec28;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x460,8);
  }
LAB_03b1ec28:
  FUN_038c69f0(puVar3 + 0x88,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05aeaba0 = puVar3 + 0x88;
  puVar3[0x88] = &PTR_FUN_04b73e88;
  *puVar3 = &PTR_FUN_04b73ea8;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 3) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  FUN_0036664c(puVar3 + 6);
  puVar3[0x80] = 0;
  puVar3[0x7f] = 0;
  *(undefined4 *)(puVar3 + 0x81) = 0x3f800000;
  puVar3[0x7e] = 0;
  puVar3[0x82] = 0;
  puVar3[0x83] = 0;
  puVar3[0x84] = 0;
  *(undefined4 *)((long)puVar3 + 0x42c) = 0;
  *(undefined2 *)(puVar3 + 0x85) = 0x101;
  *(undefined1 *)(puVar3 + 0x86) = 0;
  puVar3[0x87] = 0;
  *(undefined4 *)((long)puVar3 + 0x42c) = 0xffffffff;
  DAT_05aeaba8 = puVar3;
  return puVar3;
}

