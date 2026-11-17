
void FUN_02b5df60(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  int local_a0 [2];
  undefined *local_98;
  undefined *puStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  uint local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_34;
  
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2010;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  local_50 = 0;
  local_60 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_58 = PTR_DAT_04bb2010 + 0x10;
  local_40 = 0;
  local_48 = puStack_58;
  FUN_02a8f7b0(param_2,&local_60);
  uVar6 = FUN_02a8e598(param_2);
  if (((uVar6 & 1) == 0) &&
     (((*(byte *)(param_2 + 8) & 1) == 0 || (iVar5 = FUN_02a8efb8(param_2), iVar5 != 2)))) {
    local_6c = 0;
  }
  else {
    local_a0[0] = 0;
    uVar6 = FUN_02b67620(local_a0,*(undefined4 *)(param_2 + 0xc));
    iVar5 = local_a0[0];
    if ((uVar6 & 1) == 0) {
      iVar5 = 0;
    }
    local_6c = FUN_02b5e1b0(iVar5,0);
  }
  local_a0[0] = *(int *)(param_2 + 0xc);
  local_68 = 0;
  bVar2 = *(byte *)(param_2 + 8);
  local_6b = bVar2 & 1;
  if (((local_a0[0] == 0) || (local_a0[0] != 0x1a)) || ((bVar2 & 1) != 0)) goto LAB_02b5e104;
  local_68 = 0;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  uVar10 = (uint)*(ushort *)(param_2 + 0x24);
  if (*(int *)(param_2 + 0xc) != 0x1a) {
    uVar10 = 0;
  }
  uVar10 = uVar10 - *(ushort *)(lVar8 + 0xff0);
  if (*(uint *)(lVar8 + 0xfd0) <= uVar10) goto LAB_02b5e104;
  puVar7 = *(uint **)(*(long *)(lVar8 + 0xfd8) + (long)(int)uVar10 * 8);
  if (puVar7 == (uint *)0x0) {
LAB_02b5e0f4:
    local_6b = 0;
    local_68 = 0;
    goto LAB_02b5e104;
  }
  uVar10 = *puVar7;
  local_68 = 0;
  if ((uVar10 != 0) && (puVar7 != (uint *)(ulong)uVar10)) {
    puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar10);
    local_68 = 0;
    if (*puVar9 != 0) {
      uVar10 = puVar9[1];
      if ((uVar10 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar10 != 0) {
            uVar1 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar10);
          }
          if (*puVar9 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (uVar1 < *(uint *)PTR_DAT_04bc4590) {
            local_68 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar1 * 2);
            if (5 < local_68) goto LAB_02b5e0f4;
            goto LAB_02b5e100;
          }
        }
      }
      local_68 = 0;
    }
  }
LAB_02b5e100:
  local_6b = 0;
LAB_02b5e104:
  local_98 = puVar4 + 0x10;
  puStack_90 = puVar3 + 0x10;
  local_34 = *(int *)(param_2 + 0x20);
  local_6a = bVar2 >> 1 & 1;
  local_64 = 0;
  local_88 = (undefined4)local_50;
  uStack_84 = local_50._4_4_;
  local_78 = (undefined4)local_40;
  uStack_74 = local_40._4_4_;
  local_6c = local_6c & 1;
  local_70 = (undefined4)(long)((float)local_34 * 90.0 * 11930465.0);
  local_80 = puStack_90;
  if (local_a0[0] == 0x1f) {
    FUN_02b935d0();
    local_64 = FUN_02b59f30();
  }
  FUN_02a7bc88(param_1,local_a0);
  return;
}

