
/* WARNING: Removing unreachable block (ram,0x032ef218) */
/* WARNING: Removing unreachable block (ram,0x032ef1b4) */
/* WARNING: Removing unreachable block (ram,0x032ef1e0) */
/* WARNING: Removing unreachable block (ram,0x032ef250) */

void FUN_032ef174(ulong *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined *local_48;
  undefined *puStack_40;
  ulong local_38;
  ulong uStack_30;
  undefined4 local_24;
  
  local_48 = PTR_DAT_04bb2020 + 0x10;
  puStack_40 = &DAT_0407e02b;
  local_38 = 0;
  uStack_30 = 0;
  if (*param_2 != 0) {
    local_38 = FUN_038c6d48(0x616000,&local_48,*param_2,8,1,1);
    local_24 = 0;
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  *(undefined1 *)((long)param_1 + 0x14) = 1;
  local_38 = local_38 & 0xffffffff00000000;
  if (DAT_05731078 == (undefined4 *)0x0) {
    param_2 = (long *)*param_2;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0x28,8);
    *(undefined8 *)(puVar1 + 2) = 0;
    *puVar1 = 0xffffffff;
    puVar1[4] = 0xffffffff;
    DAT_05731078 = puVar1;
    DAT_05731080 = param_2;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  return;
}

