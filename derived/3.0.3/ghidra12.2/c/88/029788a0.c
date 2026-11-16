
undefined8 * FUN_029788a0(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_055dc7e8 != (undefined8 *)0x0) {
    return DAT_055dc7e8;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x438);
  }
  else {
    plVar2 = param_1;
    if (param_1 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar5 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_02978928;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x438,8);
  }
LAB_02978928:
  FUN_038c69f0(puVar3 + 0x83,param_1,3);
  puVar3[0x6b] = 0;
  puVar3[0x1d] = puVar3 + 0x23;
  puVar3[0x17] = puVar3 + 0x1d;
  puVar3[0x83] = &PTR_FUN_04a96e10;
  puVar3[0x11] = puVar3 + 0x17;
  puVar3[0xb] = puVar3 + 0x11;
  puVar4 = puVar3 + 5;
  DAT_055dc7e0 = puVar3 + 0x83;
  *puVar4 = puVar3 + 0xb;
  puVar3[4] = puVar4;
  *puVar3 = &PTR_LAB_04a96e30;
  puVar3[1] = 0;
  puVar3[0x23] = puVar3 + 0x29;
  puVar3[0x29] = puVar3 + 0x2f;
  puVar3[0x2f] = puVar3 + 0x35;
  puVar3[0x35] = puVar3 + 0x3b;
  puVar3[0x3b] = puVar3 + 0x41;
  puVar3[0x41] = puVar3 + 0x47;
  puVar3[0x47] = puVar3 + 0x4d;
  puVar3[0x4d] = puVar3 + 0x53;
  puVar3[0x53] = puVar3 + 0x59;
  puVar3[0x59] = puVar3 + 0x5f;
  puVar3[0x5f] = puVar3 + 0x65;
  puVar3[0x65] = puVar3 + 0x6b;
  puVar3[2] = 0;
  puVar3[3] = puVar4;
  if (puVar3 + 0x71 != (undefined8 *)0x0) {
    puVar3[1] = 0x1200000000;
    puVar3[2] = puVar3 + 0x71;
  }
  DAT_055dc7e8 = puVar3;
  return puVar3;
}

