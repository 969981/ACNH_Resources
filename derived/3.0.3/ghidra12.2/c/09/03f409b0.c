
void FUN_03f409b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *local_1b8;
  undefined2 local_1b0;
  undefined1 local_1ae;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  long local_198;
  long lStack_190;
  undefined8 local_188;
  long lStack_180;
  undefined *local_178;
  char *pcStack_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [127];
  undefined1 local_bd;
  undefined *local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_93;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined *local_50;
  undefined *puStack_48;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 5) {
    if (*(char *)(param_3 + 8) == '\0') {
      local_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      puStack_148 = local_13c;
      local_178 = PTR_DAT_04bb2020 + 0x10;
      local_140 = 0x80;
      local_1b8 = PTR_DAT_04bdf0f0 + 0x10;
      local_bd = 0;
      local_13c[0] = 0;
      local_150 = PTR_DAT_04bb2d88 + 0x10;
      local_b0 = 1;
      puStack_a0 = PTR_DAT_04bb2120;
      local_5c = 0;
      local_64 = 0;
      local_6c = 0;
      local_74 = 0;
      local_7c = 0;
      local_84 = 0;
      local_b8 = PTR_DAT_04bdf0b0 + 0x10;
      local_8c = 0;
      local_94 = 0;
      local_54 = 0;
      puStack_48 = PTR_DAT_04bb2120;
      local_1b0 = 1;
      local_98 = 0x1010100;
      local_93 = 0x1010101;
      local_1ae = 9;
      lStack_180 = *(long *)PTR_DAT_04bb49b8;
      local_1a8 = *(undefined8 *)(lStack_180 + 0x148);
      uStack_1a0 = 0;
      local_198 = lStack_180 + 0x360;
      lStack_180 = lStack_180 + 0x370;
      local_188 = 0;
      pcStack_170 = "Unload";
      lStack_190 = param_1;
      local_a8 = local_178;
      local_50 = local_178;
      FUN_03f44830(*(undefined8 *)(param_3 + 0x10),&local_1b8);
      *(undefined1 *)(param_2 + 8) = 1;
      return;
    }
  }
  else {
    if (iVar2 == 1) {
      FUN_03f40b90(param_1,param_2);
      return;
    }
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x108) != 1)) &&
       ((*(byte *)(param_1 + 0xe) >> 1 & 1) != 0)) {
      return;
    }
    lVar4 = *(long *)PTR_DAT_04bb49b8;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x518));
    plVar1 = (long *)(*(int *)(lVar4 + 0x54c) + param_1);
    lVar3 = *(long *)(lVar4 + 0x538);
    *(long **)(lVar4 + 0x538) = plVar1;
    *plVar1 = lVar3;
    plVar1[1] = lVar4 + 0x538;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar1;
    }
    *(int *)(lVar4 + 0x548) = *(int *)(lVar4 + 0x548) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x518));
  }
  *(undefined1 *)(param_2 + 8) = 0;
  return;
}

