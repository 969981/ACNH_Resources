
ulong FUN_00146200(byte param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (lVar2 == 0) {
    lVar2 = FUN_001432f0(0x20);
    *param_2 = lVar2;
    if (lVar2 == 0) goto LAB_0014628c;
    lVar3 = 0;
    param_2[1] = 0;
    param_2[2] = 0x20;
  }
  else {
    lVar3 = param_2[1];
    uVar1 = param_2[2];
    if (uVar1 <= lVar3 + 1U) {
      if (0 < (long)uVar1) {
        lVar2 = FUN_00143310(lVar2,uVar1 << 1);
        if (lVar2 != 0) {
          lVar3 = param_2[1];
          *param_2 = lVar2;
          param_2[2] = uVar1 << 1;
          goto LAB_00146274;
        }
      }
LAB_0014628c:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
  }
LAB_00146274:
  *(byte *)(lVar2 + lVar3) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}

