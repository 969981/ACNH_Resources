
void FUN_027fb5c0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined **local_60;
  long local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long local_28;
  
  uVar10 = *(uint *)(param_1 + 0x170);
  iVar7 = 0;
  if ((*(byte *)(param_1 + 0x177) != 0 ||
       (((ulong)uVar10 != 0 || *(ushort *)(param_1 + 0x174) != 0) || *(byte *)(param_1 + 0x176) != 0
       )) && ((uint)*(byte *)(param_1 + 0x177) ==
              ((uVar10 + (uVar10 >> 0x10) + (uVar10 >> 0x18) + (uVar10 >> 8)) - 0x2d & 0xff))) {
    lVar9 = (ulong)uVar10 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar7 = ((int)lVar9 - (uint)*(ushort *)(param_1 + 0x174)) + (int)((ulong)lVar9 >> 0x20) +
            -0x7f1cd4ef;
  }
  local_60 = &PTR_LAB_04a915d0;
  local_50 = &LAB_028012e0;
  uStack_48 = 0;
  uVar10 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  local_58 = param_1 + 0xb8;
  iVar4 = FUN_0277c8f0(uVar10,&local_60);
  local_60 = &PTR_LAB_04a915f8;
  uVar10 = *(uint *)(param_1 + 0xa0);
  local_50 = &LAB_028012f0;
  uStack_48 = 0;
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  local_58 = param_1;
  iVar5 = FUN_0277c8f0(uVar10,&local_60);
  local_60 = &PTR_LAB_04a91620;
  uVar6 = *(uint *)(param_1 + 0x158);
  uVar10 = iVar4 + iVar7 + iVar5;
  if (0x13 < uVar6) {
    uVar6 = 0x14;
  }
  local_50 = PTR_LAB_04bc3870;
  uStack_48 = 0;
  local_58 = param_1 + 0xb8;
  FUN_0277cb20(uVar6,&local_60,0);
  local_60 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
  local_50 = PTR_LAB_04bc3860;
  uStack_48 = 0;
  uVar6 = *(uint *)(param_1 + 0xa0);
  if (0x13 < uVar6) {
    uVar6 = 0x14;
  }
  local_58 = param_1;
  FUN_0277cb20(uVar6,&local_60,0);
  local_28 = 0x8a4;
  FUN_0277d4ac(&local_28);
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = (undefined1 *)0x0;
  local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_58 = local_28;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_28);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
        local_50 = (undefined1 *)lVar9;
      }
    }
  }
  iVar7 = FUN_01aed730(&local_60);
  if (0xc34 < uVar10 >> 5) {
    do {
      uVar8 = FUN_027faa50(param_1,&local_28,0,0,0);
      iVar4 = iVar7;
      if ((uVar8 & 1) == 0) {
        iVar4 = 0;
      }
      uVar10 = uVar10 - iVar4;
    } while (99999 < uVar10);
  }
  uVar6 = nn::os::GetSystemTick();
  uVar1 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar6 = uVar1 ^ uVar1 * 0x800;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar1 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
  *(short *)(param_1 + 0x174) = (short)(uVar6 >> 0x10);
  uVar8 = (ulong)(uVar1 >> 8 ^ uVar6 >> 0x13 ^ uVar1 ^ uVar6) * 0x1b;
  *(char *)(param_1 + 0x176) = (char)(uVar8 >> 0x20);
  lVar9 = (ulong)(uVar10 + 0x7f1cd4ef + (uVar6 >> 0x10)) << (uVar8 >> 0x20) + 3;
  iVar7 = (int)((ulong)lVar9 >> 0x20) + (int)lVar9;
  *(int *)(param_1 + 0x170) = iVar7;
  *(char *)(param_1 + 0x177) =
       (char)iVar7 + (char)((uint)iVar7 >> 0x10) + (char)((uint)iVar7 >> 0x18) +
       (char)((uint)iVar7 >> 8) + -0x2d;
  return;
}

