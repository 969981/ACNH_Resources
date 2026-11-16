
int FUN_027fd4c0(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined **local_50;
  long lStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  uVar5 = *(uint *)(param_1 + 0x170);
  if (*(byte *)(param_1 + 0x177) == 0 &&
      (((ulong)uVar5 == 0 && *(ushort *)(param_1 + 0x174) == 0) && *(byte *)(param_1 + 0x176) == 0))
  {
    iVar4 = 0;
  }
  else {
    lVar3 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0x176)) & 0x3f);
    iVar4 = 0;
    if ((uint)*(byte *)(param_1 + 0x177) ==
        ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff)) {
      iVar4 = ((int)lVar3 - (uint)*(ushort *)(param_1 + 0x174)) + (int)((ulong)lVar3 >> 0x20) +
              -0x7f1cd4ef;
    }
  }
  lStack_48 = param_1 + 0xb8;
  local_50 = &PTR_LAB_04a915d0;
  local_40 = &LAB_028012e0;
  uStack_38 = 0;
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  iVar1 = FUN_0277c8f0(uVar5,&local_50);
  local_50 = &PTR_LAB_04a915f8;
  uVar5 = *(uint *)(param_1 + 0xa0);
  local_40 = &LAB_028012f0;
  uStack_38 = 0;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  lStack_48 = param_1;
  iVar2 = FUN_0277c8f0(uVar5,&local_50);
  return iVar1 + iVar4 + iVar2;
}

