
byte * FUN_02507e7c(byte *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_04bb5038;
  bVar3 = *param_1;
  uVar5 = (ulong)bVar3;
  if (7 < bVar3) {
    return param_1;
  }
  if (uVar5 + 1 == 8) {
LAB_02507ea8:
    bVar3 = 0xff;
  }
  else {
    pbVar4 = PTR_DAT_04bb5038 + uVar5 + 1;
    uVar2 = FUN_02507924(param_1,pbVar4);
    if ((uVar2 & 1) == 0) {
      if (uVar5 + 2 == 8) goto LAB_02507ea8;
      pbVar4 = puVar1 + uVar5 + 2;
      uVar2 = FUN_02507924(param_1,pbVar4);
      if ((uVar2 & 1) == 0) {
        if (uVar5 + 3 == 8) goto LAB_02507ea8;
        pbVar4 = puVar1 + uVar5 + 3;
        uVar2 = FUN_02507924(param_1,pbVar4);
        if ((uVar2 & 1) == 0) {
          if (uVar5 + 4 == 8) goto LAB_02507ea8;
          pbVar4 = puVar1 + uVar5 + 4;
          uVar2 = FUN_02507924(param_1,pbVar4);
          if ((uVar2 & 1) == 0) {
            if (uVar5 + 5 == 8) goto LAB_02507ea8;
            pbVar4 = puVar1 + uVar5 + 5;
            uVar2 = FUN_02507924(param_1,pbVar4);
            if ((uVar2 & 1) == 0) {
              if (uVar5 + 6 == 8) goto LAB_02507ea8;
              pbVar4 = puVar1 + uVar5 + 6;
              uVar2 = FUN_02507924(param_1,pbVar4);
              if ((uVar2 & 1) == 0) {
                if (uVar5 + 7 == 8) goto LAB_02507ea8;
                pbVar4 = puVar1 + uVar5 + 7;
                uVar2 = FUN_02507924(param_1,pbVar4);
                if ((uVar2 & 1) == 0) {
                  if (bVar3 == 0) goto LAB_02507ea8;
                  pbVar4 = puVar1 + uVar5 + 8;
                  FUN_02507924(param_1,pbVar4);
                }
              }
            }
          }
        }
      }
    }
    bVar3 = *pbVar4;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
  }
  *param_1 = bVar3;
  return param_1;
}

