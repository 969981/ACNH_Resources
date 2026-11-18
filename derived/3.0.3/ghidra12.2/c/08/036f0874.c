
bool FUN_036f0874(long *param_1,undefined8 param_2)

{
  uint *puVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  char local_ac [8];
  char local_a4 [4];
  undefined1 local_a0;
  undefined1 local_2d;
  undefined4 local_28;
  
  local_2d = 0;
  local_b0 = 0x80;
  local_a0 = 0;
  local_ac = (char  [8])s_invalid_name_040e8f53._0_8_;
  local_a4 = (char  [4])s_invalid_name_040e8f53._8_4_;
  pcStack_b8 = local_ac;
  local_c0 = &DAT_048fc708;
  local_28 = FUN_006bd550("invalid_name",0);
  uVar3 = FUN_03853d00(param_1,&local_c0);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1,&local_c0,param_2);
  }
  if (DAT_04c487d4 == -1) {
LAB_036f09a4:
    bVar2 = false;
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_036f09a4;
    }
    if (param_1[0x16] == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(long *)(param_1[0x16] + 8) == 0;
    }
  }
  return bVar2;
}

