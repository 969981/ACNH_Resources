
undefined8 FUN_03b43dac(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0xc) < 6) || (7 < *(int *)(param_1 + 0xc))) {
    lVar3 = *(long *)(param_1 + 0x120);
    if (*(int *)(lVar3 + 0x14) != 0) {
      if (*(int *)(lVar3 + 0x14) == 1) {
        if ((*(int *)(param_1 + 0xc) < 6) || (7 < *(int *)(param_1 + 0xc))) {
          if (*(int *)(param_1 + 0xc) < 3) {
            *(undefined4 *)(param_1 + 0xf4) = 0;
            nn::os::LockMutex((MutexType *)(lVar3 + 0x48));
            if (*(long *)(lVar3 + 8) != 0) {
              FUN_03b60e78(0);
            }
            *(undefined4 *)(lVar3 + 0x10) = 0;
            *(undefined4 *)(lVar3 + 0x24) = 0;
            *(undefined1 *)(lVar3 + 0x18) = 0;
            nn::os::UnlockMutex((MutexType *)(lVar3 + 0x48));
            if (*(long *)(param_1 + 0x110) != 0) {
              if (*(long *)(param_1 + 0x230) != 0 || *(long *)(param_1 + 0x228) != 0) {
                FUN_03b3d410(*(long *)(param_1 + 0x110),param_1);
              }
              *(undefined8 *)(param_1 + 0x110) = 0;
            }
            *(undefined4 *)(param_1 + 0xc) = 7;
          }
          else {
            *(undefined8 *)(param_1 + 0x2c) = 0;
            FUN_03b456dc(param_1);
          }
        }
      }
      else {
        bVar1 = *(byte *)(param_1 + 0x16);
        uVar2 = 1 << (ulong)(param_2 & 0x1f);
        *(byte *)(param_1 + 0x16) = bVar1 | (byte)uVar2;
        if (bVar1 != 0) {
          return 1;
        }
        if ((uVar2 & 0xff) == 0) {
          return 1;
        }
        FUN_03b47f78(lVar3);
      }
      return 1;
    }
  }
  return 0;
}

