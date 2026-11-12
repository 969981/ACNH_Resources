
long FUN_007d558c(long param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = *param_2;
  bVar3 = *(byte *)(param_1 + 0x44);
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (bVar2 == bVar3) {
    lVar1 = 0;
  }
  else {
    bVar3 = *(byte *)(param_1 + 100);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (bVar2 == bVar3) {
      lVar1 = 1;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0x84);
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar2 == bVar3) {
        lVar1 = 2;
      }
      else {
        bVar3 = *(byte *)(param_1 + 0xa4);
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        if (bVar2 == bVar3) {
          lVar1 = 3;
        }
        else {
          bVar3 = *(byte *)(param_1 + 0xc4);
          if (7 < bVar3) {
            bVar3 = 0xff;
          }
          if (bVar2 == bVar3) {
            lVar1 = 4;
          }
          else {
            bVar3 = *(byte *)(param_1 + 0xe4);
            if (7 < bVar3) {
              bVar3 = 0xff;
            }
            if (bVar2 == bVar3) {
              lVar1 = 5;
            }
            else {
              bVar3 = *(byte *)(param_1 + 0x104);
              if (7 < bVar3) {
                bVar3 = 0xff;
              }
              if (bVar2 == bVar3) {
                lVar1 = 6;
              }
              else {
                bVar3 = *(byte *)(param_1 + 0x124);
                if (7 < bVar3) {
                  bVar3 = 0xff;
                }
                if (bVar2 != bVar3) {
                  return param_1 + 0x140;
                }
                lVar1 = 7;
              }
            }
          }
        }
      }
    }
  }
  return param_1 + 0x40 + lVar1 * 0x20;
}

