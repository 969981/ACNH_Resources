
byte FUN_02538a40(byte *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((puVar1[1] & 1) != 0) && ((*puVar1 & 1) != 0)) {
      return 0;
    }
  }
  uVar7 = (ulong)*param_1;
  puVar6 = (undefined8 *)(DAT_054f5738 + 0x2e8);
  if (uVar7 < 8) {
    puVar6 = puVar6 + uVar7 * 0x10;
    uVar8 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x18);
    uVar3 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 8);
    uVar9 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x10);
    *(undefined4 *)((long)puVar6 + 0x17) = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar7 * 0x30 + 0x1f);
    puVar6[1] = uVar9;
    puVar6[2] = uVar8;
    *puVar6 = uVar3;
    bVar4 = *param_1;
    bVar5 = 7 < bVar4;
    if (bVar5) {
      bVar4 = 0xff;
    }
    puVar2 = PTR_DAT_04bc31b8 + (ulong)(uint)(int)(char)bVar4 * 0x70;
    if (bVar5) {
      puVar2 = PTR_DAT_04bc31b8;
    }
    uVar9 = *(undefined8 *)(puVar2 + 0x18);
    uVar3 = *(undefined8 *)(puVar2 + 0x10);
    puVar6[4] = *(undefined8 *)(puVar2 + 8);
    puVar6[5] = uVar3;
    puVar6[6] = uVar9;
    uVar3 = *(undefined8 *)(puVar2 + 0x20);
    uVar9 = *(undefined8 *)(puVar2 + 0x28);
    uVar8 = *(undefined8 *)(puVar2 + 0x38);
    puVar6[9] = *(undefined8 *)(puVar2 + 0x30);
    puVar6[10] = uVar8;
    puVar6[7] = uVar3;
    puVar6[8] = uVar9;
    uVar8 = *(undefined8 *)(puVar2 + 0x50);
    uVar3 = *(undefined8 *)(puVar2 + 0x40);
    uVar9 = *(undefined8 *)(puVar2 + 0x48);
    *(undefined8 *)((long)puVar6 + 0x6e) = *(undefined8 *)(puVar2 + 0x56);
    puVar6[0xc] = uVar9;
    puVar6[0xd] = uVar8;
    puVar6[0xb] = uVar3;
  }
  return *(byte *)((long)puVar6 + 0x1a) >> 3 & 1;
}

