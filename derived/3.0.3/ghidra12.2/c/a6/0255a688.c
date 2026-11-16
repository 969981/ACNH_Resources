
void FUN_0255a688(long param_1,byte *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = (ulong)*param_2;
  if (uVar6 < 8) {
    uVar8 = *param_3;
    puVar1 = (uint *)(param_1 + 0xd68);
    uVar3 = puVar1[uVar6];
    lVar7 = param_1 + uVar6 * 0xd0 + (ulong)(~uVar3 & 1) * 0x68;
    *(undefined1 *)(lVar7 + 0x6f0) = *(undefined1 *)(param_3 + 1);
    *(undefined8 *)(lVar7 + 0x6e8) = uVar8;
    *(undefined4 *)(lVar7 + 0x6f4) = *(undefined4 *)((long)param_3 + 0xc);
    *(undefined4 *)(lVar7 + 0x6f8) = *(undefined4 *)(param_3 + 2);
    *(undefined4 *)(lVar7 + 0x6fc) = *(undefined4 *)((long)param_3 + 0x14);
    *(undefined4 *)(lVar7 + 0x700) = *(undefined4 *)(param_3 + 3);
    *(undefined4 *)(lVar7 + 0x704) = *(undefined4 *)((long)param_3 + 0x1c);
    *(undefined4 *)(lVar7 + 0x708) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(lVar7 + 0x70c) = *(undefined4 *)((long)param_3 + 0x24);
    *(undefined4 *)(lVar7 + 0x710) = *(undefined4 *)(param_3 + 5);
    *(undefined4 *)(lVar7 + 0x714) = *(undefined4 *)((long)param_3 + 0x2c);
    *(undefined4 *)(lVar7 + 0x718) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(lVar7 + 0x71c) = *(undefined4 *)((long)param_3 + 0x34);
    *(undefined4 *)(lVar7 + 0x720) = *(undefined4 *)(param_3 + 7);
    *(undefined4 *)(lVar7 + 0x724) = *(undefined4 *)((long)param_3 + 0x3c);
    *(undefined4 *)(lVar7 + 0x728) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(lVar7 + 0x72c) = *(undefined4 *)((long)param_3 + 0x44);
    *(undefined4 *)(lVar7 + 0x730) = *(undefined4 *)(param_3 + 9);
    *(undefined8 *)(lVar7 + 0x734) = *(undefined8 *)((long)param_3 + 0x4c);
    *(undefined4 *)(lVar7 + 0x73c) = *(undefined4 *)((long)param_3 + 0x54);
    *(undefined4 *)(lVar7 + 0x740) = *(undefined4 *)(param_3 + 0xb);
    *(undefined4 *)(lVar7 + 0x744) = *(undefined4 *)((long)param_3 + 0x5c);
    *(undefined4 *)(lVar7 + 0x748) = *(undefined4 *)(param_3 + 0xc);
    bVar4 = *param_2;
    bVar5 = 7 < bVar4;
    if (bVar5) {
      bVar4 = 0xff;
    }
    puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffff);
    if (bVar5) {
      puVar2 = puVar1;
    }
    *puVar2 = ~uVar3 & 1;
    *(undefined1 *)(lVar7 + 0x74c) = 1;
  }
  return;
}

