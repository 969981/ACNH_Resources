
void FUN_014b4258(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((puVar1[1] & 1) == 0) || ((*puVar1 >> 1 & 1) == 0)) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar1[1] & 1) == 0) {
      return;
    }
    if ((*puVar1 & 1) == 0) {
      return;
    }
    uVar4 = FUN_0180da90();
    uVar5 = FUN_014b5714(param_1,uVar4,param_2);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x78) << 0xb;
    uVar3 = *(uint *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
    *(uint *)(param_1 + 0x80) = uVar3;
    *(uint *)(param_1 + 0x84) = uVar2;
    uVar6 = (ulong)uVar2 * 10;
    uVar5 = uVar6 >> 0x20;
    puVar1 = (uint *)(param_1 + 0x18) + (ulong)uVar4 * 4;
    if (5 < uVar4) {
      puVar1 = (uint *)(param_1 + 0x18);
    }
    if (*puVar1 <= (uint)(uVar6 >> 0x20)) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(puVar1 + 2) + uVar5 * 0x10;
  }
  else {
    uVar5 = FUN_014b5418(param_1,param_2);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x78) << 0xb;
    uVar2 = *(uint *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    *(uint *)(param_1 + 0x80) = uVar2;
    *(uint *)(param_1 + 0x84) = uVar4;
    uVar6 = (ulong)uVar4 * 0x1e;
    uVar5 = uVar6 >> 0x20;
    if (*(uint *)(param_1 + 8) <= (uint)(uVar6 >> 0x20)) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(param_1 + 0x10) + uVar5 * 0x10;
  }
  *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}

