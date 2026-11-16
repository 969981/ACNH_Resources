
void FUN_02603510(long param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar3 = FUN_0265c2a0(param_2);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    iVar2 = FUN_020fd950(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (-1 < iVar2) {
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "NNPCUniqueID";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,iVar2);
      }
    }
  }
  return;
}

