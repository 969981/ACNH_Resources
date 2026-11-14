
undefined4 FUN_01b97400(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (((DAT_05336fc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_05336fc0), iVar2 != 0)) {
    DAT_05336fb8 = 0;
    DAT_05336f90 = 0x100000000;
    DAT_05336f98 = 0x300000002;
    DAT_05336fa0 = 0x500000004;
    DAT_05336fa8 = 0x700000006;
    DAT_05336fb0 = 8;
    __cxa_guard_release(&DAT_05336fc0);
  }
  uVar3 = 0;
  switch(*param_1) {
  case 1:
    pbVar4 = (byte *)(param_1 + 2);
    break;
  case 2:
    pbVar4 = (byte *)((long)param_1 + 0xe);
    break;
  case 3:
    pbVar4 = (byte *)((long)param_1 + 0x11);
    break;
  default:
    goto switchD_01b97444_caseD_4;
  case 5:
    pbVar4 = (byte *)(param_1 + 5);
    break;
  case 6:
    pbVar4 = (byte *)((long)param_1 + 0x15);
  }
  uVar3 = 0;
  if (*pbVar4 < 0xb) {
    uVar3 = (uint)*pbVar4;
  }
switchD_01b97444_caseD_4:
  if (uVar3 < 0xb) {
    uVar1 = *(undefined4 *)((long)&DAT_05336f90 + (long)(int)uVar3 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

