
void FUN_02507c6c(byte *param_1,undefined4 param_2,uint param_3,byte param_4,byte param_5)

{
  undefined *puVar1;
  ulong uVar2;
  byte bVar3;
  byte *pbVar4;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  param_1[8] = param_4;
  param_1[9] = param_5;
  *param_1 = 0xff;
  puVar1 = PTR_DAT_04bb5038;
  if ((param_3 & 1) != 0) {
    uVar2 = FUN_02507924(param_1,PTR_DAT_04bb5038);
    pbVar4 = puVar1;
    if ((uVar2 & 1) == 0) {
      pbVar4 = puVar1 + 1;
      uVar2 = FUN_02507924(param_1,pbVar4);
      if ((uVar2 & 1) == 0) {
        pbVar4 = puVar1 + 2;
        uVar2 = FUN_02507924(param_1,pbVar4);
        if ((uVar2 & 1) == 0) {
          pbVar4 = puVar1 + 3;
          uVar2 = FUN_02507924(param_1,pbVar4);
          if ((uVar2 & 1) == 0) {
            pbVar4 = puVar1 + 4;
            uVar2 = FUN_02507924(param_1,pbVar4);
            if ((uVar2 & 1) == 0) {
              pbVar4 = puVar1 + 5;
              uVar2 = FUN_02507924(param_1,pbVar4);
              if ((uVar2 & 1) == 0) {
                pbVar4 = puVar1 + 6;
                uVar2 = FUN_02507924(param_1,pbVar4);
                if ((uVar2 & 1) == 0) {
                  pbVar4 = puVar1 + 7;
                  uVar2 = FUN_02507924(param_1,pbVar4);
                  if ((uVar2 & 1) == 0) {
                    return;
                  }
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
    *param_1 = bVar3;
  }
  return;
}

