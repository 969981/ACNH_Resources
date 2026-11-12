
void FUN_009ae970(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  long lVar8;
  
  param_1[2] = 0xffffffff;
  param_1[3] = 0xffffffff;
  puVar1 = PTR_DAT_04bd4738;
  param_1[4] = 0xffffffff;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = &PTR_LAB_0492c720;
  param_1[1] = puVar1 + 0x10;
  puVar3 = PTR_DAT_04bb60e0;
  puVar1 = PTR_DAT_04bb60d0 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[9] = 0;
  param_1[10] = puVar1;
  param_1[0xb] = puVar3 + 0x10;
  param_1[0xc] = 0;
  puVar3 = PTR_DAT_04bd2dc0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_04bb2698;
  cVar2 = *puVar3;
  param_1[0xf] = 0;
  lVar8 = *(long *)puVar1;
  iVar7 = 0xe10;
  if (cVar2 == '\0') {
    iVar7 = 1;
  }
  if (lVar8 == 0) {
    pvVar6 = malloc((ulong)(uint)(iVar7 * 0x1650));
  }
  else {
    plVar4 = *(long **)(*(long *)PTR_DAT_04bb2118 + 0x540);
    if (plVar4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar4 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar4 = (long *)(lVar5 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB_009aea80;
    }
    pvVar6 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)(uint)(iVar7 * 0x1650),8);
  }
  if (pvVar6 != (void *)0x0) {
    param_1[0xd] = pvVar6;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(int *)(param_1 + 0xe) = iVar7;
  }
LAB_009aea80:
  plVar4 = param_1 + 0x15;
  *plVar4 = (long)(param_1 + 0x28);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x28] = param_1 + 0x3b;
  param_1[0x4c2] = 0;
  param_1[0x3b] = param_1 + 0x4e;
  param_1[0x4e] = param_1 + 0x61;
  param_1[0x61] = param_1 + 0x74;
  param_1[0x74] = param_1 + 0x87;
  param_1[0x87] = param_1 + 0x9a;
  param_1[0x9a] = param_1 + 0xad;
  param_1[0xad] = param_1 + 0xc0;
  param_1[0xc0] = param_1 + 0xd3;
  param_1[0xd3] = param_1 + 0xe6;
  param_1[0xe6] = param_1 + 0xf9;
  param_1[0xf9] = param_1 + 0x10c;
  param_1[0x10c] = param_1 + 0x11f;
  param_1[0x11f] = param_1 + 0x132;
  param_1[0x132] = param_1 + 0x145;
  param_1[0x145] = param_1 + 0x158;
  param_1[0x158] = param_1 + 0x16b;
  param_1[0x16b] = param_1 + 0x17e;
  param_1[0x17e] = param_1 + 0x191;
  param_1[0x191] = param_1 + 0x1a4;
  param_1[0x1a4] = param_1 + 0x1b7;
  param_1[0x1b7] = param_1 + 0x1ca;
  param_1[0x1ca] = param_1 + 0x1dd;
  param_1[0x1dd] = param_1 + 0x1f0;
  param_1[0x1f0] = param_1 + 0x203;
  param_1[0x203] = param_1 + 0x216;
  param_1[0x13] = plVar4;
  param_1[0x14] = plVar4;
  param_1[0x216] = param_1 + 0x229;
  param_1[0x229] = param_1 + 0x23c;
  param_1[0x23c] = param_1 + 0x24f;
  param_1[0x24f] = param_1 + 0x262;
  param_1[0x262] = param_1 + 0x275;
  param_1[0x275] = param_1 + 0x288;
  param_1[0x288] = param_1 + 0x29b;
  param_1[0x29b] = param_1 + 0x2ae;
  param_1[0x2ae] = param_1 + 0x2c1;
  param_1[0x2c1] = param_1 + 0x2d4;
  param_1[0x2d4] = param_1 + 0x2e7;
  param_1[0x2e7] = param_1 + 0x2fa;
  param_1[0x2fa] = param_1 + 0x30d;
  param_1[0x30d] = param_1 + 800;
  param_1[800] = param_1 + 0x333;
  param_1[0x333] = param_1 + 0x346;
  param_1[0x346] = param_1 + 0x359;
  param_1[0x359] = param_1 + 0x36c;
  param_1[0x36c] = param_1 + 0x37f;
  param_1[0x37f] = param_1 + 0x392;
  param_1[0x392] = param_1 + 0x3a5;
  param_1[0x3a5] = param_1 + 0x3b8;
  param_1[0x3b8] = param_1 + 0x3cb;
  param_1[0x3cb] = param_1 + 0x3de;
  param_1[0x3de] = param_1 + 0x3f1;
  param_1[0x3f1] = param_1 + 0x404;
  param_1[0x404] = param_1 + 0x417;
  param_1[0x417] = param_1 + 0x42a;
  param_1[0x42a] = param_1 + 0x43d;
  param_1[0x43d] = param_1 + 0x450;
  param_1[0x450] = param_1 + 0x463;
  param_1[0x463] = param_1 + 0x476;
  param_1[0x476] = param_1 + 0x489;
  param_1[0x489] = param_1 + 0x49c;
  param_1[0x49c] = param_1 + 0x4af;
  param_1[0x4af] = param_1 + 0x4c2;
  if (param_1 + 0x4d5 != (undefined8 *)0x0) {
    param_1[0x11] = 0x4000000000;
    param_1[0x12] = param_1 + 0x4d5;
  }
  *(undefined4 *)(param_1 + 0x516) = 0;
  param_1[0x515] = 0xffffffff;
  return;
}

