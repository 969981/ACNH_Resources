
undefined8 FUN_00a7c5f8(long param_1,byte *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  
  pbVar2 = (byte *)(param_1 + 8);
  if (*pbVar2 < 8) {
    pbVar2 = (byte *)(param_1 + 0x18);
    if (*pbVar2 < 8) {
      pbVar2 = (byte *)(param_1 + 0x28);
      if (*pbVar2 < 8) {
        pbVar2 = (byte *)(param_1 + 0x38);
        if (*pbVar2 < 8) {
          pbVar2 = (byte *)(param_1 + 0x48);
          if (*pbVar2 < 8) {
            pbVar2 = (byte *)(param_1 + 0x58);
            if (*pbVar2 < 8) {
              pbVar2 = (byte *)(param_1 + 0x68);
              if (*pbVar2 < 8) {
                pbVar2 = (byte *)(param_1 + 0x78);
                if (*pbVar2 < 8) {
                  return 0;
                }
                lVar3 = 7;
              }
              else {
                lVar3 = 6;
              }
            }
            else {
              lVar3 = 5;
            }
          }
          else {
            lVar3 = 4;
          }
        }
        else {
          lVar3 = 3;
        }
      }
      else {
        lVar3 = 2;
      }
    }
    else {
      lVar3 = 1;
    }
  }
  else {
    lVar3 = 0;
  }
  bVar4 = *param_2;
  puVar1 = (undefined8 *)(param_1 + lVar3 * 0x10);
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *pbVar2 = bVar4;
  *puVar1 = *param_3;
  *(undefined1 *)((long)puVar1 + 9) = *param_4;
  return 1;
}

