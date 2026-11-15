
/* WARNING: Removing unreachable block (ram,0x022eaf90) */
/* WARNING: Removing unreachable block (ram,0x022eafa0) */
/* WARNING: Removing unreachable block (ram,0x022eafac) */

void FUN_022eaf58(long param_1,float *param_2)

{
  undefined *local_30;
  int local_28;
  int iStack_24;
  long local_20;
  undefined4 local_18;
  float fStack_14;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      return;
    }
  }
  else if (1 < *(uint *)(param_1 + 0x10)) {
    return;
  }
  if (((*(long *)(DAT_0519d040 + 0x1f8) != 0) &&
      (local_20 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xa8), local_20 != 0)) &&
     (*(long *)(param_2 + 8) != 0)) {
    local_30 = PTR_DAT_04bb2018 + 0x10;
    local_18 = *(undefined4 *)(param_1 + 0x20);
    local_28 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
    iStack_24 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
    fStack_14 = param_2[6];
    FUN_01308fe4(*(long *)(param_2 + 8),&local_30);
  }
  return;
}

