
void FUN_02c5cd08(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined *local_190;
  undefined8 *puStack_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70 [4];
  int local_6c;
  undefined1 local_68;
  undefined **local_60;
  undefined1 *puStack_58;
  
  *(uint *)(param_1 + 0x202b4) = param_2;
  local_68 = 0;
  local_60 = &PTR_FUN_04aa95b8;
  local_70[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_70[0]) {
    local_70[0] = 0xff;
  }
  uVar1 = param_2;
  if (0xb < param_2) {
    uVar1 = 0;
  }
  iVar3 = (&DAT_0565e6e0)[uVar1];
  local_6c = iVar3;
  if ((param_2 < 0xc) && ((1 << (ulong)(param_2 & 0x1f) & 0xe38U) != 0)) {
    (**(code **)(*param_3 + 0x18))(param_3);
    local_17c = 0;
    local_180 = 0x20;
    local_178 = 0xffffffff;
    uStack_170 = 0xffffffff00000000;
    lVar5 = param_3[1];
    puStack_158 = local_14c;
    puStack_188 = &local_b0;
    local_168 = 0xffffffff;
    local_150 = 0x40;
    local_10d = 0;
    local_14c[0] = 0;
    local_160 = PTR_DAT_04bb2bc0 + 0x10;
    local_f8 = 0x40;
    local_b5 = 0;
    local_f4[0] = 0;
    puStack_100 = local_f4;
    local_190 = PTR_DAT_04bb4e10 + 0x10;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    pbVar2 = local_70;
    if (local_70 <= (byte *)((long)&local_b0 + 2U)) {
      pbVar2 = (byte *)((long)&local_b0 + 2U);
    }
    local_108 = local_160;
    memset(puStack_188,0,(size_t)(pbVar2 + (-0xe0 - (long)&local_190)));
    FUN_01c0e6b4(&local_190,lVar5,PTR_DAT_04bb2df0);
    local_60 = &PTR_LAB_04ab1fb8;
    puStack_58 = (undefined1 *)&local_190;
  }
  puVar4 = PTR_DAT_04bc67e0;
  if (iVar3 == 0) goto LAB_02c5cecc;
  FUN_02dfed48(*(undefined8 *)PTR_DAT_04bc67e0,local_70);
  plVar6 = *(long **)puVar4;
  if (4 < (int)plVar6[0x15] - 3U) {
    if ((int)plVar6[0x15] == 5 || (int)plVar6[0x15] == 2) {
      FUN_0386b170(plVar6[0x13],plVar6);
      *(undefined1 *)((long)plVar6 + 0x165) = 1;
      goto LAB_02c5cecc;
    }
    if ((6 < *(uint *)(plVar6 + 0x15)) ||
       ((1 << (ulong)(*(uint *)(plVar6 + 0x15) & 0x1f) & 0x58U) == 0)) goto LAB_02c5cecc;
  }
  (**(code **)(*plVar6 + 0xa8))(plVar6);
LAB_02c5cecc:
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 7;
  }
  return;
}

