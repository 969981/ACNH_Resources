
/* WARNING: Removing unreachable block (ram,0x02350a40) */
/* WARNING: Removing unreachable block (ram,0x02350a54) */
/* WARNING: Removing unreachable block (ram,0x02350a4c) */

undefined8 FUN_02350984(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte local_1c [4];
  int local_18;
  byte local_14 [4];
  
  local_18 = *param_1;
  if (1 < local_18 - 2U) {
    if (local_18 != 1) {
      return 0;
    }
    local_1c[0] = *(byte *)(param_1 + 1);
    if (7 < local_1c[0]) {
      local_1c[0] = 0xff;
    }
    uVar2 = FUN_025830c0(DAT_055021a0,local_1c,1);
    return uVar2;
  }
  if (local_18 - 2U < 2) {
    iVar1 = param_1[2];
  }
  else {
    if (local_18 == 1) {
      local_14[0] = *(byte *)(param_1 + 1);
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      iVar1 = FUN_02582fe0(local_14);
      if (iVar1 != -1) goto LAB_02350a1c;
    }
    iVar1 = -1;
  }
LAB_02350a1c:
  if (DAT_05574040 == 0) {
    return 0;
  }
  uVar2 = FUN_026eec4c(DAT_05574040,iVar1);
  return uVar2;
}

