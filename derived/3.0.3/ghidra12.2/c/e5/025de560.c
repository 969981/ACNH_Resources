
void FUN_025de560(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar1 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
    if (lVar1 != 0) {
      if ((*(long **)(lVar1 + 0x276ed0) == (long *)0x0) ||
         (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x276ed0), puVar2 == (undefined8 *)0x0)) {
        uVar4 = *(undefined4 *)(*(long *)(lVar1 + 0x276eb8) + *(long *)(lVar1 + 0x276eb0));
      }
      else {
        uVar3 = (**(code **)*puVar2)();
        uVar4 = *(undefined4 *)(*(long *)(lVar1 + 0x276eb8) + *(long *)(lVar1 + 0x276eb0));
        if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x276ed0) != 0)) &&
           (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x276ed0) + 8), puVar2 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar2)();
        }
      }
      local_40 = PTR_DAT_04bb2020 + 0x10;
      pcStack_38 = "SerialNumber";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar4);
      }
    }
  }
  return;
}

