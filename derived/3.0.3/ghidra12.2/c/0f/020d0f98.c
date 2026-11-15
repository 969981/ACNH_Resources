
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020d0f98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((DAT_05aa8928 != (int *)0x0) &&
     ((*DAT_05aa8928 != 0 || DAT_05aa8928[2] != 0) && *DAT_05aa8928 == *(int *)(param_1 + 8))) {
    *(undefined1 *)(DAT_05aa8928 + 0x2c) = 1;
  }
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined4 *)(param_1 + 0x2068) = 3;
  uVar4 = DAT_053e0d00;
  uVar3 = DAT_053e0cf4;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(undefined4 *)(param_1 + 0x207c) = uVar3;
  *(undefined4 *)(param_1 + 0x2088) = uVar4;
  uVar2 = DAT_053e0cec;
  uVar1 = DAT_053e0ce4;
  *(undefined8 *)(param_1 + 0x2080) = _DAT_053e0cf8;
  *(undefined8 *)(param_1 + 0x206c) = uVar1;
  *(undefined8 *)(param_1 + 0x2074) = uVar2;
  *(undefined1 *)(param_1 + 0x20ac) = 0;
  return;
}

