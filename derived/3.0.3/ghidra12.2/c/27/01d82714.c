
undefined8 * FUN_01d82714(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05373f28 != (undefined8 *)0x0) {
    return DAT_05373f28;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x138);
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
        goto LAB_01d8279c;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x138,8);
  }
LAB_01d8279c:
  FUN_038c69f0(puVar3 + 0x23,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05373f20 = puVar3 + 0x23;
  puVar3[0x23] = &PTR_FUN_04a5a7f8;
  *puVar3 = &PTR_LAB_04a5a818;
  puVar3[4] = puVar3 + 3;
  puVar3[5] = 0xffffffff00000000;
  *(undefined4 *)(puVar3 + 0x16) = 0;
  *(undefined4 *)(puVar3 + 0x17) = 0;
  puVar3[0x18] = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar3 + 3;
  puVar3[6] = puVar3 + 6;
  puVar3[7] = puVar3 + 6;
  puVar3[10] = puVar3 + 9;
  puVar3[0xb] = 0xffffffff00000000;
  puVar3[8] = 0xffffffff00000000;
  puVar3[9] = puVar3 + 9;
  puVar3[0xc] = puVar3 + 0xc;
  puVar3[0xd] = puVar3 + 0xc;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0;
  puVar3[0xe] = 0xffffffff00000000;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  FUN_038e18e4(puVar3 + 0x19);
  *(undefined2 *)(puVar3 + 0x22) = 0;
  *(undefined1 *)((long)puVar3 + 0x112) = 0;
  puVar3[0x21] = 0x100000000;
  DAT_05373f28 = puVar3;
  *(undefined4 *)((long)puVar3 + 0x2c) = 0x110;
  *(undefined4 *)((long)puVar3 + 0x44) = 0x110;
  *(undefined4 *)((long)puVar3 + 0x5c) = 0x110;
  *(undefined4 *)((long)puVar3 + 0x74) = 0x110;
  return puVar3;
}

