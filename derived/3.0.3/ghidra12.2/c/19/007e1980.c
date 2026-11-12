
void FUN_007e1980(int *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  uint local_8;
  uint local_4;
  
  FUN_02b4b560(*param_1);
  FUN_007e2140(param_1);
  FUN_007e2520(param_1);
  FUN_007e2700();
  FUN_007e1a80(param_1);
  if (*param_1 != -1) {
    local_8 = 0;
    uVar1 = FUN_02b5e950(&local_8);
    if (((uVar1 & 1) != 0) && (local_4 = local_8, DAT_05574040 != 0)) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 != 0) {
          lVar2 = lVar2 + 0x70;
          goto LAB_007e1a2c;
        }
      }
      else if (((puVar4 != (undefined8 *)0x0) && ((long *)puVar4[0x26] != (long *)0x0)) &&
              (lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar2 != 0)) {
LAB_007e1a2c:
        if (local_4 < 8) {
          lVar3 = lVar2 + 0x119228 + (ulong)local_4 * 0xfa08;
          if (7 < local_4) {
            lVar3 = lVar2 + 0x119228;
          }
          goto LAB_007e1a3c;
        }
      }
    }
  }
  lVar3 = 0;
LAB_007e1a3c:
  FUN_007e34d0(param_1,lVar3);
  FUN_007e1cc0(param_1);
  FUN_007e1f20(param_1);
  return;
}

