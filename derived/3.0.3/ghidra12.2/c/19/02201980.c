
undefined8 FUN_02201980(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  byte local_4c [12];
  
  FUN_02507c6c(local_4c,1,1,0,0);
  puVar3 = PTR_DAT_04bb5038;
  puVar2 = PTR_DAT_04bb2020;
  if (7 < local_4c[0]) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    pcStack_58 = "WaterPlant";
    local_60 = puVar1;
    uVar5 = FUN_0279b680(local_4c,&local_60);
    if ((uVar5 & 1) != 0) {
      local_70 = puVar2 + 0x10;
      pcStack_68 = "WaterPlant";
      uVar5 = FUN_0279b1b0(local_4c,&local_70);
      if ((uVar5 & 1) == 0) {
        return 1;
      }
    }
    bVar4 = local_4c[0];
    uVar5 = (ulong)local_4c[0];
    if (7 < local_4c[0]) {
      return 0;
    }
    if (uVar5 + 1 == 8) {
      return 0;
    }
    pbVar7 = puVar3 + uVar5 + 1;
    uVar6 = FUN_02507924(local_4c,pbVar7);
    if ((uVar6 & 1) == 0) {
      if (uVar5 + 2 == 8) {
        return 0;
      }
      pbVar7 = puVar3 + uVar5 + 2;
      uVar6 = FUN_02507924(local_4c,pbVar7);
      if ((uVar6 & 1) == 0) {
        if (uVar5 + 3 == 8) {
          return 0;
        }
        pbVar7 = puVar3 + uVar5 + 3;
        uVar6 = FUN_02507924(local_4c,pbVar7);
        if ((uVar6 & 1) == 0) {
          if (uVar5 + 4 == 8) {
            return 0;
          }
          pbVar7 = puVar3 + uVar5 + 4;
          uVar6 = FUN_02507924(local_4c,pbVar7);
          if ((uVar6 & 1) == 0) {
            if (uVar5 + 5 == 8) {
              return 0;
            }
            pbVar7 = puVar3 + uVar5 + 5;
            uVar6 = FUN_02507924(local_4c,pbVar7);
            if ((uVar6 & 1) == 0) {
              if (uVar5 + 6 == 8) {
                return 0;
              }
              pbVar7 = puVar3 + uVar5 + 6;
              uVar6 = FUN_02507924(local_4c,pbVar7);
              if ((uVar6 & 1) == 0) {
                if (uVar5 + 7 == 8) {
                  return 0;
                }
                pbVar7 = puVar3 + uVar5 + 7;
                uVar6 = FUN_02507924(local_4c,pbVar7);
                if ((uVar6 & 1) == 0) {
                  if (bVar4 == 0) {
                    return 0;
                  }
                  pbVar7 = puVar3 + uVar5 + 8;
                  FUN_02507924(local_4c,pbVar7);
                }
              }
            }
          }
        }
      }
    }
    local_4c[0] = *pbVar7;
  } while (local_4c[0] < 8);
  return 0;
}

