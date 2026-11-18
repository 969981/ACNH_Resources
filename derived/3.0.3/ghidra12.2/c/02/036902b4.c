
undefined8 FUN_036902b4(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == param_3) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x690) == 0) && (*(int *)(param_1 + 0x688) != 1)) {
    if ((int)param_2 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x278) <= (int)param_2) {
      return 0;
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x278) <= (int)param_3) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_2 * 8);
    if ((((*(int *)(lVar2 + 0x44) != 2) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8),
         *(int *)(lVar3 + 0x44) != 2)) && (*(int *)(lVar2 + 0x44) != 1)) &&
       ((*(int *)(lVar3 + 0x44) != 1 &&
        ((((*(byte *)(lVar2 + 0x48) & 1) != 0 && ((*(byte *)(lVar3 + 0x48) & 1) != 0)) ||
         ((uVar1 = FUN_0368ebd0(*(undefined4 *)(lVar2 + 0x30)), (uVar1 & 1) != 0 &&
          (uVar1 = FUN_0368ebd0(*(undefined4 *)
                                 (*(long *)(*(long *)(param_1 + 0x280) + (ulong)param_3 * 8) + 0x30)
                               ), (uVar1 & 1) != 0)))))))) {
      return 1;
    }
  }
  return 0;
}

