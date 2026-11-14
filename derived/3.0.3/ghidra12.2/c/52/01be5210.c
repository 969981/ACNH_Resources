
void FUN_01be5210(long *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  undefined *local_138;
  ushort *puStack_130;
  uint local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined **local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined *local_58;
  ushort *local_50;
  uint local_48;
  uint local_40;
  ushort *local_38;
  
  puVar5 = (ushort *)(**(code **)(*param_1 + 0x10))();
  local_128 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar3 = PTR_DAT_04bb4ca0;
  local_124 = 0;
  local_120 = 0xffffffff;
  uStack_118 = 0xffffffff00000000;
  local_138 = PTR_DAT_04bb2df8 + 0x10;
  local_110 = 0xffffffff;
  local_f8 = 0x40;
  puStack_100 = local_f4;
  local_b5 = 0;
  local_f4[0] = 0;
  local_a0 = 0x40;
  local_5d = 0;
  local_9c[0] = 0;
  local_108 = &PTR_LAB_048fb9f8;
  puStack_a8 = local_9c;
  local_b0 = &PTR_LAB_048fb9f8;
  local_58 = PTR_DAT_04bb4ca0 + 0x10;
  if ((int)local_128 < 1) {
    local_50 = (ushort *)0x0;
    local_48 = 0;
  }
  else {
    puVar5[local_128 - 1] = 0;
    local_50 = puVar5;
    local_48 = local_128;
  }
  local_38 = puVar5;
  local_40 = local_128;
  if (puVar5 == (ushort *)0x0 || (int)local_128 < 1) {
    local_40 = 0;
    local_38 = (ushort *)0x0;
  }
  puStack_130 = puVar5;
  (**(code **)(puVar3 + 0x28))(&local_58);
  lVar6 = 0;
  uVar11 = 0xffffffff;
  do {
    if (local_50[lVar6] == 0) {
LAB_01be5368:
      uVar11 = ~(uint)lVar6;
      break;
    }
    if (local_50[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_01be5368;
    }
    if (local_50[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_01be5368;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar4 = (**(code **)(local_138 + 0x20))(&local_138);
  uVar1 = local_40 + ~(iVar4 + uVar11);
  if (local_40 < iVar4 + uVar11) {
    uVar1 = 0xffffffff;
  }
  uVar7 = (ulong)uVar1;
  if (local_40 == 0) {
    iVar8 = -1;
  }
  else {
    if (*local_38 - 0x30 < 10) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      iVar8 = -1;
      do {
        uVar9 = uVar10 + 1;
        if (local_40 == (uint)uVar9) goto LAB_01be5400;
        uVar10 = uVar9 & 0xffffffff;
      } while (9 < *(ushort *)
                    ((long)local_38 +
                    (-(uVar9 >> 0x1f & 1) & 0xfffffffe00000000 | uVar9 * 2 & 0x1fffffffe)) - 0x30);
    }
    iVar8 = (local_40 - iVar4) + (uint)uVar9;
    if (local_40 < iVar4 + ~(uint)uVar9) {
      iVar8 = -1;
    }
  }
LAB_01be5400:
  uVar11 = 0;
  do {
    uVar10 = uVar7 + 0xffffffff;
    if (iVar8 == (int)uVar10) {
      return;
    }
    uVar7 = uVar10 & 0xffffffff;
    uVar10 = -(uVar10 >> 0x1f & 1) & 0xfffffffe00000000 | uVar10 * 2 & 0x1fffffffe;
    uVar2 = *(ushort *)((long)local_38 + uVar10);
    *(undefined2 *)((long)local_38 + uVar10) = 0;
    if (uVar2 - 0x30 < 10) {
      uVar11 = uVar11 + 1;
    }
  } while (uVar11 < param_2);
  return;
}

