
uint FUN_01ee4ad0(long *param_1,long param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined4 local_184;
  undefined4 local_180 [2];
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined5 local_124;
  undefined3 uStack_11f;
  undefined5 uStack_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined2 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined8 local_70;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
LAB_01ee4c24:
    bVar9 = 1;
  }
  else {
    uVar5 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar5 == 0) ||
         (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
        ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar5)) {
      plVar14 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) != 1 && *(int *)(lVar10 + 0x288) != -1) {
LAB_01ee4ba4:
      uVar5 = 0;
      if (plVar14 != (long *)0x0) goto LAB_01ee4bb8;
      goto LAB_01ee4c24;
    }
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar7;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_01ee4ba4;
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar14 == (long *)0x0) goto LAB_01ee4c24;
LAB_01ee4bb8:
    lVar10 = plVar14[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    auVar15 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3278);
    bVar9 = 1;
    uVar13 = 0;
    if ((int)lVar10 == 1) {
      uVar13 = uVar5;
    }
    if (((auVar15._0_8_ & 1) != 0) && (uVar13 != 0)) {
      uVar12 = FUN_00901ab4(plVar14,auVar15._8_8_,1);
      if (((uVar12 & 1) == 0) && (uVar12 = FUN_00901910(plVar14), (uVar12 & 1) == 0))
      goto LAB_01ee4c24;
      bVar9 = *(byte *)(param_1[1] + 0x69c) >> 2 & 1;
    }
  }
  pbVar1 = (byte *)(param_2 + 8);
  uVar5 = FUN_01ee4f70(param_1,pbVar1,bVar9);
  if ((uVar5 & 1) == 0) goto LAB_01ee4f14;
  if (((ulong)*pbVar1 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar11 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar1 * 4 + 0xde8);
  }
  else {
    puVar11 = (undefined4 *)PTR_DAT_04bb3238;
  }
  uVar2 = *puVar11;
  uVar12 = param_1[0x15ab];
  if (((uint)uVar12 >> 0x1c & 1) == 0) {
    param_1[0x15ab] = uVar12 | 0x10000000;
    FUN_02087b00(param_1[3],4);
  }
  FUN_02085e20(param_1[3],0,uVar2,PTR_DAT_04bb6928,0);
  local_180[0] = 0;
  local_144 = 0;
  uStack_140 = 0xfffe;
  local_168 = 0;
  local_13c = 0;
  local_178 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_170 = PTR_DAT_04bb2010 + 0x10;
  local_158 = 0;
  local_160 = puStack_170;
  FUN_0277d4ac(&uStack_140);
  local_124 = 0;
  uStack_11f = 0;
  uStack_11c = 0;
  local_128 = 0xbf800000;
  local_138 = 0x41c8000041800000;
  uStack_130 = 0xbf800000bf800000;
  local_114 = 0xfffe;
  FUN_0277d4ac(&local_114);
  local_d0 = 0x20;
  local_98 = 0x20;
  local_d8 = (undefined8 *)local_cc;
  local_a0 = local_94;
  local_10c = 0;
  local_ad = 0;
  local_e0 = PTR_DAT_04bb2028 + 0x10;
  local_cc[0] = 0;
  local_75 = 0;
  local_94[0] = 0;
  local_180[0] = 0;
  local_168 = 0;
  uStack_148 = 0;
  local_144 = 0;
  local_70 = 0xfffe;
  local_158 = 0;
  uStack_150 = 0;
  local_a8 = local_e0;
  FUN_0277d4ac(&local_70);
  uStack_140 = (uint)local_70;
  local_13c = local_70._4_4_;
  local_138 = 0x41c8000041800000;
  uStack_130 = 0xbf800000bf800000;
  local_128 = 0xbf800000;
  local_124 = 0;
  uStack_11f = 0;
  uStack_11c = 0;
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_10c = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_114 = local_70;
  local_f0 = 0;
  uStack_e8 = 0;
  *(undefined1 *)local_d8 = 0;
  *local_a0 = 0;
  local_104 = 0x5a;
  local_184 = *(undefined4 *)(param_2 + 0x14);
  FUN_01ea8ed0(&local_70,param_1,&local_184,pbVar1);
  uVar13 = (uint)local_70;
  if ((int)(uint)local_70 < 0x6d) {
    if ((uint)local_70 < 0x6d) {
      puVar7 = PTR_s_EmotEnd_04bb4608 + 0x528;
      goto LAB_01ee4e34;
    }
LAB_01ee4e20:
    puVar8 = &DAT_0407ebb1;
  }
  else {
    if (0x78 < (uint)local_70) goto LAB_01ee4e20;
    puVar7 = (undefined *)FUN_007c3ad0();
    uVar13 = uVar13 - 0x6d;
LAB_01ee4e34:
    puVar8 = *(undefined8 **)(puVar7 + (ulong)uVar13 * 8);
  }
  puVar3 = local_d8;
  if (local_d8 != puVar8) {
    lVar10 = 0;
    do {
      if (*(char *)((long)puVar8 + lVar10) == '\0') goto LAB_01ee4e8c;
      if (*(char *)((long)puVar8 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01ee4e8c;
      }
      if (*(char *)((long)puVar8 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01ee4e8c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01ee4e8c:
    iVar4 = (int)lVar10;
    if (local_d0 <= (int)lVar10) {
      iVar4 = local_d0 + -1;
    }
    memcpy(local_d8,puVar8,(long)iVar4);
    *(undefined1 *)((long)puVar3 + (long)iVar4) = 0;
  }
  uStack_e8._0_5_ = CONCAT14(1,(undefined4)uStack_e8);
  local_108 = CONCAT11(1,(undefined1)local_108);
  puVar8 = (undefined8 *)FUN_01e57b44(*(undefined8 *)(param_1[1] + 0x3b0));
  local_114 = *puVar8;
  (**(code **)(*param_1 + 0x38))(param_1,1,local_180,0);
  *(undefined4 *)(param_1[2] + 800) = **(undefined4 **)(param_1[2] + 0x348);
LAB_01ee4f14:
  return uVar5 & 1;
}

