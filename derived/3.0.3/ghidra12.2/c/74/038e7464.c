
void FUN_038e7464(long param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5
                 )

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined **local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined **local_100;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  if ((*(long *)(param_1 + 0x18) == 0 || *(long *)(param_1 + 0x10) == 0) && ((param_4 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    local_70 = *(undefined4 *)PTR_DAT_04bd0eb0;
    uStack_6c = DAT_05ae77d4;
    local_100 = &PTR_LAB_04b65688;
    local_68 = 0x44fa00003f800000;
    local_60 = (*(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 0xc)) * 0.5;
    local_5c = (*(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 0xc)) * -0.5;
    fVar3 = (local_60 + local_5c) * 0.5;
    local_58 = (*(float *)(lVar1 + 0x10) - *(float *)(lVar1 + 8)) * -0.5;
    local_54 = (*(float *)(lVar1 + 0x10) - *(float *)(lVar1 + 8)) * 0.5;
    local_74 = *(undefined4 *)(lVar1 + 0x18);
    fVar2 = (local_58 + local_54) * 0.5;
    local_f7 = 1;
    local_f8 = 1;
    local_120 = (float)FUN_038e5b04(&local_100);
    local_108 = 0;
    fStack_114 = local_120 + -1.0;
    uStack_148 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    local_140 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    uStack_138 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    local_130 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    uStack_158 = *(undefined8 *)PTR_DAT_04bb2f80;
    local_150 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    local_110 = 0x3f80000000000000;
    local_160 = &PTR_FUN_04b65580;
    local_128 = fVar2;
    fStack_124 = fVar3;
    fStack_11c = fVar2;
    local_118 = fVar3;
    FUN_038e4634(&local_160,&uStack_158);
    FUN_038e6fd0(param_1,param_2,param_3,1,param_5,&local_100,&local_160);
    return;
  }
  FUN_038e6fd0(param_1,param_2,param_3,param_4 & 1,param_5);
  return;
}

