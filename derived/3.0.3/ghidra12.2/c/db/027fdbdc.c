
int FUN_027fdbdc(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long local_68;
  undefined **local_60;
  long local_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x170);
  iVar7 = 99999;
  if ((*(byte *)(param_1 + 0x177) != 0 ||
       (((ulong)uVar2 != 0 || *(ushort *)(param_1 + 0x174) != 0) || *(byte *)(param_1 + 0x176) != 0)
      ) && ((uint)*(byte *)(param_1 + 0x177) ==
            ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
    lVar6 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar7 = (((uint)*(ushort *)(param_1 + 0x174) - (int)lVar6) - (int)((ulong)lVar6 >> 0x20)) +
            0x7f1e5b8e;
  }
  local_68 = 0x8a4;
  FUN_0277d4ac(&local_68);
  puVar1 = PTR_DAT_04bb43c0;
  local_50 = (undefined1 *)0x0;
  local_60 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_58 = local_68;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(&local_68);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8), lVar6 != 0)) {
        local_50 = (undefined1 *)lVar6;
      }
    }
  }
  iVar3 = FUN_01aed730(&local_60);
  local_58 = param_1 + 0xb8;
  local_60 = &PTR_LAB_04a915d0;
  local_50 = &LAB_028012e0;
  uStack_48 = 0;
  uVar2 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar2) {
    uVar2 = 0x14;
  }
  iVar4 = FUN_0277cd30(uVar2,&local_60);
  local_60 = &PTR_LAB_04a915f8;
  uVar2 = *(uint *)(param_1 + 0xa0);
  local_50 = &LAB_028012f0;
  uStack_48 = 0;
  if (0x13 < uVar2) {
    uVar2 = 0x14;
  }
  local_58 = param_1;
  iVar5 = FUN_0277cd30(uVar2,&local_60);
  return iVar7 + iVar3 * param_2 + iVar4 + iVar5;
}

