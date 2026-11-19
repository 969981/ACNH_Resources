
void FUN_03882e30(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_0018e8e0();
  if (DAT_05ae6bf4 != '\0') {
    DAT_05ae6bf4 = '\0';
    DAT_04c57ea0 = 0;
    DAT_04c57ea8 = 0;
    if (DAT_05ae6bf0 != '\0') {
      DAT_05ae6bf0 = '\0';
      (**(code **)(*DAT_05ae6be8 + 0x20))();
      DAT_05ae6be8 = (long *)0x0;
    }
    puVar1 = PTR_DAT_04bcb920;
    uVar3 = (ulong)DAT_05ae6b18;
    if (DAT_05ae6b18 != 0) {
      uVar4 = 0;
      do {
        plVar2 = *(long **)(puVar1 + uVar4 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          uVar3 = (ulong)DAT_05ae6b18;
          *(undefined8 *)(puVar1 + uVar4 * 8) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    DAT_05ae6b18 = 0;
  }
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

