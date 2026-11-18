
void FUN_033fb470(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_50;
  float fStack_4c;
  undefined4 local_48;
  float local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_1 != (long *)0x0) {
    if (((param_1[1] != 0) && (local_44 = 0.0, DAT_05231900 != 0)) &&
       (uVar2 = FUN_01664580(DAT_05231900,&local_40,&local_44,param_2,0), (uVar2 & 1) != 0)) {
      fVar4 = (float)local_40 / 640.0;
      fVar5 = local_40._4_4_ / 360.0;
      fVar3 = 100.0;
      if ((local_44 < 100.0) || (fVar3 = 240.0, 240.0 < local_44)) {
        local_44 = fVar3;
      }
      local_38 = 10;
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      local_50 = (240.0 - local_44) / 280.0 + 0.5;
      fStack_4c = local_50;
      local_40 = puVar1;
      (**(code **)(*param_1 + 0x18))(param_1,&local_40);
      (**(code **)(param_1[3] + 0xb8))(param_1[1],&local_50);
      local_38 = 8;
      local_48 = 0;
      fStack_4c = fVar5 * 540.0 + (local_44 + -100.0) / -7.0 + 10.0;
      local_50 = fVar4 * 960.0;
      local_40 = puVar1;
      (**(code **)(*param_1 + 0x18))(param_1,&local_40);
      (**(code **)(param_1[3] + 0x98))(param_1[1],&local_50);
    }
  }
  return;
}

