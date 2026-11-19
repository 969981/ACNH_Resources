
void FUN_038b92e0(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    if (*(code **)(param_1 + 0x170) != (code *)0x0) {
      (**(code **)(param_1 + 0x170))();
    }
    cVar1 = *(char *)(param_1 + 0xbe);
    lVar2 = *(long *)(param_1 + 0x158);
    (*DAT_04c61e78)(*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x38),*(undefined8 *)(lVar2 + 0x10),
                    *(undefined4 *)(lVar2 + 0x20));
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x038b9374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)PTR_DAT_04bcf590)
                (*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),
                 (undefined4 *)(lVar2 + 0x20));
      return;
    }
  }
  return;
}

