
void FUN_02b4259c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined1 *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined **local_88;
  undefined *local_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)PTR_DAT_04bb27c0;
  if ((lVar3 != 0) && (DAT_04c487d4 != -1)) {
    local_158 = CONCAT44(local_158._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      *(undefined8 *)(param_1 + 1) = 0x2600000001;
      local_80 = PTR_DAT_04bc44c0 + 0x10;
      uStack_78 = 0xffffffff00000000;
      FUN_02b40530(param_1,&local_80);
      local_95 = 0;
      local_158 = 0xe00000000;
      puStack_120 = local_114;
      local_140 = 0x100000000;
      local_114[0] = 0;
      local_118 = 0x80;
      local_150 = *param_2;
      local_128 = &DAT_048fc708;
      local_144 = param_2[3];
      local_90 = 7;
      local_14c = *(undefined8 *)(param_2 + 1);
      local_138 = param_1[2];
      local_134 = 3;
      local_8c = 0x201;
      local_88 = &local_80;
      uVar2 = FUN_007402e0(lVar3,&local_158,0,0);
      goto LAB_02b426e4;
    }
  }
  uVar2 = DAT_04c9a0c8;
LAB_02b426e4:
  *param_1 = uVar2;
  return;
}

