
void FUN_039206c8(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  undefined1 *local_20c;
  undefined1 *local_204;
  undefined8 local_1fc;
  long local_1f4;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1d0;
  undefined2 local_1cc [2];
  uint local_1c8;
  uint local_1b0;
  undefined1 local_168;
  undefined8 local_158;
  undefined4 local_150;
  float fStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined2 local_120;
  undefined1 auStack_11c [64];
  undefined1 auStack_dc [64];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  
  if (*(uint *)(param_1 + 0x278) <= param_3) {
    param_3 = 0;
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x280) + (long)(int)param_3 * 0xc0);
  local_98 = *(undefined4 *)PTR_DAT_04bd0eb0;
  fVar3 = *(float *)((long)puVar1 + 0x74) / *(float *)(puVar1 + 0xc);
  uStack_94 = *(undefined4 *)PTR_DAT_04bd0eb8;
  local_9c = *(undefined4 *)PTR_DAT_04bd0ea8;
  local_120 = 0x101;
  local_80 = fVar3 * -0.5;
  fStack_7c = fVar3 * 0.5;
  local_128 = PTR_DAT_04bd0ec0 + 0x10;
  local_90 = 0x3e800000be800000;
  uStack_88 = 0xbf0000003f000000;
  local_158 = *puVar1;
  uStack_138 = puVar1[4];
  local_130 = *(undefined4 *)(puVar1 + 5);
  local_148 = puVar1[2];
  _local_150 = CONCAT44(fVar3 * 0.375,(int)puVar1[1]);
  uStack_12c = 0;
  _local_140 = CONCAT44(0x3ec00000,(int)puVar1[3]);
  piVar2 = (int *)(puVar1 + 0x15);
  if (*piVar2 == 0) {
    FUN_038e4cec(local_1cc);
    local_168 = 8;
    local_1cc[0] = 0x101;
    local_1b0 = local_1b0 & 0xfffffff0;
    local_1c8 = local_1c8 & 0xfffffffe;
    FUN_038e4d90(local_1cc,param_2);
    local_1fc = 0x3e800000;
    local_1e4 = 0;
    uStack_1e0 = 0x3ec00000;
    local_1ec = 0;
    uStack_1e8 = 0x3e800000;
    local_1d4 = 0x3e800000;
    uStack_1d0 = 0xbe800000;
    local_1dc = 0;
    uStack_1d8 = 0;
    local_20c = &DAT_3f8000003f800000;
    local_204 = &DAT_3f8000003f800000;
    local_1f4 = (ulong)(uint)(fVar3 * 0.375) << 0x20;
    FUN_038e5b6c(&local_128,auStack_11c);
    local_120 = 0x100;
    (**(code **)(local_128 + 0x60))(&local_128,auStack_dc,auStack_11c,local_9c);
    local_120 = local_120 & 0xff;
    FUN_03946340(param_2,&local_20c,&local_1fc,auStack_11c);
    local_168 = 2;
    local_1c8 = local_1c8 | 1;
    local_1b0 = local_1b0 & 0xfffffff0 | 7;
    FUN_038e4d90(local_1cc,param_2);
    if ((char)local_120 == '\0') {
      if (local_120._1_1_ != '\0') goto LAB_039208fc;
    }
    else {
      (**(code **)(local_128 + 0x58))(&local_128,auStack_11c);
      local_120 = 0x100;
LAB_039208fc:
      (**(code **)(local_128 + 0x60))(&local_128,auStack_dc,auStack_11c,local_9c);
      local_120 = local_120 & 0xff;
    }
    FUN_039424e0(param_2,&local_158,auStack_11c);
    uStack_1d0 = 0;
    uStack_1e8 = 0x2fc90ab0;
    local_1e4 = 0xbe800000;
    uStack_1e0 = 0;
    local_1dc = 0x80000000;
    uStack_1d8 = 0x3e800000;
    local_1d4 = 0x2fc90ab0;
    local_1ec = 0;
    local_1fc = 0x3e800000;
    local_1f4 = 0;
    local_20c = (undefined1 *)0x3f80000000000000;
    local_204 = (undefined1 *)0x3f80000000000000;
    FUN_039475d0(0x3f800000,param_2,&local_1fc,&local_20c,0x20);
    local_1fc = 0x3e000000;
    local_1f4 = 0;
    local_1ec = 0;
    uStack_1e8 = 0x3e000000;
    local_1e4 = 0;
    uStack_1e0 = 0;
    local_1dc = 0;
    uStack_1d8 = 0;
    local_1d4 = 0x3e000000;
    uStack_1d0 = 0;
    FUN_03942fdc(0x3f800000,0x3f800000,0x3f800000,param_2,&local_1fc);
    if ((char)local_120 != '\0') goto LAB_039209d4;
    if (local_120._1_1_ == '\0') goto LAB_03920a18;
  }
  else {
LAB_039209d4:
    (**(code **)(local_128 + 0x58))(&local_128,auStack_11c);
    local_120 = 0x100;
  }
  (**(code **)(local_128 + 0x60))(&local_128,auStack_dc,auStack_11c,local_9c);
  local_120 = local_120 & 0xff;
LAB_03920a18:
  FUN_03943130(0x3e800000,param_2,param_5,param_6,param_7,param_8,&local_158,auStack_11c,
               *(int *)(param_1 + 0x484) == *piVar2);
  *piVar2 = *piVar2 + 1;
  return;
}

