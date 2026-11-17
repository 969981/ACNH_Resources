
/* WARNING: Removing unreachable block (ram,0x02b56fb8) */
/* WARNING: Removing unreachable block (ram,0x02b56fc8) */
/* WARNING: Removing unreachable block (ram,0x02b56fd4) */

void FUN_02b56f34(long param_1)

{
  undefined8 local_28;
  
  FUN_02a74b10(param_1 + 0x1e08);
  local_28 = 0;
  if (DAT_05aed670 != 0) {
    local_28 = 0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      local_28 = *(undefined8 *)(*(long *)(DAT_05aed670 + 0x330) + 0xd0);
    }
  }
  FUN_02b0d7f4(param_1 + 0x22d8,&local_28);
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x17df00c3) && (*(long *)(DAT_0519d040 + 0x1f8) != 0))
     && ((*(byte *)(*(long *)(DAT_0519d040 + 0x1f8) + 8) & 1) == 0)) {
    FUN_02b39b20(param_1 + 0x26e8);
    *(uint *)(param_1 + 0x26f0) = *(uint *)(param_1 + 0x26f0) | 1;
  }
  return;
}

