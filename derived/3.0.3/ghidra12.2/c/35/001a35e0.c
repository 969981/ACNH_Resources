
void FUN_001a35e0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  if (*(long *)(param_1 + 0x88) != 0) {
    do {
      FUN_001a38f0(param_1 + 0x78,*(undefined8 *)(param_1 + 0x78));
    } while (*(long *)(param_1 + 0x88) != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x001a3638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

