
void FUN_007da50c(long param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  
  if (7 < *param_2) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  bVar1 = *param_2;
  pbVar2 = (byte *)(param_1 + 0x40);
  bVar3 = *pbVar2;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  if (bVar1 != bVar3) {
    pbVar2 = (byte *)(param_1 + 0x4c);
    bVar3 = *pbVar2;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (bVar1 != bVar3) {
      pbVar2 = (byte *)(param_1 + 0x58);
      bVar3 = *pbVar2;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      if (bVar1 != bVar3) {
        pbVar2 = (byte *)(param_1 + 100);
        bVar3 = *pbVar2;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        if (bVar1 != bVar3) {
          pbVar2 = (byte *)(param_1 + 0x70);
          bVar3 = *pbVar2;
          if (7 < bVar3) {
            bVar3 = 0xff;
          }
          if (bVar1 != bVar3) {
            pbVar2 = (byte *)(param_1 + 0x7c);
            bVar3 = *pbVar2;
            if (7 < bVar3) {
              bVar3 = 0xff;
            }
            if (bVar1 != bVar3) {
              pbVar2 = (byte *)(param_1 + 0x88);
              bVar3 = *pbVar2;
              if (7 < bVar3) {
                bVar3 = 0xff;
              }
              if (bVar1 != bVar3) {
                pbVar2 = (byte *)(param_1 + 0x94);
                bVar3 = *pbVar2;
                if (7 < bVar3) {
                  bVar3 = 0xff;
                }
                if (bVar1 != bVar3) goto LAB_007da61c;
              }
            }
          }
        }
      }
    }
  }
  *pbVar2 = 0xff;
LAB_007da61c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

