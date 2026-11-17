
undefined8 FUN_02b165e4(long param_1,undefined8 param_2,uint param_3,char *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_4 == (char *)0x0) {
    return 0;
  }
  puVar1 = (undefined4 *)((long)(PTR_DAT_04bc4af0 + 8) + (ulong)param_3 * 4);
  if (0x21 < param_3) {
    puVar1 = (undefined4 *)(PTR_DAT_04bc4af0 + 8);
  }
  uVar3 = FUN_01318c80(param_2,*puVar1,0);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_013188b0(param_2);
    uVar2 = (uint)(*(int *)(param_1 + 0x1c) + 0x20000000 +
                  (int)(long)((float)(uVar2 & 3) * 90.0 * 11930465.0)) >> 0x1e;
    if (((((*param_4 != '\0') && (uVar2 == 0)) || ((param_4[1] != '\0' && (uVar2 == 1)))) ||
        ((param_4[2] != '\0' && (uVar2 == 2)))) || ((param_4[3] != '\0' && (uVar2 == 3)))) {
      return 1;
    }
  }
  return 0;
}

