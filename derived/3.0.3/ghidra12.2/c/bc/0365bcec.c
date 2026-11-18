
void FUN_0365bcec(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x218c);
  *(char *)(param_1 + 0x21a4) = (char)param_2;
  if (iVar5 != 0) {
    uVar4 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar5);
    uVar4 = FUN_0365c1e0(uVar4,param_1 + 0x2098,iVar5);
    uVar4 = FUN_0365c320(uVar4,param_1 + 0x20e4,iVar5);
    FUN_0365c470(uVar4,param_1 + 0x2114,iVar5);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar5;
  }
  *(byte *)(param_1 + 0x2048) = (byte)((param_2 & 0xff) >> 6) & 1;
  uVar6 = param_2 >> 7 & 1;
  *(uint *)(param_1 + 0x2044) = uVar6;
  if (((param_2 & 0xff) >> 6 & 1) != 0) {
    **(uint **)(param_1 + 8) = **(uint **)(param_1 + 8) & 0xfffffff7;
    *(undefined1 *)(param_1 + 0x2049) = 0;
    uVar6 = *(uint *)(param_1 + 0x2044);
  }
  if (uVar6 != 1) goto LAB_0365bde8;
  FUN_0365be64(param_1);
  if (*(char *)(param_1 + 0x20f9) == '\0') {
    if (*(int *)(param_1 + 0x20f0) != 0) {
      iVar5 = *(int *)(param_1 + 0x20f0) + -1;
      goto LAB_0365bdc8;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x20f4);
LAB_0365bdc8:
    *(int *)(param_1 + 0x20f0) = iVar5;
  }
  if (*(char *)(param_1 + 0x20f8) == '\0') {
    *(undefined1 *)(param_1 + 0x20f9) = 0;
  }
  FUN_0365bf84(param_1);
  FUN_0365c0d8(param_1);
LAB_0365bde8:
  *(undefined4 *)(param_1 + 0x2040) = 0;
  iVar5 = 0x1d24;
  if ((*(uint *)(param_1 + 0x2038) & 0x7ff) == 0) {
    iVar5 = 0x1d25;
  }
  uVar6 = *(uint *)(param_1 + (ulong)*(uint *)(param_1 + 0x21a0) * 4 + 0x2190);
  *(int *)(param_1 + 0x203c) = iVar5;
  uVar3 = iVar5 << 10;
  *(uint *)(param_1 + 0x2198) = uVar3;
  if (uVar6 < uVar3) {
    if (*(uint *)(param_1 + 0x21a0) != 2) {
      return;
    }
    uVar6 = *(uint *)(param_1 + 0x2190);
    uVar2 = *(uint *)(param_1 + 0x2194);
    uVar1 = uVar6;
    if (uVar2 <= uVar6) {
      uVar1 = uVar2;
    }
    uVar6 = (uint)(uVar2 <= uVar6);
    if (uVar3 <= uVar1) {
      uVar6 = 2;
    }
  }
  else {
    uVar6 = 2;
  }
  *(uint *)(param_1 + 0x21a0) = uVar6;
  return;
}

