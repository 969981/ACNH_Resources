
/* WARNING: Removing unreachable block (ram,0x032dd5ac) */
/* WARNING: Removing unreachable block (ram,0x032dd570) */
/* WARNING: Removing unreachable block (ram,0x032dd534) */
/* WARNING: Removing unreachable block (ram,0x032dd50c) */
/* WARNING: Removing unreachable block (ram,0x032dd4d4) */
/* WARNING: Removing unreachable block (ram,0x032dd49c) */
/* WARNING: Removing unreachable block (ram,0x032dd4ec) */
/* WARNING: Removing unreachable block (ram,0x032dd51c) */
/* WARNING: Removing unreachable block (ram,0x032dd54c) */
/* WARNING: Removing unreachable block (ram,0x032dd58c) */
/* WARNING: Removing unreachable block (ram,0x032dd5c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16]
FUN_032dd474(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  undefined1 auVar1 [16];
  long *local_40;
  long *plStack_38;
  
  local_40 = (long *)0x0;
  plStack_38 = (long *)0x0;
  if (*param_1 != 0) {
    local_40 = (long *)FUN_038c6d48(param_3,param_2,*param_1,8,param_4,param_5 & 1);
  }
  if (param_1[1] != 0) {
    plStack_38 = (long *)param_1[1];
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x78))();
  }
  if (plStack_38 != (long *)0x0) {
    (**(code **)(*plStack_38 + 0x78))();
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)param_1[1] + 0x78))();
  }
  auVar1._8_8_ = plStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

