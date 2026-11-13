
void FUN_013e666c(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  
  bVar1 = *param_2;
  if ((bVar1 < 8) && (DAT_04cb00c0 != 0)) {
    bVar3 = *(byte *)(DAT_04cb00c0 + 0x44);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (bVar1 == bVar3) {
      lVar2 = 0;
    }
    else {
      bVar3 = *(byte *)(DAT_04cb00c0 + 100);
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar1 == bVar3) {
        lVar2 = 1;
      }
      else {
        bVar3 = *(byte *)(DAT_04cb00c0 + 0x84);
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        if (bVar1 == bVar3) {
          lVar2 = 2;
        }
        else {
          bVar3 = *(byte *)(DAT_04cb00c0 + 0xa4);
          if (7 < bVar3) {
            bVar3 = 0xff;
          }
          if (bVar1 == bVar3) {
            lVar2 = 3;
          }
          else {
            bVar3 = *(byte *)(DAT_04cb00c0 + 0xc4);
            if (7 < bVar3) {
              bVar3 = 0xff;
            }
            if (bVar1 == bVar3) {
              lVar2 = 4;
            }
            else {
              bVar3 = *(byte *)(DAT_04cb00c0 + 0xe4);
              if (7 < bVar3) {
                bVar3 = 0xff;
              }
              if (bVar1 == bVar3) {
                lVar2 = 5;
              }
              else {
                bVar3 = *(byte *)(DAT_04cb00c0 + 0x104);
                if (7 < bVar3) {
                  bVar3 = 0xff;
                }
                if (bVar1 == bVar3) {
                  lVar2 = 6;
                }
                else {
                  bVar3 = *(byte *)(DAT_04cb00c0 + 0x124);
                  if (7 < bVar3) {
                    bVar3 = 0xff;
                  }
                  if (bVar1 != bVar3) {
                    lVar2 = DAT_04cb00c0 + 0x140;
                    if (*(int *)(DAT_04cb00c0 + 0x14c) != 0) {
                      return;
                    }
                    goto LAB_013e6794;
                  }
                  lVar2 = 7;
                }
              }
            }
          }
        }
      }
    }
    lVar2 = DAT_04cb00c0 + 0x40 + lVar2 * 0x20;
    if (*(int *)(lVar2 + 0xc) == 0) {
LAB_013e6794:
      *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(param_1 + 0x230);
      return;
    }
  }
  return;
}

