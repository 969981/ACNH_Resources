
float FUN_036d5c20(uint param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  char cVar12;
  ulong uVar13;
  int *piVar14;
  undefined *local_140;
  long local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [127];
  undefined1 local_85;
  undefined4 local_80;
  char local_7c;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  float local_30 [3];
  undefined1 local_24 [4];
  
  puVar7 = PTR_DAT_04bcac50;
  puVar6 = PTR_DAT_04bcac48;
  if ((int)DAT_05ab4098 < 1) {
    if (DAT_05ab3f88 == 0) {
      return 0.0;
    }
    puVar9 = *(uint **)(DAT_05ab3f88 + 8);
    if (puVar9 == (uint *)0x0) {
      return 0.0;
    }
    if ((param_1 < DAT_05ab3fa0) && (*(char *)(DAT_05ab3fa8 + (int)param_1) == '\0')) {
      return 0.0;
    }
    if (*puVar9 <= param_1) {
      return 0.0;
    }
    if (puVar9[1] == 0) {
      return 0.0;
    }
    if ((ushort)puVar9[2] == 0) {
      return 0.0;
    }
    iVar11 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * param_1 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                     (long)puVar9);
  }
  else {
    if (DAT_05ab4098 <= param_1) {
      return 0.0;
    }
    if (DAT_05ab4088 <= param_1) {
      param_1 = 0;
    }
    puVar9 = *(uint **)(DAT_05ab4090 + (ulong)param_1 * 8);
  }
  if (puVar9 == (uint *)0x0) {
    return 0.0;
  }
  local_85 = 0;
  local_108 = 0x80;
  local_110 = local_104;
  local_104[0] = 0;
  local_80 = 0;
  local_120 = PTR_DAT_04bb5d38 + 0x10;
  local_7c = '\0';
  puStack_118 = PTR_DAT_04bb2d88 + 0x10;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  uStack_70 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  puStack_60 = PTR_DAT_04bbc1a0 + 0x10;
  local_68 = 0;
  local_34 = 0;
  local_12c = 0;
  local_128 = 0;
  local_140 = PTR_DAT_04bb2020 + 0x10;
  uVar2 = *puVar9;
  if (uVar2 == 0) {
LAB_036d5dd4:
    lVar10 = 0;
LAB_036d5dd8:
    local_130 = 0;
    local_138 = *(long *)PTR_PTR_04bcac58;
    if (lVar10 != 0) {
      local_138 = lVar10;
    }
    local_58 = local_78;
    local_48 = local_78;
    FUN_009893c0(&local_120,&local_140);
    if (local_7c == '\0') {
      return 0.0;
    }
    local_30[1] = 0.0;
    local_30[0] = ((float)(*(int *)(param_2 + 8) + (int)local_50) * 5.0 +
                  (float)(*(int *)(param_2 + 8) + (int)local_40) * 5.0 + 5.0) * 0.5;
    local_30[2] = ((float)(*(int *)(param_2 + 0xc) + local_50._4_4_) * 5.0 +
                  (float)(*(int *)(param_2 + 0xc) + local_40._4_4_) * 5.0 + 5.0) * 0.5;
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (lVar10 == 0) {
      return local_30[0];
    }
    if (*(long *)(lVar10 + 0xa8) == 0) {
      return local_30[0];
    }
    if (*(char *)(lVar10 + 0x11c8) != '\0') {
      return local_30[0];
    }
    local_24[0] = 0;
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 == -1) {
      uVar8 = 7;
    }
    else {
      local_140 = (undefined *)CONCAT44(local_140._4_4_,1);
      puVar9 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar9 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar8 = 7;
      if ((*puVar9 & 2) != 0) {
        uVar8 = 5;
      }
    }
    local_140 = (undefined *)CONCAT44(local_140._4_4_,uVar8);
    FUN_00962700(*(long *)(lVar10 + 0xa8),local_30,&local_140,1,local_24);
    return local_30[0];
  }
  cVar12 = *PTR_DAT_04bcac48;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      uVar2 = *puVar9;
    }
    else {
      uVar3 = *(uint *)(puVar7 + 8);
      if (-1 < (int)uVar3) {
        lVar10 = (ulong)uVar3 + (long)puVar9;
        goto LAB_036d5dd8;
      }
      if (uVar3 != 0xffffffff) goto LAB_036d5dd4;
    }
    puVar5 = (uint *)(ulong)uVar2;
    lVar10 = 0;
    if ((puVar5 == (uint *)0x0) || (lVar10 = 0, puVar9 == puVar5)) goto LAB_036d5dd8;
    lVar10 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
      lVar10 = 0x1c;
    }
    lVar1 = (long)puVar9 + (lVar10 - (long)puVar5);
    lVar10 = 0;
    if (lVar1 == 0) goto LAB_036d5dd8;
    uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_036d5dd4;
    piVar14 = (int *)(lVar1 + 4);
    while (piVar14[-1] != 0x39b5a93d) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_036d5dd4;
    }
    iVar11 = 0;
    if (*piVar14 != -1) {
      iVar11 = *piVar14;
    }
    *(int *)(puVar7 + 8) = iVar11;
    uVar2 = *puVar9;
    if (uVar2 == 0) goto LAB_036d5dd4;
  } while( true );
}

