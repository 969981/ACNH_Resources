
undefined8
FUN_014ca258(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 local_34;
  
  if (*(int *)(param_4 + 0xb58) == 0) {
    return 0;
  }
  if (*(int *)(param_4 + 0xb58) != 0) {
    lVar1 = param_4 + 0xb40;
    local_34 = 0;
    uVar2 = FUN_014e7730(lVar1,&local_34,param_4 + 0xa3c);
    if ((uVar2 & 1) != 0) {
      FUN_014e70e0(param_4 + 0x720,lVar1);
      uVar2 = FUN_014e85c0(param_4 + 0x720,local_34,param_4 + 0x740,param_4 + 0xa3c);
      if ((uVar2 & 1) != 0) {
        uVar3 = FUN_014e8b30(lVar1);
        *(undefined4 *)(param_4 + 0xa3c) = uVar3;
        FUN_014e8b30(lVar1);
        *(undefined4 *)(param_4 + 0xa44) = param_3;
        if (*(int *)(param_4 + 0x3c0) != 3) {
          FUN_03ebb160(param_4 + 0x3b8);
        }
        return 1;
      }
    }
  }
  return 0;
}

