
/* WARNING: Removing unreachable block (ram,0x01611bec) */
/* WARNING: Removing unreachable block (ram,0x01611bbc) */
/* WARNING: Removing unreachable block (ram,0x01611b94) */
/* WARNING: Removing unreachable block (ram,0x01611b64) */
/* WARNING: Removing unreachable block (ram,0x01611b78) */
/* WARNING: Removing unreachable block (ram,0x01611ba4) */
/* WARNING: Removing unreachable block (ram,0x01611bd0) */
/* WARNING: Removing unreachable block (ram,0x01611bfc) */

void FUN_01611b2c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_049b38c0;
  if (param_1[0x1d1] != 0) {
    (**(code **)(*(long *)param_1[0x1d3] + 0x20))();
    param_1[0x1d3] = 0;
    param_1[0x1d1] = 0;
  }
  if (param_1[0x1d2] != 0) {
    (**(code **)(*(long *)param_1[0x1d4] + 0x20))();
    param_1[0x1d4] = 0;
    param_1[0x1d2] = 0;
  }
  FUN_03968cfc(param_1 + 7);
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

