
uint FUN_03b16bb0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 long *param_5,ulong param_6,byte param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined **local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  int local_78;
  byte local_74;
  undefined2 local_73;
  
  FUN_00358b98(&local_e8);
  (**(code **)(*param_5 + 0x128))(param_5,&local_e8);
  local_ac = (undefined4)param_5[10];
  local_f0 = 0;
  local_110 = uStack_a0;
  uStack_108 = local_98;
  local_100 = plStack_90;
  uStack_f8 = local_88;
  local_120 = CONCAT44(local_ac,uStack_b0);
  local_130 = uStack_c0;
  uStack_128 = local_b8;
  uStack_118 = local_a8;
  local_150 = uStack_e0;
  uStack_148 = local_d8;
  local_140 = uStack_d0;
  uStack_138 = local_c8;
  local_160 = &PTR_LAB_04b73958;
  uStack_158 = local_e8;
  (**(code **)(*plStack_90 + 0x60))(plStack_90,&uStack_158,0,0);
  local_78 = 0;
  if ((param_6 & 1) != 0) {
    plVar4 = (long *)FUN_0038a89c(param_5);
    if (plVar4 != (long *)0x0) {
      fVar5 = *(float *)((long)param_5 + 0x54);
      iVar1 = (**(code **)(*plVar4 + 0x58))();
      fVar6 = *(float *)((long)param_5 + 0xfc);
      iVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      fVar6 = (fVar6 / (float)iVar2) * (float)iVar1;
      fVar5 = fVar5 - fVar6;
      if (0.0 <= fVar5) {
        fVar5 = fVar5 / (fVar6 + *(float *)(param_5 + 0x20));
        uVar3 = 0;
        if (fVar5 != (float)(int)fVar5) {
          uVar3 = (uint)(fVar5 < 0.0);
        }
        local_78 = ((int)fVar5 - uVar3) + 1;
        goto LAB_03b16d14;
      }
    }
    local_78 = 1;
  }
LAB_03b16d14:
  local_74 = param_7 & 1;
  local_73 = 0x101;
  uVar3 = FUN_0035b250(param_1,param_2,param_3,*param_4,*(undefined4 *)(param_4 + 1),&local_160,
                       &local_78);
  local_160 = &PTR_LAB_04b73958;
  (**(code **)(*local_100 + 0x68))(local_100,&uStack_158,0,0);
  thunk_FUN_0035008c(&uStack_158);
  thunk_FUN_0035008c(&local_e8);
  return uVar3 & 1;
}

