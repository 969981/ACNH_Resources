
void FUN_0048f020(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(long *)(param_1 + 0x110) != 0) {
    puVar1 = (undefined8 *)FUN_00438810(0x20);
    *puVar1 = 0;
    puVar1[1] = 0x8000000000000000;
    FUN_0043d3a0(puVar1 + 2);
    plVar2 = *(long **)(param_1 + 0x110);
    *(undefined8 **)(param_1 + 0x110) = puVar1;
    if (plVar2 != (long *)0x0) {
      FUN_0043d280(plVar2 + 2);
      *(undefined4 *)(plVar2 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar2 + 0xc)) && (*plVar2 != 0)) {
        FUN_00421f90(PTR_DAT_048607b8,*plVar2,4,*(uint *)((long)plVar2 + 0xc) & 0x3fffffff);
      }
      *plVar2 = 0;
      *(undefined4 *)((long)plVar2 + 0xc) = 0x80000000;
      FUN_00438870(plVar2,0x20);
      return;
    }
  }
  return;
}

