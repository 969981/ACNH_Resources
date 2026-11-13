
void FUN_014c96ac(long param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  undefined8 uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x284);
  if (uVar2 < 1000) {
    if ((DAT_04c47dc0 < (short)uVar2) ||
       (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar2 & 0xffffffffU) * 0x10) == 0)) {
      uVar3 = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar2 * 0x10 + 8);
    }
    FUN_00a77b40(param_2,uVar3);
  }
  switch(*(undefined4 *)(param_1 + 0xa20)) {
  case 0:
  case 5:
  case 6:
  case 9:
    if (*(int *)(param_1 + 0x378) != 3) {
      FUN_03ebb160(param_1 + 0x370);
    }
    if (*(int *)(param_1 + 0x3c0) != 0) {
      FUN_03ebb160(param_1 + 0x3b8);
    }
    break;
  case 3:
  case 4:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    if (*(int *)(param_1 + 0x3c0) != 0) {
      FUN_03ebb160(param_1 + 0x3b8);
    }
    iVar1 = *(int *)(param_1 + 0xa18);
    if (*(int *)(param_1 + 0xa1c) != 0) {
      iVar1 = *(int *)(param_1 + 0xa1c);
    }
    if (*(int *)(param_1 + 0x378) != iVar1) {
      FUN_03ebb160(param_1 + 0x370);
    }
    *(undefined4 *)(param_1 + 0xa1c) = 0;
  }
  return;
}

