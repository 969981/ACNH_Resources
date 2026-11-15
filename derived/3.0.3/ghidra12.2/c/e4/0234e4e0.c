
void FUN_0234e4e0(long param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  byte *pbVar8;
  ushort uVar9;
  long lVar10;
  ulong uVar11;
  ushort local_170c [2];
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined4 local_16f8;
  undefined8 local_16f4;
  undefined8 local_16ec;
  undefined8 local_16e4;
  undefined *local_16d8;
  undefined1 *puStack_16d0;
  undefined4 local_16c8;
  undefined1 local_16c4 [127];
  undefined1 local_1645;
  undefined4 local_1640;
  undefined2 local_163c;
  undefined8 local_1638;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_68 = PTR_DAT_04bc0510 + 0x10;
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
        if (lVar10 != 0) {
          local_58 = lVar10;
        }
      }
    }
  }
  iVar5 = FUN_01afcfa0(&local_68);
  if ((iVar5 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_68), puVar7 == (ushort *)0x0)) {
    uVar4 = 0;
  }
  else {
    uVar2 = *puVar7 >> 3 & 3;
    uVar4 = 0;
    if (uVar2 != 3) {
      uVar4 = uVar2;
    }
  }
  local_1708 = CONCAT44(local_1708._4_4_,uVar4);
  if (uVar4 == 2) {
    if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    if (0 < (int)DAT_04c8c0f0) {
      uVar11 = 0;
      do {
        if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == 0xc) goto LAB_0234e640;
        uVar11 = uVar11 + 1;
      } while (DAT_04c8c0f0 != uVar11);
    }
    uVar11 = 0;
LAB_0234e640:
    pbVar8 = (byte *)FUN_02335d54(param_1);
    bVar1 = *pbVar8;
    local_170c[0] = 0;
    uVar9 = bVar1 & 0x7f;
    if (((DAT_04c8c100 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar5 != 0)) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
    }
    uVar4 = (uint)uVar11;
    if (DAT_04c8c0f0 <= uVar4) {
      uVar4 = 0;
    }
    if (7 < bVar1) {
      uVar9 = 0x7f;
    }
    local_170c[0] = uVar9 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) << 0xb);
    FUN_007e4920(&local_1708,local_170c);
    uVar6 = FUN_007e7930(&local_1708);
  }
  else {
    uVar6 = 0xffffffff;
  }
  local_16f8 = 0;
  local_16f4 = 0x3f800000;
  local_1708 = 0xffffffff00000000;
  uStack_1700 = 0;
  puStack_16d0 = local_16c4;
  local_16c8 = 0x80;
  local_1645 = 0;
  local_16c4[0] = 0;
  local_16d8 = PTR_DAT_04bb2d88 + 0x10;
  local_1638 = 0;
  local_163c = 0;
  local_16ec = 0;
  local_16e4 = 0;
  local_1640 = 7;
  FUN_017327f0(*(undefined8 *)(param_1 + 0x1490),param_2,param_3,&local_1708,uVar6);
  return;
}

