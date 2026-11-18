
undefined8 FUN_033fad40(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined2 local_1e8;
  undefined4 local_1e6;
  undefined1 local_1e2;
  char local_1dc;
  undefined **local_1d8;
  undefined8 *puStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined *local_1a8;
  undefined1 *puStack_1a0;
  undefined4 local_198;
  undefined1 local_194 [63];
  undefined1 local_155;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [4];
  undefined4 local_b4;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  undefined *local_50;
  undefined1 *puStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  lVar2 = *(long *)(DAT_05231900 + 0x140);
  if (lVar2 == 0) {
    return 0;
  }
  if ((*(uint *)(lVar2 + 0x174) >> 1 & 1) == 0) {
    if ((*(uint *)(lVar2 + 0x174) & 1) == 0) {
      return 0;
    }
    if ((((DAT_05ab5ea8 != 0) && (*(int *)(DAT_05ab5ea8 + 0x14) != 0)) &&
        ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) &&
       (*(int *)(DAT_05ab5ea8 + 0x10) == 1)) {
      local_1e8 = 0;
      local_1c8 = 0x20;
      local_1c0 = 0xffffffff;
      uStack_1b8 = 0xffffffff00000000;
      puStack_1d0 = &local_f8;
      local_1e6 = 0x101;
      local_1e2 = 0;
      local_1c4 = 0;
      local_1b0 = 0xffffffff;
      puStack_1a0 = local_194;
      local_198 = 0x40;
      local_155 = 0;
      local_194[0] = 0;
      local_1a8 = PTR_DAT_04bb2bc0 + 0x10;
      local_140 = 0x40;
      local_fd = 0;
      local_13c[0] = 0;
      puStack_148 = local_13c;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_1d8 = &PTR_LAB_049173e0;
      puVar1 = auStack_b8;
      if (auStack_b8 <= (undefined1 *)((long)&local_f8 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_f8 + 2U);
      }
      local_150 = local_1a8;
      memset(puStack_1d0,0,(size_t)(puVar1 + (-0xe0 - (long)&local_1d8)));
      local_b4 = 0;
      local_3c[0] = 0;
      puStack_48 = local_3c;
      local_95 = 0;
      puStack_a8 = local_9c;
      local_9c[0] = 0;
      local_a0 = 8;
      puStack_88 = local_7c;
      local_7c[0] = 0;
      local_b0 = PTR_DAT_04bb3768 + 0x10;
      local_80 = 8;
      local_75 = 0;
      puStack_68 = local_5c;
      local_5c[0] = 0;
      local_60 = 8;
      local_55 = 0;
      local_40 = 8;
      local_35 = 0;
      local_90 = local_b0;
      local_70 = local_b0;
      local_50 = local_b0;
      FUN_0377ce20(&local_1e8);
      if (local_1dc != '\0') {
        return 0;
      }
    }
  }
  return 1;
}

