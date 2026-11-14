
void FUN_01afb7fc(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 8);
  iVar4 = DAT_04c896fc;
  local_48._0_4_ = DAT_04c896f8;
  if (*(long *)puVar1 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_48 = 0;
      FUN_01afb1a0(param_1,auStack_50);
      iVar3 = FUN_01afb8e8(param_1);
      iVar4 = local_48._4_4_;
      if (iVar3 != 1) {
        iVar4 = (int)local_48;
        iVar3 = local_48._4_4_;
        if ((param_3 & 0x80000001) != 1) {
          iVar4 = local_48._4_4_;
          iVar3 = (int)local_48;
        }
        local_48._0_4_ = iVar3;
      }
      *(undefined8 *)(param_2 + 0x10) = 0;
      local_48._0_4_ = (int)local_48 + -1;
      iVar4 = iVar4 + -1;
      goto LAB_01afb8cc;
    }
  }
  *(int *)(param_2 + 0x10) = DAT_04c896f8;
  *(int *)(param_2 + 0x14) = iVar4;
LAB_01afb8cc:
  *(int *)(param_2 + 0x20) = (int)local_48;
  *(int *)(param_2 + 0x24) = iVar4;
  return;
}

