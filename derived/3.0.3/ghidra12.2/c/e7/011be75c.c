
void FUN_011be75c(long param_1,uint param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 local_38;
  int local_18;
  int iStack_14;
  
  puVar4 = PTR_DAT_04bb5c90;
  if (param_1 != 0) {
    local_40 = PTR_DAT_04bbb9a8 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb5c90;
    uVar3 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x698);
    if (uVar3 < *(uint *)(lVar6 + 0x678)) {
      local_38 = *(undefined8 *)(*(long *)(lVar6 + 0x680) + (long)(int)uVar3 * 8);
    }
    else {
      local_38 = 0;
    }
    uVar5 = FUN_011a5eb0(&local_40);
    if ((uVar5 & 1) != 0) {
      uStack_48 = FUN_011a5fc0(&local_40);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      local_18 = 1;
      iStack_14 = 1;
      FUN_009790d0(&local_50,0,&iStack_14,&local_18);
      iVar1 = *(int *)(param_3 + 8) + *(int *)(*(long *)puVar4 + 0x28);
      iVar2 = *(int *)(param_3 + 0xc) + *(int *)(*(long *)puVar4 + 0x2c);
      *(int *)(param_1 + 0x10) = iVar1;
      *(int *)(param_1 + 0x14) = iVar2;
      *(int *)(param_1 + 0x20) = iVar1 + iStack_14 + -1;
      *(int *)(param_1 + 0x24) = iVar2 + local_18 + -1;
    }
  }
  return;
}

