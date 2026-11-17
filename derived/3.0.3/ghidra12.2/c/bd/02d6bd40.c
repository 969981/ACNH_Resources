
uint FUN_02d6bd40(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_16ea [2];
  undefined4 local_16e8;
  undefined4 uStack_16e4;
  undefined *local_16e0;
  undefined4 local_16d8;
  undefined4 uStack_16d4;
  long local_16d0;
  int local_40 [2];
  undefined8 local_38;
  
  FUN_007ef010(&local_16e8,param_1);
  FUN_007e4920(&local_16e0,&local_16e8);
  local_40[0] = FUN_007e68d0(&local_16e0);
  if (local_40[0] - 0x1bU < 3) {
    FUN_007ef010(auStack_16ea,param_1);
    FUN_00805ba8(&local_16e8,auStack_16ea);
    puVar1 = PTR_DAT_04bb43c0;
    local_16d0 = 0;
    local_16e0 = PTR_DAT_04bc0510 + 0x10;
    local_16d8 = local_16e8;
    uStack_16d4 = uStack_16e4;
    lVar3 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(&local_16d8);
    if (*(long *)puVar1 != 0) {
      lVar3 = *(long *)(lVar3 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar3 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(&local_16e8);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
           (lVar3 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar3 != 0)) {
          local_16d0 = lVar3;
        }
      }
    }
    local_38 = 0;
    local_40[0] = CONCAT13(local_40[0]._3_1_,0x10000);
    local_40[0] = CONCAT22(local_40[0]._2_2_,1);
    uVar2 = FUN_01add954(&local_16e0,local_40);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 & 1;
}

