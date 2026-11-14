
undefined8 * FUN_01d8c70c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (DAT_053762d8 != (undefined8 *)0x0) {
    return DAT_053762d8;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0x2c8);
  }
  else {
    plVar4 = param_1;
    if (param_1 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        plVar4 = (long *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_01d8c794;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x2c8,8);
  }
LAB_01d8c794:
  FUN_038c69f0(puVar5 + 0x55,param_1,3);
  DAT_053762d0 = puVar5 + 0x55;
  puVar5[2] = 0xffffffff;
  puVar5[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  puVar5[0x55] = &PTR_FUN_04a5ac10;
  puVar5[4] = 0xffffffff;
  *(undefined2 *)(puVar5 + 5) = 0;
  *(undefined4 *)(puVar5 + 6) = 0;
  *puVar5 = &PTR_FUN_04a5ac30;
  puVar5[1] = puVar1 + 0x10;
  uVar2 = (long)puVar5 + 0x1e6U;
  if ((long)puVar5 + 0x1e6U <= (long)puVar5 + 0x1d2U) {
    uVar2 = (long)puVar5 + 0x1d2U;
  }
  puVar5[7] = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0x1c) = 0;
  puVar5[0x1d] = 0;
  puVar5[0x19] = 0;
  puVar5[0x1f] = puVar5 + 0x3a;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  puVar1 = PTR_DAT_04bb5128;
  *(undefined4 *)(puVar5 + 0x20) = 0xb;
  puVar5[0x1e] = puVar1 + 0x10;
  *(undefined1 *)((long)puVar5 + 0x104) = 0;
  *(undefined8 *)((long)puVar5 + 0x1de) = 0;
  *(undefined4 *)(puVar5 + 0x23) = 0xffffffff;
  *(undefined4 *)(puVar5 + 0x26) = 0x40;
  *(undefined1 *)((long)puVar5 + 0x173) = 0;
  puVar5[0x21] = 0xffffffff;
  puVar5[0x22] = 0xffffffff00000000;
  *(undefined1 *)((long)puVar5 + 0x134) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(puVar5 + 0x31) = 0x40;
  *(undefined1 *)((long)puVar5 + 0x18c) = 0;
  *(undefined1 *)((long)puVar5 + 0x1cb) = 0;
  puVar5[0x2f] = puVar1;
  puVar5[0x30] = (undefined1 *)((long)puVar5 + 0x18c);
  puVar5[0x24] = puVar1;
  puVar5[0x25] = (undefined1 *)((long)puVar5 + 0x134);
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  memset(puVar5 + 0x3a,0,((uVar2 - (long)(puVar5 + 0x1e)) - 0xe1 & 0xfffffffffffffffe) + 2);
  puVar5[0x44] = 0;
  *(undefined8 *)((long)puVar5 + 0x226) = 0;
  *(undefined4 *)(puVar5 + 0x3e) = 0;
  puVar5[0x41] = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  *(undefined4 *)((long)puVar5 + 0x22e) = 0x101;
  *(undefined1 *)((long)puVar5 + 0x232) = 0;
  puVar5[0x48] = 0xffffffff;
  puVar5[0x49] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  uVar6 = nn::os::GetSystemTick();
  puVar5[0x4a] = uVar6;
  puVar5[0x4b] = 0;
  *(undefined4 *)((long)puVar5 + 0x25f) = 0;
  FUN_038e18e4(puVar5 + 0x4d);
  DAT_053762d8 = puVar5;
  return puVar5;
}

