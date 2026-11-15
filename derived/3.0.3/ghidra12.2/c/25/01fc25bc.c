
void FUN_01fc25bc(long param_1)

{
  undefined4 *puVar1;
  undefined4 local_1c8 [25];
  undefined4 local_164;
  undefined2 local_160;
  undefined1 local_15e;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  
  *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 0x20000;
  *(undefined4 *)(param_1 + 0xaf8c) = 0xe;
  FUN_01e63f1c(local_1c8);
  local_1c8[0] = 0x2e;
  local_164 = 1;
  local_15e = 1;
  local_160 = 0x101;
  if ((*(uint *)(&DAT_00001230 + DAT_05abbc58) >> 2 & 1) == 0) {
    if ((*(uint *)(&DAT_00001230 + DAT_05abbc58) >> 3 & 1) == 0) {
      puVar1 = (undefined4 *)FUN_0252d9bc(0);
      if (puVar1 == (undefined4 *)0x0) goto LAB_01fc2658;
    }
    else {
      puVar1 = (undefined4 *)(DAT_05abbc58 + 0x1170);
    }
    local_128 = *puVar1;
    local_124 = puVar1[1];
    local_120 = puVar1[2];
  }
LAB_01fc2658:
  FUN_01fb1020(param_1,local_1c8,3);
  return;
}

