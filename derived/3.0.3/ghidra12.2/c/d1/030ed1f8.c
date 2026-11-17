
/* WARNING: Removing unreachable block (ram,0x030ed240) */
/* WARNING: Removing unreachable block (ram,0x030ed238) */
/* WARNING: Removing unreachable block (ram,0x030ed28c) */

void FUN_030ed1f8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *local_30;
  int local_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,1);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] != 0) {
    local_30 = PTR_DAT_04bc43f8 + 0x10;
    local_28 = DAT_05636e94;
    if ((DAT_05636e94 != 0) && (uVar2 = FUN_02a59140(puVar1,&local_30), (uVar2 & 1) != 0)) {
      local_30 = (undefined *)((ulong)local_30 & 0xffffffffffff0000);
      uVar2 = FUN_013871c0(&local_30,0,0);
      if ((uVar2 & 1) != 0) {
        if ((ushort)((short)local_30 - 0x87U) < 4) {
          *(uint *)(param_1 + 0x1bcc) = 4 - (uint)(ushort)((short)local_30 - 0x87);
        }
      }
    }
  }
  FUN_030ed310(param_1);
  FUN_030ed4d0(param_1);
  FUN_030ed738(param_1);
  return;
}

