
undefined8 * FUN_01da20cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05379880 != (undefined8 *)0x0) {
    return DAT_05379880;
  }
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x228);
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
        goto LAB_01da2154;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x228,8);
  }
LAB_01da2154:
  FUN_038c69f0(puVar3 + 0x41,param_1,3);
  *(undefined4 *)(puVar3 + 1) = 0;
  DAT_05379878 = puVar3 + 0x41;
  puVar3[0x41] = &PTR_FUN_04a5afc0;
  *puVar3 = &PTR_FUN_04a5afe0;
  puVar3[2] = 0;
  puVar3[3] = &PTR_FUN_04a5b000;
  puVar3[4] = 0;
  *(undefined4 *)(puVar3 + 5) = 0xffffffff;
  puVar3[10] = 0;
  *(undefined1 *)(puVar3 + 0xb) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0xffffffffffffffff;
  puVar3[0x18] = 0xffffffff;
  puVar3[0x21] = 0xffffffff;
  puVar3[0x2e] = 0;
  *(undefined2 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)(puVar3 + 0x11) = 0;
  puVar3[0x12] = 0;
  *(undefined4 *)(puVar3 + 0x13) = 0;
  *(undefined2 *)(puVar3 + 0x19) = 0;
  *(undefined4 *)(puVar3 + 0x1a) = 0;
  puVar3[0x1b] = 0;
  *(undefined4 *)(puVar3 + 0x1c) = 0;
  *(undefined2 *)(puVar3 + 0x22) = 0;
  *(undefined4 *)(puVar3 + 0x23) = 0;
  puVar3[0x24] = 0;
  *(undefined4 *)(puVar3 + 0x25) = 0;
  puVar3[0x26] = 0;
  *(undefined4 *)(puVar3 + 0x27) = 0;
  *(undefined4 *)(puVar3 + 0x2d) = 0;
  puVar3[0x28] = 0;
  *(undefined4 *)((long)puVar3 + 0x184) = 0;
  puVar3[0x38] = 0;
  *(undefined2 *)((long)puVar3 + 0x1ba) = 0;
  puVar3[0xc] = &PTR_LAB_04ba4ef0;
  puVar3[0xd] = 0xffffffff;
  puVar3[0xe] = 0xffffffff;
  puVar3[0xf] = 0xffffffff;
  puVar3[0x16] = 0xffffffff;
  puVar3[0x17] = 0xffffffff;
  puVar3[0x1f] = 0xffffffff;
  puVar3[0x20] = 0xffffffff;
  *(undefined8 *)((long)puVar3 + 0x17c) = 0;
  *(undefined8 *)((long)puVar3 + 0x174) = 0;
  *(undefined8 *)((long)puVar3 + 0x18c) = 0;
  *(undefined8 *)((long)puVar3 + 0x194) = 0;
  *(undefined8 *)((long)puVar3 + 0x19c) = 0;
  *(undefined8 *)((long)puVar3 + 0x1a4) = 0;
  *(undefined8 *)((long)puVar3 + 0x1a9) = 0;
  *(undefined1 *)((long)puVar3 + 0x1b1) = 1;
  *(undefined8 *)((long)puVar3 + 0x1b2) = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = &PTR_LAB_04ba4ef0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = &PTR_LAB_04ba4ef0;
  *(undefined1 *)(puVar3 + 0x31) = 2;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  FUN_038e18e4(puVar3 + 0x39);
  DAT_05379880 = puVar3;
  return puVar3;
}

