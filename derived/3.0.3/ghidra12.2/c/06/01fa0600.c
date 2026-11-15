
void FUN_01fa0600(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
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
  undefined8 local_68;
  
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0;
  if ((int)param_1[0x15f1] == 1) {
    plVar7 = param_1 + 0x1619;
    plVar2 = param_1 + 0x197d;
    if (0 < (int)*plVar7) {
      lVar5 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar8 = *(long **)(param_1[0x161a] + lVar5 * 8);
        lVar5 = lVar5 + 1;
        plVar8[0xf] = (long)puVar1;
        *plVar8 = param_1[0x161b];
        param_1[0x161b] = (long)plVar8;
      } while (lVar5 < (int)*plVar7);
    }
    *(int *)plVar7 = 0;
    if (0 < (int)*plVar2) {
      lVar5 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        plVar7 = *(long **)(param_1[0x197e] + lVar5 * 8);
        lVar5 = lVar5 + 1;
        plVar7[0xf] = (long)puVar1;
        *plVar7 = param_1[0x197f];
        param_1[0x197f] = (long)plVar7;
      } while (lVar5 < (int)*plVar2);
    }
    *(int *)plVar2 = 0;
    *(undefined1 *)((long)param_1 + 0xe724) = 0;
    param_1[0x1ce1] = 0;
    param_1[0x1ce2] = 0;
    param_1[0x1ce3] = 0;
    FUN_01fa1410(param_1);
    FUN_02192850(param_1 + 0x1617,0,0);
    return;
  }
  if ((int)param_1[0x15f1] == 0) {
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
    uStack_140 = 0;
    local_13c = 0;
    local_68 = 0xfffe;
    local_150 = 0;
    uStack_148 = 0;
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
    lVar5 = param_1[1];
    if (*(int *)(lVar5 + 0x750) == 0) {
      uVar6 = *(uint *)(param_1 + 0x15f6);
      if ((uVar6 >> 10 & 1) != 0) {
        puVar4 = (undefined8 *)FUN_01e57b44(*(undefined8 *)(lVar5 + 0x3b0));
        uVar6 = *(uint *)(param_1 + 0x15f6);
        local_10c = *puVar4;
        lVar5 = param_1[1];
      }
      *(uint *)(param_1 + 0x15f6) = uVar6 & 0xffffffbf;
      local_104 = *(undefined4 *)(lVar5 + 0x750);
      (**(code **)(*param_1 + 0x38))(param_1,1,local_178,1);
      if (((byte)(&DAT_00001230)[*(long *)PTR_DAT_04bb4e28] >> 3 & 1) == 0) {
        iVar3 = FUN_03738270();
        if (iVar3 == *(int *)PTR_DAT_04bb3238) {
          FUN_02085a50(param_1[3],0,0);
        }
        else {
          FUN_02085e20(param_1[3],0,iVar3,PTR_DAT_04bb6928,0);
        }
      }
    }
    else {
      FUN_01fa09e0(param_1);
    }
  }
  return;
}

