
undefined8 * FUN_039fea6c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (DAT_05aea420 != (undefined8 *)0x0) {
    return DAT_05aea420;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x2b8);
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
        goto LAB_039feaf4;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x2b8,8);
  }
LAB_039feaf4:
  FUN_038c69f0(puVar4 + 0x53,param_1,3);
  DAT_05aea418 = puVar4 + 0x53;
  puVar4[0x53] = &PTR_FUN_04b6be18;
  *puVar4 = &PTR_LAB_04b6be38;
  puVar4[1] = 0x700020000;
  puVar4[4] = puVar4 + 3;
  puVar4[5] = 0xffffffff00000000;
  puVar4[2] = 1;
  puVar4[3] = puVar4 + 3;
  puVar4[6] = puVar4 + 6;
  puVar4[7] = puVar4 + 6;
  puVar4[8] = 0xffffffff00000000;
  FUN_038e18e4(puVar4 + 9);
  *(undefined1 *)((long)puVar4 + 0xd3) = 0;
  puVar4[0x11] = 1;
  puVar4[0x12] = 0x41700000;
  *(undefined1 *)((long)puVar4 + 0xb4) = 0;
  *(undefined1 *)((long)puVar4 + 0xf4) = 0;
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(puVar4 + 0x16) = 0x20;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)puVar4 + 0x134) = 0;
  puVar4[0x14] = puVar1;
  puVar4[0x15] = (undefined1 *)((long)puVar4 + 0xb4);
  *(undefined4 *)(puVar4 + 0x1e) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x113) = 0;
  *(undefined4 *)(puVar4 + 0x26) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x153) = 0;
  *(undefined4 *)(puVar4 + 0x2e) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x193) = 0;
  *(undefined1 *)((long)puVar4 + 0x174) = 0;
  *(undefined4 *)(puVar4 + 0x36) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x1d3) = 0;
  *(undefined1 *)((long)puVar4 + 0x1b4) = 0;
  *(undefined4 *)(puVar4 + 0x3e) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x213) = 0;
  *(undefined1 *)((long)puVar4 + 500) = 0;
  *(undefined4 *)(puVar4 + 0x46) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x253) = 0;
  *(undefined1 *)((long)puVar4 + 0x234) = 0;
  puVar4[0x44] = puVar1;
  *(undefined4 *)(puVar4 + 0x4e) = 0x20;
  *(undefined1 *)((long)puVar4 + 0x293) = 0;
  *(undefined1 *)((long)puVar4 + 0x274) = 0;
  puVar4[0x4c] = puVar1;
  DAT_05aea420 = puVar4;
  puVar4[0x2c] = puVar1;
  puVar4[0x2d] = (long)puVar4 + 0x174;
  puVar4[0x34] = puVar1;
  puVar4[0x35] = (long)puVar4 + 0x1b4;
  puVar4[0x3c] = puVar1;
  puVar4[0x3d] = (long)puVar4 + 500;
  puVar4[0x45] = (long)puVar4 + 0x234;
  puVar4[0x4d] = (long)puVar4 + 0x274;
  *(undefined4 *)((long)puVar4 + 0x2c) = 0x290;
  *(undefined4 *)((long)puVar4 + 0x44) = 0x2a0;
  puVar4[0x1c] = puVar1;
  puVar4[0x1d] = (undefined1 *)((long)puVar4 + 0xf4);
  puVar4[0x24] = puVar1;
  puVar4[0x25] = (undefined1 *)((long)puVar4 + 0x134);
  return puVar4;
}

