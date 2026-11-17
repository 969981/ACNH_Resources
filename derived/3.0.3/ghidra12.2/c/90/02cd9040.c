
undefined4 FUN_02cd9040(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  byte local_40 [16];
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 0xffffffff;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
    return 0xffffffff;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0xffffffff;
  }
  local_48 = (uint *)0x0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_58 = &PTR_FUN_04a36b50;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_1);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar3 < *(uint *)(lVar7 + 0x1d8)) {
        puVar6 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
        if (puVar6 != (uint *)0x0) {
          local_48 = puVar6;
        }
        goto LAB_02cd9144;
      }
    }
  }
  puVar6 = (uint *)0x0;
LAB_02cd9144:
  local_40[0] = 0;
  local_40[1] = 0;
  FUN_01adab50(&local_58,local_40);
  uVar3 = 0;
  do {
    if ((uVar3 != 0) && (uVar3 < 0xe)) {
      uVar1 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      if (((uint)((int)uVar1 >> 3) < 2) &&
         ((local_40[(uint)((int)uVar1 >> 3)] >> (ulong)(uVar3 & 7) & 1) != 0)) goto LAB_02cd91c8;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0xe);
  uVar3 = 0;
LAB_02cd91c8:
  switch(uVar3) {
  case 1:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 9;
  case 5:
    break;
  case 6:
    return 5;
  case 7:
    return 6;
  case 8:
    return 7;
  default:
    return 0xffffffff;
  case 10:
    return 8;
  }
  if (puVar6 == (uint *)0x0) {
    return 4;
  }
  uVar3 = *puVar6;
  if (uVar3 == 0) {
    return 4;
  }
  if (puVar6 == (uint *)(ulong)uVar3) {
    return 4;
  }
  puVar5 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
  if (*puVar5 == 0) {
    return 4;
  }
  uVar3 = puVar5[1];
  if (uVar3 == 0) {
    return 4;
  }
  if ((ulong)(ushort)puVar5[2] == 0) {
    return 4;
  }
  lVar7 = 0xc;
  if (*(char *)((long)puVar5 + 10) != '\0') {
    lVar7 = 0x1c;
  }
  lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
  if (lVar7 == 0) {
    return 4;
  }
  uVar1 = 0;
  if ((ulong)uVar3 != 0) {
    uVar1 = (uint)((ulong)((long)puVar6 - lVar7) / (ulong)uVar3);
  }
  if (*puVar5 <= uVar1) {
    uVar1 = 0xffffffff;
  }
  if (DAT_05326af0 <= uVar1) {
    return 4;
  }
  uVar4 = 3;
  if (*(short *)(DAT_05326af8 + (long)(int)uVar1 * 2) != 0x20) {
    uVar4 = 4;
  }
  return uVar4;
}

