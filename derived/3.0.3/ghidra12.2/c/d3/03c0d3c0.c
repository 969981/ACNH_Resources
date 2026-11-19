
/* WARNING: Removing unreachable block (ram,0x03c0d458) */
/* WARNING: Removing unreachable block (ram,0x03c0d464) */
/* WARNING: Removing unreachable block (ram,0x03c0d474) */
/* WARNING: Removing unreachable block (ram,0x03c0d48c) */

void FUN_03c0d3c0(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)FUN_03c0d4b0();
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x88))(*(long **)(param_1 + 8),*puVar1);
    if ((uVar2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),*puVar1);
    }
    lVar3 = -1;
    if (-1 < *(int *)(param_1 + 0x10)) {
      puVar1 = *(undefined8 **)(param_1 + 0x20);
      do {
        puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *puVar4 = puVar1;
        *(undefined8 **)(param_1 + 0x20) = puVar4;
        puVar1 = puVar4;
      } while (lVar3 < 0);
    }
  }
  return;
}

