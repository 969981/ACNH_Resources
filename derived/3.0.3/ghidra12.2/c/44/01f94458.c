
void FUN_01f94458(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined **local_50 [4];
  undefined1 auStack_2c [12];
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = *(uint *)(param_1 + 0x15e9);
  if (uVar1 != 0xffffffff && (int)uVar1 < 0x10) {
    puVar3 = &DAT_0545b240 + (ulong)uVar1 * 0x118;
    if (0xf < uVar1) {
      puVar3 = &DAT_0545b240;
    }
    if (puVar3[0x8c] != '\0') {
      local_4 = 0;
      FUN_01f93710(param_1,auStack_2c,&local_4);
      local_8 = local_4;
      FUN_01e39778(param_1[1],auStack_2c,&local_8,0);
      uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
      if ((uVar2 & 1) != 0) {
        local_50[0] = &PTR_LAB_04a69360;
        FUN_00714860(*(undefined8 *)(param_1[1] + 0x88),local_50);
        *(undefined1 *)(*(long *)(param_1[1] + 0x3b0) + 0x67a) = 0;
        *(undefined1 *)(param_1[2] + 0x5a0) = 0;
      }
    }
  }
  return;
}

