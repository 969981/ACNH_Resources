
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233a1e8(undefined8 *param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  uVar1 = DAT_0558600c;
  if (*(char *)(param_2 + 0xc341) != '\0') {
    uVar6 = 0x8fe;
LAB_0233a214:
    *param_1 = uVar6;
    FUN_0277d4ac(param_1);
    return;
  }
  if ((*(char *)(param_2 + 0xc205) == '\0') && (**(char **)(param_2 + 0x5fa8) == '\0')) {
    if ((param_3 & 1) != 0) {
      uVar6 = 0x323b;
      goto LAB_0233a214;
    }
    if ((((DAT_05abbc58 == 0) || (((byte)(&DAT_00001230)[DAT_05abbc58] >> 6 & 1) == 0)) &&
        (DAT_05ab5ea8 != 0)) && ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) != 0)) {
      uVar4 = *(undefined2 *)(param_2 + 0xc35c);
      uVar2 = *(undefined1 *)(param_2 + 0xc35e);
      uVar3 = *(undefined1 *)(param_2 + 0xc35f);
      uVar1 = *(undefined4 *)(param_2 + 0xc360);
      local_28 = uVar4;
      local_26 = uVar2;
      local_25 = uVar3;
      local_24 = uVar1;
      uVar5 = FUN_0277d9a8(&local_28);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0x8fe;
        FUN_0277d4ac(param_1);
        return;
      }
      *(undefined2 *)param_1 = uVar4;
      *(undefined1 *)((long)param_1 + 2) = uVar2;
      *(undefined1 *)((long)param_1 + 3) = uVar3;
      *(undefined4 *)((long)param_1 + 4) = uVar1;
      return;
    }
  }
  *(undefined4 *)param_1 = _DAT_05586008;
  *(undefined4 *)((long)param_1 + 4) = uVar1;
  return;
}

