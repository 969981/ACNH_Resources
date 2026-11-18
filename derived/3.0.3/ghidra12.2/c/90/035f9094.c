
void FUN_035f9094(char *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(param_2 >> 0xc & 0xf);
  uVar1 = *(ushort *)(param_1 + uVar2 * 2 + 0x1c0) & 0xff;
  if ((*(ushort *)(param_1 + uVar2 * 2 + 0x1c0) & 0xff) != 0) goto LAB_035f91c8;
  uVar1 = 3;
  switch(uVar2) {
  case 0:
    if ((((param_2 - 0x200 & 0xffff) < 0x700) && (*param_1 == '\0')) &&
       (*(long *)(param_1 + 0x40) != 0)) {
      uVar1 = 1;
    }
    else {
      if ((0xff < (param_2 & 0xffff)) || (*param_1 != '\0')) goto switchD_035f9104_caseD_1;
      uVar1 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
switchD_035f9104_caseD_1:
    uVar1 = 2;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    uVar1 = 4;
    break;
  case 10:
  case 0xb:
    uVar1 = 5;
    break;
  case 0xc:
    uVar1 = 6;
    break;
  case 0xd:
    uVar1 = 7;
    break;
  case 0xe:
    uVar1 = 8;
    break;
  default:
    uVar1 = 0xb;
    if (((param_2 ^ 0xffffffff) & 0xffff) == 0) {
      uVar1 = 0xd;
    }
    else if ((param_2 >> 7 & 0x1ff) < 0x1ff) {
      if (((param_2 >> 8 & 0xff) < 0xff) && (uVar1 = 10, (param_2 >> 9 & 0x7f) < 0x7f)) {
        uVar1 = 9;
      }
    }
    else {
      uVar1 = 0xc;
    }
    goto LAB_035f91c8;
  }
LAB_035f91c8:
                    /* WARNING: Could not recover jumptable at 0x035f91f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_035f91f8 + (ulong)(byte)(&DAT_04193349)[uVar1] * 4))();
  return;
}

