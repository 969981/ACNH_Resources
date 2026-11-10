
int FUN_0014f684(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00143330(1,0x1718);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x1710) = 0xc0dedbad;
    iVar1 = FUN_001572a0(lVar2,lVar2 + 0x12a8);
    if (iVar1 != 0) {
      FUN_00143300(lVar2);
      return iVar1;
    }
    lVar3 = FUN_001432f0(0x4001);
    *(long *)(lVar2 + 0x1150) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_001432f0(0x100);
      *(long *)(lVar2 + 0x1140) = lVar3;
      if (lVar3 != 0) {
        FUN_0014f4b8(lVar2);
        *(undefined8 *)(lVar2 + 0x1148) = 0x100;
        FUN_001642e0(lVar2);
        *(undefined8 *)(lVar2 + 0x1138) = 0xffffffffffffffff;
        *(undefined8 *)(lVar2 + 0x1160) = 0xffffffffffffffff;
        *(uint *)(lVar2 + 0xfcc) = *(uint *)(lVar2 + 0xfcc) | 0x10;
        FUN_001595d4(lVar2 + 0x1120);
        *param_1 = lVar2;
        return 0;
      }
    }
    thunk_FUN_00143300(*(undefined8 *)(lVar2 + 0x12a8));
    FUN_00143300(*(undefined8 *)(lVar2 + 0x1150));
    FUN_00143300(*(undefined8 *)(lVar2 + 0x1140));
    FUN_0014f1dc(lVar2);
    FUN_00143300(lVar2);
  }
  return 0x1b;
}

