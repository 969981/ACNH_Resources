
undefined4
FUN_03b0f814(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined2 *param_5,
            undefined4 param_6,int param_7,byte param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 local_21b4;
  undefined2 *local_21b0;
  undefined2 *local_21a8;
  undefined4 local_21a0;
  undefined2 local_219c [2047];
  undefined2 local_119e;
  undefined4 local_1194;
  undefined *local_1190;
  undefined2 *local_1188;
  undefined4 local_1180;
  undefined2 local_117c [2047];
  undefined2 local_17e;
  byte local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined8 local_90;
  
  plVar13 = (long *)param_1[0x21];
  plVar7 = (long *)FUN_0038a89c();
  if (plVar7 != (long *)0x0) {
    fVar14 = *(float *)((long)param_1 + 0x54);
    iVar3 = (**(code **)(*plVar7 + 0x58))();
    fVar15 = *(float *)((long)param_1 + 0xfc);
    iVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
    fVar15 = (fVar15 / (float)iVar4) * (float)iVar3;
    fVar14 = fVar14 - fVar15;
    if (0.0 <= fVar14) {
      fVar14 = fVar14 / (fVar15 + *(float *)(param_1 + 0x20));
      uVar11 = 0;
      if (fVar14 != (float)(int)fVar14) {
        uVar11 = (uint)(fVar14 < 0.0);
      }
      iVar3 = ((int)fVar14 - uVar11) + 1;
      goto LAB_03b0f8f0;
    }
  }
  iVar3 = 1;
LAB_03b0f8f0:
  local_172 = 0;
  local_174 = param_8 & 1;
  lVar8 = FUN_0037e610(param_1,"RubyOff");
  local_173 = lVar8 != 0;
  uVar9 = (**(code **)(*param_1 + 0x178))(param_1);
  if ((uVar9 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    uVar6 = (undefined4)param_2[2];
    pcVar10 = *(code **)(*plVar13 + 0x78);
  }
  else {
    local_172 = 1;
    local_1188 = local_117c;
    local_117c[0] = 0;
    local_1180 = 0x800;
    local_1190 = &DAT_04b73658;
    local_17e = 0;
    local_1194 = 0;
    uVar5 = (**(code **)(*plVar13 + 0x78))
                      (plVar13,local_1188,&local_1194,param_4,0x800,param_5,param_6,0xffffffff,iVar3
                       ,&local_174,param_9);
    uVar6 = local_1194;
    if (param_7 < 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      uVar6 = local_1194;
      lVar12 = param_2[1];
      lVar8 = param_2[2];
      (**(code **)(local_1190 + 0x18))(&local_1190);
      local_21a8 = (undefined2 *)CONCAT44(local_21a8._4_4_,uVar6);
      local_21b0 = local_1188;
      FUN_03b16bb0(param_3,lVar12,(int)lVar8,&local_21b0,param_1,1,0);
      return uVar5;
    }
    local_119e = 0;
    local_21a0 = 0x800;
    local_219c[0] = 0;
    local_21b0 = (undefined2 *)&DAT_04b73658;
    local_21b4 = 0;
    local_21a8 = local_219c;
    (**(code **)(local_1190 + 0x18))(&local_1190);
    puVar2 = local_1188;
    FUN_00358b98(&local_f0);
    (**(code **)(*param_1 + 0x128))(param_1,&local_f0);
    uStack_b4 = (undefined4)param_1[10];
    local_f8 = 0;
    puVar1 = PTR_DAT_04bd1e30 + 0x10;
    local_118 = local_a8;
    local_110 = local_a0;
    local_108 = local_98;
    local_100 = local_90;
    local_138 = local_c8;
    local_130 = local_c0;
    local_128 = CONCAT44(uStack_b4,local_b8);
    local_120 = local_b0;
    local_158 = local_e8;
    local_150 = local_e0;
    local_148 = local_d8;
    local_140 = local_d0;
    local_160 = local_f0;
    local_168 = puVar1;
    (**(code **)(*local_98 + 0x60))(local_98,&local_160,0,0);
    local_170 = 0;
    local_16c = 0x100;
    local_16a = 1;
    FUN_0035b250(&local_21b4,local_219c,0x800,puVar2,uVar6,&local_168,&local_170);
    local_168 = puVar1;
    (**(code **)(*local_108 + 0x68))(local_108,&local_160,0,0);
    thunk_FUN_0035008c(&local_160);
    thunk_FUN_0035008c(&local_f0);
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = param_2[1];
    uVar6 = (undefined4)param_2[2];
    (**(code **)(local_21b0 + 0xc))(&local_21b0);
    pcVar10 = *(code **)(*plVar13 + 0x78);
    param_5 = local_21a8;
    param_6 = local_21b4;
  }
  uVar6 = (*pcVar10)(plVar13,lVar8,param_3,param_4,uVar6,param_5,param_6,param_7,iVar3,&local_174,
                     param_9);
  return uVar6;
}

