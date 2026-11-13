
undefined8 FUN_013d4d38(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_90 [3];
  float local_84 [3];
  float local_78 [3];
  float local_6c [3];
  uint local_14;
  
  local_14 = 0;
  local_6c[1] = 0.0;
  lVar1 = DAT_04cfae30 + 0x28;
  fVar2 = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
  fVar3 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
  local_6c[0] = fVar3 + -20.0;
  local_6c[2] = fVar2;
  FUN_0093a950(lVar1,local_6c,&local_14);
  if ((local_14 < 0x2f) && ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) != 0)) {
    local_6c[1] = 0.0;
    local_6c[0] = fVar3 + -10.0;
    local_6c[2] = fVar2;
    FUN_0093a950(lVar1,local_6c,&local_14);
    if (0x2e < local_14) {
      return 1;
    }
    if ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0) {
      return 1;
    }
    fVar3 = fVar3 + 5.0;
  }
  else {
    local_78[1] = 0.0;
    local_78[0] = fVar3 + 20.0;
    local_78[2] = fVar2;
    FUN_0093a950(lVar1,local_78,&local_14);
    if ((0x2e < local_14) || ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0)) {
      local_84[2] = fVar2 + 20.0;
      local_84[1] = 0.0;
      local_84[0] = fVar3;
      FUN_0093a950(lVar1,local_84,&local_14);
      if ((local_14 < 0x2f) && ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) != 0)) {
        local_84[2] = fVar2 + 10.0;
        local_84[1] = 0.0;
        local_84[0] = fVar3;
        FUN_0093a950(lVar1,local_84,&local_14);
        if (0x2e < local_14) {
          return 1;
        }
        if ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0) {
          return 1;
        }
        fVar2 = fVar2 + -5.0;
      }
      else {
        local_90[2] = fVar2 + -20.0;
        local_90[1] = 0.0;
        local_90[0] = fVar3;
        FUN_0093a950(lVar1,local_90,&local_14);
        if (0x2e < local_14) {
          return 0;
        }
        if ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0) {
          return 0;
        }
        local_90[1] = 0.0;
        local_90[2] = fVar2 + -10.0;
        local_90[0] = fVar3;
        FUN_0093a950(lVar1,local_90,&local_14);
        if (0x2e < local_14) {
          return 1;
        }
        if ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0) {
          return 1;
        }
        fVar2 = fVar2 + 5.0;
      }
      *(uint *)(param_1 + 8) = (int)((float)(int)fVar3 / 10.0) - (uint)(fVar3 < 0.0);
      *(uint *)(param_1 + 0xc) = (int)((float)(int)fVar2 / 10.0) - (uint)(fVar2 < 0.0);
      return 1;
    }
    local_78[0] = fVar3 + 10.0;
    local_78[1] = 0.0;
    local_78[2] = fVar2;
    FUN_0093a950(lVar1,local_78,&local_14);
    if (0x2e < local_14) {
      return 1;
    }
    if ((1L << ((ulong)local_14 & 0x3f) & 0x620020000011U) == 0) {
      return 1;
    }
    fVar3 = fVar3 + -5.0;
  }
  *(uint *)(param_1 + 8) = (int)((float)(int)fVar3 / 10.0) - (uint)(fVar3 < 0.0);
  *(uint *)(param_1 + 0xc) = (int)((float)(int)fVar2 / 10.0) - (uint)(fVar2 < 0.0);
  return 1;
}

