
void FUN_03b2c058(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined1 *local_260;
  undefined8 uStack_258;
  undefined1 local_250 [256];
  long local_150;
  undefined4 local_148;
  undefined1 *local_140;
  undefined8 uStack_138;
  undefined1 local_130 [256];
  
  if (*(long *)(param_1 + 8) != 0) {
    local_130[0] = 0;
    local_140 = local_130;
    uStack_138 = 0x10000000000;
    uVar1 = FUN_03b16590(&local_140,param_3,param_5);
    if ((uVar1 & 1) != 0) {
      FUN_03b0d9a0(&local_150,*(undefined8 *)(param_1 + 8),local_140);
      if (local_150 == 0) {
        local_250[0] = 0;
        local_260 = local_250;
        uStack_258 = 0x10000000000;
        FUN_03b166a0(&local_260,param_4);
      }
      else {
        *param_2 = local_150;
        *(undefined4 *)(param_2 + 1) = local_148;
      }
    }
    if ((int)param_2[2] != -1) {
      *(int *)((long)param_2 + 0xc) = (int)param_2[2];
    }
  }
  return;
}

