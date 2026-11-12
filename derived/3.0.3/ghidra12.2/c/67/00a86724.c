
undefined8 FUN_00a86724(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x65410) != 0) {
    switch(*(undefined4 *)(param_1 + 0x65410)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 0xe:
    case 0xf:
    case 0x10:
      uVar1 = *(undefined1 *)(param_1 + 0x6543c);
      goto LAB_00a86790;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      uVar3 = FUN_00a86ba4(param_1,param_1 + 0x65438);
      return uVar3;
    }
  }
  if ((*(short *)(param_1 + 0x651e0) == 0) ||
     (uVar2 = nn::time::IsValidDate
                        ((int)*(short *)(param_1 + 0x651e0),(int)*(char *)(param_1 + 0x651e2),
                         (int)*(char *)(param_1 + 0x651e3)), (uVar2 & 1) == 0)) {
    return 0;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x651e4);
LAB_00a86790:
  uVar3 = FUN_00a868d0(param_1,uVar1);
  return uVar3;
}

