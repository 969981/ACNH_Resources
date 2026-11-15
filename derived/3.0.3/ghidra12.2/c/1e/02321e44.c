
void FUN_02321e44(short *param_1,long *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 auStack_140 [2];
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined4 local_44;
  
  pbVar1 = (byte *)(param_2 + 0x3dd);
  FUN_02519c40(pbVar1,(int)param_2[0x46]);
  puVar12 = (undefined4 *)FUN_02547c90(pbVar1);
  uVar6 = puVar12[1];
  *(undefined4 *)param_1 = *puVar12;
  *(undefined4 *)(param_1 + 2) = uVar6;
  if (*(char *)((long)puVar12 + 9) == '\0') {
    FUN_0252d8f0(&local_138,pbVar1);
    *(undefined4 *)param_1 = (undefined4)local_138;
    *(undefined4 *)(param_1 + 2) = local_138._4_4_;
    if (*(char *)(param_3 + 3) != '\0') {
      uVar10 = FUN_02538bb0(pbVar1);
      plVar14 = (long *)param_2[0xc];
      if (plVar14 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_052461c0), iVar11 != 0))
        {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar14 = &DAT_05240280;
        }
        else {
          plVar14 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar14 + 600))(&local_138,plVar14,uVar10 & 1);
      if ((short)local_138 != -2) {
        *param_1 = (short)local_138;
        param_1[1] = local_138._2_2_;
        *(undefined4 *)(param_1 + 2) = local_138._4_4_;
      }
    }
  }
  FUN_0244b5a8(auStack_140,pbVar1);
  puVar7 = PTR_DAT_04bb37e0;
  bVar9 = *(char *)((long)param_3 + 0xe) != '\0';
  puVar2 = auStack_140;
  if (bVar9) {
    puVar2 = (undefined2 *)PTR_DAT_04bb37e0;
  }
  puVar3 = (undefined1 *)((ulong)auStack_140 | 2);
  if (bVar9) {
    puVar3 = PTR_DAT_04bb37e0 + 2;
  }
  puVar4 = (undefined1 *)((ulong)auStack_140 | 3);
  if (bVar9) {
    puVar4 = PTR_DAT_04bb37e0 + 3;
  }
  local_148 = CONCAT13(*puVar4,CONCAT12(*puVar3,*puVar2));
  puVar12 = &uStack_13c;
  if (bVar9) {
    puVar12 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  local_144 = *puVar12;
  uVar13 = FUN_017009b0(param_1);
  if ((*pbVar1 < 8) && (uVar10 = FUN_02582d8c(pbVar1,1), puVar8 = PTR_DAT_04bb4fb8, uVar10 < 8)) {
    if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0') &&
       (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d6) != '\0' &&
         (uVar10 = FUN_02582d8c(pbVar1,1), uVar10 < 8)) &&
        (*(char *)(*(long *)puVar8 + (ulong)uVar10 * 0x13f0 + 0x13d4) != '\0')))) {
      FUN_0250d818(*(long *)puVar8 + (ulong)uVar10 * 0x13f0 + 0x4f8,param_1);
    }
  }
  local_44 = *param_3;
  if (param_2[0x53] != 0) {
    local_124 = 0x3f800000;
    local_128 = 0;
    local_138 = 0xffffffff00000000;
    local_130 = 0;
    puStack_100 = local_f4;
    local_f8 = 0x80;
    local_75 = 0;
    local_f4[0] = 0;
    local_108 = PTR_DAT_04bb2d88 + 0x10;
    local_68 = 0;
    local_6c = 0;
    local_11c = 0;
    local_114 = 0;
    local_70 = 7;
    FUN_017327f0(*(undefined8 *)(param_2[0x53] + 0x1480),param_1,&local_44,&local_138,0xffffffff);
  }
  if ((int)param_2[0x2f] == 0) {
    FUN_02648c90(pbVar1,param_1,0);
  }
  psVar5 = param_1;
  if ((uVar13 & 1) == 0) {
    psVar5 = (short *)puVar7;
  }
  (**(code **)(*param_2 + 0x2e8))(param_2,psVar5,*param_3);
  local_138 = CONCAT44(local_138._4_4_,*param_3);
  if (param_2[0x53] != 0) {
    FUN_0234e4e0(param_2[0x53],&local_148,&local_138);
  }
  if (*(char *)(param_3 + 1) != '\0') {
    uVar13 = (ulong)local_11c >> 0x10;
    local_138 = CONCAT35(local_138._5_3_,0x100000000);
    puVar15 = (undefined8 *)param_2[0xc];
    local_128 = CONCAT31(local_128._1_3_,1);
    local_138 = CONCAT44(local_138._4_4_,param_3[2]);
    local_130 = *(undefined8 *)param_1;
    local_124 = CONCAT44(local_144,local_148);
    local_11c = CONCAT62((uint6)uVar13 & 0xffffffffff00,0x101);
    if (puVar15 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(&DAT_052461c0);
        puVar15 = &DAT_05240280;
        if (iVar11 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar15 = &DAT_05240280;
      }
    }
    FUN_0170f380(puVar15,&local_138);
  }
  return;
}

