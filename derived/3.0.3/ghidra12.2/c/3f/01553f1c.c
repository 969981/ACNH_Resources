
void FUN_01553f1c(long param_1,long param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint local_34;
  
  if (DAT_04c487d4 == -1) {
    return;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 3 & 1) == 0) {
    if (DAT_05292338 == 0) {
      return;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      return;
    }
    if (DAT_05aed670 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar6 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    local_34 = 0;
    uVar8 = FUN_02b5f400(&local_34,*(undefined4 *)(puVar11 + 7));
    uVar3 = local_34;
    if ((uVar8 & 1) == 0) {
      return;
    }
    uVar7 = FUN_0180da90();
    uVar8 = FUN_015546d4(param_1,uVar3,uVar7,param_2);
    if ((uVar8 & 1) != 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
    uVar5 = *(uint *)(param_1 + 0x324);
    *(uint *)(param_1 + 800) = uVar5;
    uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
    *(uint *)(param_1 + 0x324) = uVar4;
    uVar9 = (ulong)uVar4 * 10;
    uVar8 = uVar9 >> 0x20;
    puVar1 = (uint *)(param_1 + 0x18) + (ulong)uVar3 * 0x18;
    if (7 < uVar3) {
      puVar1 = (uint *)(param_1 + 0x18);
    }
    puVar2 = puVar1 + (ulong)uVar7 * 4;
    if (5 < uVar7) {
      puVar2 = puVar1;
    }
    if (*puVar2 <= (uint)(uVar9 >> 0x20)) {
      uVar8 = 0;
    }
    lVar10 = *(long *)(puVar2 + 2) + uVar8 * 0x10;
  }
  else {
    uVar8 = FUN_015543d8(param_1,param_2);
    if ((uVar8 & 1) != 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
    uVar7 = *(uint *)(param_1 + 0x324);
    *(uint *)(param_1 + 800) = uVar7;
    uVar3 = uVar3 >> 8 ^ uVar7 >> 0x13 ^ uVar3 ^ uVar7;
    *(uint *)(param_1 + 0x324) = uVar3;
    uVar9 = (ulong)uVar3 * 0x1e;
    uVar8 = uVar9 >> 0x20;
    if (*(uint *)(param_1 + 8) <= (uint)(uVar9 >> 0x20)) {
      uVar8 = 0;
    }
    lVar10 = *(long *)(param_1 + 0x10) + uVar8 * 0x10;
  }
  *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(lVar10 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return;
}

