
void FUN_0022c404(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_18;
  uint uStack_14;
  
  uVar2 = *(uint *)(param_1 + 9);
  iVar4 = 0x38;
  if (0x37 < uVar2) {
    iVar4 = 0x78;
  }
  uVar3 = (uint)(CONCAT44((int)param_1[10],*(int *)((long)param_1 + 0x4c)) >> 0x17);
  uVar1 = *(int *)((long)param_1 + 0x4c) * 0x200 + uVar2 * 8;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_18 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_14 = uVar1 >> 0x10 | uVar1 << 0x10;
  (**(code **)(*param_1 + 8))(param_1,&DAT_04be2489,iVar4 - uVar2);
  (**(code **)(*param_1 + 8))(param_1,&local_18,8);
  return;
}

