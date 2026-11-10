
ulong FUN_001714c0(long param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return 0xfffffe0b;
  }
  if ((*(byte *)(param_1 + 0x99c) & 1) == 0) {
    uVar3 = 0xfffffdf9;
  }
  else {
    uVar3 = FUN_00172374(param_1,param_1 + 0x954,param_1 + 0x950,*(undefined1 *)(param_1 + 0x9ac),0,
                         param_3,*(undefined4 *)(param_1 + 0x95c));
    if ((-0x385 < (int)uVar3) && (lVar4 = FUN_001726f0(param_1,param_2), uVar3 = 0, lVar4 != 0)) {
      if (((*(byte *)(lVar4 + 0xe4) >> 1 & 1) == 0) && (*(int *)(lVar4 + 0xdc) != 5)) {
        uVar2 = FUN_00172374(param_1,lVar4 + 0xc4,lVar4 + 0xc0,*(undefined1 *)(lVar4 + 0xe7),
                             *(undefined4 *)(lVar4 + 0xb8),param_3,*(undefined4 *)(lVar4 + 0xcc));
        uVar1 = 0;
        if ((int)uVar2 < -900) {
          uVar1 = uVar2;
        }
        uVar3 = (ulong)uVar1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

