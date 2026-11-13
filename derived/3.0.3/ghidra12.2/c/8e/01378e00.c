
/* WARNING: Removing unreachable block (ram,0x013791dc) */
/* WARNING: Removing unreachable block (ram,0x013795dc) */
/* WARNING: Removing unreachable block (ram,0x013791f4) */
/* WARNING: Removing unreachable block (ram,0x013795f4) */
/* WARNING: Removing unreachable block (ram,0x01379204) */
/* WARNING: Removing unreachable block (ram,0x01379604) */
/* WARNING: Removing unreachable block (ram,0x0137920c) */
/* WARNING: Removing unreachable block (ram,0x0137960c) */

undefined4 FUN_01378e00(float *param_1)

{
  undefined ***pppuVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_4274;
  float fStack_4270;
  float local_426c;
  undefined *local_4268;
  undefined *puStack_4260;
  undefined8 local_4258;
  undefined *local_4250;
  undefined8 local_4248;
  undefined8 local_4240;
  float local_4238;
  float fStack_4234;
  float local_4230 [2];
  char local_4228 [4];
  undefined8 local_4224;
  float local_421c;
  float fStack_4218;
  float local_4214;
  float fStack_4210;
  char local_420c;
  undefined8 local_4208;
  float local_4200;
  float local_41fc;
  float local_41f8;
  float fStack_41f4;
  char local_41f0;
  undefined1 local_41e8 [4];
  undefined4 uStack_41e4;
  undefined4 uStack_41e0;
  undefined1 local_41dc [12];
  undefined8 local_41d0;
  undefined1 *puStack_41c8;
  undefined8 local_41c0;
  undefined ***apppuStack_41b8 [3];
  undefined1 local_41a0 [8];
  undefined1 auStack_4198 [8];
  undefined8 local_4190 [3];
  undefined1 local_4178 [8];
  undefined1 local_4170 [8];
  undefined8 local_4168 [3];
  undefined1 local_4150 [8];
  undefined1 local_4148 [8];
  undefined8 local_4140 [3];
  undefined1 local_4128 [8];
  undefined1 auStack_4120 [8];
  undefined8 local_4118 [3];
  undefined1 local_4100 [8];
  undefined1 local_40f8 [8];
  undefined8 local_40f0 [3];
  undefined1 local_40d8 [8];
  undefined1 local_40d0 [8];
  undefined8 local_40c8 [3];
  undefined1 local_40b0 [8];
  undefined1 auStack_40a8 [8];
  undefined8 local_40a0 [3];
  undefined1 local_4088 [8];
  undefined1 auStack_4080 [8];
  undefined8 local_4078 [3];
  undefined1 local_4060 [8];
  undefined **appuStack_4058 [1960];
  undefined **local_318;
  undefined8 local_310;
  undefined1 *local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [56];
  undefined1 auStack_298 [400];
  undefined **local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 auStack_e4 [52];
  undefined *local_b0;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  
  pfVar9 = (float *)FUN_0252d9bc(0);
  local_4238 = pfVar9[2] + 0.0;
  fStack_4234 = 5.0;
  local_4230[0] = 0.0;
  local_4230[1] = 0.0;
  local_4228[0] = '\x01';
  local_421c = pfVar9[2];
  local_4240 = CONCAT44(pfVar9[1] + 0.0,*pfVar9 + 10.0);
  local_420c = '\x01';
  fStack_4218 = -5.0;
  local_4214 = -0.0;
  fStack_4210 = -0.0;
  local_4224 = CONCAT44(pfVar9[1],*pfVar9 + -10.0);
  local_41f0 = '\x01';
  local_4268 = PTR_DAT_04bbc1a0 + 0x10;
  fStack_41f4 = 5.0;
  puStack_4260 = PTR_DAT_04bb2010 + 0x10;
  local_41fc = 0.0;
  local_41f8 = 0.0;
  local_4258 = 0;
  local_4200 = pfVar9[2] + 10.0;
  local_4208 = CONCAT44(pfVar9[1] + 0.0,*pfVar9 + 0.0);
  local_4248 = 0;
  local_4250 = puStack_4260;
  FUN_01379b20(&local_4268);
  uVar16 = 0;
  bVar4 = false;
  do {
    lVar15 = uVar16 * 0x1c;
    pfVar18 = (float *)((long)&local_4240 + uVar16 * 0x1c);
    if (local_4228[lVar15] == '\0') {
      fVar19 = 0.0;
      fVar22 = 0.0;
      pfVar18[0] = 0.0;
      pfVar18[1] = 0.0;
      *(undefined8 *)((long)&local_4240 + (uVar16 * 7 + 2) * 4) = 0;
      (local_4230 + uVar16 * 7)[0] = 0.0;
      (local_4230 + uVar16 * 7)[1] = 0.0;
    }
    else {
      fVar22 = *pfVar18;
      fVar19 = *(float *)((long)&local_4240 + (uVar16 * 7 + 2) * 4);
    }
    local_41dc._0_8_ = 0x1400000014;
    local_b0 = PTR_DAT_04bbc1a0 + 0x10;
    local_41d0 = 400;
    local_41c0 = 0;
    apppuStack_41b8[0] = (undefined ***)0x0;
    apppuStack_41b8[1] = (undefined ***)0x0;
    local_41a0[0] = 0;
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = (int)((float)(int)(fVar22 + -2.5) / 5.0) - (uint)(fVar22 + -2.5 < 0.0);
    fVar22 = (float)(int)(fVar19 + -2.5) / 5.0;
    iStack_9c = (int)fVar22 - (uint)(fVar19 + -2.5 < 0.0);
    local_90 = local_a0 + 1;
    iStack_8c = iStack_9c + 1;
    lVar14 = 0x50;
    do {
      *(undefined4 *)(local_41e8 + lVar14 + 3) = 0;
      *(undefined4 *)(local_41e8 + lVar14) = 0;
      *(undefined8 *)(local_41dc + lVar14 + 0xc) = 0;
      *(undefined4 *)(local_40d0 + lVar14 + 3) = 0;
      *(undefined1 *)((long)apppuStack_41b8 + lVar14 + -0x10) = 0;
      *(undefined4 *)(auStack_40a8 + lVar14 + 3) = 0;
      *(undefined4 *)((long)apppuStack_41b8 + lVar14 + -8) = 0;
      *(undefined4 *)(auStack_4080 + lVar14 + 3) = 0;
      pppuVar1 = (undefined ***)((long)appuStack_4058 + lVar14);
      *(undefined4 *)((long)apppuStack_41b8 + lVar14 + -5) = 0;
      *(undefined8 *)((long)apppuStack_41b8 + lVar14 + 0x10) = 0;
      local_41a0[lVar14] = 0;
      *(undefined4 *)(auStack_4198 + lVar14) = 0;
      *(undefined4 *)(auStack_4198 + lVar14 + 3) = 0;
      local_4178[lVar14] = 0;
      *(undefined8 *)((long)local_4190 + lVar14) = 0;
      *(undefined4 *)(local_4170 + lVar14 + 3) = 0;
      *(undefined4 *)(local_4170 + lVar14) = 0;
      *(undefined8 *)((long)local_4168 + lVar14 + 0x10) = 0;
      local_4150[lVar14] = 0;
      *(undefined4 *)(local_4148 + lVar14) = 0;
      *(undefined4 *)(local_4148 + lVar14 + 3) = 0;
      *(undefined8 *)((long)local_4140 + lVar14 + 0x10) = 0;
      local_4128[lVar14] = 0;
      *(undefined4 *)(auStack_4120 + lVar14) = 0;
      *(undefined4 *)(auStack_4120 + lVar14 + 3) = 0;
      *(undefined8 *)((long)local_4118 + lVar14) = 0;
      local_4100[lVar14] = 0;
      *(undefined4 *)(local_40f8 + lVar14 + 3) = 0;
      *(undefined4 *)(local_40f8 + lVar14) = 0;
      local_40d8[lVar14] = 0;
      *(undefined8 *)((long)local_40f0 + lVar14) = 0;
      *(undefined4 *)(local_40d0 + lVar14) = 0;
      local_40b0[lVar14] = 0;
      *(undefined8 *)((long)local_40c8 + lVar14) = 0;
      *(undefined4 *)(auStack_40a8 + lVar14) = 0;
      local_4088[lVar14] = 0;
      *(undefined8 *)((long)local_40a0 + lVar14) = 0;
      *(undefined4 *)(auStack_4080 + lVar14) = 0;
      local_4060[lVar14] = 0;
      *(undefined8 *)((long)local_4078 + lVar14) = 0;
      *(undefined8 *)(local_41dc + lVar14 + -4) = 0;
      *(undefined8 *)(local_41dc + lVar14 + 4) = 0;
      *(undefined8 *)((long)apppuStack_41b8 + lVar14) = 0;
      *(undefined8 *)((long)apppuStack_41b8 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4190 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4190 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_4168 + lVar14) = 0;
      *(undefined8 *)((long)local_4168 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4140 + lVar14) = 0;
      *(undefined8 *)((long)local_4140 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4118 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4118 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_40f0 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_40f0 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_40c8 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_40c8 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_40a0 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_40a0 + lVar14 + 0x10) = 0;
      *(undefined8 *)((long)local_4078 + lVar14 + 8) = 0;
      *(undefined8 *)((long)local_4078 + lVar14 + 0x10) = 0;
      lVar14 = lVar14 + 400;
    } while (pppuVar1 != &local_318);
    local_310 = 0xd00000190;
    local_300 = 0x14ffffffff;
    local_2f8 = 0x14;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_318 = &PTR_LAB_04993880;
    uStack_41e4 = 0x200020;
    uStack_41e0 = 0xcc00ec;
    local_41e8._0_2_ = 0x20;
    local_41e8._2_2_ = 0x20;
    puStack_41c8 = auStack_4198;
    apppuStack_41b8[2] = &local_318;
    local_308 = auStack_2d0;
    local_98 = local_a8;
    memset(auStack_298,0,400);
    local_100 = 0xd00000190;
    local_f0 = 0x14ffffffff;
    local_e8 = 0x14;
    local_108 = &PTR_LAB_049938a0;
    local_f8 = auStack_e4;
    FUN_0137a0f0(local_41e8,&local_b0);
    uVar10 = FUN_0137a560(local_41e8,&local_a8);
    if ((uVar10 & 1) == 0) {
LAB_01379330:
      cVar3 = local_4228[lVar15];
      if (cVar3 == '\0') {
        fVar19 = 0.0;
        *(undefined8 *)((long)&local_4240 + (uVar16 * 7 + 2) * 4) = 0;
        (local_4230 + uVar16 * 7)[0] = 0.0;
        (local_4230 + uVar16 * 7)[1] = 0.0;
        pfVar18[0] = 0.0;
        pfVar18[1] = 0.0;
      }
      else {
        fVar19 = *pfVar18;
      }
      bVar6 = false;
      fVar23 = (float)(int)local_4258 * 5.0;
      if (fVar23 <= fVar19) {
        fVar23 = (float)(int)local_4248 * 5.0 + 5.0;
        if (fVar19 < fVar23) {
          fVar23 = (float)local_4258._4_4_ * 5.0;
          fVar19 = *(float *)((long)&local_4240 + (uVar16 * 7 + 2) * 4);
          if (fVar23 <= fVar19) {
            fVar23 = (float)local_4248._4_4_ * 5.0 + 5.0;
            bVar6 = fVar19 < fVar23;
          }
          else {
            bVar6 = false;
          }
        }
      }
      bVar4 = (bool)(bVar6 | bVar4);
      if (cVar3 != '\0') {
        pcVar13 = local_4228 + uVar16 * 0x1c;
LAB_01378fb0:
        *pcVar13 = '\0';
      }
    }
    else {
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      if (lVar14 == 0) {
        fVar19 = -500.0;
        fVar23 = -500.0;
      }
      else {
        if ((*(long *)(lVar14 + 0xa8) == 0) || (*(char *)(lVar14 + 0x11c8) != '\0')) {
          fVar19 = -500.0;
LAB_01379280:
          if ((*(long *)(lVar14 + 0xa8) != 0) && (*(char *)(lVar14 + 0x11c8) == '\0')) {
            fVar23 = (float)FUN_0093a950(lVar14 + 0x28,pfVar18,0);
            goto LAB_013792f0;
          }
        }
        else {
          fVar19 = (float)FUN_0093a950(lVar14 + 0x28,pfVar9,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (lVar14 != 0) goto LAB_01379280;
        }
        fVar23 = -500.0;
      }
LAB_013792f0:
      if ((fVar19 - fVar23 < -5.0) || (5.0 < fVar19 - fVar23)) goto LAB_01379330;
      if (local_4228[lVar15] == '\0') {
        local_4274 = 0.0;
        fStack_4270 = 0.0;
        pfVar18[0] = 0.0;
        pfVar18[1] = 0.0;
        local_426c = 0.0;
        *(undefined8 *)((long)&local_4240 + (uVar16 * 7 + 2) * 4) = 0;
        (local_4230 + uVar16 * 7)[0] = 0.0;
        (local_4230 + uVar16 * 7)[1] = 0.0;
      }
      else {
        local_4274 = *pfVar18 + local_4230[uVar16 * 7 + -1];
        fStack_4270 = *(float *)((long)&local_4240 + (uVar16 * 7 + 1) * 4) + local_4230[uVar16 * 7];
        local_426c = *(float *)((long)&local_4240 + (uVar16 * 7 + 2) * 4) +
                     local_4230[uVar16 * 7 + 1];
      }
      fVar22 = local_426c + -2.5;
      local_41dc._0_8_ = 0x1400000014;
      local_41c0 = 0;
      apppuStack_41b8[0] = (undefined ***)0x0;
      local_41d0 = 400;
      local_b0 = PTR_DAT_04bbc1a0 + 0x10;
      local_a8 = PTR_DAT_04bb2010 + 0x10;
      apppuStack_41b8[1] = (undefined ***)0x0;
      local_41a0[0] = 0;
      local_a0 = (int)((float)(int)(local_4274 + -2.5) / 5.0) - (uint)(local_4274 + -2.5 < 0.0);
      fVar23 = (float)(int)fVar22 / 5.0;
      iStack_9c = (int)fVar23 - (uint)(fVar22 < 0.0);
      local_90 = local_a0 + 1;
      iStack_8c = iStack_9c + 1;
      lVar15 = 0x50;
      do {
        *(undefined4 *)(local_41e8 + lVar15 + 3) = 0;
        *(undefined4 *)(local_41e8 + lVar15) = 0;
        *(undefined8 *)(local_41dc + lVar15 + 0xc) = 0;
        *(undefined4 *)(local_40d0 + lVar15 + 3) = 0;
        *(undefined1 *)((long)apppuStack_41b8 + lVar15 + -0x10) = 0;
        *(undefined4 *)(auStack_40a8 + lVar15 + 3) = 0;
        *(undefined4 *)((long)apppuStack_41b8 + lVar15 + -8) = 0;
        *(undefined4 *)(auStack_4080 + lVar15 + 3) = 0;
        pppuVar1 = (undefined ***)((long)appuStack_4058 + lVar15);
        *(undefined4 *)((long)apppuStack_41b8 + lVar15 + -5) = 0;
        *(undefined8 *)((long)apppuStack_41b8 + lVar15 + 0x10) = 0;
        local_41a0[lVar15] = 0;
        *(undefined4 *)(auStack_4198 + lVar15) = 0;
        *(undefined4 *)(auStack_4198 + lVar15 + 3) = 0;
        local_4178[lVar15] = 0;
        *(undefined8 *)((long)local_4190 + lVar15) = 0;
        *(undefined4 *)(local_4170 + lVar15 + 3) = 0;
        *(undefined4 *)(local_4170 + lVar15) = 0;
        *(undefined8 *)((long)local_4168 + lVar15 + 0x10) = 0;
        local_4150[lVar15] = 0;
        *(undefined4 *)(local_4148 + lVar15) = 0;
        *(undefined4 *)(local_4148 + lVar15 + 3) = 0;
        *(undefined8 *)((long)local_4140 + lVar15 + 0x10) = 0;
        local_4128[lVar15] = 0;
        *(undefined4 *)(auStack_4120 + lVar15) = 0;
        *(undefined4 *)(auStack_4120 + lVar15 + 3) = 0;
        *(undefined8 *)((long)local_4118 + lVar15) = 0;
        local_4100[lVar15] = 0;
        *(undefined4 *)(local_40f8 + lVar15 + 3) = 0;
        *(undefined4 *)(local_40f8 + lVar15) = 0;
        local_40d8[lVar15] = 0;
        *(undefined8 *)((long)local_40f0 + lVar15) = 0;
        *(undefined4 *)(local_40d0 + lVar15) = 0;
        local_40b0[lVar15] = 0;
        *(undefined8 *)((long)local_40c8 + lVar15) = 0;
        *(undefined4 *)(auStack_40a8 + lVar15) = 0;
        local_4088[lVar15] = 0;
        *(undefined8 *)((long)local_40a0 + lVar15) = 0;
        *(undefined4 *)(auStack_4080 + lVar15) = 0;
        local_4060[lVar15] = 0;
        *(undefined8 *)((long)local_4078 + lVar15) = 0;
        *(undefined8 *)(local_41dc + lVar15 + -4) = 0;
        *(undefined8 *)(local_41dc + lVar15 + 4) = 0;
        *(undefined8 *)((long)apppuStack_41b8 + lVar15) = 0;
        *(undefined8 *)((long)apppuStack_41b8 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4190 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4190 + lVar15 + 0x10) = 0;
        *(undefined8 *)((long)local_4168 + lVar15) = 0;
        *(undefined8 *)((long)local_4168 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4140 + lVar15) = 0;
        *(undefined8 *)((long)local_4140 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4118 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4118 + lVar15 + 0x10) = 0;
        *(undefined8 *)((long)local_40f0 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_40f0 + lVar15 + 0x10) = 0;
        *(undefined8 *)((long)local_40c8 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_40c8 + lVar15 + 0x10) = 0;
        *(undefined8 *)((long)local_40a0 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_40a0 + lVar15 + 0x10) = 0;
        *(undefined8 *)((long)local_4078 + lVar15 + 8) = 0;
        *(undefined8 *)((long)local_4078 + lVar15 + 0x10) = 0;
        lVar15 = lVar15 + 400;
      } while (pppuVar1 != &local_318);
      local_310 = 0xd00000190;
      local_300 = 0x14ffffffff;
      local_2f8 = 0x14;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_318 = &PTR_LAB_04993880;
      uStack_41e4 = 0x200020;
      uStack_41e0 = 0xcc00ec;
      local_41e8._0_2_ = 0x20;
      local_41e8._2_2_ = 0x20;
      puStack_41c8 = auStack_4198;
      apppuStack_41b8[2] = &local_318;
      local_308 = auStack_2d0;
      local_98 = local_a8;
      memset(auStack_298,0,400);
      local_100 = 0xd00000190;
      local_f0 = 0x14ffffffff;
      local_e8 = 0x14;
      local_108 = &PTR_LAB_049938a0;
      local_f8 = auStack_e4;
      FUN_0137a0f0(local_41e8,&local_b0);
      uVar10 = FUN_0137a560(local_41e8,&local_a8);
      if ((uVar10 & 1) == 0) {
LAB_01378f9c:
        pcVar13 = local_4228 + uVar16 * 0x1c;
        if (*pcVar13 == '\0') goto LAB_01378fb4;
        goto LAB_01378fb0;
      }
      lVar15 = *(long *)PTR_DAT_04bb27c8;
      if (lVar15 == 0) {
        fVar19 = -500.0;
        fVar21 = -500.0;
      }
      else {
        if ((*(long *)(lVar15 + 0xa8) == 0) || (*(char *)(lVar15 + 0x11c8) != '\0')) {
          fVar19 = -500.0;
LAB_01379680:
          if ((*(long *)(lVar15 + 0xa8) != 0) && (*(char *)(lVar15 + 0x11c8) == '\0')) {
            fVar21 = (float)FUN_0093a950(lVar15 + 0x28,&local_4274,0);
            goto LAB_013796e8;
          }
        }
        else {
          fVar19 = (float)FUN_0093a950(lVar15 + 0x28,pfVar9,0);
          lVar15 = *(long *)PTR_DAT_04bb27c8;
          if (lVar15 != 0) goto LAB_01379680;
        }
        fVar21 = -500.0;
      }
LAB_013796e8:
      if ((fVar19 - fVar21 < -5.0) || (5.0 < fVar19 - fVar21)) goto LAB_01378f9c;
    }
LAB_01378fb4:
    uVar7 = (int)uVar16 + 1;
    uVar16 = (ulong)uVar7;
  } while (uVar7 != 3);
  uVar12 = 1;
  uVar7 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&DAT_051a36b8,PTR_DAT_04bb3238,1);
  puVar5 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return 1;
  }
  if ((((uVar7 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8),
       plVar17 == (long *)0x0)) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar17 + 0x46) != uVar7)) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar5;
    iVar8 = (**(code **)(*plVar11 + 0x60))();
    if (iVar8 < 0x11) {
      uVar7 = 1;
      goto joined_r0x013797d8;
    }
    if (*(uint *)(lVar15 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013797d8;
    }
  }
  uVar7 = 0;
joined_r0x013797d8:
  if (plVar17 != (long *)0x0) {
    lVar15 = plVar17[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar16 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar15 == 1) {
      uVar2 = uVar7;
    }
    if (((uVar16 & 1) != 0) && (uVar2 != 0)) {
      lVar15 = plVar17[0xd];
      if (local_4228[0] == '\0') {
        fVar19 = INFINITY;
        fVar21 = NAN;
      }
      else {
        fVar20 = local_4238 - pfVar9[2];
        fVar23 = 1.1920929e-07;
        fVar21 = NAN;
        fVar19 = INFINITY;
        if (fVar20 <= 1.1920929e-07 && -1.1920929e-07 <= fVar20) {
          fVar23 = *(float *)(lVar15 + 0x278) - (float)local_4240;
          fVar22 = *(float *)(lVar15 + 0x280) - local_4238;
          fVar22 = fVar22 * fVar22;
          fVar24 = fVar22 + fVar23 * fVar23;
          fVar23 = INFINITY;
          if (fVar24 < INFINITY) {
            fVar21 = (float)local_4240 + fStack_4234 * 0.5;
            fVar23 = local_4240._4_4_ + local_4230[0] * 0.5;
            fVar22 = local_4238 + local_4230[1] * 0.5;
            fVar19 = fVar24;
          }
        }
        if (NAN(fVar21) && (fVar20 > 1.1920929e-07 || -1.1920929e-07 > fVar20)) {
          fVar21 = (float)local_4240 + fStack_4234 * 0.5;
          fVar23 = local_4240._4_4_ + local_4230[0] * 0.5;
          fVar22 = local_4238 + local_4230[1] * 0.5;
        }
      }
      if (local_420c != '\0') {
        fVar20 = local_421c - pfVar9[2];
        if (fVar20 <= 1.1920929e-07 && -1.1920929e-07 <= fVar20) {
          fVar24 = *(float *)(lVar15 + 0x278) - (float)local_4224;
          fVar25 = *(float *)(lVar15 + 0x280) - local_421c;
          fVar24 = fVar25 * fVar25 + fVar24 * fVar24;
          if (fVar24 < fVar19) {
            fVar21 = (float)local_4224 + fStack_4218 * 0.5;
            fVar23 = local_4224._4_4_ + local_4214 * 0.5;
            fVar22 = local_421c + fStack_4210 * 0.5;
            fVar19 = fVar24;
          }
        }
        if (NAN(fVar21) && (1.1920929e-07 < fVar20 || -1.1920929e-07 > fVar20)) {
          fVar21 = (float)local_4224 + fStack_4218 * 0.5;
          fVar23 = local_4224._4_4_ + local_4214 * 0.5;
          fVar22 = local_421c + fStack_4210 * 0.5;
        }
      }
      if (local_41f0 != '\0') {
        fVar20 = local_4200 - pfVar9[2];
        if ((fVar20 <= 1.1920929e-07 && -1.1920929e-07 <= fVar20) &&
           (fVar24 = *(float *)(lVar15 + 0x278) - (float)local_4208,
           fVar25 = *(float *)(lVar15 + 0x280) - local_4200,
           fVar25 * fVar25 + fVar24 * fVar24 < fVar19)) {
          fVar21 = (float)local_4208 + local_41fc * 0.5;
          fVar23 = local_4208._4_4_ + local_41f8 * 0.5;
          fVar22 = local_4200 + fStack_41f4 * 0.5;
        }
        if (NAN(fVar21) && (1.1920929e-07 < fVar20 || -1.1920929e-07 > fVar20)) {
          fVar21 = (float)local_4208 + local_41fc * 0.5;
          fVar23 = local_4208._4_4_ + local_41f8 * 0.5;
          fVar22 = local_4200 + fStack_41f4 * 0.5;
        }
      }
      if (NAN(fVar21)) {
        uVar12 = 1;
        if (bVar4) {
          uVar12 = 2;
        }
      }
      else {
        uVar12 = 0;
        *param_1 = fVar21;
        param_1[1] = fVar23;
        param_1[2] = fVar22;
      }
    }
  }
  return uVar12;
}

