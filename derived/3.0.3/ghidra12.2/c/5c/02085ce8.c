
undefined8 FUN_02085ce8(long param_1,undefined4 param_2,ulong param_3,undefined4 *param_4)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_3 & 1) != 0) {
    piVar1 = (int *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x294) * 0x20;
    if (4 < *(uint *)(param_1 + 0x294)) {
      piVar1 = (int *)(param_1 + 0x10);
    }
    if (*piVar1 == 1) {
      return 0;
    }
  }
  uVar3 = FUN_02085a50(param_1,1,param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x801) = 1;
  lVar2 = param_1 + 0x10 + (ulong)*(uint *)(param_1 + 0x294) * 0x80;
  if (4 < *(uint *)(param_1 + 0x294)) {
    lVar2 = param_1 + 0x10;
  }
  *(undefined4 *)(lVar2 + 0xc) = *param_4;
  *(undefined4 *)(lVar2 + 0x10) = param_4[1];
  *(undefined4 *)(lVar2 + 0x14) = param_4[2];
  return 1;
}

