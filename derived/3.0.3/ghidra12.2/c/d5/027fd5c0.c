
void FUN_027fd5c0(long param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  int iVar14;
  long local_88;
  undefined **local_80;
  long local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  uVar5 = *(uint *)(param_1 + 0x170);
  iVar14 = 99999;
  if ((*(byte *)(param_1 + 0x177) != 0 ||
       (((ulong)uVar5 != 0 || *(ushort *)(param_1 + 0x174) != 0) || *(byte *)(param_1 + 0x176) != 0)
      ) && ((uint)*(byte *)(param_1 + 0x177) ==
            ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
    lVar10 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar14 = (((uint)*(ushort *)(param_1 + 0x174) - (int)lVar10) - (int)((ulong)lVar10 >> 0x20)) +
             0x7f1e5b8e;
  }
  local_88 = 0x8a4;
  FUN_0277d4ac(&local_88);
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = (undefined1 *)0x0;
  local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_78 = local_88;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_88);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar5 < *(uint *)(lVar10 + 0x1d8)) {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar10 != 0) {
          local_70 = (undefined1 *)lVar10;
        }
      }
    }
  }
  FUN_01aed730(&local_80);
  uVar5 = *(uint *)(param_1 + 0x158);
  lVar10 = param_1 + 0xb8;
  local_80 = &PTR_LAB_04a915d0;
  local_70 = &LAB_028012e0;
  uStack_68 = 0;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  local_78 = lVar10;
  iVar6 = FUN_0277cd30(uVar5,&local_80);
  uVar5 = *(uint *)(param_1 + 0xa0);
  local_80 = &PTR_LAB_04a915f8;
  local_70 = &LAB_028012f0;
  uStack_68 = 0;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  local_78 = param_1;
  iVar7 = FUN_0277cd30(uVar5,&local_80);
  uVar8 = *(uint *)(param_1 + 0x170);
  uVar5 = iVar14 + iVar6 + iVar7;
  if (param_2 <= uVar5) {
    uVar5 = param_2;
  }
  if ((*(byte *)(param_1 + 0x177) == 0 &&
       (((ulong)uVar8 == 0 && *(ushort *)(param_1 + 0x174) == 0) && *(byte *)(param_1 + 0x176) == 0)
      ) || ((uint)*(byte *)(param_1 + 0x177) !=
            ((uVar8 + (uVar8 >> 0x10) + (uVar8 >> 0x18) + (uVar8 >> 8)) - 0x2d & 0xff))) {
    if (uVar5 < 100000) goto LAB_027fd820;
    iVar14 = 0;
  }
  else {
    lVar11 = (ulong)uVar8 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar14 = ((int)lVar11 - (uint)*(ushort *)(param_1 + 0x174)) + (int)((ulong)lVar11 >> 0x20) +
             -0x7f1cd4ef;
    if (uVar5 + iVar14 < 100000) {
LAB_027fd820:
      FUN_0285dc20(param_1 + 0x170,uVar5);
      return;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x158);
  local_80 = &PTR_LAB_04a915d0;
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  local_70 = &LAB_028012e0;
  uStack_68 = 0;
  local_78 = lVar10;
  iVar6 = FUN_0277c8f0(uVar8,&local_80);
  uVar8 = *(uint *)(param_1 + 0xa0);
  local_80 = &PTR_LAB_04a915f8;
  local_70 = &LAB_028012f0;
  uStack_68 = 0;
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  local_78 = param_1;
  iVar7 = FUN_0277c8f0(uVar8,&local_80);
  local_80 = &PTR_LAB_04a91620;
  uVar8 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  local_70 = PTR_LAB_04bc3870;
  uStack_68 = 0;
  local_78 = lVar10;
  FUN_0277cb20(uVar8,&local_80,0);
  local_80 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
  local_70 = PTR_LAB_04bc3860;
  uStack_68 = 0;
  uVar8 = *(uint *)(param_1 + 0xa0);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  local_78 = param_1;
  FUN_0277cb20(uVar8,&local_80,0);
  local_88 = 0x8a4;
  FUN_0277d4ac(&local_88);
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = (undefined1 *)0x0;
  local_78 = local_88;
  local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(&local_88);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (uVar8 < *(uint *)(lVar11 + 0x1d8)) {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar11 != 0) {
          local_70 = (undefined1 *)lVar11;
        }
      }
    }
  }
  uVar5 = iVar14 + iVar6 + iVar7 + uVar5;
  uVar9 = FUN_01aed730(&local_80);
  uVar8 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  if (uVar8 == 0) {
    iVar14 = 0;
  }
  else {
    if (uVar8 == 1) {
      uVar12 = 0;
      iVar14 = 0;
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
      psVar13 = (short *)(param_1 + 0xc0);
      do {
        psVar1 = psVar13 + -4;
        uVar12 = uVar12 + 2;
        sVar2 = *psVar13;
        psVar13 = psVar13 + 8;
        if (*psVar1 == -2) {
          iVar14 = iVar14 + 1;
        }
        if (sVar2 == -2) {
          iVar14 = iVar14 + 1;
        }
      } while (((ulong)uVar8 & 0x1e) != uVar12);
    }
    if (((uVar8 & 1) != 0) && (*(short *)(lVar10 + uVar12 * 8) == -2)) {
      iVar14 = iVar14 + 1;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xa0);
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (0x13 < uVar8) {
    uVar8 = 0x14;
  }
  if (uVar8 == 0) {
    iVar6 = 0;
  }
  else {
    if (uVar8 == 1) {
      uVar12 = 0;
      iVar6 = 0;
    }
    else {
      uVar12 = 0;
      iVar6 = 0;
      psVar13 = (short *)(param_1 + 8);
      do {
        psVar1 = psVar13 + -4;
        uVar12 = uVar12 + 2;
        sVar2 = *psVar13;
        psVar13 = psVar13 + 8;
        if (*psVar1 == -2) {
          iVar6 = iVar6 + 1;
        }
        if (sVar2 == -2) {
          iVar6 = iVar6 + 1;
        }
      } while (((ulong)uVar8 & 0x1e) != uVar12);
    }
    if (((uVar8 & 1) != 0) && (*(short *)(param_1 + uVar12 * 8) == -2)) {
      iVar6 = iVar6 + 1;
    }
  }
  iVar6 = iVar6 + iVar14;
  while ((iVar6 != 0 &&
         ((uVar12 = FUN_027faa50(param_1,&local_88,0,0,0), (uVar12 & 1) == 0 ||
          (uVar5 = uVar5 - uVar9, uVar9 <= uVar5))))) {
    iVar6 = iVar6 + -1;
  }
  if (0x1869e < uVar5) {
    uVar5 = 99999;
  }
  uVar8 = nn::os::GetSystemTick();
  uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  uVar8 = uVar9 ^ uVar9 * 0x800;
  uVar3 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar9 = uVar3 ^ uVar3 * 0x800;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  uVar8 = uVar8 >> 8 ^ uVar3 >> 0x13 ^ uVar8 ^ uVar3;
  *(short *)(param_1 + 0x174) = (short)(uVar8 >> 0x10);
  uVar12 = (ulong)(uVar9 >> 8 ^ uVar8 >> 0x13 ^ uVar9 ^ uVar8) * 0x1b;
  *(char *)(param_1 + 0x176) = (char)(uVar12 >> 0x20);
  lVar10 = (ulong)(uVar5 + 0x7f1cd4ef + (uVar8 >> 0x10)) << (uVar12 >> 0x20) + 3;
  iVar14 = (int)((ulong)lVar10 >> 0x20) + (int)lVar10;
  *(int *)(param_1 + 0x170) = iVar14;
  *(char *)(param_1 + 0x177) =
       (char)iVar14 + (char)((uint)iVar14 >> 0x10) + (char)((uint)iVar14 >> 0x18) +
       (char)((uint)iVar14 >> 8) + -0x2d;
  return;
}

