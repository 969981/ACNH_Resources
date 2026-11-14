
void FUN_01bc91e8(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined1 uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined *local_198;
  long *plStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *puStack_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  uint local_44;
  undefined1 local_24 [4];
  
  plVar8 = (long *)param_1[0x42];
  uVar9 = 0;
  if ((*plVar8 != 0) &&
     (*(short *)((long)plVar8 + 0xc) == 0x73 && *(short *)((long)plVar8 + 0xe) == 0xb)) {
    if ((short)plVar8[2] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)*(byte *)plVar8[3];
    }
  }
  local_4c = (uint)*(ushort *)(param_2 + 0xc);
  uStack_48 = (uint)*(ushort *)(param_2 + 0xe);
  local_44 = uVar9;
  lVar3 = FUN_01bc1730(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1[0x41] + 8);
  if (lVar3 == 0) {
    return;
  }
  plVar8 = (long *)FUN_01bc0860(lVar3,&local_4c,1);
  if (plVar8 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar8 + 0x20))();
    (**(code **)(*param_1 + 0x48))(param_1,uVar4,param_1[0x41],param_1 + 0x43);
    return;
  }
  local_58 = 0x100000073;
  local_50 = uVar9;
  plVar8 = (long *)FUN_01bc0860(lVar3,&local_58,1);
  if (plVar8 == (long *)0x0) {
    return;
  }
  ppuVar5 = (undefined **)(**(code **)(*plVar8 + 0x20))();
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((iVar2 == 0xd) || (iVar2 == 0)) {
    plVar8 = (long *)(**(code **)(*ppuVar5 + 0x68))(ppuVar5);
    (**(code **)(*plVar8 + 0x18))();
    lVar10 = plVar8[1];
    local_168 = 0x20;
    local_164 = 0;
    local_160 = 0xffffffff;
    uStack_158 = 0xffffffff00000000;
    puStack_140 = local_134;
    puStack_170 = local_98;
    local_150 = 0xffffffff;
    local_138 = 0x40;
    local_f5 = 0;
    local_134[0] = 0;
    local_148 = PTR_DAT_04bb2bc0 + 0x10;
    local_e0 = 0x40;
    local_9d = 0;
    local_dc[0] = 0;
    puStack_e8 = local_dc;
    local_178 = PTR_DAT_04bb4e10 + 0x10;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined1  [8])0x0;
    uStack_90 = 0;
    puVar1 = &local_58;
    if (&local_58 <= local_98 + 2) {
      puVar1 = (undefined8 *)(local_98 + 2);
    }
    local_f0 = local_148;
    memset(puStack_170,0,(size_t)((long)puVar1 + (-0xe0 - (long)&local_178)));
    local_24[0] = 1;
    local_198 = PTR_DAT_04bc0b60 + 0x10;
    local_188 = 0x60;
    uStack_180 = 1;
    plStack_190 = param_1;
    uVar6 = FUN_01c0ee80(&local_178,local_24,lVar10,&local_198);
    if ((uVar6 & 1) != 0) {
      ppuVar5 = &local_178;
      uVar7 = local_24[0];
      goto LAB_01bc9428;
    }
  }
  uVar7 = 1;
LAB_01bc9428:
  FUN_01bc0e68(lVar3,&local_4c,ppuVar5,uVar7);
  return;
}

