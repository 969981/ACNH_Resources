
void FUN_004490c0(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0x8000000000000000;
  if ((long *)(param_1 + 0x50) != &local_40) {
    iVar3 = *(int *)(param_1 + 0x58);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    if (0 < iVar3) {
      local_40 = FUN_004267f0(PTR_DAT_048607b8,iVar3,8,0,0,(long)&local_38 + 4);
    }
    FUN_0043aa30(local_40,uVar4,(long)iVar3 << 3);
    if (0 < iVar3) {
      lVar5 = 0;
      local_38._0_4_ = iVar3;
      do {
        lVar2 = *(long *)(local_40 + lVar5 * 8);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x28))(param_2,*(undefined8 *)(lVar2 + 0x30));
          iVar3 = (int)local_38;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
    uVar1 = local_38._4_4_;
    local_38 = (ulong)local_38._4_4_ << 0x20;
    if ((-1 < (int)uVar1) && (local_40 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_40,8,uVar1 & 0x3fffffff);
    }
  }
  return;
}

