
undefined8 * FUN_039cafdc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05ae9b00 != (undefined8 *)0x0) {
    return DAT_05ae9b00;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x280);
  }
  else {
    plVar3 = param_1;
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_039cb064;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x280,8);
  }
LAB_039cb064:
  FUN_038c69f0(puVar4 + 0x4c,param_1,3);
  puVar4[2] = 0;
  puVar4[3] = 0;
  DAT_05ae9af8 = puVar4 + 0x4c;
  puVar4[0x4c] = &PTR_FUN_04b6ae08;
  *puVar4 = &PTR_FUN_04b6ae28;
  *(undefined4 *)(puVar4 + 1) = 0x3f;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar1 = PTR_DAT_04bd16c8 + 0x10;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  puVar4[10] = puVar1;
  *(undefined8 *)((long)puVar4 + 0x74) = 0x4000000042b80000;
  *(undefined8 *)((long)puVar4 + 0x7c) = 0x4000000040000000;
  *(undefined8 *)((long)puVar4 + 0x84) = 0x3d4ccccd3cf5c28f;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  *(undefined4 *)(puVar4 + 0x12) = 0;
  FUN_038e18e4(puVar4 + 0x13);
  FUN_038e18e4(puVar4 + 0x1b);
  FUN_038e18e4(puVar4 + 0x23);
  puVar4[0x37] = 0;
  puVar4[0x2b] = puVar4 + 0x2b;
  puVar4[0x2c] = puVar4 + 0x2b;
  puVar4[0x2f] = puVar4 + 0x2e;
  puVar4[0x30] = 0xffffffff00000000;
  puVar4[0x2d] = 0xffffffff00000000;
  puVar4[0x2e] = puVar4 + 0x2e;
  puVar4[0x31] = puVar4 + 0x31;
  puVar4[0x32] = puVar4 + 0x31;
  puVar4[0x33] = 0xffffffff00000000;
  puVar4[0x34] = 0;
  puVar4[0x35] = &PTR_LAB_04b6ae68;
  puVar4[0x36] = 0;
  FUN_038e18e4(puVar4 + 0x38);
  *(undefined4 *)(puVar4 + 0x40) = 0;
  puVar4[0x41] = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  puVar4[0x46] = 0x142c80000;
  puVar4[0x48] = &PTR_LAB_04b6ae88;
  puVar4[0x44] = 0;
  *(undefined4 *)((long)puVar4 + 0x16c) = 0x218;
  puVar4[0x45] = 0;
  *(undefined4 *)((long)puVar4 + 0x184) = 0x228;
  *(undefined4 *)((long)puVar4 + 0x19c) = 0x228;
  *(undefined4 *)(puVar4 + 0x47) = 0;
  puVar4[0x49] = puVar4;
  puVar4[0x4a] = &LAB_039cb1d0;
  puVar4[0x4b] = 0;
  DAT_05ae9b00 = puVar4;
  return puVar4;
}

