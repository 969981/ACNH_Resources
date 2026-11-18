
ulong FUN_032c5654(long *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 auStack_4 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  uVar2 = FUN_032c5718(auStack_4);
  switch(uVar2 & 0xffffffff) {
  case 0:
    break;
  case 1:
    if (3 < uVar1 - 3) goto switchD_032c569c_default;
    puVar3 = &DAT_04101f30;
    goto LAB_032c56d4;
  case 2:
  case 3:
    if (8 < uVar1 - 3) {
      return 2;
    }
    puVar3 = &DAT_04184840;
LAB_032c56d4:
    uVar2 = (ulong)*(uint *)(puVar3 + (long)(int)(uVar1 - 3) * 4);
    break;
  case 4:
    uVar2 = (ulong)uVar1;
    if ((uVar1 != 0xe) && (uVar1 != 0xd)) {
      uVar1 = 1;
      if ((param_2 & 1) == 0) {
        uVar1 = 2;
      }
      uVar2 = (ulong)uVar1;
    }
    break;
  default:
switchD_032c569c_default:
    uVar2 = 1;
  }
  return uVar2;
}

