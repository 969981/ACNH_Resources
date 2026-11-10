
long FUN_00142c80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_00143330(1,0x1718);
  if (lVar2 == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0xc30);
  *(long *)(lVar2 + 0xc30) = lVar4;
  lVar4 = FUN_001432f0(lVar4 + 1);
  *(long *)(lVar2 + 0x1150) = lVar4;
  if (lVar4 != 0) {
    lVar4 = FUN_001432f0(0x100);
    *(long *)(lVar2 + 0x1140) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)(lVar2 + 0x1148) = 0x100;
      memcpy((void *)(lVar2 + 0x668),(void *)(param_1 + 0x668),0x900);
      FUN_0015333c(lVar2 + 0x820,lVar2);
      memset((void *)(lVar2 + 0xca0),0,0x1f0);
      lVar4 = 0xca0;
      do {
        iVar1 = FUN_00174db4(lVar2 + lVar4,*(undefined8 *)(param_1 + lVar4));
        if (iVar1 != 0) goto LAB_00142d74;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0xe80);
      if ((*(long *)(param_1 + 0x6f8) != 0) && (lVar4 = *(long *)(param_1 + 0xe88), lVar4 != 0)) {
        uVar3 = FUN_00146674();
        lVar4 = FUN_00144e40(lVar4,uVar3);
        *(long *)(lVar2 + 0xe88) = lVar4;
        if (lVar4 == 0) goto LAB_00142d74;
        *(long *)(lVar2 + 0x6e8) = lVar4;
      }
      iVar1 = FUN_00153424(lVar2 + 0x820,param_1 + 0x820);
      if (*(long *)(param_1 + 0xa18) != 0) {
        *(undefined8 *)(lVar2 + 0xf80) = *(undefined8 *)(lVar2 + 0xa18);
      }
      if (iVar1 == 0) {
        *(undefined8 *)(lVar2 + 0x1120) = 0;
        *(undefined8 *)(lVar2 + 0x1138) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 0xfcc) = *(undefined4 *)(param_1 + 0xfcc);
        *(byte *)(lVar2 + 0x111c) =
             *(byte *)(lVar2 + 0x111c) & 0xfe | *(byte *)(param_1 + 0x111c) & 1;
        if (*(long *)(param_1 + 0xf90) != 0) {
          lVar4 = FUN_0014b8f4(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf90) + 0x800),
                               *(undefined8 *)(lVar2 + 0xf90),*(ulong *)(param_1 + 0xf60) >> 5 & 1);
          *(long *)(lVar2 + 0xf90) = lVar4;
          if (lVar4 == 0) goto LAB_00142d74;
        }
        if (*(long *)(param_1 + 0xf78) != 0) {
          lVar4 = FUN_0014e0cc();
          *(long *)(lVar2 + 0xf78) = lVar4;
          if (lVar4 == 0) goto LAB_00142d74;
        }
        if (*(long *)(param_1 + 0xf68) != 0) {
          lVar4 = FUN_00143320();
          *(long *)(lVar2 + 0xf68) = lVar4;
          if (lVar4 == 0) goto LAB_00142d74;
          *(byte *)(lVar2 + 0xf88) = *(byte *)(lVar2 + 0xf88) | 1;
        }
        if (*(long *)(param_1 + 0xf70) != 0) {
          lVar4 = FUN_00143320();
          *(long *)(lVar2 + 0xf70) = lVar4;
          if (lVar4 == 0) goto LAB_00142d74;
          *(byte *)(lVar2 + 0xf88) = *(byte *)(lVar2 + 0xf88) | 2;
        }
        if (((*(long *)(lVar2 + 0xdf8) == 0) || (iVar1 = thunk_FUN_001446f4(lVar2), iVar1 == 0)) &&
           (iVar1 = FUN_001572dc(lVar2,lVar2 + 0x12a8,*(undefined8 *)(param_1 + 0x12a8)), iVar1 == 0
           )) {
          FUN_001642e0(lVar2);
          *(undefined4 *)(lVar2 + 0x1710) = 0xc0dedbad;
          return lVar2;
        }
      }
    }
  }
LAB_00142d74:
  FUN_0014e11c(*(undefined8 *)(lVar2 + 0xf78));
  *(undefined8 *)(lVar2 + 0xf78) = 0;
  FUN_00143300(*(undefined8 *)(lVar2 + 0x1150));
  *(undefined8 *)(lVar2 + 0x1150) = 0;
  FUN_00143300(*(undefined8 *)(lVar2 + 0x1140));
  *(undefined8 *)(lVar2 + 0x1140) = 0;
  FUN_00143300(*(undefined8 *)(lVar2 + 0xf68));
  *(undefined8 *)(lVar2 + 0xf68) = 0;
  FUN_00143300(*(undefined8 *)(lVar2 + 0xf70));
  *(undefined8 *)(lVar2 + 0xf70) = 0;
  FUN_0014f1dc(lVar2);
  FUN_00143300(lVar2);
  return 0;
}

