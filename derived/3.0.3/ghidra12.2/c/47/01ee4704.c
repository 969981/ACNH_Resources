
void FUN_01ee4704(long *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
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
  undefined1 auStack_68 [16];
  undefined8 local_58;
  
  FUN_0212eca8(param_1 + 0x154a,1,0);
  lVar5 = param_1[3];
  uVar3 = FUN_02085a50(lVar5,1,0);
  if ((uVar3 & 1) != 0) {
    *(undefined1 *)(lVar5 + 0x801) = 1;
    lVar1 = lVar5 + 0x10 + (ulong)*(uint *)(lVar5 + 0x294) * 0x80;
    if (4 < *(uint *)(lVar5 + 0x294)) {
      lVar1 = lVar5 + 0x10;
    }
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
  }
  local_178[0] = 1;
  FUN_01edbd98(auStack_68,param_1,local_178,PTR_DAT_04bb5d40,0x19,0x15);
  uVar3 = FUN_01edc660(param_1,auStack_68);
  if ((uVar3 & 1) == 0) {
    local_178[0] = 0;
    local_160 = 0;
    local_134 = 0;
    local_170 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_168 = PTR_DAT_04bb2010 + 0x10;
    local_150 = 0;
    local_13c = 0;
    uStack_138 = 0xfffe;
    local_158 = puStack_168;
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
    uStack_140 = 0;
    local_13c = 0;
    local_58 = 0xfffe;
    local_150 = 0;
    uStack_148 = 0;
    local_a0 = local_d8;
    FUN_0277d4ac(&local_58);
    uStack_138 = (undefined4)local_58;
    local_134 = local_58._4_4_;
    local_130 = 0x41c8000041800000;
    uStack_128 = 0xbf800000bf800000;
    local_120 = 0xbf800000;
    local_11c = 0;
    uStack_117 = 0;
    uStack_114 = 0;
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    local_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    local_dc = 0;
    local_10c = local_58;
    *local_d0 = 0;
    *local_98 = 0;
    plVar4 = *(long **)(param_1[1] + 0x60);
    if (plVar4 == (long *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        plVar4 = &DAT_05240280;
      }
      else {
        plVar4 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar4 + 0x370))(&local_58);
    local_10c = local_58;
    local_fc = CONCAT44(1,(undefined4)local_fc);
    (**(code **)(*param_1 + 0x38))(param_1,10,local_178,1);
  }
  else {
    FUN_02077fb0(param_1[0x1137]);
    *(undefined8 *)((long)param_1 + 0xa9fc) = 0x100000000;
    *(undefined1 *)((long)param_1 + 0xaa44) = 0;
    param_1[0x1543] = param_1[0x1547];
    param_1[0x153e] = *(long *)((long)param_1 + 0x56ec);
    *(undefined4 *)(param_1 + 0x153f) = *(undefined4 *)((long)param_1 + 0x56f4);
    *(undefined4 *)((long)param_1 + 0xaa14) = *(undefined4 *)((long)param_1 + 0xaa34);
    *(int *)(param_1 + 0x1544) = (int)param_1[0x1548];
    *(undefined8 *)((long)param_1 + 0xaa04) = *(undefined8 *)((long)param_1 + 0xaa24);
    *(undefined8 *)((long)param_1 + 0xaa0c) = *(undefined8 *)((long)param_1 + 0xaa2c);
  }
  return;
}

