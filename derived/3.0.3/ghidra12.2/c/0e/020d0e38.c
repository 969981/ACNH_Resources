
void FUN_020d0e38(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  undefined4 uVar9;
  
  puVar5 = PTR_DAT_04bb32e0;
  puVar4 = PTR_DAT_04bb3238;
  plVar6 = *(long **)(param_1 + 0x20);
  *(undefined1 *)((long)plVar6 + 0x1ce) = 0;
  bVar7 = *puVar5;
  uVar9 = *(undefined4 *)puVar4;
  *(undefined8 *)(plVar6[2] + 0x38) = 0;
  *(undefined8 *)((long)plVar6 + 0x2c) = 0x412000003f000000;
  plVar6[0x2f] = 0;
  *(undefined4 *)((long)plVar6 + 0xa4) = uVar9;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(undefined8 *)((long)plVar6 + 0x34) = 0xbf800000bf800000;
  *(undefined4 *)((long)plVar6 + 0x3c) = 0xbf800000;
  *(byte *)(plVar6 + 0x14) = bVar7;
  lVar8 = *(long *)(*plVar6 + 0x68);
  *(undefined4 *)(plVar6 + 0x32) = *(undefined4 *)(lVar8 + 0x278);
  *(undefined4 *)((long)plVar6 + 0x194) = *(undefined4 *)(lVar8 + 0x27c);
  uVar9 = *(undefined4 *)(lVar8 + 0x280);
  *(undefined4 *)((long)plVar6 + 0x1b4) = 0;
  plVar6[0x37] = 0x3c;
  *(undefined2 *)((long)plVar6 + 0x1cc) = 0;
  *(undefined1 *)((long)plVar6 + 0x1d3) = 0;
  *(undefined8 *)((long)plVar6 + 0x1a4) = 0;
  *(undefined8 *)((long)plVar6 + 0x1ac) = 0;
  *(undefined8 *)((long)plVar6 + 0x19c) = 0;
  *(undefined4 *)((long)plVar6 + 0x1cf) = 0;
  *(undefined4 *)(plVar6 + 0x33) = uVar9;
  if (*(char *)((long)plVar6 + 0x1ce) == '\0') {
    *(undefined4 *)(plVar6 + 5) = 0xbf800000;
    plVar6[3] = 0x41c8000041800000;
    plVar6[4] = -0x407fffff40800000;
    *(undefined1 *)((long)plVar6 + 0x1ce) = 1;
  }
  FUN_03ebb160(plVar6 + 10,1);
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined4 *)(param_1 + 0x2060) = 0;
  puVar1 = &DAT_053e0d04;
  if (param_3 != (undefined8 *)0x0) {
    puVar1 = param_3;
  }
  *(undefined4 *)(param_1 + 0x2064) = *param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_1 + 0x207c) = *(undefined4 *)(puVar1 + 2);
  *(undefined8 *)(param_1 + 0x206c) = uVar2;
  *(undefined8 *)(param_1 + 0x2074) = uVar3;
  *(undefined4 *)(param_1 + 0x2080) = *(undefined4 *)((long)puVar1 + 0x14);
  *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(puVar1 + 3);
  uVar9 = *(undefined4 *)((long)puVar1 + 0x1c);
  *(undefined4 *)(param_1 + 0x2068) = 2;
  *(undefined1 *)(param_1 + 0x20ac) = 0;
  *(undefined4 *)(param_1 + 0x2088) = uVar9;
  return;
}

