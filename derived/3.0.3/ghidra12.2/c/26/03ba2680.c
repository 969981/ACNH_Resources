
long * FUN_03ba2680(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar5 = malloc(0x200);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar3 + 8);
      if (lVar4 != 0) {
        param_3 = (long *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_03ba26f4;
      }
    }
    plVar5 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x200,8);
  }
LAB_03ba26f4:
  *(undefined1 *)((long)plVar5 + 0x4b) = 0;
  *(undefined1 *)((long)plVar5 + 0x2c) = 0;
  puVar2 = PTR_DAT_04bb2020;
  *(undefined4 *)(plVar5 + 5) = 0x20;
  plVar5[4] = (long)plVar5 + 0x2c;
  *(undefined1 *)(plVar5 + 0x10) = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = (long)plVar5;
  plVar5[2] = (long)&DAT_0407ebb1;
  plVar5[3] = (long)&PTR_LAB_048f9700;
  plVar5[0x11] = 0;
  plVar5[0x12] = 0;
  puVar1 = PTR_DAT_04bd1eb0 + 0x10;
  plVar5[0x1b] = 0;
  *(undefined4 *)(plVar5 + 0x14) = 0x3f800000;
  *(undefined4 *)(plVar5 + 0x19) = 0;
  *(undefined8 *)((long)plVar5 + 0xa4) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar5 + 0xac) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar5 + 0xcc) = 0;
  *(undefined4 *)(plVar5 + 0x1c) = 0;
  plVar5[0x25] = 0;
  plVar5[0x13] = (long)puVar1;
  *(undefined4 *)(plVar5 + 0x1e) = 0x3f800000;
  *(undefined4 *)(plVar5 + 0x23) = 0;
  plVar5[0x1d] = (long)puVar1;
  *(undefined4 *)((long)plVar5 + 0xb4) = 0xbf800000;
  *(undefined4 *)((long)plVar5 + 0x104) = 0xbf800000;
  *(undefined8 *)((long)plVar5 + 0xf4) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar5 + 0xfc) = 0xbf800000bf800000;
  *(undefined8 *)((long)plVar5 + 0x11c) = 0;
  *(undefined4 *)(plVar5 + 0x26) = 0;
  *(undefined1 *)(plVar5 + 0x2b) = 1;
  *(undefined1 *)(plVar5 + 0x30) = 0;
  plVar5[0x17] = 0x3f800000;
  plVar5[0x18] = -0x100000000;
  plVar5[0x21] = 0x3f800000;
  plVar5[0x22] = -0x100000000;
  plVar5[0x27] = 0;
  plVar5[0x28] = 0;
  plVar5[0x29] = 0x3f800000;
  plVar5[0x2a] = 1;
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x2e] = 0;
  plVar5[0x2f] = 0;
  plVar5[0x2c] = 0;
  plVar5[0x2d] = 0;
  puVar1 = PTR_DAT_04bd2208;
  *plVar5 = (long)(PTR_DAT_04bd2208 + 0x10);
  plVar5[1] = (long)(puVar2 + 0x10);
  plVar5[10] = (long)(puVar1 + 0x108);
  plVar5[0xb] = 0;
  plVar5[0x35] = (long)(plVar5 + 0x35);
  plVar5[0x33] = -0x100000000;
  plVar5[0x34] = 0;
  plVar5[0x36] = (long)(plVar5 + 0x35);
  plVar5[0x37] = -0x100000000;
  FUN_038e18e4(plVar5 + 0x38);
  *(undefined4 *)((long)plVar5 + 0x1bc) = 0x218;
  return plVar5;
}

