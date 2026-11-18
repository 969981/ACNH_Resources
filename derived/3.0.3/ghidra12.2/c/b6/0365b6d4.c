
void FUN_0365b6d4(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x218c);
  if (iVar1 != 0) {
    uVar2 = FUN_0365c1e0(param_1,param_1 + 0x204c,iVar1);
    uVar2 = FUN_0365c1e0(uVar2,param_1 + 0x2098,iVar1);
    uVar2 = FUN_0365c320(uVar2,param_1 + 0x20e4,iVar1);
    FUN_0365c470(uVar2,param_1 + 0x2114,iVar1);
    *(undefined4 *)(param_1 + 0x218c) = 0;
    *(int *)(param_1 + 0x2038) = *(int *)(param_1 + 0x2038) + iVar1;
  }
  param_1 = param_1 + (ulong)param_2 * 0x4c;
  *(uint *)(param_1 + 0x2074) = param_3 & 7;
  *(uint *)(param_1 + 0x2070) = param_3 >> 4 & 7;
  *(byte *)(param_1 + 0x2078) = (byte)(param_3 >> 7) & 1;
  *(byte *)(param_1 + 0x2079) = (byte)(param_3 >> 3) & 1;
  *(undefined1 *)(param_1 + 0x207a) = 1;
  return;
}

