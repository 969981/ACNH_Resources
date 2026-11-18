
undefined8 FUN_035ab380(uint param_1,uint param_2,int param_3,long param_4,uint param_5)

{
  ulong uVar1;
  long lVar2;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  undefined8 *local_a8;
  uint local_a0;
  uint local_9c;
  undefined1 auStack_94 [48];
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  
  local_a8 = &DAT_048f9750;
  if (-1 < (int)param_1) {
    if ((int)param_2 < 0) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_4 + 8) + 0x68);
    if (*(uint *)(lVar2 + 0x38) <= param_1 || *(uint *)(lVar2 + 0x3c) <= param_2) {
      return 0;
    }
    local_a0 = param_1;
    local_9c = param_2;
    FUN_00962530(lVar2,&local_a8,auStack_94);
    local_b8 = (uint)local_64;
    uStack_b4 = (uint)local_63;
    local_b0 = (uint)local_62;
    uStack_ac = (uint)local_61;
    if ((((((local_b8 | 2) != 10) && ((uStack_b4 | 2) != 10)) && ((local_b0 | 2) != 10)) &&
        ((uStack_ac & 0xfffffffd) != 8)) &&
       (((param_3 == 0 || (uVar1 = FUN_035a9d50(param_1,param_2,param_4), (uVar1 & 1) == 0)) &&
        ((uVar1 = FUN_035aa010(param_1,param_2,param_4,param_3 == 0), (uVar1 & 1) == 0 &&
         (uVar1 = FUN_00975ac0(&local_b8), (uVar1 & 1) == 0)))))) {
      uVar1 = FUN_00975ac0(&uStack_b4);
      if ((uVar1 & 1) == 0) {
        uVar1 = FUN_00975ac0(&local_b0);
        if ((uVar1 & 1) == 0) {
          uVar1 = FUN_00975ac0(&uStack_ac);
          if ((((uVar1 & 1) == 0) && (uVar1 = FUN_00975ae0(&local_b8), (uVar1 & 1) == 0)) &&
             ((uVar1 = FUN_00975ae0(&uStack_b4), (uVar1 & 1) == 0 &&
              ((uVar1 = FUN_00975ae0(&local_b0), (uVar1 & 1) == 0 &&
               (uVar1 = FUN_00975ae0(&uStack_ac), (uVar1 & 1) == 0)))))) {
            if ((param_5 & 1) != 0) {
              if (local_64 == 0x1c) {
                return 0;
              }
              if (local_63 == 0x1c) {
                return 0;
              }
              if (local_62 == 0x1c) {
                return 0;
              }
              if (local_61 == 0x1c) {
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

