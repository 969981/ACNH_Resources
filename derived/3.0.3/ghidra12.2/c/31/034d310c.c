
undefined8 FUN_034d310c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_30;
  undefined1 local_28;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < 0) {
    return 0;
  }
  lVar3 = *(long *)(DAT_0538adc8 + 0x270);
  if (lVar3 != 0) {
    uVar6 = (ulong)*(uint *)(lVar3 + 0x10);
    if (1 < *(uint *)(lVar3 + 0x10)) {
      uVar6 = 0;
    }
    lVar3 = *(long *)(lVar3 + uVar6 * 8);
    if ((int)uVar1 < *(int *)(lVar3 + 0x28)) {
      lVar4 = *(long *)(lVar3 + 0x18);
      if (*(uint *)(lVar3 + 0x10) <= uVar1) {
        uVar1 = 0;
      }
      if (((lVar4 != 0) && (*(char *)(lVar4 + (ulong)uVar1 * 0x58 + 8) != '\0')) &&
         (*(long *)(lVar4 + (ulong)uVar1 * 0x58 + 0x48) == 9)) {
        puVar5 = *(undefined8 **)(lVar4 + (ulong)uVar1 * 0x58 + 0x38);
        local_30 = *puVar5;
        local_28 = *(undefined1 *)(puVar5 + 1);
        uVar6 = FUN_01ccfa60(param_2,&local_30);
        if ((uVar6 & 1) != 0) {
          return 1;
        }
      }
      *(undefined2 *)(param_2 + 1) = 0;
      puVar2 = PTR_DAT_04bb3170;
      *param_2 = 0;
      *(undefined2 *)((long)param_2 + 10) = *(undefined2 *)puVar2;
      return 0;
    }
  }
  return 0;
}

