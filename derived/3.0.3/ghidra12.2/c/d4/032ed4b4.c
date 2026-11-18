
void FUN_032ed4b4(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  
  puVar4 = PTR_DAT_04bc96d0;
  puVar3 = PTR_DAT_04bc96a8;
  plVar6 = *(long **)PTR_DAT_04bc96a8;
  if ((char)plVar6[0x16a5d] != -1) {
    puVar5 = *(undefined4 **)PTR_DAT_04bc96d0;
    FUN_032ef500(puVar5,plVar6 + 2);
    *puVar5 = 0xffffffff;
    FUN_032ef434(puVar5,plVar6 + 2);
  }
  DAT_05731088 = 0;
  if (*(long *)puVar4 != 0) {
    if (DAT_05731080 != (long *)0x0) {
      (**(code **)(*DAT_05731080 + 0x38))();
    }
    *(undefined8 *)puVar4 = 0;
  }
  plVar1 = (long *)*plVar6;
  plVar2 = (long *)plVar6[1];
  *plVar6 = 0;
  plVar6[1] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  if (plVar2 != (long *)0x0 && plVar2 != plVar1) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
  }
  DAT_05730fd8 = 0;
  if (*(long *)puVar3 != 0) {
    if (DAT_05730fd0 != (long *)0x0) {
      (**(code **)(*DAT_05730fd0 + 0x38))();
    }
    *(undefined8 *)puVar3 = 0;
  }
  return;
}

