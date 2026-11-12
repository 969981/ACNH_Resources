
undefined8 FUN_0098d8b0(float param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 local_68;
  float local_60;
  byte local_58 [4];
  undefined4 local_54;
  undefined2 local_50;
  byte local_4c [4];
  undefined4 local_48;
  undefined2 local_44;
  
  FUN_02507c6c(local_4c,7,1,1,0);
  puVar2 = PTR_DAT_04bb5dc0;
  puVar1 = PTR_DAT_04bb5038;
  local_54 = local_48;
  local_58[0] = local_4c[0];
  if (7 < local_4c[0]) {
    local_58[0] = 0xff;
  }
  local_50 = local_44;
  if (7 < local_4c[0]) {
    return 0;
  }
  while( true ) {
    pfVar4 = (float *)FUN_0251b3b0(local_58,0);
    local_68 = *param_2;
    local_60 = *(float *)(param_2 + 1);
    if (((pfVar4 != (float *)0x0) &&
        (SQRT((pfVar4[2] - local_60) * (pfVar4[2] - local_60) +
              (*pfVar4 - (float)local_68) * (*pfVar4 - (float)local_68)) < param_1)) &&
       ((uVar5 = FUN_0254e430(local_58), (uVar5 & 1) != 0 ||
        (uVar5 = FUN_01262040(param_1,puVar2,&local_68), (uVar5 & 1) != 0)))) {
      return 1;
    }
    bVar3 = local_58[0];
    uVar5 = (ulong)local_58[0];
    if (7 < local_58[0]) {
      return 0;
    }
    if (uVar5 + 1 == 8) break;
    pbVar7 = puVar1 + uVar5 + 1;
    uVar6 = FUN_02507924(local_58,pbVar7);
    if ((uVar6 & 1) == 0) {
      if (uVar5 + 2 == 8) {
        return 0;
      }
      pbVar7 = puVar1 + uVar5 + 2;
      uVar6 = FUN_02507924(local_58,pbVar7);
      if ((uVar6 & 1) == 0) {
        if (uVar5 + 3 == 8) {
          return 0;
        }
        pbVar7 = puVar1 + uVar5 + 3;
        uVar6 = FUN_02507924(local_58,pbVar7);
        if ((uVar6 & 1) == 0) {
          if (uVar5 + 4 == 8) {
            return 0;
          }
          pbVar7 = puVar1 + uVar5 + 4;
          uVar6 = FUN_02507924(local_58,pbVar7);
          if ((uVar6 & 1) == 0) {
            if (uVar5 + 5 == 8) {
              return 0;
            }
            pbVar7 = puVar1 + uVar5 + 5;
            uVar6 = FUN_02507924(local_58,pbVar7);
            if ((uVar6 & 1) == 0) {
              if (uVar5 + 6 == 8) {
                return 0;
              }
              pbVar7 = puVar1 + uVar5 + 6;
              uVar6 = FUN_02507924(local_58,pbVar7);
              if ((uVar6 & 1) == 0) {
                if (uVar5 + 7 == 8) {
                  return 0;
                }
                pbVar7 = puVar1 + uVar5 + 7;
                uVar6 = FUN_02507924(local_58,pbVar7);
                if ((uVar6 & 1) == 0) {
                  if (bVar3 == 0) {
                    return 0;
                  }
                  pbVar7 = puVar1 + uVar5 + 8;
                  FUN_02507924(local_58,pbVar7);
                }
              }
            }
          }
        }
      }
    }
    local_58[0] = *pbVar7;
    if (7 < local_58[0]) {
      return 0;
    }
  }
  return 0;
}

