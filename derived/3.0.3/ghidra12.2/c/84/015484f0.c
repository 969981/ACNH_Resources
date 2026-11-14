
/* WARNING: Removing unreachable block (ram,0x015487d8) */
/* WARNING: Removing unreachable block (ram,0x015487b0) */
/* WARNING: Removing unreachable block (ram,0x01548778) */
/* WARNING: Removing unreachable block (ram,0x01548750) */
/* WARNING: Removing unreachable block (ram,0x01548718) */
/* WARNING: Removing unreachable block (ram,0x015486f0) */
/* WARNING: Removing unreachable block (ram,0x015486b8) */
/* WARNING: Removing unreachable block (ram,0x01548690) */
/* WARNING: Removing unreachable block (ram,0x01548658) */
/* WARNING: Removing unreachable block (ram,0x01548630) */
/* WARNING: Removing unreachable block (ram,0x015485f8) */
/* WARNING: Removing unreachable block (ram,0x015485d0) */
/* WARNING: Removing unreachable block (ram,0x01548598) */
/* WARNING: Removing unreachable block (ram,0x01548570) */
/* WARNING: Removing unreachable block (ram,0x01548538) */
/* WARNING: Removing unreachable block (ram,0x01548510) */
/* WARNING: Removing unreachable block (ram,0x01548524) */
/* WARNING: Removing unreachable block (ram,0x01548558) */
/* WARNING: Removing unreachable block (ram,0x01548584) */
/* WARNING: Removing unreachable block (ram,0x015485b8) */
/* WARNING: Removing unreachable block (ram,0x015485e4) */
/* WARNING: Removing unreachable block (ram,0x01548618) */
/* WARNING: Removing unreachable block (ram,0x01548644) */
/* WARNING: Removing unreachable block (ram,0x01548678) */
/* WARNING: Removing unreachable block (ram,0x015486a4) */
/* WARNING: Removing unreachable block (ram,0x015486d8) */
/* WARNING: Removing unreachable block (ram,0x01548704) */
/* WARNING: Removing unreachable block (ram,0x01548738) */
/* WARNING: Removing unreachable block (ram,0x01548764) */
/* WARNING: Removing unreachable block (ram,0x01548798) */
/* WARNING: Removing unreachable block (ram,0x015487c4) */
/* WARNING: Removing unreachable block (ram,0x015487f8) */

void FUN_015484f0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    FUN_012e49cc(*plVar1);
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 8))();
    }
    *plVar1 = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x10));
    if (*(long **)(param_1 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x10) + 8))();
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x18));
    if (*(long **)(param_1 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x20));
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x28));
    if (*(long **)(param_1 + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x28) + 8))();
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x30));
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x38));
    if (*(long **)(param_1 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 8))();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_012e49cc(*(undefined8 *)(param_1 + 0x40));
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 8))();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

