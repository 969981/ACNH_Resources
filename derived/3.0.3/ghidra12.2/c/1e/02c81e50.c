
ulong FUN_02c81e50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  void *__s;
  long lVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint local_7ec;
  undefined *local_7e8;
  undefined1 auStack_7e0 [1876];
  uint local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  undefined *local_78;
  short local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  uint *local_68;
  undefined8 local_60;
  uint *puStack_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_70 = *(short *)(param_1 + 8);
  if (local_70 == -2) {
    return 0;
  }
  local_6e = *(undefined2 *)(param_1 + 10);
  local_68 = (uint *)0x0;
  local_6c = *(undefined4 *)(param_1 + 0xc);
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 == 0) {
LAB_02c81f40:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02c81f40;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4((short *)(param_1 + 8));
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar3) goto LAB_02c81f40;
    puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar10 != (uint *)0x0) {
      local_68 = puVar10;
    }
  }
  iVar4 = FUN_01ad7260(&local_78);
  if (iVar4 != 0) {
    uVar5 = FUN_01ad7260(&local_78);
    return uVar5;
  }
  uVar7 = 0;
  local_60 = (undefined **)((ulong)local_60._4_4_ << 0x20);
  if (((puVar10 != (uint *)0x0) && (uVar3 = *puVar10, uVar3 != 0)) &&
     (puVar10 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
    uVar7 = 0;
    if (*puVar8 != 0) {
      uVar3 = puVar8[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (uVar7 = *(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), uVar7 < 0x5b6))
          goto LAB_02c81ff0;
        }
      }
      uVar7 = 0;
    }
  }
LAB_02c81ff0:
  if (uVar7 == 0) {
    return 1;
  }
  local_7e8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7e0,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_8c = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 2;
  local_84 = (local_88 ^ local_88 >> 0x1e) * 0x6c078965 + 3;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7e8);
  memset(__s,0,0x754);
  local_7ec = 0;
  if (((puVar10 != (uint *)0x0) && (uVar3 = *puVar10, uVar3 != 0)) &&
     (puVar10 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
    local_7ec = 0;
    if (*puVar8 != 0) {
      uVar3 = puVar8[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ce8) &&
             (local_7ec = (uint)*(ushort *)(DAT_05326cf0 + (long)(int)uVar1 * 2), local_7ec < 0x5b6)
             ) goto LAB_02c82124;
        }
      }
      local_7ec = 0;
    }
  }
LAB_02c82124:
  puStack_58 = &local_7ec;
  local_60 = &PTR_FUN_049ff858;
  FUN_008a1ba0(&local_7e8,&local_60);
  lVar6 = (**(code **)(local_7e8 + 0x20))(&local_7e8);
  lVar9 = 0;
  uVar5 = 0;
  do {
    puVar10 = (uint *)(lVar6 + lVar9);
    lVar9 = lVar9 + 4;
    uVar3 = *puVar10 - (*puVar10 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    uVar5 = (ulong)((uVar3 + (uVar3 >> 0x10) & 0x3f) + (int)uVar5);
  } while (lVar9 != 0x754);
  return uVar5;
}

