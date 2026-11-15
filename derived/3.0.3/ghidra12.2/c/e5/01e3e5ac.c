
long FUN_01e3e5ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float local_14;
  
  if (*(char *)(param_1 + 0x778) == '\0') {
    if ((*(uint *)(DAT_053e0208 + 0xd64) >> 2 & 1) != 0) {
      return DAT_053e0208 + 0xd68;
    }
    if (((*(uint *)(DAT_053e0208 + 0xd64) & 9) != 0) || ((*(byte *)(param_1 + 0x286) >> 3 & 1) != 0)
       ) {
      return 0;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 0x3b0);
    if (lVar2 != 0) {
      if ((((*(int *)(lVar2 + 0x360) != 0x14) && (*(int *)(lVar2 + 0x360) != 0x16)) ||
          ((*(int *)(lVar2 + 0x4b8) != 0 && (*(int *)(lVar2 + 0x378) == 0x23)))) &&
         (*(int *)(*(long *)(lVar2 + 0x358) + 0x750) - 1U < 2)) {
        lVar2 = *(long *)(param_1 + 0x68);
        local_14 = 0.0;
        uVar1 = FUN_021f2ed0(lVar2 + 0x278,&local_14);
        fVar3 = *(float *)(lVar2 + 0x27c);
        if ((uVar1 & 1) == 0) {
          local_14 = 0.0;
        }
        uVar4 = *(undefined4 *)(lVar2 + 0x280);
        *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(lVar2 + 0x278);
        *(undefined4 *)(param_1 + 0x768) = uVar4;
        *(float *)(param_1 + 0x764) = fVar3 - local_14;
        return param_1 + 0x760;
      }
      if (((*(int *)(lVar2 + 0x360) != 0x18) ||
          ((*(int *)(lVar2 + 0x4b8) != 0 && (*(int *)(lVar2 + 0x378) == 0x23)))) &&
         (*(int *)(*(long *)(lVar2 + 0x358) + 0x750) == 3)) {
        lVar2 = *(long *)(param_1 + 0x68);
        local_14 = 0.0;
        uVar1 = FUN_021f4f90(lVar2 + 0x278,0,&local_14);
        fVar3 = *(float *)(lVar2 + 0x27c);
        if ((uVar1 & 1) == 0) {
          local_14 = 0.0;
        }
        uVar4 = *(undefined4 *)(lVar2 + 0x280);
        *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(lVar2 + 0x278);
        *(undefined4 *)(param_1 + 0x774) = uVar4;
        *(float *)(param_1 + 0x770) = fVar3 - local_14;
        return param_1 + 0x76c;
      }
    }
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar2 = *(long *)(param_1 + 0x68) + 0x278;
  }
  return lVar2;
}

