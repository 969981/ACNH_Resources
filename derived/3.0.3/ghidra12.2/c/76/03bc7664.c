
long * FUN_03bc7664(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x1c8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_03bc76dc;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x1c8,8);
  }
LAB_03bc76dc:
  *(undefined1 *)((long)plVar4 + 0x34) = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  puVar1 = PTR_DAT_04bb2020;
  *(undefined4 *)(plVar4 + 6) = 0x40;
  plVar4[2] = (long)(puVar1 + 0x10);
  plVar4[3] = (long)&DAT_0407ebb1;
  puVar1 = PTR_DAT_04bd22e8;
  plVar4[4] = (long)(puVar2 + 0x10);
  plVar4[5] = (long)plVar4 + 0x34;
  *(undefined1 *)((long)plVar4 + 0x73) = 0;
  *(undefined2 *)(plVar4 + 0xf) = 0;
  *(undefined4 *)(plVar4 + 0x10) = 0;
  *(undefined4 *)(plVar4 + 0x14) = 0;
  plVar4[0x11] = 0;
  plVar4[0x16] = 0;
  *(undefined4 *)(plVar4 + 0x17) = 0;
  plVar4[0x18] = 0;
  *(undefined4 *)(plVar4 + 0x19) = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = (long)(puVar1 + 0x80);
  plVar4[0x12] = (long)(plVar4 + 0x12);
  plVar4[0x13] = (long)(plVar4 + 0x12);
  *(undefined1 *)(plVar4 + 0x15) = 1;
  plVar4[0x1c] = 0x3f800000;
  puVar1 = PTR_DAT_04bd20d0 + 0x10;
  *(undefined4 *)(plVar4 + 0x1d) = 0;
  plVar4[0x24] = 0;
  plVar4[0x2a] = 0;
  plVar4[0x2c] = 0;
  *(undefined2 *)(plVar4 + 0x2d) = 0;
  plVar4[0x22] = (long)&DAT_3f8000003f800000;
  plVar4[0x23] = 0x3f800000;
  plVar4[0x28] = 0;
  plVar4[0x29] = 0;
  plVar4[0x20] = 0x3f800000;
  plVar4[0x21] = (long)puVar1;
  *(undefined2 *)(plVar4 + 0x25) = 0xffff;
  plVar4[0x1e] = (long)puVar1;
  plVar4[0x1f] = (long)&DAT_3f8000003f800000;
  *(undefined8 *)((long)plVar4 + 300) = 0;
  *(undefined8 *)((long)plVar4 + 0x134) = 0;
  FUN_038e18e4(plVar4 + 0x2e);
  plVar4[0x37] = 0;
  plVar4[0x38] = 0;
  plVar4[0x36] = 0;
  return plVar4;
}

