
ulong FUN_00450280(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  long local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = param_2;
  lVar4 = FUN_00450730(param_1,&local_48);
  if ((lVar4 == 0) ||
     (uVar7 = (ulong)*(uint *)(lVar4 + 4) | (lVar4 - param_1[2]) * 0x20000000, (int)uVar7 < 0)) {
    local_58 = 0;
    local_50 = -0x8000000000000000;
    FUN_00450420(param_1,local_48,&local_58,0);
    local_68 = 0;
    local_60 = -0x8000000000000000;
    uVar7 = FUN_004505b0(param_1,&local_48,&local_68);
    lVar4 = local_60;
    puVar3 = PTR_DAT_048607b8;
    uVar2 = local_60._4_4_;
    local_60 = (ulong)local_60._4_4_ << 0x20;
    if ((-1 < lVar4) && (local_68 != 0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_68,0x10,uVar2 & 0x3fffffff);
    }
    lVar4 = *param_1;
    iVar6 = (int)uVar7;
    plVar1 = (long *)(lVar4 + (long)iVar6 * 0x18 + 8);
    if (&local_58 == plVar1) {
      uVar2 = local_50._4_4_;
      if (local_50 < 0) {
        return uVar7;
      }
    }
    else {
      puVar8 = (uint *)(lVar4 + (long)iVar6 * 0x18 + 0x14);
      if ((int)*puVar8 < 0) {
        FUN_00426620(puVar3,plVar1,0x10);
      }
      if (local_50 < 0) {
        FUN_00426620(puVar3,&local_58,0x10);
      }
      lVar5 = *plVar1;
      *plVar1 = local_58;
      *(undefined4 *)(lVar4 + (long)iVar6 * 0x18 + 0x10) = (undefined4)local_50;
      uVar2 = *puVar8;
      *puVar8 = (uint)((ulong)local_50 >> 0x20);
      local_58 = lVar5;
      if ((int)uVar2 < 0) {
        return uVar7;
      }
    }
    local_50 = (ulong)uVar2 << 0x20;
    if (local_58 != 0) {
      FUN_00421f90(puVar3,local_58,0x10,uVar2 & 0x3fffffff);
    }
  }
  return uVar7;
}

