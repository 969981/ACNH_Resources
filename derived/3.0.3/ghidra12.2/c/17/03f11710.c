
void FUN_03f11710(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_LAB_04ba7e90;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else if (*(char *)(param_2 + 0x15) == '\0') {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar1 = (long)(DAT_05ae7888 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4))
                  * 5) / 1000 + *(long *)(param_2 + 0x18);
  }
  param_1[0x12] = lVar1;
  param_1[0x13] = param_2;
  param_1[0x16] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else if (*(char *)(param_2 + 0x15) == '\0') {
    lVar1 = *(long *)(param_2 + 0x18);
  }
  else {
    lVar1 = (long)(DAT_05ae7888 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4))
                  * 5) / 1000 + *(long *)(param_2 + 0x18);
  }
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  param_1[0x19] = lVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0x3d] = 0;
  param_1[0x2c] = param_1 + 0x2b;
  param_1[0x2b] = param_1 + 0x2b;
  param_1[0x32] = param_1 + 0x31;
  param_1[0x31] = param_1 + 0x31;
  param_1[0x3e] = 0xffffffff;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  return;
}

