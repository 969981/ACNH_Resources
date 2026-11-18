
void FUN_03655e04(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1f68) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x298);
  if (iVar1 < 0x58) {
    switch(iVar1) {
    case 1:
      *(undefined8 *)(param_1 + 0x1c38) = 0;
      *(undefined8 *)(param_1 + 0x1c30) = 0;
      *(undefined8 *)(param_1 + 0x1c40) = 0x300000000;
      *(undefined1 *)(param_1 + 0x1c48) = 0;
      break;
    case 4:
      *(undefined8 *)(param_1 + 0x1c68) = 0;
      *(undefined4 *)(param_1 + 0x1c90) = 4;
      break;
    case 5:
      *(undefined2 *)(param_1 + 0x1db2) = 0;
      *(undefined1 *)(param_1 + 0x1db4) = 0;
      *(undefined8 *)(param_1 + 0x1d08) = 0;
      *(undefined8 *)(param_1 + 0x1d10) = 0;
      *(undefined8 *)(param_1 + 0x1d15) = 0;
      *(undefined8 *)(param_1 + 0x1d20) = 0;
      *(undefined8 *)(param_1 + 0x1d28) = 0;
      *(undefined8 *)(param_1 + 0x1d30) = 0;
      *(undefined8 *)(param_1 + 0x1d38) = 0;
      *(undefined8 *)(param_1 + 0x1d40) = 0;
      *(undefined8 *)(param_1 + 0x1d48) = 0;
      *(undefined8 *)(param_1 + 0x1d50) = 0;
      *(undefined8 *)(param_1 + 0x1d58) = 0;
      *(undefined8 *)(param_1 + 0x1d60) = 0;
      *(undefined8 *)(param_1 + 0x1d68) = 0;
      *(undefined8 *)(param_1 + 0x1d70) = 0;
      *(undefined8 *)(param_1 + 0x1d78) = 0;
      *(undefined8 *)(param_1 + 0x1d80) = 0;
      *(undefined8 *)(param_1 + 0x1d88) = 0;
      *(undefined8 *)(param_1 + 0x1d90) = 0;
      *(undefined1 *)(param_1 + 0x1d98) = 0;
      *(undefined8 *)(param_1 + 0x1da9) = 0;
      *(undefined8 *)(param_1 + 0x1da4) = 0;
      *(undefined8 *)(param_1 + 0x1d9c) = 0;
      break;
    case 9:
      *(undefined8 *)(param_1 + 0x1cb8) = 0;
      *(undefined8 *)(param_1 + 0x1c98) = 0;
      *(undefined4 *)(param_1 + 0x1ca0) = 1;
      *(undefined8 *)(param_1 + 0x1ca4) = 0;
      *(undefined8 *)(param_1 + 0x1ca9) = 0;
      *(undefined8 *)(param_1 + 0x1cbd) = 0;
      *(undefined4 *)(param_1 + 0x1cb4) = 1;
      *(undefined8 *)(param_1 + 0x1cc8) = 0x100;
      break;
    case 10:
      *(undefined8 *)(param_1 + 0x1cf0) = 0;
      *(undefined8 *)(param_1 + 0x1cd0) = 0;
      *(undefined4 *)(param_1 + 0x1cd8) = 1;
      *(undefined8 *)(param_1 + 0x1cdc) = 0;
      *(undefined8 *)(param_1 + 0x1ce1) = 0;
      *(undefined8 *)(param_1 + 0x1cf5) = 0;
      *(undefined4 *)(param_1 + 0x1cec) = 1;
      *(undefined8 *)(param_1 + 0x1d00) = 0x100;
      break;
    case 0x10:
switchD_03655e50_caseD_10:
      *(undefined8 *)(param_1 + 0x1de8) = 0;
      *(undefined4 *)(param_1 + 0x1df8) = 0xffff0000;
      *(undefined1 *)(param_1 + 0x1dfc) = 1;
      *(undefined8 *)(param_1 + 0x1df0) = 0;
      *(undefined4 *)(param_1 + 0x1e24) = 0;
      *(undefined8 *)(param_1 + 0x1e00) = 0;
      *(undefined8 *)(param_1 + 0x1e08) = 0;
      *(undefined8 *)(param_1 + 0x1e10) = 0;
      *(undefined1 *)(param_1 + 0x1e18) = 0;
      *(undefined8 *)(param_1 + 0x1e1c) = 0x600000006;
      break;
    case 0x12:
      *(undefined8 *)(param_1 + 0x1f48) = 0;
      *(undefined8 *)(param_1 + 8000) = 0;
      *(undefined8 *)(param_1 + 0x1f38) = 0;
      *(undefined1 *)(param_1 + 0x1f50) = 0;
      *(undefined4 *)(param_1 + 0x1f52) = 0;
      *(undefined4 *)(param_1 + 0x1f55) = 0;
    }
  }
  else {
    if (iVar1 < 0x99) {
      if ((iVar1 != 0x58) && (iVar1 != 0x5f)) goto switchD_03655e50_caseD_2;
    }
    else {
      if ((iVar1 == 0x99) || (iVar1 == 0x9f)) goto switchD_03655e50_caseD_10;
      if (iVar1 != 0xce) goto switchD_03655e50_caseD_2;
    }
    *(undefined8 *)(param_1 + 0x1f28) = 0;
    *(undefined1 *)(param_1 + 0x1f30) = 0;
  }
switchD_03655e50_caseD_2:
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0xf00000100;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  memset((void *)(param_1 + 0x2a8),0,0x540);
  memset((void *)(param_1 + 0x7f8),0,0x1400);
  *(undefined1 *)(param_1 + 0x1f68) = 0;
  return;
}

