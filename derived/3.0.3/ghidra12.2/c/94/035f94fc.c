
void FUN_035f94fc(char *param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = ((ulong)param_2 & 0xf000) >> 0xc;
  if ((*(ushort *)(param_1 + uVar1 * 2 + 0x1c0) & 0xff) != 0) {
    FUN_035f9634();
    return;
  }
  if ((int)(((ulong)param_2 & 0xffff) >> 0xc) == 0xf) {
    if (((param_2 ^ 0xffffffff) & 0xffff) == 0) {
      FUN_035f9634();
      return;
    }
    if (0x1fe < (param_2 >> 7 & 0x1ff)) {
      FUN_035f9634();
      return;
    }
    if ((param_2 >> 8 & 0xff) < 0xff) {
      FUN_035f9634();
      return;
    }
switchD_035f9570_caseD_f:
    FUN_035f9634();
    return;
  }
  switch(uVar1) {
  case 0:
    if (((((param_2 - 0x200 & 0xffff) < 0x700) && (*param_1 == '\0')) &&
        (*(long *)(param_1 + 0x40) != 0)) || (((param_2 & 0xffff) < 0x100 && (*param_1 == '\0'))))
    break;
  case 1:
  case 2:
  case 3:
    break;
  case 8:
  case 9:
    break;
  case 10:
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    goto switchD_035f9570_caseD_f;
  }
  FUN_035f9634();
  return;
}

