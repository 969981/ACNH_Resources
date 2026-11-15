
void FUN_01e7e124(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  char *__dest;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_24;
  
  local_d8._0_4_ = (uint)local_d8 & 0xffffff00;
  local_9c = '\0';
  local_c0 = 0xbf800000;
  uStack_b8 = 0xffffffff00000000;
  local_98 = 0;
  uStack_90 = 0xffffffff00000000;
  local_d8._4_4_ = 0xffffffff;
  uStack_d0 = 0xffffffff;
  local_cc = 0xffffffff;
  uStack_c8 = 0xffffffff;
  local_c4 = 0xffffffff;
  local_a0 = 0xffffffff;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffff;
  local_4c = 0;
  local_48 = 0xffffffff;
  local_88 = 0x3f80000000000000;
  uStack_80 = 0xffffffffffffffff;
  local_b0 = 0xffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_78 = 0xbf800000ffffffff;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_02a560f0(&local_d8);
  if (local_9c == '\0') {
    iVar1 = 4;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[1] + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar1 = __cxa_guard_acquire(&DAT_052461c0);
        puVar2 = &DAT_05240280;
        if (iVar1 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar2 = &DAT_05240280;
      }
    }
    local_d8 = PTR_DAT_04bb2020 + 0x10;
    uStack_d0 = 0x40abd16;
    local_cc = 0;
    FUN_017081d0(puVar2,&local_d8,6,0,0);
    local_d8._0_4_ = 0;
    lVar3 = param_1[2];
    local_24 = 0;
    FUN_01e5a930(0x40000000,lVar3,0x1b,PTR_DAT_04bb2150,&local_d8,&local_24,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar3 + 0x3b8);
    if (__dest != "NpcRhythm") {
      iVar1 = 9;
      if (*(int *)(lVar3 + 0x3c0) < 10) {
        iVar1 = *(int *)(lVar3 + 0x3c0) + -1;
      }
      memcpy(__dest,"NpcRhythm",(long)iVar1);
      __dest[iVar1] = '\0';
    }
    *(undefined1 *)(lVar3 + 0x674) = 0;
    *(undefined1 *)(lVar3 + 0x676) = 1;
    iVar1 = 5;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) {
    (**(code **)(*param_1 + 0x38))(param_1,0x3d,0,1);
  }
  if ((int)param_1[0x24df] == 1) {
    *(int *)((long)param_1 + 0x787c) = iVar1;
  }
  else {
    *(int *)(param_1 + 0x24df) = iVar1;
    *(undefined4 *)((long)param_1 + 0x126fc) = 0;
  }
  return;
}

