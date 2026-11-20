
undefined8 FUN_03f2dedc(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  
  bVar2 = *(byte *)(param_1 + 8);
  if ((bVar2 >> 3 & 1) == 0) {
    if ((bVar2 & 0xe) != 2) {
      return 0;
    }
    if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x20) == 1)) {
      return 0;
    }
    if ((bVar2 >> 1 & 1) != 0) {
      DataMemoryBarrier(2,3);
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x108);
        if (iVar1 != 6) {
          if (iVar1 == 1) goto LAB_03f2df54;
          if (iVar1 != 0) {
            return 0;
          }
        }
        if (*(int *)(lVar4 + 0x10) == 7) {
          return 0;
        }
      }
    }
LAB_03f2df54:
    DataMemoryBarrier(2,3);
    if (*(int *)(param_1 + 0x20) == 3) {
      *(undefined4 *)(param_1 + 0xc) = 0xe;
LAB_03f2dfbc:
      FUN_03f2e130(param_1);
      if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
        *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 4;
        if (*(long *)(param_1 + 0x28) == 0) {
          if (*(long *)(param_1 + 0x10) != 0) goto LAB_03f2e004;
        }
        else {
          FUN_03f45838(param_1 + 0x18);
          if (*(long *)(param_1 + 0x10) == 0) {
            *(undefined4 *)(param_1 + 0xc) = 0xe;
          }
          else {
LAB_03f2e004:
            if (DAT_05b05848 != 0) {
              FUN_03f350f4(DAT_05b05848,param_1);
            }
          }
        }
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x10);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x108) != 1)) {
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 - 5U < 10) goto LAB_03f2dfbc;
        if ((iVar1 == 0) || (lVar4 == 0)) {
          return 0;
        }
        uVar3 = 0;
        switch(*(undefined4 *)(lVar4 + 0x10)) {
        case 0:
        case 7:
          goto switchD_03f2e070_caseD_0;
        case 8:
        case 10:
        case 0xb:
        case 0xd:
          FUN_03f2ebc8(param_1);
          break;
        case 9:
          FUN_03f2e314(param_1);
          break;
        case 0xc:
          FUN_03f2e51c(param_1);
          break;
        case 0xe:
          if (iVar1 == 4) {
            *(undefined4 *)(param_1 + 0xc) = 1;
          }
          FUN_03f2e130(param_1);
          break;
        case 0xf:
          FUN_03f2e694(param_1);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xc) = 0xe;
        FUN_03f2e130(param_1);
        FUN_03f2d620(param_1);
      }
    }
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
  }
  uVar3 = 1;
switchD_03f2e070_caseD_0:
  return uVar3;
}

