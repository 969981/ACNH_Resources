
byte * FUN_007da42c(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *param_2;
  pbVar1 = (byte *)(param_1 + 0x40);
  bVar3 = *pbVar1;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (bVar2 != bVar3) {
    pbVar1 = (byte *)(param_1 + 0x4c);
    bVar3 = *pbVar1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (bVar2 != bVar3) {
      pbVar1 = (byte *)(param_1 + 0x58);
      bVar3 = *pbVar1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 != bVar3) {
        pbVar1 = (byte *)(param_1 + 100);
        bVar3 = *pbVar1;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        if (bVar2 != bVar3) {
          pbVar1 = (byte *)(param_1 + 0x70);
          bVar3 = *pbVar1;
          if (7 < bVar3) {
            bVar3 = 0xff;
          }
          if (bVar2 != bVar3) {
            pbVar1 = (byte *)(param_1 + 0x7c);
            bVar3 = *pbVar1;
            if (7 < bVar3) {
              bVar3 = 0xff;
            }
            if (bVar2 != bVar3) {
              pbVar1 = (byte *)(param_1 + 0x88);
              bVar3 = *pbVar1;
              if (7 < bVar3) {
                bVar3 = 0xff;
              }
              if (bVar2 != bVar3) {
                bVar3 = *(byte *)(param_1 + 0x94);
                if (7 < bVar3) {
                  bVar3 = 0xff;
                }
                pbVar1 = (byte *)(param_1 + 0x94);
                if (bVar2 != bVar3) {
                  pbVar1 = (byte *)(param_1 + 0xa0);
                }
              }
            }
          }
        }
      }
    }
  }
  return pbVar1;
}

