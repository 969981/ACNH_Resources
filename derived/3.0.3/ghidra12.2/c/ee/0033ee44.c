
uint FUN_0033ee44(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
                 int *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long lStack_58;
  uint local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  
  local_40 = param_4 == 3;
  iVar1 = *param_6;
  if ((bool)local_40) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x240) + (ulong)param_4 * 8 + 0x350);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x1c8) + (long)iVar1 * 0x7d8 + 0x7b8) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x1c8) + (long)iVar1 * 0x7d8 + 0x7c0) = 6;
  local_60 = param_2;
  lStack_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_38 = param_6;
  uVar2 = FUN_0031c3b0(&local_60);
  if ((uVar2 & 1) != 0) {
    if (*(code **)(param_3 + 0x488) != (code *)0x0) {
      (**(code **)(param_3 + 0x488))(&local_60);
    }
    iVar1 = *param_6;
    *(undefined8 *)(*(long *)(param_1 + 0x1c8) + (long)iVar1 * 0x7d8 + 0x7b8) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x1c8) + (long)iVar1 * 0x7d8 + 0x7c0) = 6;
  }
  return uVar2 & 1;
}

