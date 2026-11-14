
void FUN_01554190(long param_1,ushort param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_30;
  uint local_28;
  uint local_24;
  
  if (param_2 == 0xffff) {
    return;
  }
  local_24 = 3;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
  if ((param_2 & 0xff00) != 0) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 3 & 1) == 0) {
    local_24 = 6;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)param_2 & 0xffffffffU) * 8);
    if ((param_2 & 0xff00) != 0) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 6 & 1) == 0) {
      return;
    }
    bVar5 = DAT_055c1b60 == &DAT_055c1b58;
    puVar10 = DAT_055c1b60 + -8;
    if ((param_2 != 0) && (puVar8 = DAT_055c1b60, puVar10 != &DAT_055c1b18)) {
      do {
        puVar8 = (undefined8 *)puVar8[1];
        param_2 = param_2 - 1;
        bVar5 = puVar8 == &DAT_055c1b58;
      } while (!bVar5 && param_2 != 0);
      puVar10 = puVar8 + -8;
    }
    local_30 = 0;
    puVar8 = &DAT_055c04a0;
    if (!bVar5) {
      puVar8 = puVar10;
    }
    uVar6 = FUN_02b698e0((long)&local_30 + 4,&local_30,*(undefined4 *)(puVar8 + 7));
    if ((uVar6 & 1) == 0) {
      return;
    }
    local_24 = local_30._4_4_;
    local_28 = (uint)local_30;
    uVar6 = FUN_015546d4(param_1,local_30._4_4_,local_30 & 0xffffffff,param_3);
    if ((uVar6 & 1) != 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
    uVar4 = *(uint *)(param_1 + 0x324);
    *(uint *)(param_1 + 800) = uVar4;
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(param_1 + 0x324) = uVar3;
    uVar7 = (ulong)uVar3 * 10;
    uVar6 = uVar7 >> 0x20;
    puVar1 = (uint *)(param_1 + 0x18) + (ulong)local_24 * 0x18;
    if (7 < local_24) {
      puVar1 = (uint *)(param_1 + 0x18);
    }
    puVar2 = puVar1 + (ulong)local_28 * 4;
    if (5 < local_28) {
      puVar2 = puVar1;
    }
    if (*puVar2 <= (uint)(uVar7 >> 0x20)) {
      uVar6 = 0;
    }
    lVar9 = *(long *)(puVar2 + 2) + uVar6 * 0x10;
  }
  else {
    uVar6 = FUN_015543d8(param_1,param_3);
    if ((uVar6 & 1) != 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x318);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
    uVar4 = *(uint *)(param_1 + 0x324);
    *(uint *)(param_1 + 800) = uVar4;
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(param_1 + 0x324) = uVar3;
    uVar7 = (ulong)uVar3 * 0x1e;
    uVar6 = uVar7 >> 0x20;
    if (*(uint *)(param_1 + 8) <= (uint)(uVar7 >> 0x20)) {
      uVar6 = 0;
    }
    lVar9 = *(long *)(param_1 + 0x10) + uVar6 * 0x10;
  }
  *(undefined4 *)(lVar9 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar9 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  return;
}

