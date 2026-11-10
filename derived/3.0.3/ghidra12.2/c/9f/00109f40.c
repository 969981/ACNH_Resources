
undefined8 FUN_00109f40(long param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (*(long *)(param_2 + 0x28) == 0) {
    return 0x8023;
  }
  lVar5 = 0;
  uVar6 = 0;
  puVar7 = (undefined8 *)(*(long *)(param_2 + 0x28) + 0x28);
  do {
    lVar1 = param_2 + lVar5;
    *(undefined2 *)(lVar1 + 0x58) = 0;
    *(undefined1 *)(lVar1 + 0xb8) = 0;
    *(undefined4 *)(lVar1 + 0x8c) = 0;
    *(undefined8 *)(lVar1 + 0x84) = 0;
    *(undefined8 *)(lVar1 + 0x7c) = 0;
    *(undefined8 *)(lVar1 + 0x74) = 0;
    *(undefined8 *)(lVar1 + 0x6c) = 0;
    *(undefined8 *)(lVar1 + 100) = 0;
    *(undefined8 *)(lVar1 + 0x5c) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
    *(undefined4 *)(lVar1 + 0x98) = 0;
    *(undefined4 *)(lVar1 + 0xb4) = 0x1100000;
    *(undefined8 *)(lVar1 + 0xa4) = 0;
    *(undefined8 *)(lVar1 + 0x9c) = 0;
    *(undefined8 *)(lVar1 + 0xac) = 0;
    if (puVar7[-5] != 0) {
      if (1000 < *(ushort *)((long)puVar7 + 10)) {
        return 0xab23;
      }
      *(undefined8 *)(lVar1 + 0x60) = puVar7[-5];
      *(undefined1 *)(lVar1 + 0xb8) = *(undefined1 *)(puVar7 + 4);
      *(undefined8 *)(lVar1 + 0x68) = puVar7[-4];
      *(undefined8 *)(lVar1 + 0x70) = puVar7[-3];
      *(undefined8 *)(lVar1 + 0x78) = puVar7[-2];
      *(undefined8 *)(lVar1 + 0x80) = puVar7[-1];
      *(undefined8 *)(lVar1 + 0x88) = *puVar7;
      *(undefined1 *)(lVar1 + 0xb6) = 0x10;
      *(undefined1 *)(lVar1 + 0xb7) = 1;
      *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(puVar7 + 1);
      *(undefined2 *)(lVar1 + 0xc0) =
           *(undefined2 *)(*(long *)(param_1 + 0x702b0) + uVar6 * 2 + 0x940);
      *(undefined2 *)(lVar1 + 0xc2) =
           *(undefined2 *)(*(long *)(param_1 + 0x702b0) + uVar6 * 2 + 0x96c);
    }
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 0x70;
    puVar7 = puVar7 + 10;
  } while (uVar6 < 0x14);
  if (*(long *)(param_2 + 0x30) == 0) {
    return 0x8123;
  }
  if (0x37 < *(ushort *)(param_2 + 0x4c)) {
    return 0x8623;
  }
  bVar4 = *(byte *)(param_2 + 0x50);
  if (bVar4 == 2) {
    if (*(long *)(param_2 + 0x38) == 0) {
      return 0x8b23;
    }
  }
  else if (*(long *)(param_2 + 0x38) == 0) goto LAB_0010a100;
  uVar2 = FUN_001003e0();
  if (0x37 < uVar2) {
    return 0x8c23;
  }
  bVar4 = *(byte *)(param_2 + 0x50);
LAB_0010a100:
  if (6 < bVar4) {
    return 0x8923;
  }
  if (*(byte *)(param_2 + 0x51) < 3) {
    uVar3 = FUN_0010a160(param_1,param_2,param_3,param_4);
    return uVar3;
  }
  return 0x8a23;
}

