
undefined4 * FUN_01dc87e8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  
  if (DAT_0537fc68 != (undefined4 *)0x0) {
    return DAT_0537fc68;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x2a0);
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
        puVar3 = (undefined4 *)0x0;
        goto LAB_01dc8870;
      }
    }
    puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x2a0,8);
  }
LAB_01dc8870:
  FUN_038c69f0(puVar3 + 0xa0,param_1,3);
  DAT_0537fc60 = puVar3 + 0xa0;
  *(undefined ***)(puVar3 + 0xa0) = &PTR_FUN_04a5b520;
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  *(undefined4 *)((long)puVar3 + 6) = 0;
  *(undefined1 *)((long)puVar3 + 10) = 0;
  puVar3[3] = 0;
  *(undefined1 *)(puVar3 + 4) = 0;
  *(undefined4 *)((long)puVar3 + 0x12) = 0;
  *(undefined1 *)((long)puVar3 + 0x16) = 0;
  puVar3[6] = 0;
  *(undefined1 *)(puVar3 + 7) = 0;
  *(undefined4 *)((long)puVar3 + 0x1e) = 0;
  *(undefined1 *)((long)puVar3 + 0x22) = 0;
  *(undefined1 *)(puVar3 + 10) = 0;
  puVar3[9] = 0;
  *(undefined1 *)((long)puVar3 + 0x2e) = 0;
  *(undefined4 *)((long)puVar3 + 0x2a) = 0;
  *(undefined1 *)(puVar3 + 0xd) = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)((long)puVar3 + 0x3a) = 0;
  *(undefined4 *)((long)puVar3 + 0x36) = 0;
  puVar3[0xf] = 0;
  *(undefined1 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)((long)puVar3 + 0x42) = 0;
  *(undefined2 *)((long)puVar3 + 0x46) = 0;
  puVar3[0x1c] = 0;
  *(undefined1 *)(puVar3 + 0x1d) = 0;
  *(undefined4 *)((long)puVar3 + 0x76) = 0;
  *(undefined1 *)((long)puVar3 + 0x7a) = 0;
  puVar3[0x1f] = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  *(undefined4 *)((long)puVar3 + 0x82) = 0;
  *(undefined1 *)((long)puVar3 + 0x86) = 0;
  puVar3[0x22] = 0;
  *(undefined1 *)(puVar3 + 0x23) = 0;
  *(undefined4 *)((long)puVar3 + 0x8e) = 0;
  *(undefined1 *)((long)puVar3 + 0x92) = 0;
  *(undefined1 *)(puVar3 + 0x26) = 0;
  puVar3[0x25] = 0;
  *(undefined1 *)((long)puVar3 + 0x9e) = 0;
  *(undefined4 *)((long)puVar3 + 0x9a) = 0;
  *(undefined1 *)(puVar3 + 0x29) = 0;
  puVar3[0x28] = 0;
  *(undefined1 *)((long)puVar3 + 0xaa) = 0;
  *(undefined4 *)((long)puVar3 + 0xa6) = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 0;
  puVar3[0x2b] = 0;
  *(undefined1 *)((long)puVar3 + 0xb6) = 0;
  *(undefined4 *)((long)puVar3 + 0xb2) = 0;
  *(undefined1 *)(puVar3 + 0x2f) = 0;
  puVar3[0x2e] = 0;
  *(undefined1 *)((long)puVar3 + 0xc2) = 0;
  *(undefined4 *)((long)puVar3 + 0xbe) = 0;
  *(undefined1 *)(puVar3 + 0x32) = 0;
  puVar3[0x31] = 0;
  *(undefined1 *)((long)puVar3 + 0xce) = 0;
  *(undefined4 *)((long)puVar3 + 0xca) = 0;
  *(undefined1 *)(puVar3 + 0x35) = 0;
  puVar3[0x34] = 0;
  *(undefined1 *)(puVar3 + 0x41) = 0;
  puVar3[0x40] = 0;
  *(undefined1 *)(puVar3 + 0x4d) = 0;
  puVar3[0x4c] = 0;
  *(undefined1 *)(puVar3 + 0x59) = 0;
  puVar3[0x58] = 0;
  *(undefined1 *)(puVar3 + 0x65) = 0;
  puVar3[100] = 0;
  *(undefined1 *)(puVar3 + 0x71) = 0;
  puVar3[0x70] = 0;
  *(undefined1 *)(puVar3 + 0x7d) = 0;
  puVar3[0x7c] = 0;
  *(undefined8 *)(puVar3 + 0x84) = 0;
  *(undefined8 *)(puVar3 + 0x82) = 0;
  *(undefined1 *)(puVar3 + 0x89) = 0;
  puVar3[0x88] = 0;
  *(undefined8 *)(puVar3 + 0x90) = 0;
  *(undefined8 *)(puVar3 + 0x8e) = 0;
  *(undefined1 *)(puVar3 + 0x95) = 0;
  puVar3[0x94] = 0;
  puVar3[0x96] = 0;
  *(undefined1 *)(puVar3 + 0x9e) = 0;
  *(undefined8 *)(puVar3 + 0x9c) = 0;
  DAT_0537fc10 = &PTR_LAB_04a5b5d0;
  DAT_0537fc20 = FUN_01dc8a54;
  DAT_0537fc28 = 0;
  DAT_0537fc40 = &PTR_LAB_04a5b5f8;
  DAT_0537fc18 = puVar3;
  DAT_0537fc48 = puVar3;
  DAT_0537fc68 = puVar3;
  *(undefined8 *)(puVar3 + 0x3a) = 0;
  *(undefined8 *)(puVar3 + 0x3c) = 0;
  *(undefined8 *)(puVar3 + 0x46) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x52) = 0;
  *(undefined8 *)(puVar3 + 0x54) = 0;
  *(undefined8 *)(puVar3 + 0x5e) = 0;
  *(undefined8 *)(puVar3 + 0x60) = 0;
  *(undefined8 *)(puVar3 + 0x6a) = 0;
  *(undefined8 *)(puVar3 + 0x6c) = 0;
  *(undefined8 *)(puVar3 + 0x76) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  DAT_0537fc58 = 0;
  DAT_0537fc50 = &LAB_01dc90fc;
  return puVar3;
}

