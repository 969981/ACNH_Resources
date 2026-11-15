
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0214ed5c(long param_1,int param_2,byte param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x1e4) != 0) && (*(int *)(param_1 + 0x1e4) != 0x22)) {
    *(undefined2 *)(param_1 + 0x1e8) = 0;
    *(undefined1 *)(param_1 + 0x1ea) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0x22001d0005;
  }
  if (_DAT_05453f70 == param_2) {
    lVar2 = 0;
  }
  else {
    if (DAT_05453f74 != param_2) goto LAB_0214edec;
    lVar2 = 1;
  }
  *(undefined4 *)(&DAT_05453f70 + lVar2 * 4) = 0xffffffff;
LAB_0214edec:
  *(byte *)(param_1 + 0x1e8) = param_3 & 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0x4001d0005;
  *(undefined2 *)(param_1 + 0x1e9) = 0;
  if (*(long *)(param_1 + 0x1f0) == 0) {
    uVar1 = 0x22;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x1f0) + 4);
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar1;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  FUN_0214d220(param_1);
  *(undefined1 *)(param_1 + 0x236) = 1;
  return;
}

