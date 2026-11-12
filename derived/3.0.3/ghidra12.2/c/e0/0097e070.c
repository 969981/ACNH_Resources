
byte FUN_0097e070(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  byte local_38;
  undefined *local_30;
  int local_28;
  int local_24;
  
  puVar2 = PTR_DAT_04bb27c8;
  local_40 = PTR_DAT_04bb5ba0 + 0x10;
  local_30 = PTR_DAT_04bb2010 + 0x10;
  fVar6 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar4 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar5 = fVar4 + 2.5;
  fVar7 = fVar6 + 2.5;
  fVar8 = fVar4 + 10.0 + -2.5;
  fVar4 = fVar6 + 10.0 + -2.5;
  local_28 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  local_24 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar1 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  if (iVar1 <= local_28) {
    local_28 = iVar1;
  }
  iVar1 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  if (iVar1 <= local_24) {
    local_24 = iVar1;
  }
  if (*(long *)PTR_DAT_04bb27c8 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
    if (lVar3 == 0) {
      return 0;
    }
    local_38 = 0;
    FUN_00974bc8(lVar3,&local_30,&local_40);
    if (((local_38 ^ 0xff) & 0x13) != 0) {
      return 0;
    }
    local_28 = local_28 + 1;
    if (*(long *)puVar2 != 0) {
      lVar3 = *(long *)(*(long *)puVar2 + 0x90);
      if (lVar3 == 0) {
        return 0;
      }
      local_38 = 0;
      FUN_00974bc8(lVar3,&local_30,&local_40);
      if (((local_38 ^ 0xff) & 0x19) != 0) {
        return 0;
      }
      local_38 = 0;
      local_24 = local_24 + 1;
      if (*(long *)puVar2 != 0) {
        lVar3 = *(long *)(*(long *)puVar2 + 0x90);
        if (lVar3 == 0) {
          return 0;
        }
        FUN_00974bc8(lVar3,&local_30,&local_40);
        if (((local_38 ^ 0xff) & 0x1c) == 0) {
          local_38 = 0;
          local_28 = local_28 + -1;
          if (*(long *)puVar2 != 0) {
            lVar3 = *(long *)(*(long *)puVar2 + 0x90);
            if (lVar3 == 0) {
              return 0;
            }
            FUN_00974bc8(lVar3,&local_30,&local_40);
            if (((local_38 ^ 0xff) & 0x12) == 0) {
              return local_38 >> 2 & 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

