
void FUN_035f3208(char *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  
  uVar2 = ((ulong)param_2 & 0xf000) >> 0xc;
  uVar1 = *(ushort *)(param_1 + uVar2 * 2 + 0x1c0) & 0xff;
  if ((*(ushort *)(param_1 + uVar2 * 2 + 0x1c0) & 0xff) != 0) goto LAB_035f3344;
  if ((int)(((ulong)param_2 & 0xffff) >> 0xc) == 0xf) {
    if (((param_2 ^ 0xffffffff) & 0xffff) == 0) {
      uVar1 = 0xd;
    }
    else if ((param_2 >> 7 & 0x1ff) < 0x1ff) {
      if ((param_2 >> 8 & 0xff) < 0xff) {
        uVar1 = 9;
        if (0x7e < (param_2 >> 9 & 0x7f)) {
          uVar1 = 10;
        }
      }
      else {
        uVar1 = 0xb;
      }
    }
    else {
      uVar1 = 0xc;
    }
    goto LAB_035f3344;
  }
  uVar1 = 3;
  switch(uVar2) {
  case 0:
    if ((((param_2 - 0x200 & 0xffff) < 0x700) && (*param_1 == '\0')) &&
       (*(long *)(param_1 + 0x40) != 0)) {
      uVar1 = 1;
    }
    else {
      if ((0xff < (param_2 & 0xffff)) || (*param_1 != '\0')) goto switchD_035f3284_caseD_1;
      uVar1 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
switchD_035f3284_caseD_1:
    uVar1 = 2;
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
  case 0xf:
    if ((*(byte *)(unaff_x19 + 0x178) >> 1 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x17e) = param_3;
      *(undefined1 *)(*(long *)(unaff_x19 + 0x70) + ((ulong)(param_2 + 0x3000) & 0xffff)) = param_3;
    }
    return;
  }
LAB_035f3344:
                    /* WARNING: Could not recover jumptable at 0x035f336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_035f3370 + (ulong)(&BYTE_04192a7a)[uVar1] * 4))();
  return;
}

