
void FUN_017fdbb0(long param_1)

{
  undefined *puVar1;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  char local_a4 [127];
  undefined1 local_25;
  
  puVar1 = PTR_DAT_04bb2d88;
  if (*(char *)(param_1 + 0x144) != '\0' && *(char *)(param_1 + 0x1c0) != '\0') {
    if (*(int *)(param_1 + 0x1f0) != -1) {
      local_b8 = PTR_DAT_04bb2d88 + 0x10;
      local_25 = 0;
      local_a8 = 0x80;
      local_b0 = local_a4;
      local_a4[0] = '\0';
      FUN_01afe7a0(&local_b8);
      if (*local_b0 == '\0') {
        *(undefined4 *)(param_1 + 0x1f0) = 0;
      }
    }
    if (*(int *)(param_1 + 0x1fc) != -1) {
      local_b8 = puVar1 + 0x10;
      local_25 = 0;
      local_a8 = 0x80;
      local_b0 = local_a4;
      local_a4[0] = '\0';
      FUN_01afe7a0(&local_b8);
      if (*local_b0 == '\0') {
        *(undefined4 *)(param_1 + 0x1fc) = 0;
      }
    }
    if (*(int *)(param_1 + 0x208) != -1) {
      local_b8 = puVar1 + 0x10;
      local_25 = 0;
      local_a8 = 0x80;
      local_b0 = local_a4;
      local_a4[0] = '\0';
      FUN_01afe7a0(&local_b8);
      if (*local_b0 == '\0') {
        *(undefined4 *)(param_1 + 0x208) = 0;
      }
    }
    if (((*(short *)(param_1 + 0xd0) == -2) && (*(short *)(param_1 + 0xd8) == DAT_04cb6038)) &&
       (*(int *)(param_1 + 0x1f0) == -1)) {
      local_b8 = (undefined *)0x134b;
      FUN_0277d4ac(&local_b8);
      *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 0xd4) = local_b8._4_4_;
    }
    if (((*(short *)(param_1 + 0xb4) == -2) && (*(short *)(param_1 + 0xbc) == DAT_04cb6038)) &&
       (*(int *)(param_1 + 0x208) == -1)) {
      local_b8 = (undefined *)0x139b;
      FUN_0277d4ac(&local_b8);
      *(undefined4 *)(param_1 + 0xb4) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 0xb8) = local_b8._4_4_;
    }
    if (((*(char *)(param_1 + 0xfe) != '\0') && (*(short *)(param_1 + 0xf4) == -2)) &&
       ((*(short *)(param_1 + 0xfc) == DAT_04cb6038 && (*(int *)(param_1 + 0x1fc) == -1)))) {
      local_b8 = (undefined *)0x134b;
      FUN_0277d4ac(&local_b8);
      *(undefined4 *)(param_1 + 0xf4) = (undefined4)local_b8;
      *(undefined4 *)(param_1 + 0xf8) = local_b8._4_4_;
    }
  }
  return;
}

