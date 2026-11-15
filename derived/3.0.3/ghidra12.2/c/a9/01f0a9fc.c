
void FUN_01f0a9fc(long *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined5 uStack_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined8 local_68;
  
  if (*(char *)((long)param_1 + 0xaf9c) == '\0') {
    return;
  }
  iVar1 = *(int *)((long)param_1 + 0xaf8c);
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x5a0))(param_1,param_1 + 0x15f2);
    cVar2 = *(char *)((long)param_1 + 0xaf9c);
  }
  else if (iVar1 == 1) {
    local_178[0] = 0;
    local_150 = 0;
    local_13c = 0;
    uStack_138 = 0xfffe;
    local_134 = 0;
    local_170 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_168 = PTR_DAT_04bb2010 + 0x10;
    local_160 = 0;
    puStack_158 = puStack_168;
    FUN_0277d4ac(&uStack_138);
    local_11c = 0;
    uStack_117 = 0;
    uStack_114 = 0;
    local_120 = 0xbf800000;
    local_130 = 0x41c8000041800000;
    uStack_128 = 0xbf800000bf800000;
    local_10c = 0xfffe;
    FUN_0277d4ac(&local_10c);
    local_104 = 0;
    local_c8 = 0x20;
    local_98 = local_8c;
    local_90 = 0x20;
    local_d0 = local_c4;
    local_a5 = 0;
    local_d8 = PTR_DAT_04bb2028 + 0x10;
    local_c4[0] = 0;
    local_6d = 0;
    local_8c[0] = 0;
    local_178[0] = 0;
    local_160 = 0;
    local_140 = 0;
    local_13c = 0;
    local_68 = 0xfffe;
    local_150 = 0;
    local_148 = 0;
    local_a0 = local_d8;
    FUN_0277d4ac(&local_68);
    uStack_138 = (undefined4)local_68;
    local_134 = local_68._4_4_;
    local_130 = 0x41c8000041800000;
    uStack_128 = 0xbf800000bf800000;
    local_120 = 0xbf800000;
    local_11c = 0;
    uStack_117 = 0;
    uStack_114 = 0;
    local_68 = 0xfffe;
    FUN_0277d4ac(&local_68);
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_10c = local_68;
    *local_d0 = 0;
    *local_98 = 0;
    lVar3 = FUN_0146d638(0x5d);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0xf0) + 0xf0))();
    local_104 = *(undefined4 *)(param_1[1] + 0x750);
    local_fc = CONCAT44(local_fc._4_4_,(int)*pfVar4);
    if (*(char *)((long)param_1 + 0xaf9c) == '\0') {
      *(int *)((long)param_1 + 0xaf8c) = 0;
LAB_01f0abfc:
      param_1[0x15f2] = 0;
      local_140 = 0;
      uVar6 = 0;
      fVar5 = 0.0;
      *(undefined4 *)(param_1 + 0x15f3) = 0;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x15f2);
      if (NAN(fVar5)) goto LAB_01f0abfc;
      uVar6 = *(undefined4 *)((long)param_1 + 0xaf94);
      local_140 = (undefined4)param_1[0x15f3];
    }
    local_148 = CONCAT44(uVar6,fVar5);
    (**(code **)(*param_1 + 0x38))(param_1,0x40,local_178,1);
    cVar2 = *(char *)((long)param_1 + 0xaf9c);
  }
  else {
    if (iVar1 != 0) goto LAB_01f0ac3c;
    FUN_01f0c110(param_1,param_1 + 0x15f2);
    cVar2 = *(char *)((long)param_1 + 0xaf9c);
  }
  if (cVar2 == '\0') {
    return;
  }
LAB_01f0ac3c:
  *(undefined1 *)((long)param_1 + 0xaf9c) = 0;
  return;
}

