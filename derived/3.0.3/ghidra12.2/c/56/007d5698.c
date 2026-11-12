
void FUN_007d5698(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  if (7 < *param_2) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  bVar1 = *param_2;
  pbVar3 = (byte *)(param_1 + 0x44);
  bVar2 = *pbVar3;
  if (7 < bVar1) {
    bVar1 = 0xff;
  }
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (bVar1 != bVar2) {
    pbVar3 = (byte *)(param_1 + 100);
    bVar2 = *pbVar3;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    if (bVar1 != bVar2) {
      pbVar3 = (byte *)(param_1 + 0x84);
      bVar2 = *pbVar3;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      if (bVar1 != bVar2) {
        pbVar3 = (byte *)(param_1 + 0xa4);
        bVar2 = *pbVar3;
        if (7 < bVar2) {
          bVar2 = 0xff;
        }
        if (bVar1 != bVar2) {
          pbVar3 = (byte *)(param_1 + 0xc4);
          bVar2 = *pbVar3;
          if (7 < bVar2) {
            bVar2 = 0xff;
          }
          if (bVar1 != bVar2) {
            pbVar3 = (byte *)(param_1 + 0xe4);
            bVar2 = *pbVar3;
            if (7 < bVar2) {
              bVar2 = 0xff;
            }
            if (bVar1 != bVar2) {
              bVar2 = *(byte *)(param_1 + 0x104);
              if (7 < bVar2) {
                bVar2 = 0xff;
              }
              if (bVar1 == bVar2) {
                pbVar3 = (byte *)(param_1 + 0x104);
              }
              else {
                bVar2 = *(byte *)(param_1 + 0x124);
                if (7 < bVar2) {
                  bVar2 = 0xff;
                }
                if (bVar1 != bVar2) goto LAB_007d57b0;
                pbVar3 = (byte *)(param_1 + 0x124);
              }
            }
          }
        }
      }
    }
  }
  *pbVar3 = 0xff;
LAB_007d57b0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

