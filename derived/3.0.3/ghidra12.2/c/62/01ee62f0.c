
undefined8 FUN_01ee62f0(long *param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  short sVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *__src;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined1 local_150 [8];
  undefined4 local_148 [2];
  undefined *local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined5 local_ec;
  undefined3 uStack_e7;
  undefined5 uStack_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined1 local_cf;
  undefined4 local_cc;
  undefined1 local_ac;
  undefined *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined4 local_60;
  undefined1 local_5c [31];
  undefined1 local_3d;
  undefined4 local_34;
  
  if (((((int)param_1[0xef6] - 3U < 5) ||
       (uVar6 = (**(code **)(*(long *)param_1[1] + 0x180))(), (uVar6 & 1) == 0)) ||
      ((*(ushort *)(param_1 + 0x15a5) >> 7 & 1) != 0)) ||
     (((*(ushort *)((long)param_1 + 0xad2a) >> 7 & 1) != 0 ||
      (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 == -1)))) {
    return 0;
  }
  local_148[0] = 1;
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 1 & 1) == 0) {
    return 0;
  }
  if (((ulong)*(byte *)(param_2 + 8) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar10 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_2 + 8) * 4 + 0xde8);
  }
  else {
    puVar10 = (undefined4 *)PTR_DAT_04bb3238;
  }
  uVar3 = *puVar10;
  local_34 = uVar3;
  if (((uint)param_1[0x15ab] >> 0x1c & 1) == 0) {
    param_1[0x15ab] = param_1[0x15ab] | 0x10000000;
    FUN_02087b00(param_1[3],4);
  }
  FUN_02085e20(param_1[3],0,uVar3,PTR_DAT_04bb6928,0);
  local_148[0] = 0;
  local_10c = 0xfffe00000000;
  local_130 = 0;
  local_104 = 0;
  local_140 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_138 = PTR_DAT_04bb2010 + 0x10;
  uStack_120 = 0;
  local_128 = puStack_138;
  FUN_0277d4ac((long)&local_10c + 4);
  local_ec = 0;
  uStack_e7 = 0;
  uStack_e4 = 0;
  local_100 = 0x41c8000041800000;
  uStack_f8 = 0xbf800000bf800000;
  local_f0 = 0xbf800000;
  local_dc = 0xfffe;
  FUN_0277d4ac(&local_dc);
  local_98 = 0x20;
  local_60 = 0x20;
  local_a0 = (undefined8 *)local_94;
  puStack_68 = local_5c;
  local_d4 = 0;
  local_75 = 0;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  local_94[0] = 0;
  local_3d = 0;
  local_5c[0] = 0;
  local_70 = local_a8;
  FUN_01f8f1d4(local_148);
  uVar6 = FUN_02087ce0(param_1[3],&local_34,0);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar11 = *(uint *)(param_2 + 0x14);
  local_cc = *(undefined4 *)(param_2 + 0x18);
  local_10c = CONCAT44(local_10c._4_4_,*(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x2b4));
  if ((int)uVar11 < 0x6d) {
    if (0x6c < uVar11) {
LAB_01ee654c:
      __src = &DAT_0407ebb1;
      goto LAB_01ee6564;
    }
    puVar7 = PTR_s_EmotEnd_04bb4608 + 0x528;
  }
  else {
    if (0x78 < uVar11) goto LAB_01ee654c;
    puVar7 = (undefined *)FUN_007c3ad0();
    uVar11 = uVar11 - 0x6d;
  }
  __src = *(undefined8 **)(puVar7 + (ulong)uVar11 * 8);
LAB_01ee6564:
  puVar5 = local_a0;
  if (local_a0 != __src) {
    lVar9 = 0;
    do {
      if (*(char *)((long)__src + lVar9) == '\0') goto LAB_01ee65b8;
      if (*(char *)((long)__src + lVar9 + 1) == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_01ee65b8;
      }
      if (*(char *)((long)__src + lVar9 + 2) == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_01ee65b8;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_01ee65b8:
    iVar1 = (int)lVar9;
    if (local_98 <= (int)lVar9) {
      iVar1 = local_98 + -1;
    }
    memcpy(local_a0,__src,(long)iVar1);
    *(undefined1 *)((long)puVar5 + (long)iVar1) = 0;
  }
  local_ac = 1;
  local_cf = 1;
  plVar8 = (long *)FUN_016debb0(param_1[1]);
  (**(code **)(*plVar8 + 0x370))(local_150);
  (**(code **)(*param_1 + 0x38))(param_1,0x1d,local_148,1);
  return 1;
}

