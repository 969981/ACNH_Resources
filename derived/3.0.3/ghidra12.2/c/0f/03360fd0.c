
void FUN_03360fd0(long param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  
  if (*(long *)(param_1 + 0xdf8) != 0) {
    lVar1 = *(long *)(param_1 + 0xdf0);
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    if (lVar1 != 0) {
      lVar2 = 0;
      bVar5 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x300 + lVar2);
        if (*(long *)(lVar4 + 0x428) ==
            *(long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x18)) {
          lVar4 = *(long *)(lVar4 + 0x420);
          bVar3 = 0;
          if (lVar4 != 0) {
            bVar3 = *(byte *)(lVar4 + 0x148) & 1;
          }
          bVar5 = bVar3 | bVar5;
        }
        lVar2 = lVar2 + 8;
      } while (lVar2 != 0x98);
      if (*(char *)(param_1 + 0x177f) != '\0') {
        bVar5 = 1;
        *(char *)(param_1 + 0x177f) = '\0';
      }
      if (*(int *)(param_1 + 0x176c) == 0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
        *(long *)(lVar1 + 0x48) = lVar1 + 0x28;
        *(long *)(lVar1 + 0x50) = lVar1 + 0x28;
        lVar1 = *(long *)(param_1 + 0xdf0);
      }
      lVar2 = *(long *)(lVar1 + 0x15e0);
      if (*(long *)(*(long *)(*(long *)(lVar1 + 0x390) + 0x18) + 0x18) != lVar2) {
        *(undefined8 *)(lVar1 + 0x17d0) = 0;
        lVar4 = *(long *)(*(long *)(lVar1 + 0x390) + 0x18);
        for (lVar1 = *(long *)(lVar4 + 0x58); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
          if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
            (**(code **)(*(long *)(lVar1 + -8) + 0x30))();
          }
        }
        FUN_03290a60(lVar4,lVar2,0,0);
        *(long *)(lVar4 + 0x48) = lVar4 + 0x28;
        *(long *)(lVar4 + 0x50) = lVar4 + 0x28;
      }
      if (bVar5 != 0) {
        lVar1 = *(long *)(param_1 + 0xdf0);
        lVar2 = *(long *)(lVar1 + 0x15e0);
        if (*(long *)(*(long *)(*(long *)(lVar1 + 0x390) + 0x18) + 0x18) != lVar2) {
          *(undefined8 *)(lVar1 + 0x17d0) = 0;
          lVar4 = *(long *)(*(long *)(lVar1 + 0x390) + 0x18);
          for (lVar1 = *(long *)(lVar4 + 0x58); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
            if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
              (**(code **)(*(long *)(lVar1 + -8) + 0x30))();
            }
          }
          FUN_03290a60(lVar4,lVar2,0,0);
          *(long *)(lVar4 + 0x48) = lVar4 + 0x28;
          *(long *)(lVar4 + 0x50) = lVar4 + 0x28;
        }
      }
    }
  }
  return;
}

