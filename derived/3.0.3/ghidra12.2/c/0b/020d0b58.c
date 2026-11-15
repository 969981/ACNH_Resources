
void FUN_020d0b58(long param_1,undefined4 *param_2,undefined8 *param_3,uint *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  byte bVar8;
  long lVar9;
  undefined4 uVar10;
  
  puVar6 = PTR_DAT_04bb32e0;
  puVar5 = PTR_DAT_04bb3238;
  uVar4 = *param_4;
  if (uVar4 < 2) {
    plVar7 = *(long **)(param_1 + 0x20);
    *(undefined1 *)((long)plVar7 + 0x1ce) = 0;
    bVar8 = *puVar6;
    uVar10 = *(undefined4 *)puVar5;
    *(undefined8 *)(plVar7[2] + 0x38) = 0;
    *(undefined8 *)((long)plVar7 + 0x2c) = 0x412000003f000000;
    plVar7[0x2f] = 0;
    *(undefined4 *)((long)plVar7 + 0xa4) = uVar10;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(undefined8 *)((long)plVar7 + 0x34) = 0xbf800000bf800000;
    *(undefined4 *)((long)plVar7 + 0x3c) = 0xbf800000;
    *(byte *)(plVar7 + 0x14) = bVar8;
    lVar9 = *(long *)(*plVar7 + 0x68);
    *(undefined4 *)(plVar7 + 0x32) = *(undefined4 *)(lVar9 + 0x278);
    *(undefined4 *)((long)plVar7 + 0x194) = *(undefined4 *)(lVar9 + 0x27c);
    uVar10 = *(undefined4 *)(lVar9 + 0x280);
    *(undefined4 *)((long)plVar7 + 0x1b4) = 0;
    plVar7[0x37] = 0x3c;
    *(undefined2 *)((long)plVar7 + 0x1cc) = 0;
    *(undefined1 *)((long)plVar7 + 0x1d3) = 0;
    *(undefined8 *)((long)plVar7 + 0x1a4) = 0;
    *(undefined8 *)((long)plVar7 + 0x1ac) = 0;
    *(undefined8 *)((long)plVar7 + 0x19c) = 0;
    *(undefined4 *)((long)plVar7 + 0x1cf) = 0;
    *(undefined4 *)(plVar7 + 0x33) = uVar10;
    if (*(char *)((long)plVar7 + 0x1ce) == '\0') {
      *(undefined4 *)(plVar7 + 5) = 0xbf800000;
      plVar7[3] = 0x41c8000041800000;
      plVar7[4] = -0x407fffff40800000;
      *(undefined1 *)((long)plVar7 + 0x1ce) = 1;
    }
    FUN_03ebb160(plVar7 + 10,1);
    *(undefined4 *)(param_1 + 0x2058) = *param_2;
    puVar1 = (undefined8 *)(param_1 + 0x208c);
    if (param_3 != (undefined8 *)0x0) {
      puVar1 = param_3;
    }
    *(undefined4 *)(param_1 + 0x205c) = param_2[1];
    uVar10 = param_2[2];
    *(undefined4 *)(param_1 + 0x2064) = 0;
    *(undefined4 *)(param_1 + 0x2060) = uVar10;
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *(undefined4 *)(param_1 + 0x207c) = *(undefined4 *)(puVar1 + 2);
    *(undefined8 *)(param_1 + 0x206c) = uVar2;
    *(undefined8 *)(param_1 + 0x2074) = uVar3;
    *(undefined4 *)(param_1 + 0x2080) = *(undefined4 *)((long)puVar1 + 0x14);
    *(undefined4 *)(param_1 + 0x2084) = *(undefined4 *)(puVar1 + 3);
    uVar10 = *(undefined4 *)((long)puVar1 + 0x1c);
    *(uint *)(param_1 + 0x2068) = uVar4;
    *(undefined1 *)(param_1 + 0x20ac) = 0;
    *(undefined4 *)(param_1 + 0x2088) = uVar10;
  }
  return;
}

