
/* WARNING: Removing unreachable block (ram,0x015b95e8) */
/* WARNING: Removing unreachable block (ram,0x015b9650) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015b947c(long param_1)

{
  unkbyte9 *pVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined3 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  bool bVar34;
  bool bVar35;
  int iVar36;
  uint uVar37;
  ulong uVar38;
  float *pfVar39;
  uint uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  float *pfVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 extraout_b0;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 extraout_var;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 extraout_var_00;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 extraout_var_01;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  byte bVar94;
  float fVar95;
  undefined1 auVar97 [12];
  byte bVar101;
  byte bVar102;
  byte bVar104;
  float fVar105;
  byte bVar107;
  byte bVar108;
  byte bVar110;
  byte bVar113;
  byte bVar114;
  undefined1 auVar96 [12];
  undefined1 auVar98 [12];
  undefined1 auVar99 [16];
  byte bVar103;
  int iVar106;
  byte bVar109;
  float fVar111;
  int iVar112;
  byte bVar115;
  undefined1 auVar100 [16];
  float fVar133;
  undefined1 auVar119 [12];
  undefined1 auVar120 [12];
  undefined8 uVar116;
  undefined1 auVar117 [12];
  undefined1 auVar121 [12];
  undefined1 auVar122 [16];
  undefined1 auVar118 [12];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar128 [16];
  undefined1 auVar127 [16];
  undefined1 auVar126 [16];
  undefined1 auVar125 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  float fVar134;
  undefined8 uVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  float fVar143;
  float fVar144;
  undefined1 auVar138 [12];
  float fVar145;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  float fVar146;
  undefined8 uVar147;
  undefined8 uVar148;
  undefined8 uVar149;
  undefined8 uVar150;
  float fVar160;
  undefined1 auVar151 [12];
  undefined1 auVar152 [16];
  undefined1 auVar156 [16];
  undefined1 auVar155 [16];
  undefined1 auVar154 [16];
  undefined1 auVar153 [16];
  float fVar159;
  float fVar161;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined8 uVar162;
  undefined8 uVar163;
  undefined8 uVar164;
  undefined1 auVar165 [12];
  float fVar166;
  float fVar167;
  float fVar168;
  undefined8 uVar169;
  undefined8 uVar170;
  undefined8 uVar171;
  undefined8 uVar172;
  float fVar173;
  undefined1 auVar174 [16];
  undefined8 uVar175;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  float fVar179;
  float fVar180;
  undefined1 auVar181 [16];
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  long *local_98;
  undefined8 local_8c;
  float local_84;
  undefined8 local_80;
  float local_78;
  
  if (*(long *)(DAT_05231900 + 200) == 0) {
    return;
  }
  lVar43 = *(long *)(param_1 + 0x10);
  if (lVar43 == 0) {
    return;
  }
  lVar41 = (long)*(int *)(param_1 + 0x20) * 0x10;
  pfVar45 = *(float **)(*(long *)(lVar43 + 0x240) + 0x318);
  puVar2 = (undefined8 *)(*(long *)(lVar43 + 0x1d0) + lVar41);
  puVar3 = (undefined4 *)(*(long *)(lVar43 + 0x210) + lVar41);
  puVar4 = (undefined4 *)(*(long *)(lVar43 + 0x218) + lVar41);
  puVar5 = (undefined4 *)(*(long *)(lVar43 + 0x220) + lVar41);
  uVar150 = *puVar2;
  fVar167 = *(float *)(puVar2 + 1);
  cVar6 = *(char *)(*(long *)(lVar43 + 0xa0) + 0x793);
  if (cVar6 == '\x02') {
    pVar1 = (unkbyte9 *)(lVar43 + 0x400);
    uVar164 = *(undefined8 *)(lVar43 + 0x408);
    uVar46 = (undefined1)((ulong)uVar164 >> 8);
    uVar48 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar52 = (undefined1)((ulong)uVar164 >> 0x20);
    uVar54 = (undefined1)((ulong)uVar164 >> 0x28);
    uVar55 = (undefined1)((ulong)uVar164 >> 0x30);
    uVar47 = (undefined1)((ulong)uVar164 >> 0x38);
    uVar164 = *(undefined8 *)pVar1;
    uVar58 = (undefined1)uVar164;
    uVar59 = (undefined1)((ulong)uVar164 >> 8);
    uVar60 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar61 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar62 = (undefined1)((ulong)uVar164 >> 0x20);
    uVar63 = (undefined1)((ulong)uVar164 >> 0x28);
    uVar64 = (undefined1)((ulong)uVar164 >> 0x30);
    uVar65 = (undefined1)((ulong)uVar164 >> 0x38);
    auVar176[9] = uVar46;
    auVar176._0_9_ = *pVar1;
    auVar176[10] = uVar48;
    auVar176[0xb] = uVar50;
    auVar176[0xc] = uVar52;
    auVar176[0xd] = uVar54;
    auVar176[0xe] = uVar55;
    auVar176[0xf] = uVar47;
    auVar139[9] = uVar46;
    auVar139._0_9_ = *pVar1;
    auVar139[10] = uVar48;
    auVar139[0xb] = uVar50;
    auVar139[0xc] = uVar52;
    auVar139[0xd] = uVar54;
    auVar139[0xe] = uVar55;
    auVar139[0xf] = uVar47;
    auVar176 = NEON_ext(auVar176,auVar139,8,1);
    uVar12 = *puVar3;
    uVar46 = (undefined1)uVar12;
    uVar48 = (undefined1)((uint)uVar12 >> 8);
    uVar50 = (undefined1)((uint)uVar12 >> 0x10);
    uVar52 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = *puVar4;
    uVar54 = (undefined1)uVar12;
    uVar55 = (undefined1)((uint)uVar12 >> 8);
    uVar47 = (undefined1)((uint)uVar12 >> 0x10);
    uVar49 = (undefined1)((uint)uVar12 >> 0x18);
    uVar12 = *puVar5;
    uVar51 = (undefined1)uVar12;
    uVar53 = (undefined1)((uint)uVar12 >> 8);
    uVar56 = (undefined1)((uint)uVar12 >> 0x10);
    uVar57 = (undefined1)((uint)uVar12 >> 0x18);
    uVar172 = CONCAT44(puVar4[2],puVar3[2]);
    uVar164 = CONCAT44(puVar4[1],puVar3[1]);
    uVar67 = auVar176[0];
    uVar69 = auVar176[1];
    uVar71 = auVar176[2];
    uVar73 = auVar176[3];
LAB_015b9594:
    auVar117._8_4_ = puVar5[2];
    auVar117._0_8_ = uVar172;
    auVar96._8_4_ = puVar5[1];
    auVar96._0_8_ = uVar164;
  }
  else {
    if (cVar6 != '\0') {
      uVar12 = *puVar3;
      uVar46 = (undefined1)uVar12;
      uVar48 = (undefined1)((uint)uVar12 >> 8);
      uVar50 = (undefined1)((uint)uVar12 >> 0x10);
      uVar52 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar4;
      uVar54 = (undefined1)uVar12;
      uVar55 = (undefined1)((uint)uVar12 >> 8);
      uVar47 = (undefined1)((uint)uVar12 >> 0x10);
      uVar49 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar5;
      uVar51 = (undefined1)uVar12;
      uVar53 = (undefined1)((uint)uVar12 >> 8);
      uVar56 = (undefined1)((uint)uVar12 >> 0x10);
      uVar57 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar3[3];
      uVar58 = (undefined1)uVar12;
      uVar59 = (undefined1)((uint)uVar12 >> 8);
      uVar60 = (undefined1)((uint)uVar12 >> 0x10);
      uVar61 = (undefined1)((uint)uVar12 >> 0x18);
      uVar172 = CONCAT44(puVar4[2],puVar3[2]);
      uVar12 = puVar4[3];
      uVar62 = (undefined1)uVar12;
      uVar63 = (undefined1)((uint)uVar12 >> 8);
      uVar64 = (undefined1)((uint)uVar12 >> 0x10);
      uVar65 = (undefined1)((uint)uVar12 >> 0x18);
      uVar164 = CONCAT44(puVar4[1],puVar3[1]);
      uVar12 = puVar5[3];
      uVar67 = (undefined1)uVar12;
      uVar69 = (undefined1)((uint)uVar12 >> 8);
      uVar71 = (undefined1)((uint)uVar12 >> 0x10);
      uVar73 = (undefined1)((uint)uVar12 >> 0x18);
      goto LAB_015b9594;
    }
    uVar164 = *(undefined8 *)(lVar43 + 0x3d8);
    uVar51 = (undefined1)uVar164;
    uVar53 = (undefined1)((ulong)uVar164 >> 8);
    uVar56 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar57 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar164 = *(undefined8 *)(lVar43 + 0x3d0);
    uVar46 = (undefined1)uVar164;
    uVar48 = (undefined1)((ulong)uVar164 >> 8);
    uVar50 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar52 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar54 = (undefined1)((ulong)uVar164 >> 0x20);
    uVar55 = (undefined1)((ulong)uVar164 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar164 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar164 >> 0x38);
    auVar96 = SUB1612(*(undefined1 (*) [16])(lVar43 + 0x3e0),0);
    auVar117 = SUB1612(*(undefined1 (*) [16])(lVar43 + 0x3f0),0);
    uVar164 = *(undefined8 *)(lVar43 + 0x408);
    uVar67 = (undefined1)uVar164;
    uVar69 = (undefined1)((ulong)uVar164 >> 8);
    uVar71 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar73 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar164 = *(undefined8 *)(lVar43 + 0x400);
    uVar58 = (undefined1)uVar164;
    uVar59 = (undefined1)((ulong)uVar164 >> 8);
    uVar60 = (undefined1)((ulong)uVar164 >> 0x10);
    uVar61 = (undefined1)((ulong)uVar164 >> 0x18);
    uVar62 = (undefined1)((ulong)uVar164 >> 0x20);
    uVar63 = (undefined1)((ulong)uVar164 >> 0x28);
    uVar64 = (undefined1)((ulong)uVar164 >> 0x30);
    uVar65 = (undefined1)((ulong)uVar164 >> 0x38);
  }
  fVar166 = (float)uVar150;
  local_8c = 0;
  fVar133 = (float)((ulong)uVar150 >> 0x20);
  local_84 = 0.0;
  fVar105 = (float)CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62))) +
            (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) * fVar166 +
            auVar96._4_4_ * fVar133 + auVar117._4_4_ * fVar167;
  local_78 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))) +
             (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51))) * fVar166 +
             auVar96._8_4_ * fVar133 + auVar117._8_4_ * fVar167;
  local_80 = CONCAT17((char)((uint)fVar105 >> 0x18),
                      CONCAT16((char)((uint)fVar105 >> 0x10),
                               CONCAT15((char)((uint)fVar105 >> 8),
                                        CONCAT14(SUB41(fVar105,0),
                                                 (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(
                                                  uVar59,uVar58))) +
                                                 (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(
                                                  uVar48,uVar46))) * fVar166 +
                                                 auVar96._0_4_ * fVar133 + auVar117._0_4_ * fVar167)
                                       )));
  if (*(long *)(DAT_05231900 + 0x50) == 0) {
LAB_015b9628:
    fVar167 = *pfVar45;
    fVar166 = pfVar45[1];
    lVar43 = *(long *)(DAT_05231900 + 0x50);
joined_r0x015b9634:
    local_98 = (long *)0x0;
    if (lVar43 != 0) {
      local_98 = (long *)0x0;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
      plVar44 = *(long **)(lVar43 + 0x118);
      if (((plVar44 != (long *)0x0) && ((char)plVar44[7] != '\0')) &&
         (uVar38 = (**(code **)(*plVar44 + 0xc0))(plVar44), (uVar38 & 1) != 0)) {
        local_98 = plVar44;
      }
    }
  }
  else {
    local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
    lVar43 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
    if (lVar43 == 0) goto LAB_015b9628;
    FUN_015bca00(lVar43,&local_8c,&local_80,0,1,1);
    fVar167 = *pfVar45;
    fVar166 = pfVar45[1];
    local_98 = (long *)0x0;
    if (DAT_05231900 != 0) {
      lVar43 = *(long *)(DAT_05231900 + 0x50);
      goto joined_r0x015b9634;
    }
  }
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = 0;
  local_a0 = (int)((float)(int)(float)local_80 / 5.0) - (uint)((float)local_80 < 0.0);
  iStack_9c = (int)((float)(int)local_78 / 5.0) - (uint)(local_78 < 0.0);
  FUN_015af3fc(&local_98,&local_b0,&local_a8,0);
  iVar36 = FUN_015af618(&local_98,&local_b0,0);
  if (iVar36 == 0) {
LAB_015b985c:
    uVar37 = 0;
  }
  else {
    if (iVar36 != 4) {
      local_b8 = 0.0;
      local_c0 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,1);
      local_c0 = 2;
      local_c8 = 0;
      local_d0 = 0;
      local_e0 = CONCAT44(local_e0._4_4_,5);
      local_d0 = 0x20;
      local_d8 = 0;
      local_e0 = 0;
      local_e0 = 0x1000;
      local_b8 = 0.0;
      local_c8 = 0;
      local_d8 = 0;
      if (DAT_04cfae30 != 0) {
        if (*(long *)(DAT_04cfae30 + 0xa8) != 0) {
          uVar38 = FUN_00949594(DAT_04cfae30 + 0x28,&local_a8,&local_c0);
          if ((uVar38 & 1) != 0) goto LAB_015b9704;
          if (DAT_04cfae30 == 0) goto LAB_015b985c;
        }
        if (*(long *)(DAT_04cfae30 + 0xa8) != 0) {
          uVar38 = FUN_00949594(DAT_04cfae30 + 0x28,&local_a8,&local_d0);
          if ((uVar38 & 1) != 0) goto LAB_015b9704;
          if (DAT_04cfae30 == 0) goto LAB_015b985c;
        }
        if (*(long *)(DAT_04cfae30 + 0xa8) != 0) {
          uVar37 = FUN_00949594(DAT_04cfae30 + 0x28,&local_a8,&local_e0);
          goto LAB_015b9860;
        }
      }
      goto LAB_015b985c;
    }
LAB_015b9704:
    uVar37 = 1;
  }
LAB_015b9860:
  uVar175 = DAT_041016a0;
  uVar172 = DAT_041015c8;
  uVar164 = DAT_04101598;
  uVar150 = DAT_04101580;
  if ((((float)local_8c != 0.0) || (local_8c._4_4_ != 0.0)) || (local_84 != 0.0)) {
    fVar179 = fVar167 * (float)local_8c;
    fVar133 = fVar167 * local_8c._4_4_;
    uVar46 = SUB41(fVar133,0);
    uVar48 = (undefined1)((uint)fVar133 >> 8);
    uVar50 = (undefined1)((uint)fVar133 >> 0x10);
    uVar52 = (undefined1)((uint)fVar133 >> 0x18);
    fVar167 = fVar167 * local_84;
    auVar176 = ZEXT816(0x3f800000);
    fVar105 = SQRT(fVar133 * fVar133 + fVar179 * fVar179 + fVar167 * fVar167);
    fVar160 = auVar176._0_4_;
    if ((fVar160 < fVar105) && (0.0 < fVar105)) {
      fVar105 = fVar160 / fVar105;
      fVar179 = fVar179 * fVar105;
      fVar133 = fVar133 * fVar105;
      uVar46 = SUB41(fVar133,0);
      uVar48 = (undefined1)((uint)fVar133 >> 8);
      uVar50 = (undefined1)((uint)fVar133 >> 0x10);
      uVar52 = (undefined1)((uint)fVar133 >> 0x18);
      fVar167 = fVar167 * fVar105;
    }
    lVar43 = *(long *)(param_1 + 0x10);
    lVar41 = (long)*(int *)(param_1 + 0x20) * 0x10;
    puVar3 = (undefined4 *)(*(long *)(lVar43 + 0x210) + lVar41);
    puVar4 = (undefined4 *)(*(long *)(lVar43 + 0x218) + lVar41);
    puVar5 = (undefined4 *)(*(long *)(lVar43 + 0x220) + lVar41);
    cVar6 = *(char *)(*(long *)(lVar43 + 0xa0) + 0x793);
    if ((cVar6 == '\x02') || (cVar6 != '\0')) {
      uVar62 = 0;
      uVar63 = 0;
      uVar64 = 0;
      uVar65 = 0;
      uVar12 = *puVar3;
      uVar54 = (undefined1)uVar12;
      uVar55 = (undefined1)((uint)uVar12 >> 8);
      uVar47 = (undefined1)((uint)uVar12 >> 0x10);
      uVar49 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar4;
      uVar51 = (undefined1)uVar12;
      uVar53 = (undefined1)((uint)uVar12 >> 8);
      uVar56 = (undefined1)((uint)uVar12 >> 0x10);
      uVar57 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = *puVar5;
      uVar58 = (undefined1)uVar12;
      uVar59 = (undefined1)((uint)uVar12 >> 8);
      uVar60 = (undefined1)((uint)uVar12 >> 0x10);
      uVar61 = (undefined1)((uint)uVar12 >> 0x18);
      auVar99._0_4_ = puVar3[2];
      auVar99._4_4_ = puVar4[2];
      uVar12 = puVar3[1];
      uVar67 = (undefined1)uVar12;
      uVar69 = (undefined1)((uint)uVar12 >> 8);
      uVar71 = (undefined1)((uint)uVar12 >> 0x10);
      uVar73 = (undefined1)((uint)uVar12 >> 0x18);
      uVar66 = 0;
      uVar68 = 0;
      uVar70 = 0;
      uVar72 = 0;
      uVar12 = puVar4[1];
      uVar74 = (undefined1)uVar12;
      uVar75 = (undefined1)((uint)uVar12 >> 8);
      uVar76 = (undefined1)((uint)uVar12 >> 0x10);
      uVar77 = (undefined1)((uint)uVar12 >> 0x18);
      auVar99._8_4_ = puVar5[2];
      auVar99._12_4_ = 0;
      uVar12 = puVar5[1];
      uVar78 = (undefined1)uVar12;
      uVar79 = (undefined1)((uint)uVar12 >> 8);
      uVar80 = (undefined1)((uint)uVar12 >> 0x10);
      uVar81 = (undefined1)((uint)uVar12 >> 0x18);
    }
    else {
      uVar116 = *(undefined8 *)(lVar43 + 0x3d8);
      uVar58 = (undefined1)uVar116;
      uVar59 = (undefined1)((ulong)uVar116 >> 8);
      uVar60 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar61 = (undefined1)((ulong)uVar116 >> 0x18);
      uVar62 = (undefined1)((ulong)uVar116 >> 0x20);
      uVar63 = (undefined1)((ulong)uVar116 >> 0x28);
      uVar64 = (undefined1)((ulong)uVar116 >> 0x30);
      uVar65 = (undefined1)((ulong)uVar116 >> 0x38);
      uVar116 = *(undefined8 *)(lVar43 + 0x3d0);
      uVar54 = (undefined1)uVar116;
      uVar55 = (undefined1)((ulong)uVar116 >> 8);
      uVar47 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar49 = (undefined1)((ulong)uVar116 >> 0x18);
      uVar51 = (undefined1)((ulong)uVar116 >> 0x20);
      uVar53 = (undefined1)((ulong)uVar116 >> 0x28);
      uVar56 = (undefined1)((ulong)uVar116 >> 0x30);
      uVar57 = (undefined1)((ulong)uVar116 >> 0x38);
      uVar116 = *(undefined8 *)(lVar43 + 1000);
      uVar78 = (undefined1)uVar116;
      uVar79 = (undefined1)((ulong)uVar116 >> 8);
      uVar80 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar81 = (undefined1)((ulong)uVar116 >> 0x18);
      uVar66 = (undefined1)((ulong)uVar116 >> 0x20);
      uVar68 = (undefined1)((ulong)uVar116 >> 0x28);
      uVar70 = (undefined1)((ulong)uVar116 >> 0x30);
      uVar72 = (undefined1)((ulong)uVar116 >> 0x38);
      uVar116 = *(undefined8 *)(lVar43 + 0x3e0);
      uVar67 = (undefined1)uVar116;
      uVar69 = (undefined1)((ulong)uVar116 >> 8);
      uVar71 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar73 = (undefined1)((ulong)uVar116 >> 0x18);
      uVar74 = (undefined1)((ulong)uVar116 >> 0x20);
      uVar75 = (undefined1)((ulong)uVar116 >> 0x28);
      uVar76 = (undefined1)((ulong)uVar116 >> 0x30);
      uVar77 = (undefined1)((ulong)uVar116 >> 0x38);
      auVar99 = *(undefined1 (*) [16])(lVar43 + 0x3f0);
    }
    puVar2 = (undefined8 *)(*(long *)(lVar43 + 0x1d8) + (long)*(int *)(param_1 + 0x20) * 0x10);
    auVar20[1] = uVar69;
    auVar20[0] = uVar67;
    auVar20[2] = uVar71;
    auVar20[3] = uVar73;
    auVar20[4] = uVar74;
    auVar20[5] = uVar75;
    auVar20[6] = uVar76;
    auVar20[7] = uVar77;
    auVar20[8] = uVar78;
    auVar20[9] = uVar79;
    auVar20[10] = uVar80;
    auVar20[0xb] = uVar81;
    auVar20[0xc] = uVar66;
    auVar20[0xd] = uVar68;
    auVar20[0xe] = uVar70;
    auVar20[0xf] = uVar72;
    uVar116 = a64_TBL(ZEXT816(0),auVar20,DAT_04101580);
    auVar21[1] = uVar69;
    auVar21[0] = uVar67;
    auVar21[2] = uVar71;
    auVar21[3] = uVar73;
    auVar21[4] = uVar74;
    auVar21[5] = uVar75;
    auVar21[6] = uVar76;
    auVar21[7] = uVar77;
    auVar21[8] = uVar78;
    auVar21[9] = uVar79;
    auVar21[10] = uVar80;
    auVar21[0xb] = uVar81;
    auVar21[0xc] = uVar66;
    auVar21[0xd] = uVar68;
    auVar21[0xe] = uVar70;
    auVar21[0xf] = uVar72;
    uVar135 = a64_TBL(ZEXT816(0),auVar21,DAT_041015c8);
    uVar162 = a64_TBL(ZEXT816(0),auVar99,DAT_041015c8);
    uVar147 = a64_TBL(ZEXT816(0),auVar99,DAT_041016a0);
    uVar136 = a64_TBL(ZEXT816(0),auVar99,DAT_04101598);
    auVar22[1] = uVar69;
    auVar22[0] = uVar67;
    auVar22[2] = uVar71;
    auVar22[3] = uVar73;
    auVar22[4] = uVar74;
    auVar22[5] = uVar75;
    auVar22[6] = uVar76;
    auVar22[7] = uVar77;
    auVar22[8] = uVar78;
    auVar22[9] = uVar79;
    auVar22[10] = uVar80;
    auVar22[0xb] = uVar81;
    auVar22[0xc] = uVar66;
    auVar22[0xd] = uVar68;
    auVar22[0xe] = uVar70;
    auVar22[0xf] = uVar72;
    uVar148 = a64_TBL(ZEXT816(0),auVar22,DAT_041016a0);
    auVar23[1] = uVar69;
    auVar23[0] = uVar67;
    auVar23[2] = uVar71;
    auVar23[3] = uVar73;
    auVar23[4] = uVar74;
    auVar23[5] = uVar75;
    auVar23[6] = uVar76;
    auVar23[7] = uVar77;
    auVar23[8] = uVar78;
    auVar23[9] = uVar79;
    auVar23[10] = uVar80;
    auVar23[0xb] = uVar81;
    auVar23[0xc] = uVar66;
    auVar23[0xd] = uVar68;
    auVar23[0xe] = uVar70;
    auVar23[0xf] = uVar72;
    uVar137 = a64_TBL(ZEXT816(0),auVar23,DAT_04101598);
    uVar149 = a64_TBL(ZEXT816(0),auVar99,DAT_04101580);
    uVar12 = CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54)));
    uVar66 = auVar99[8];
    uVar68 = auVar99[9];
    uVar70 = auVar99[10];
    uVar72 = auVar99[0xb];
    auVar122._0_4_ =
         ((float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) * (float)uVar116 *
          (float)uVar136 -
         (float)uVar137 * (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) *
         (float)uVar149) +
         ((float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51))) *
          (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar136 >> 0x20) -
         (float)((ulong)uVar137 >> 0x20) *
         (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51))) *
         (float)((ulong)uVar149 >> 0x20)) +
         ((float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) * (float)uVar135 *
          (float)uVar147 -
         (float)uVar148 * (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) *
         (float)uVar162) +
         ((float)CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62))) *
          (float)((ulong)uVar135 >> 0x20) * (float)((ulong)uVar147 >> 0x20) -
         (float)((ulong)uVar148 >> 0x20) *
         (float)CONCAT13(uVar65,CONCAT12(uVar64,CONCAT11(uVar63,uVar62))) *
         (float)((ulong)uVar162 >> 0x20));
    auVar122._4_4_ = auVar122._0_4_;
    auVar122._8_4_ = auVar122._0_4_;
    auVar122._12_4_ = auVar122._0_4_;
    auVar139 = NEON_frecpe(auVar122,4);
    auVar152 = NEON_frecps(auVar139,auVar122,4);
    auVar140._0_4_ = auVar139._0_4_ * auVar152._0_4_;
    auVar140._4_4_ = auVar139._4_4_ * auVar152._4_4_;
    auVar140._8_4_ = auVar139._8_4_ * auVar152._8_4_;
    auVar140._12_4_ = auVar139._12_4_ * auVar152._12_4_;
    auVar139 = NEON_frecps(auVar140,auVar122,4);
    fVar95 = auVar140._0_4_ * auVar139._0_4_;
    fVar105 = auVar140._4_4_ * auVar139._4_4_;
    fVar111 = auVar140._8_4_ * auVar139._8_4_;
    auVar155._12_4_ = auVar139._12_4_;
    uVar24 = CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
    auVar153._4_12_ = auVar139._4_12_;
    auVar153._0_4_ = uVar12;
    auVar155._0_8_ = auVar153._0_8_;
    auVar155._8_4_ = auVar99._0_4_;
    auVar154._8_8_ = auVar155._8_8_;
    auVar154._4_4_ = uVar24;
    auVar154._0_4_ = uVar12;
    auVar156._0_12_ = auVar154._0_12_;
    auVar156._12_4_ = 0;
    auVar141._4_4_ =
         (int)(CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,uVar24)))) >> 0x20);
    auVar141._0_4_ =
         (int)(CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar53,CONCAT14(uVar51,uVar12)))) >> 0x20);
    auVar141._8_4_ = auVar99._4_4_;
    auVar141._12_4_ = 0;
    uVar7 = (undefined2)(CONCAT12(uVar59,CONCAT11(uVar58,uVar57)) >> 8);
    uVar136 = a64_TBL(ZEXT816(0),auVar141,DAT_04101580);
    uVar162 = a64_TBL(ZEXT816(0),auVar141,DAT_041015c8);
    auVar152[2] = uVar60;
    auVar152._0_2_ = uVar7;
    auVar152[3] = uVar61;
    auVar152[4] = uVar78;
    auVar152[5] = uVar79;
    auVar152[6] = uVar80;
    auVar152[7] = uVar81;
    auVar152[8] = uVar66;
    auVar152[9] = uVar68;
    auVar152[10] = uVar70;
    auVar152[0xb] = uVar72;
    auVar152._12_4_ = 0;
    uVar169 = a64_TBL(ZEXT816(0),auVar152,DAT_041016a0);
    auVar13[2] = uVar60;
    auVar13._0_2_ = uVar7;
    auVar13[3] = uVar61;
    auVar13[4] = uVar78;
    auVar13[5] = uVar79;
    auVar13[6] = uVar80;
    auVar13[7] = uVar81;
    auVar13[8] = uVar66;
    auVar13[9] = uVar68;
    auVar13[10] = uVar70;
    auVar13[0xb] = uVar72;
    auVar13._12_4_ = 0;
    uVar171 = a64_TBL(ZEXT816(0),auVar13,DAT_04101580);
    uVar137 = a64_TBL(ZEXT816(0),auVar156,DAT_041016a0);
    auVar14[2] = uVar60;
    auVar14._0_2_ = uVar7;
    auVar14[3] = uVar61;
    auVar14[4] = uVar78;
    auVar14[5] = uVar79;
    auVar14[6] = uVar80;
    auVar14[7] = uVar81;
    auVar14[8] = uVar66;
    auVar14[9] = uVar68;
    auVar14[10] = uVar70;
    auVar14[0xb] = uVar72;
    auVar14._12_4_ = 0;
    uVar163 = a64_TBL(ZEXT816(0),auVar14,DAT_04101598);
    auVar15[2] = uVar60;
    auVar15._0_2_ = uVar7;
    auVar15[3] = uVar61;
    auVar15[4] = uVar78;
    auVar15[5] = uVar79;
    auVar15[6] = uVar80;
    auVar15[7] = uVar81;
    auVar15[8] = uVar66;
    auVar15[9] = uVar68;
    auVar15[10] = uVar70;
    auVar15[0xb] = uVar72;
    auVar15._12_4_ = 0;
    uVar116 = a64_TBL(ZEXT816(0),auVar15,DAT_041015c8);
    uVar135 = a64_TBL(ZEXT816(0),auVar141,DAT_04101598);
    uVar148 = a64_TBL(ZEXT816(0),auVar141,DAT_041016a0);
    fVar145 = (float)((ulong)uVar136 >> 0x20);
    fVar180 = (float)((ulong)uVar163 >> 0x20);
    fVar133 = (float)((ulong)uVar135 >> 0x20);
    fVar159 = (float)((ulong)uVar171 >> 0x20);
    fVar134 = fVar95 * ((float)uVar136 * (float)uVar163 - (float)uVar135 * (float)uVar171);
    fVar143 = fVar105 * (fVar145 * fVar180 - fVar133 * fVar159);
    fVar144 = fVar111 * ((float)uVar162 * (float)uVar169 - (float)uVar148 * (float)uVar116);
    uVar170 = a64_TBL(ZEXT816(0),auVar156,DAT_04101598);
    uVar147 = a64_TBL(ZEXT816(0),auVar156,DAT_04101580);
    fVar173 = (float)((ulong)uVar147 >> 0x20);
    uVar149 = a64_TBL(ZEXT816(0),auVar156,DAT_041015c8);
    fVar168 = (float)((ulong)uVar170 >> 0x20);
    fVar146 = fVar95 * ((float)uVar171 * (float)uVar170 - (float)uVar163 * (float)uVar147);
    fVar159 = fVar105 * (fVar159 * fVar168 - fVar180 * fVar173);
    fVar161 = fVar111 * ((float)uVar116 * (float)uVar137 - (float)uVar169 * (float)uVar149);
    fVar95 = fVar95 * ((float)uVar135 * (float)uVar147 - (float)uVar170 * (float)uVar136);
    fVar105 = fVar105 * (fVar133 * fVar173 - fVar168 * fVar145);
    fVar111 = fVar111 * ((float)uVar148 * (float)uVar149 - (float)uVar137 * (float)uVar162);
    fVar145 = (fVar134 * -0.0 - fVar146 * 0.0) - fVar95 * 0.0;
    fVar180 = (fVar143 * -0.0 - fVar159 * 0.0) - fVar105 * 0.0;
    fVar168 = (fVar144 * -0.0 - fVar161 * 0.0) - fVar111 * 0.0;
    iVar36 = -(uint)(auVar122._0_4_ == 0.0);
    iVar106 = -(uint)(auVar122._0_4_ == 0.0);
    iVar112 = -(uint)(auVar122._0_4_ == 0.0);
    bVar94 = (byte)iVar36;
    bVar101 = (byte)((uint)iVar36 >> 8);
    bVar102 = (byte)((uint)iVar36 >> 0x10);
    bVar103 = (byte)((uint)iVar36 >> 0x18);
    bVar104 = (byte)iVar106;
    bVar107 = (byte)((uint)iVar106 >> 8);
    bVar108 = (byte)((uint)iVar106 >> 0x10);
    bVar109 = (byte)((uint)iVar106 >> 0x18);
    bVar110 = (byte)iVar112;
    bVar113 = (byte)((uint)iVar112 >> 8);
    bVar114 = (byte)((uint)iVar112 >> 0x10);
    bVar115 = (byte)((uint)iVar112 >> 0x18);
    fVar134 = (float)CONCAT13((byte)((uint)fVar134 >> 0x18) & ~bVar103,
                              CONCAT12((byte)((uint)fVar134 >> 0x10) & ~bVar102,
                                       CONCAT11((byte)((uint)fVar134 >> 8) & ~bVar101,
                                                SUB41(fVar134,0) & ~bVar94)));
    auVar118._0_8_ =
         CONCAT17((byte)((uint)fVar143 >> 0x18) & ~bVar109,
                  CONCAT16((byte)((uint)fVar143 >> 0x10) & ~bVar108,
                           CONCAT15((byte)((uint)fVar143 >> 8) & ~bVar107,
                                    CONCAT14(SUB41(fVar143,0) & ~bVar104,fVar134))));
    auVar118[8] = SUB41(fVar144,0) & ~bVar110;
    auVar118[9] = (byte)((uint)fVar144 >> 8) & ~bVar113;
    auVar118[10] = (byte)((uint)fVar144 >> 0x10) & ~bVar114;
    auVar118[0xb] = (byte)((uint)fVar144 >> 0x18) & ~bVar115;
    fVar143 = (float)CONCAT13((byte)((uint)fVar146 >> 0x18) & ~bVar103,
                              CONCAT12((byte)((uint)fVar146 >> 0x10) & ~bVar102,
                                       CONCAT11((byte)((uint)fVar146 >> 8) & ~bVar101,
                                                SUB41(fVar146,0) & ~bVar94)));
    auVar138._0_8_ =
         CONCAT17((byte)((uint)fVar159 >> 0x18) & ~bVar109,
                  CONCAT16((byte)((uint)fVar159 >> 0x10) & ~bVar108,
                           CONCAT15((byte)((uint)fVar159 >> 8) & ~bVar107,
                                    CONCAT14(SUB41(fVar159,0) & ~bVar104,fVar143))));
    auVar138[8] = SUB41(fVar161,0) & ~bVar110;
    auVar138[9] = (byte)((uint)fVar161 >> 8) & ~bVar113;
    auVar138[10] = (byte)((uint)fVar161 >> 0x10) & ~bVar114;
    auVar138[0xb] = (byte)((uint)fVar161 >> 0x18) & ~bVar115;
    fVar133 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
    fVar105 = (float)((ulong)auVar118._0_8_ >> 0x20) * fVar179 +
              (float)((ulong)auVar138._0_8_ >> 0x20) * fVar133 +
              (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & ~bVar109,
                              CONCAT12((byte)((uint)fVar105 >> 0x10) & ~bVar108,
                                       CONCAT11((byte)((uint)fVar105 >> 8) & ~bVar107,
                                                SUB41(fVar105,0) & ~bVar104))) * fVar167 +
              (float)CONCAT13((byte)((uint)fVar180 >> 0x18) & ~bVar109,
                              CONCAT12((byte)((uint)fVar180 >> 0x10) & ~bVar108,
                                       CONCAT11((byte)((uint)fVar180 >> 8) & ~bVar107,
                                                SUB41(fVar180,0) & ~bVar104)));
    *puVar2 = CONCAT17((char)((uint)fVar105 >> 0x18),
                       CONCAT16((char)((uint)fVar105 >> 0x10),
                                CONCAT15((char)((uint)fVar105 >> 8),
                                         CONCAT14(SUB41(fVar105,0),
                                                  fVar134 * fVar179 + fVar143 * fVar133 +
                                                  (float)CONCAT13((byte)((uint)fVar95 >> 0x18) &
                                                                  ~bVar103,CONCAT12((byte)((uint)
                                                  fVar95 >> 0x10) & ~bVar102,
                                                  CONCAT11((byte)((uint)fVar95 >> 8) & ~bVar101,
                                                           SUB41(fVar95,0) & ~bVar94))) * fVar167 +
                                                  (float)CONCAT13((byte)((uint)fVar145 >> 0x18) &
                                                                  ~bVar103,CONCAT12((byte)((uint)
                                                  fVar145 >> 0x10) & ~bVar102,
                                                  CONCAT11((byte)((uint)fVar145 >> 8) & ~bVar101,
                                                           SUB41(fVar145,0) & ~bVar94)))))));
    *(float *)(puVar2 + 1) =
         auVar118._8_4_ * fVar179 + auVar138._8_4_ * fVar133 +
         (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~bVar115,
                         CONCAT12((byte)((uint)fVar111 >> 0x10) & ~bVar114,
                                  CONCAT11((byte)((uint)fVar111 >> 8) & ~bVar113,
                                           SUB41(fVar111,0) & ~bVar110))) * fVar167 +
         (float)CONCAT13((byte)((uint)fVar168 >> 0x18) & ~bVar115,
                         CONCAT12((byte)((uint)fVar168 >> 0x10) & ~bVar114,
                                  CONCAT11((byte)((uint)fVar168 >> 8) & ~bVar113,
                                           SUB41(fVar168,0) & ~bVar110)));
    lVar43 = *(long *)(param_1 + 0x10);
    lVar41 = (long)*(int *)(param_1 + 0x20) * 0x10;
    puVar3 = (undefined4 *)(*(long *)(lVar43 + 0x210) + lVar41);
    cVar6 = *(char *)(*(long *)(lVar43 + 0xa0) + 0x793);
    if ((cVar6 == '\x02') || (cVar6 != '\0')) {
      uVar12 = *puVar3;
      uVar46 = (undefined1)uVar12;
      uVar48 = (undefined1)((uint)uVar12 >> 8);
      uVar50 = (undefined1)((uint)uVar12 >> 0x10);
      uVar52 = (undefined1)((uint)uVar12 >> 0x18);
      uVar12 = puVar3[2];
      uVar54 = (undefined1)uVar12;
      uVar55 = (undefined1)((uint)uVar12 >> 8);
      uVar47 = (undefined1)((uint)uVar12 >> 0x10);
      uVar49 = (undefined1)((uint)uVar12 >> 0x18);
      fVar133 = *(float *)(*(long *)(lVar43 + 0x218) + lVar41 + 4);
    }
    else {
      uVar116 = *(undefined8 *)(lVar43 + 0x3d0);
      uVar46 = (undefined1)uVar116;
      uVar48 = (undefined1)((ulong)uVar116 >> 8);
      uVar50 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar52 = (undefined1)((ulong)uVar116 >> 0x18);
      fVar133 = *(float *)(lVar43 + 0x3e4);
      uVar116 = *(undefined8 *)(lVar43 + 0x3f0);
      uVar54 = (undefined1)uVar116;
      uVar55 = (undefined1)((ulong)uVar116 >> 8);
      uVar47 = (undefined1)((ulong)uVar116 >> 0x10);
      uVar49 = (undefined1)((ulong)uVar116 >> 0x18);
    }
    if (fVar133 != 0.0) {
      fVar105 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) / fVar133;
      uVar46 = SUB41(fVar105,0);
      uVar48 = (undefined1)((uint)fVar105 >> 8);
      uVar50 = (undefined1)((uint)fVar105 >> 0x10);
      uVar52 = (undefined1)((uint)fVar105 >> 0x18);
      fVar133 = (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) / fVar133;
      uVar54 = SUB41(fVar133,0);
      uVar55 = (undefined1)((uint)fVar133 >> 8);
      uVar47 = (undefined1)((uint)fVar133 >> 0x10);
      uVar49 = (undefined1)((uint)fVar133 >> 0x18);
    }
    fVar166 = (fVar166 / 180.0) * 3.1415927;
    uVar51 = 0;
    uVar53 = 0;
    uVar56 = auVar176[2];
    uVar57 = auVar176[3];
    if ((float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) == fVar160 ||
        (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) < fVar160) {
      uVar51 = uVar46;
      uVar53 = uVar48;
      uVar56 = uVar50;
      uVar57 = uVar52;
    }
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0x80;
    uVar61 = 0xbf;
    if (NAN((float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) ||
        -1.0 <= (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) {
      uVar58 = uVar51;
      uVar59 = uVar53;
      uVar60 = uVar56;
      uVar61 = uVar57;
    }
    uVar46 = 0;
    uVar48 = 0;
    uVar50 = auVar176[2];
    uVar52 = auVar176[3];
    if ((float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) == fVar160 ||
        (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) < fVar160) {
      uVar46 = uVar54;
      uVar48 = uVar55;
      uVar50 = uVar47;
      uVar52 = uVar49;
    }
    fVar133 = -1.0;
    if (NAN((float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54)))) ||
        -1.0 <= (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54)))) {
      fVar133 = (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
    }
    fVar105 = acosf((float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))));
    fVar160 = 6.2831855 - fVar105;
    if (0.0 <= fVar133) {
      fVar160 = fVar105;
    }
    fVar133 = *(float *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1f8) +
                         (long)*(int *)(param_1 + 0x20) * 0x10 + 4);
    fVar105 = fVar133 * 0.15915494;
    uVar40 = 0;
    if (fVar105 != (float)(int)fVar105) {
      uVar40 = (uint)(fVar105 < 0.0);
    }
    fVar133 = fVar133 + (float)(int)((int)fVar105 - uVar40) * -6.2831855;
    bVar34 = false;
    bVar35 = false;
    if (fVar133 < 6.2831855) {
      bVar34 = false;
      bVar35 = true;
      if (!NAN(fVar133)) {
        bVar34 = fVar133 == 0.0;
        bVar35 = 0.0 <= fVar133;
      }
    }
    if (!bVar35 || bVar34) {
      fVar133 = 0.0;
    }
    if (fVar179 == 0.0) {
      uVar52 = 0xbf;
      if (fVar167 <= 0.0) {
        uVar52 = 0x3f;
      }
      uVar50 = 0xc9;
      uVar48 = 0xf;
      uVar46 = 0xdb;
    }
    else {
      fVar167 = atanf(fVar167 / fVar179);
      uVar46 = SUB41(fVar167,0);
      uVar48 = (undefined1)((uint)fVar167 >> 8);
      uVar50 = (undefined1)((uint)fVar167 >> 0x10);
      uVar52 = (undefined1)((uint)fVar167 >> 0x18);
    }
    uVar54 = 0x3f;
    if (fVar179 <= 0.0) {
      uVar54 = 0xbf;
    }
    fVar160 = -((float)CONCAT13(uVar54,0xc90fdb) +
               (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))) - fVar160;
    fVar167 = fVar160 * 0.15915494;
    uVar40 = 0;
    if (fVar167 != (float)(int)fVar167) {
      uVar40 = (uint)(fVar167 < 0.0);
    }
    fVar160 = fVar160 + (float)(int)((int)fVar167 - uVar40) * -6.2831855;
    bVar34 = false;
    bVar35 = false;
    if (fVar160 < 6.2831855) {
      bVar34 = false;
      bVar35 = true;
      if (!NAN(fVar160)) {
        bVar34 = fVar160 == 0.0;
        bVar35 = 0.0 <= fVar160;
      }
    }
    if (!bVar35 || bVar34) {
      fVar160 = 0.0;
    }
    fVar167 = ABS(fVar160 - fVar133);
    uVar46 = SUB41(fVar160,0);
    uVar48 = (undefined1)((uint)fVar160 >> 8);
    uVar50 = (undefined1)((uint)fVar160 >> 0x10);
    uVar52 = (undefined1)((uint)fVar160 >> 0x18);
    if ((fVar166 <= fVar167) && (fVar166 <= ABS(fVar167 + -6.2831855))) {
      if (fVar133 <= fVar160) {
        if (fVar167 <= 3.1415927) goto LAB_015b9d10;
      }
      else if (3.1415927 < fVar167) {
LAB_015b9d10:
        fVar166 = fVar166 + fVar133;
        uVar46 = SUB41(fVar166,0);
        uVar48 = (undefined1)((uint)fVar166 >> 8);
        uVar50 = (undefined1)((uint)fVar166 >> 0x10);
        uVar52 = (undefined1)((uint)fVar166 >> 0x18);
        goto LAB_015b9d14;
      }
      fVar133 = fVar133 - fVar166;
      uVar46 = SUB41(fVar133,0);
      uVar48 = (undefined1)((uint)fVar133 >> 8);
      uVar50 = (undefined1)((uint)fVar133 >> 0x10);
      uVar52 = (undefined1)((uint)fVar133 >> 0x18);
    }
LAB_015b9d14:
    pfVar39 = (float *)FUN_0031c588(param_1,0,0x10);
    if (pfVar39 != (float *)0x0) {
      if ((*(byte *)(pfVar45 + 2) >> 1 & 1) == 0) {
        pfVar39[0] = 0.0;
        pfVar39[1] = 0.0;
        pfVar39[2] = 0.0;
      }
      else {
        auVar176 = ZEXT816(0x3f800000);
        fVar167 = auVar176._0_4_;
        uVar54 = auVar176[2];
        uVar55 = auVar176[3];
        if (3.1415927 <= fVar160) {
          uVar54 = 0x80;
          uVar55 = 0xbf;
        }
        fVar133 = pfVar39[1] +
                  (float)((uint)CONCAT11(uVar55,uVar54) << 0x10) * pfVar45[4] * 0.033333335;
        uVar56 = SUB41(fVar133,0);
        uVar57 = (undefined1)((uint)fVar133 >> 8);
        uVar58 = (undefined1)((uint)fVar133 >> 0x10);
        uVar59 = (undefined1)((uint)fVar133 >> 0x18);
        fVar166 = *pfVar39 +
                  (float)((uint)CONCAT11(uVar55,uVar54) << 0x10) * pfVar45[3] * 0.033333335;
        uVar47 = SUB41(fVar166,0);
        uVar49 = (undefined1)((uint)fVar166 >> 8);
        uVar51 = (undefined1)((uint)fVar166 >> 0x10);
        uVar53 = (undefined1)((uint)fVar166 >> 0x18);
        if (fVar166 <= -1.0) {
          fVar105 = 2.0;
LAB_015b9dac:
          fVar166 = fVar166 + fVar105;
          uVar47 = SUB41(fVar166,0);
          uVar49 = (undefined1)((uint)fVar166 >> 8);
          uVar51 = (undefined1)((uint)fVar166 >> 0x10);
          uVar53 = (undefined1)((uint)fVar166 >> 0x18);
        }
        else if (fVar167 <= fVar166) {
          fVar105 = -2.0;
          goto LAB_015b9dac;
        }
        fVar166 = pfVar39[2] +
                  (float)((uint)CONCAT11(uVar55,uVar54) << 0x10) * pfVar45[5] * 0.033333335;
        uVar54 = SUB41(fVar166,0);
        uVar55 = (undefined1)((uint)fVar166 >> 8);
        uVar60 = (undefined1)((uint)fVar166 >> 0x10);
        uVar61 = (undefined1)((uint)fVar166 >> 0x18);
        if (fVar133 <= -1.0) {
          fVar105 = 2.0;
LAB_015b9dd0:
          fVar133 = fVar133 + fVar105;
          uVar56 = SUB41(fVar133,0);
          uVar57 = (undefined1)((uint)fVar133 >> 8);
          uVar58 = (undefined1)((uint)fVar133 >> 0x10);
          uVar59 = (undefined1)((uint)fVar133 >> 0x18);
        }
        else if (fVar167 <= fVar133) {
          fVar105 = -2.0;
          goto LAB_015b9dd0;
        }
        if (fVar166 <= -1.0) {
          fVar167 = 2.0;
LAB_015b9df0:
          fVar166 = fVar166 + fVar167;
          uVar54 = SUB41(fVar166,0);
          uVar55 = (undefined1)((uint)fVar166 >> 8);
          uVar60 = (undefined1)((uint)fVar166 >> 0x10);
          uVar61 = (undefined1)((uint)fVar166 >> 0x18);
        }
        else if (fVar167 <= fVar166) {
          fVar167 = -2.0;
          goto LAB_015b9df0;
        }
        *pfVar39 = (float)CONCAT13(uVar53,CONCAT12(uVar51,CONCAT11(uVar49,uVar47)));
        pfVar39[1] = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
        pfVar39[2] = (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar55,uVar54)));
      }
    }
    plVar44 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1f8) +
                      (long)*(int *)(param_1 + 0x20) * 0x10);
    *(undefined4 *)(plVar44 + 1) = 0;
    *plVar44 = (ulong)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) << 0x20;
    if ((uVar37 & 1) == 0) {
      lVar43 = *(long *)(param_1 + 0x10);
      lVar41 = (long)*(int *)(param_1 + 0x20);
      lVar42 = lVar41 * 0x10;
      puVar3 = (undefined4 *)(*(long *)(lVar43 + 0x210) + lVar42);
      puVar4 = (undefined4 *)(*(long *)(lVar43 + 0x218) + lVar42);
      puVar5 = (undefined4 *)(*(long *)(lVar43 + 0x220) + lVar42);
      cVar6 = *(char *)(*(long *)(lVar43 + 0xa0) + 0x793);
      if ((cVar6 == '\x02') || (cVar6 != '\0')) {
        uVar58 = 0;
        uVar59 = 0;
        uVar60 = 0;
        uVar61 = 0;
        uVar12 = *puVar3;
        uVar46 = (undefined1)uVar12;
        uVar48 = (undefined1)((uint)uVar12 >> 8);
        uVar50 = (undefined1)((uint)uVar12 >> 0x10);
        uVar52 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = *puVar4;
        uVar54 = (undefined1)uVar12;
        uVar55 = (undefined1)((uint)uVar12 >> 8);
        uVar47 = (undefined1)((uint)uVar12 >> 0x10);
        uVar49 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = *puVar5;
        uVar51 = (undefined1)uVar12;
        uVar53 = (undefined1)((uint)uVar12 >> 8);
        uVar56 = (undefined1)((uint)uVar12 >> 0x10);
        uVar57 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar3[2];
        uVar66 = (undefined1)uVar12;
        uVar68 = (undefined1)((uint)uVar12 >> 8);
        uVar70 = (undefined1)((uint)uVar12 >> 0x10);
        uVar72 = (undefined1)((uint)uVar12 >> 0x18);
        uVar90 = 0;
        uVar91 = 0;
        uVar92 = 0;
        uVar93 = 0;
        uVar12 = puVar4[2];
        uVar82 = (undefined1)uVar12;
        uVar83 = (undefined1)((uint)uVar12 >> 8);
        uVar84 = (undefined1)((uint)uVar12 >> 0x10);
        uVar85 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar3[1];
        uVar62 = (undefined1)uVar12;
        uVar63 = (undefined1)((uint)uVar12 >> 8);
        uVar64 = (undefined1)((uint)uVar12 >> 0x10);
        uVar65 = (undefined1)((uint)uVar12 >> 0x18);
        uVar78 = 0;
        uVar79 = 0;
        uVar80 = 0;
        uVar81 = 0;
        uVar12 = puVar4[1];
        uVar67 = (undefined1)uVar12;
        uVar69 = (undefined1)((uint)uVar12 >> 8);
        uVar71 = (undefined1)((uint)uVar12 >> 0x10);
        uVar73 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar5[2];
        uVar86 = (undefined1)uVar12;
        uVar87 = (undefined1)((uint)uVar12 >> 8);
        uVar88 = (undefined1)((uint)uVar12 >> 0x10);
        uVar89 = (undefined1)((uint)uVar12 >> 0x18);
        uVar12 = puVar5[1];
        uVar74 = (undefined1)uVar12;
        uVar75 = (undefined1)((uint)uVar12 >> 8);
        uVar76 = (undefined1)((uint)uVar12 >> 0x10);
        uVar77 = (undefined1)((uint)uVar12 >> 0x18);
      }
      else {
        uVar116 = *(undefined8 *)(lVar43 + 0x3d8);
        uVar51 = (undefined1)uVar116;
        uVar53 = (undefined1)((ulong)uVar116 >> 8);
        uVar56 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar57 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar58 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar59 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar60 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar61 = (undefined1)((ulong)uVar116 >> 0x38);
        uVar116 = *(undefined8 *)(lVar43 + 0x3d0);
        uVar46 = (undefined1)uVar116;
        uVar48 = (undefined1)((ulong)uVar116 >> 8);
        uVar50 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar52 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar54 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar55 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar47 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar49 = (undefined1)((ulong)uVar116 >> 0x38);
        uVar116 = *(undefined8 *)(lVar43 + 1000);
        uVar74 = (undefined1)uVar116;
        uVar75 = (undefined1)((ulong)uVar116 >> 8);
        uVar76 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar77 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar78 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar79 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar80 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar81 = (undefined1)((ulong)uVar116 >> 0x38);
        uVar116 = *(undefined8 *)(lVar43 + 0x3e0);
        uVar62 = (undefined1)uVar116;
        uVar63 = (undefined1)((ulong)uVar116 >> 8);
        uVar64 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar65 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar67 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar69 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar71 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar73 = (undefined1)((ulong)uVar116 >> 0x38);
        uVar116 = *(undefined8 *)(lVar43 + 0x3f8);
        uVar86 = (undefined1)uVar116;
        uVar87 = (undefined1)((ulong)uVar116 >> 8);
        uVar88 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar89 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar90 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar91 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar92 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar93 = (undefined1)((ulong)uVar116 >> 0x38);
        uVar116 = *(undefined8 *)(lVar43 + 0x3f0);
        uVar66 = (undefined1)uVar116;
        uVar68 = (undefined1)((ulong)uVar116 >> 8);
        uVar70 = (undefined1)((ulong)uVar116 >> 0x10);
        uVar72 = (undefined1)((ulong)uVar116 >> 0x18);
        uVar82 = (undefined1)((ulong)uVar116 >> 0x20);
        uVar83 = (undefined1)((ulong)uVar116 >> 0x28);
        uVar84 = (undefined1)((ulong)uVar116 >> 0x30);
        uVar85 = (undefined1)((ulong)uVar116 >> 0x38);
      }
      auVar16[1] = uVar63;
      auVar16[0] = uVar62;
      auVar16[2] = uVar64;
      auVar16[3] = uVar65;
      auVar16[4] = uVar67;
      auVar16[5] = uVar69;
      auVar16[6] = uVar71;
      auVar16[7] = uVar73;
      auVar16[8] = uVar74;
      auVar16[9] = uVar75;
      auVar16[10] = uVar76;
      auVar16[0xb] = uVar77;
      auVar16[0xc] = uVar78;
      auVar16[0xd] = uVar79;
      auVar16[0xe] = uVar80;
      auVar16[0xf] = uVar81;
      uVar116 = a64_TBL(ZEXT816(0),auVar16,uVar150);
      auVar17[1] = uVar63;
      auVar17[0] = uVar62;
      auVar17[2] = uVar64;
      auVar17[3] = uVar65;
      auVar17[4] = uVar67;
      auVar17[5] = uVar69;
      auVar17[6] = uVar71;
      auVar17[7] = uVar73;
      auVar17[8] = uVar74;
      auVar17[9] = uVar75;
      auVar17[10] = uVar76;
      auVar17[0xb] = uVar77;
      auVar17[0xc] = uVar78;
      auVar17[0xd] = uVar79;
      auVar17[0xe] = uVar80;
      auVar17[0xf] = uVar81;
      uVar135 = a64_TBL(ZEXT816(0),auVar17,uVar172);
      lVar43 = *(long *)(lVar43 + 0x1d8);
      auVar25[1] = uVar68;
      auVar25[0] = uVar66;
      auVar25[2] = uVar70;
      auVar25[3] = uVar72;
      auVar25[4] = uVar82;
      auVar25[5] = uVar83;
      auVar25[6] = uVar84;
      auVar25[7] = uVar85;
      auVar25[8] = uVar86;
      auVar25[9] = uVar87;
      auVar25[10] = uVar88;
      auVar25[0xb] = uVar89;
      auVar25[0xc] = uVar90;
      auVar25[0xd] = uVar91;
      auVar25[0xe] = uVar92;
      auVar25[0xf] = uVar93;
      uVar147 = a64_TBL(ZEXT816(0),auVar25,uVar175);
      auVar26[1] = uVar68;
      auVar26[0] = uVar66;
      auVar26[2] = uVar70;
      auVar26[3] = uVar72;
      auVar26[4] = uVar82;
      auVar26[5] = uVar83;
      auVar26[6] = uVar84;
      auVar26[7] = uVar85;
      auVar26[8] = uVar86;
      auVar26[9] = uVar87;
      auVar26[10] = uVar88;
      auVar26[0xb] = uVar89;
      auVar26[0xc] = uVar90;
      auVar26[0xd] = uVar91;
      auVar26[0xe] = uVar92;
      auVar26[0xf] = uVar93;
      uVar162 = a64_TBL(ZEXT816(0),auVar26,uVar172);
      auVar27[1] = uVar68;
      auVar27[0] = uVar66;
      auVar27[2] = uVar70;
      auVar27[3] = uVar72;
      auVar27[4] = uVar82;
      auVar27[5] = uVar83;
      auVar27[6] = uVar84;
      auVar27[7] = uVar85;
      auVar27[8] = uVar86;
      auVar27[9] = uVar87;
      auVar27[10] = uVar88;
      auVar27[0xb] = uVar89;
      auVar27[0xc] = uVar90;
      auVar27[0xd] = uVar91;
      auVar27[0xe] = uVar92;
      auVar27[0xf] = uVar93;
      uVar136 = a64_TBL(ZEXT816(0),auVar27,uVar164);
      auVar18[1] = uVar63;
      auVar18[0] = uVar62;
      auVar18[2] = uVar64;
      auVar18[3] = uVar65;
      auVar18[4] = uVar67;
      auVar18[5] = uVar69;
      auVar18[6] = uVar71;
      auVar18[7] = uVar73;
      auVar18[8] = uVar74;
      auVar18[9] = uVar75;
      auVar18[10] = uVar76;
      auVar18[0xb] = uVar77;
      auVar18[0xc] = uVar78;
      auVar18[0xd] = uVar79;
      auVar18[0xe] = uVar80;
      auVar18[0xf] = uVar81;
      uVar148 = a64_TBL(ZEXT816(0),auVar18,uVar175);
      auVar19[1] = uVar63;
      auVar19[0] = uVar62;
      auVar19[2] = uVar64;
      auVar19[3] = uVar65;
      auVar19[4] = uVar67;
      auVar19[5] = uVar69;
      auVar19[6] = uVar71;
      auVar19[7] = uVar73;
      auVar19[8] = uVar74;
      auVar19[9] = uVar75;
      auVar19[10] = uVar76;
      auVar19[0xb] = uVar77;
      auVar19[0xc] = uVar78;
      auVar19[0xd] = uVar79;
      auVar19[0xe] = uVar80;
      auVar19[0xf] = uVar81;
      uVar137 = a64_TBL(ZEXT816(0),auVar19,uVar164);
      auVar28[1] = uVar68;
      auVar28[0] = uVar66;
      auVar28[2] = uVar70;
      auVar28[3] = uVar72;
      auVar28[4] = uVar82;
      auVar28[5] = uVar83;
      auVar28[6] = uVar84;
      auVar28[7] = uVar85;
      auVar28[8] = uVar86;
      auVar28[9] = uVar87;
      auVar28[10] = uVar88;
      auVar28[0xb] = uVar89;
      auVar28[0xc] = uVar90;
      auVar28[0xd] = uVar91;
      auVar28[0xe] = uVar92;
      auVar28[0xf] = uVar93;
      uVar149 = a64_TBL(ZEXT816(0),auVar28,uVar150);
      auVar100._0_4_ =
           ((float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) * (float)uVar116 *
            (float)uVar136 -
           (float)uVar137 * (float)CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) *
           (float)uVar149) +
           ((float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) *
            (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar136 >> 0x20) -
           (float)((ulong)uVar137 >> 0x20) *
           (float)CONCAT13(uVar49,CONCAT12(uVar47,CONCAT11(uVar55,uVar54))) *
           (float)((ulong)uVar149 >> 0x20)) +
           ((float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51))) * (float)uVar135 *
            (float)uVar147 -
           (float)uVar148 * (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51))) *
           (float)uVar162) +
           ((float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) *
            (float)((ulong)uVar135 >> 0x20) * (float)((ulong)uVar147 >> 0x20) -
           (float)((ulong)uVar148 >> 0x20) *
           (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar59,uVar58))) *
           (float)((ulong)uVar162 >> 0x20));
      auVar100._4_4_ = auVar100._0_4_;
      auVar100._8_4_ = auVar100._0_4_;
      auVar100._12_4_ = auVar100._0_4_;
      auVar176 = NEON_frecpe(auVar100,4);
      auVar139 = NEON_frecps(auVar176,auVar100,4);
      auVar123._0_4_ = auVar176._0_4_ * auVar139._0_4_;
      auVar123._4_4_ = auVar176._4_4_ * auVar139._4_4_;
      auVar123._8_4_ = auVar176._8_4_ * auVar139._8_4_;
      auVar123._12_4_ = auVar176._12_4_ * auVar139._12_4_;
      auVar176 = NEON_frecps(auVar123,auVar100,4);
      iVar36 = -(uint)(auVar100._0_4_ == 0.0);
      iVar106 = -(uint)(auVar100._0_4_ == 0.0);
      iVar112 = -(uint)(auVar100._0_4_ == 0.0);
      fVar166 = auVar123._0_4_ * auVar176._0_4_;
      fVar133 = auVar123._4_4_ * auVar176._4_4_;
      fVar105 = auVar123._8_4_ * auVar176._8_4_;
      auVar157[9] = uVar68;
      auVar157[8] = uVar66;
      auVar157[10] = uVar70;
      auVar157[0xb] = uVar72;
      uVar12 = CONCAT13(uVar52,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
      auVar157[5] = uVar63;
      auVar157[4] = uVar62;
      auVar157[6] = uVar64;
      auVar157[7] = uVar65;
      auVar157._0_4_ = uVar12;
      auVar157._12_4_ = 0;
      uVar7 = (undefined2)(CONCAT12(uVar53,CONCAT11(uVar51,uVar49)) >> 8);
      uVar30 = (undefined3)(CONCAT16(uVar47,CONCAT15(uVar55,CONCAT14(uVar54,uVar12))) >> 0x20);
      auVar29[3] = uVar49;
      auVar29._0_3_ = uVar30;
      auVar29[4] = uVar67;
      auVar29[5] = uVar69;
      auVar29[6] = uVar71;
      auVar29[7] = uVar73;
      auVar29[8] = uVar82;
      auVar29[9] = uVar83;
      auVar29[10] = uVar84;
      auVar29[0xb] = uVar85;
      auVar29._12_4_ = 0;
      uVar136 = a64_TBL(ZEXT816(0),auVar29,uVar150);
      auVar31[3] = uVar49;
      auVar31._0_3_ = uVar30;
      auVar31[4] = uVar67;
      auVar31[5] = uVar69;
      auVar31[6] = uVar71;
      auVar31[7] = uVar73;
      auVar31[8] = uVar82;
      auVar31[9] = uVar83;
      auVar31[10] = uVar84;
      auVar31[0xb] = uVar85;
      auVar31._12_4_ = 0;
      uVar137 = a64_TBL(ZEXT816(0),auVar31,uVar172);
      auVar8[2] = uVar56;
      auVar8._0_2_ = uVar7;
      auVar8[3] = uVar57;
      auVar8[4] = uVar74;
      auVar8[5] = uVar75;
      auVar8[6] = uVar76;
      auVar8[7] = uVar77;
      auVar8[8] = uVar86;
      auVar8[9] = uVar87;
      auVar8[10] = uVar88;
      auVar8[0xb] = uVar89;
      auVar8._12_4_ = 0;
      uVar148 = a64_TBL(ZEXT816(0),auVar8,uVar175);
      auVar9[2] = uVar56;
      auVar9._0_2_ = uVar7;
      auVar9[3] = uVar57;
      auVar9[4] = uVar74;
      auVar9[5] = uVar75;
      auVar9[6] = uVar76;
      auVar9[7] = uVar77;
      auVar9[8] = uVar86;
      auVar9[9] = uVar87;
      auVar9[10] = uVar88;
      auVar9[0xb] = uVar89;
      auVar9._12_4_ = 0;
      uVar149 = a64_TBL(ZEXT816(0),auVar9,uVar150);
      uVar162 = a64_TBL(ZEXT816(0),auVar157,uVar175);
      auVar10[2] = uVar56;
      auVar10._0_2_ = uVar7;
      auVar10[3] = uVar57;
      auVar10[4] = uVar74;
      auVar10[5] = uVar75;
      auVar10[6] = uVar76;
      auVar10[7] = uVar77;
      auVar10[8] = uVar86;
      auVar10[9] = uVar87;
      auVar10[10] = uVar88;
      auVar10[0xb] = uVar89;
      auVar10._12_4_ = 0;
      uVar147 = a64_TBL(ZEXT816(0),auVar10,uVar164);
      auVar11[2] = uVar56;
      auVar11._0_2_ = uVar7;
      auVar11[3] = uVar57;
      auVar11[4] = uVar74;
      auVar11[5] = uVar75;
      auVar11[6] = uVar76;
      auVar11[7] = uVar77;
      auVar11[8] = uVar86;
      auVar11[9] = uVar87;
      auVar11[10] = uVar88;
      auVar11[0xb] = uVar89;
      auVar11._12_4_ = 0;
      uVar116 = a64_TBL(ZEXT816(0),auVar11,uVar172);
      auVar32[3] = uVar49;
      auVar32._0_3_ = uVar30;
      auVar32[4] = uVar67;
      auVar32[5] = uVar69;
      auVar32[6] = uVar71;
      auVar32[7] = uVar73;
      auVar32[8] = uVar82;
      auVar32[9] = uVar83;
      auVar32[10] = uVar84;
      auVar32[0xb] = uVar85;
      auVar32._12_4_ = 0;
      uVar135 = a64_TBL(ZEXT816(0),auVar32,uVar164);
      auVar33[3] = uVar49;
      auVar33._0_3_ = uVar30;
      auVar33[4] = uVar67;
      auVar33[5] = uVar69;
      auVar33[6] = uVar71;
      auVar33[7] = uVar73;
      auVar33[8] = uVar82;
      auVar33[9] = uVar83;
      auVar33[10] = uVar84;
      auVar33[0xb] = uVar85;
      auVar33._12_4_ = 0;
      uVar175 = a64_TBL(ZEXT816(0),auVar33,uVar175);
      fVar160 = (float)((ulong)uVar136 >> 0x20);
      fVar180 = (float)((ulong)uVar147 >> 0x20);
      fVar167 = (float)((ulong)uVar135 >> 0x20);
      fVar168 = (float)((ulong)uVar149 >> 0x20);
      fVar95 = fVar166 * ((float)uVar136 * (float)uVar147 - (float)uVar135 * (float)uVar149);
      fVar111 = fVar133 * (fVar160 * fVar180 - fVar167 * fVar168);
      fVar145 = fVar105 * ((float)uVar137 * (float)uVar148 - (float)uVar175 * (float)uVar116);
      uVar164 = a64_TBL(ZEXT816(0),auVar157,uVar164);
      uVar163 = a64_TBL(ZEXT816(0),auVar157,uVar150);
      uVar150 = a64_TBL(ZEXT816(0),auVar157,uVar172);
      fVar143 = (float)((ulong)uVar164 >> 0x20);
      fVar144 = (float)((ulong)uVar163 >> 0x20);
      bVar94 = (byte)iVar36;
      bVar101 = (byte)((uint)iVar36 >> 8);
      bVar102 = (byte)((uint)iVar36 >> 0x10);
      bVar103 = (byte)((uint)iVar36 >> 0x18);
      bVar104 = (byte)iVar106;
      bVar107 = (byte)((uint)iVar106 >> 8);
      bVar108 = (byte)((uint)iVar106 >> 0x10);
      bVar109 = (byte)((uint)iVar106 >> 0x18);
      bVar110 = (byte)iVar112;
      bVar113 = (byte)((uint)iVar112 >> 8);
      bVar114 = (byte)((uint)iVar112 >> 0x10);
      bVar115 = (byte)((uint)iVar112 >> 0x18);
      fVar179 = fVar166 * ((float)uVar149 * (float)uVar164 - (float)uVar147 * (float)uVar163);
      fVar168 = fVar133 * (fVar168 * fVar143 - fVar180 * fVar144);
      fVar134 = fVar105 * ((float)uVar116 * (float)uVar162 - (float)uVar148 * (float)uVar150);
      fVar166 = fVar166 * ((float)uVar135 * (float)uVar163 - (float)uVar164 * (float)uVar136);
      fVar133 = fVar133 * (fVar167 * fVar144 - fVar143 * fVar160);
      fVar105 = fVar105 * ((float)uVar175 * (float)uVar150 - (float)uVar162 * (float)uVar137);
      fVar180 = (float)CONCAT13((byte)((uint)fVar179 >> 0x18) & ~bVar103,
                                CONCAT12((byte)((uint)fVar179 >> 0x10) & ~bVar102,
                                         CONCAT11((byte)((uint)fVar179 >> 8) & ~bVar101,
                                                  SUB41(fVar179,0) & ~bVar94)));
      auVar119._0_8_ =
           CONCAT17((byte)((uint)fVar168 >> 0x18) & ~bVar109,
                    CONCAT16((byte)((uint)fVar168 >> 0x10) & ~bVar108,
                             CONCAT15((byte)((uint)fVar168 >> 8) & ~bVar107,
                                      CONCAT14(SUB41(fVar168,0) & ~bVar104,fVar180))));
      auVar119[8] = SUB41(fVar134,0) & ~bVar110;
      auVar119[9] = (byte)((uint)fVar134 >> 8) & ~bVar113;
      auVar119[10] = (byte)((uint)fVar134 >> 0x10) & ~bVar114;
      auVar119[0xb] = (byte)((uint)fVar134 >> 0x18) & ~bVar115;
      fVar167 = (fVar95 * -0.0 - fVar179 * 0.0) - fVar166 * 0.0;
      fVar160 = (fVar111 * -0.0 - fVar168 * 0.0) - fVar133 * 0.0;
      fVar179 = (fVar145 * -0.0 - fVar134 * 0.0) - fVar105 * 0.0;
      fVar167 = (float)CONCAT13((byte)((uint)fVar95 >> 0x18) & ~bVar103,
                                CONCAT12((byte)((uint)fVar95 >> 0x10) & ~bVar102,
                                         CONCAT11((byte)((uint)fVar95 >> 8) & ~bVar101,
                                                  SUB41(fVar95,0) & ~bVar94))) * 0.0 + fVar180 * 0.0
                + (float)CONCAT13((byte)((uint)fVar166 >> 0x18) & ~bVar103,
                                  CONCAT12((byte)((uint)fVar166 >> 0x10) & ~bVar102,
                                           CONCAT11((byte)((uint)fVar166 >> 8) & ~bVar101,
                                                    SUB41(fVar166,0) & ~bVar94))) * 0.0 +
                (float)CONCAT13((byte)((uint)fVar167 >> 0x18) & ~bVar103,
                                CONCAT12((byte)((uint)fVar167 >> 0x10) & ~bVar102,
                                         CONCAT11((byte)((uint)fVar167 >> 8) & ~bVar101,
                                                  SUB41(fVar167,0) & ~bVar94)));
      uVar46 = SUB41(fVar167,0);
      uVar48 = (undefined1)((uint)fVar167 >> 8);
      uVar50 = (undefined1)((uint)fVar167 >> 0x10);
      uVar52 = (undefined1)((uint)fVar167 >> 0x18);
      fVar167 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~bVar109,
                                CONCAT12((byte)((uint)fVar111 >> 0x10) & ~bVar108,
                                         CONCAT11((byte)((uint)fVar111 >> 8) & ~bVar107,
                                                  SUB41(fVar111,0) & ~bVar104))) * 0.0 +
                (float)((ulong)auVar119._0_8_ >> 0x20) * 0.0 +
                (float)CONCAT13((byte)((uint)fVar133 >> 0x18) & ~bVar109,
                                CONCAT12((byte)((uint)fVar133 >> 0x10) & ~bVar108,
                                         CONCAT11((byte)((uint)fVar133 >> 8) & ~bVar107,
                                                  SUB41(fVar133,0) & ~bVar104))) * 0.0 +
                (float)CONCAT13((byte)((uint)fVar160 >> 0x18) & ~bVar109,
                                CONCAT12((byte)((uint)fVar160 >> 0x10) & ~bVar108,
                                         CONCAT11((byte)((uint)fVar160 >> 8) & ~bVar107,
                                                  SUB41(fVar160,0) & ~bVar104)));
      uVar54 = SUB41(fVar167,0);
      uVar55 = (undefined1)((uint)fVar167 >> 8);
      uVar47 = (undefined1)((uint)fVar167 >> 0x10);
      uVar49 = (undefined1)((uint)fVar167 >> 0x18);
      fVar167 = (float)CONCAT13((byte)((uint)fVar145 >> 0x18) & ~bVar115,
                                CONCAT12((byte)((uint)fVar145 >> 0x10) & ~bVar114,
                                         CONCAT11((byte)((uint)fVar145 >> 8) & ~bVar113,
                                                  SUB41(fVar145,0) & ~bVar110))) * 0.0 +
                auVar119._8_4_ * 0.0 +
                (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & ~bVar115,
                                CONCAT12((byte)((uint)fVar105 >> 0x10) & ~bVar114,
                                         CONCAT11((byte)((uint)fVar105 >> 8) & ~bVar113,
                                                  SUB41(fVar105,0) & ~bVar110))) * 0.0 +
                (float)CONCAT13((byte)((uint)fVar179 >> 0x18) & ~bVar115,
                                CONCAT12((byte)((uint)fVar179 >> 0x10) & ~bVar114,
                                         CONCAT11((byte)((uint)fVar179 >> 8) & ~bVar113,
                                                  SUB41(fVar179,0) & ~bVar110)));
      uVar51 = SUB41(fVar167,0);
      uVar53 = (undefined1)((uint)fVar167 >> 8);
      uVar56 = (undefined1)((uint)fVar167 >> 0x10);
      uVar57 = (undefined1)((uint)fVar167 >> 0x18);
      goto LAB_015ba23c;
    }
  }
  if (((uint)pfVar45[2] & 1) == 0 || ((uVar37 ^ 0xffffffff) & 1) != 0) {
    return;
  }
  local_b8 = (float)iStack_9c * 5.0 + 2.5;
  local_c0 = CONCAT44(local_c0._4_4_,(float)local_a0 * 5.0 + 2.5);
  FUN_015cb8d4(&local_c0,0);
  if (local_80._4_4_ + 0.5 <=
      (float)CONCAT13(extraout_var_01,CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))))
  {
    return;
  }
  lVar43 = *(long *)(param_1 + 0x10);
  lVar41 = (long)*(int *)(param_1 + 0x20);
  lVar42 = lVar41 * 0x10;
  puVar3 = (undefined4 *)(*(long *)(lVar43 + 0x210) + lVar42);
  puVar4 = (undefined4 *)(*(long *)(lVar43 + 0x218) + lVar42);
  puVar5 = (undefined4 *)(*(long *)(lVar43 + 0x220) + lVar42);
  cVar6 = *(char *)(*(long *)(lVar43 + 0xa0) + 0x793);
  if (cVar6 == '\x02') {
    auVar176 = *(undefined1 (*) [16])(lVar43 + 0x400);
    auVar139 = NEON_ext(auVar176,auVar176,8,1);
    auVar120._0_4_ = *puVar3;
    auVar120._4_4_ = *puVar4;
    auVar120._8_4_ = *puVar5;
    uVar164 = CONCAT44(puVar4[2],puVar3[2]);
    uVar150 = CONCAT44(puVar4[1],puVar3[1]);
    auVar97._8_4_ = auVar139._0_4_;
    auVar97._0_8_ = auVar176._0_8_;
LAB_015ba0e8:
    auVar124._12_4_ = 0;
    auVar124._0_12_ = auVar120;
    auVar158._8_4_ = puVar5[2];
    auVar158._0_8_ = uVar164;
    auVar158._12_4_ = 0;
    auVar142._8_4_ = puVar5[1];
    auVar142._0_8_ = uVar150;
    auVar142._12_4_ = 0;
  }
  else {
    if (cVar6 != '\0') {
      auVar120._0_4_ = *puVar3;
      auVar120._4_4_ = *puVar4;
      auVar120._8_4_ = *puVar5;
      auVar97._0_4_ = puVar3[3];
      uVar164 = CONCAT44(puVar4[2],puVar3[2]);
      auVar97._4_4_ = puVar4[3];
      uVar150 = CONCAT44(puVar4[1],puVar3[1]);
      auVar97._8_4_ = puVar5[3];
      goto LAB_015ba0e8;
    }
    auVar124 = *(undefined1 (*) [16])(lVar43 + 0x3d0);
    auVar142 = *(undefined1 (*) [16])(lVar43 + 0x3e0);
    auVar158 = *(undefined1 (*) [16])(lVar43 + 0x3f0);
    auVar97 = SUB1612(*(undefined1 (*) [16])(lVar43 + 0x400),0);
  }
  lVar43 = *(long *)(lVar43 + 0x1d0);
  uVar172 = a64_TBL(ZEXT816(0),auVar142,DAT_04101580);
  uVar150 = a64_TBL(ZEXT816(0),auVar142,DAT_041015c8);
  uVar164 = a64_TBL(ZEXT816(0),auVar158,DAT_041015c8);
  fVar167 = auVar124._0_4_;
  fVar166 = auVar124._4_4_;
  fVar133 = auVar124._8_4_;
  auVar127._12_4_ = auVar124._12_4_;
  uVar175 = a64_TBL(ZEXT816(0),auVar158,DAT_04101598);
  uVar135 = a64_TBL(ZEXT816(0),auVar158,DAT_041016a0);
  uVar136 = a64_TBL(ZEXT816(0),auVar142,DAT_041016a0);
  uVar116 = a64_TBL(ZEXT816(0),auVar142,DAT_04101598);
  uVar137 = a64_TBL(ZEXT816(0),auVar158,DAT_04101580);
  auVar125._4_12_ = auVar124._4_12_;
  auVar125._0_4_ = fVar133;
  auVar127._0_8_ = auVar125._0_8_;
  auVar127._8_4_ = auVar127._12_4_;
  auVar126._8_8_ = auVar127._8_8_;
  auVar126._4_4_ = auVar158._8_4_;
  auVar126._0_4_ = fVar133;
  auVar128._0_12_ = auVar126._0_12_;
  auVar128._12_4_ = auVar158._12_4_;
  auVar174._0_4_ =
       (fVar167 * (float)uVar172 * (float)uVar175 - (float)uVar116 * fVar167 * (float)uVar137) +
       (fVar166 * (float)((ulong)uVar172 >> 0x20) * (float)((ulong)uVar175 >> 0x20) -
       (float)((ulong)uVar116 >> 0x20) * fVar166 * (float)((ulong)uVar137 >> 0x20)) +
       (fVar133 * (float)uVar150 * (float)uVar135 - (float)uVar136 * fVar133 * (float)uVar164) +
       (auVar127._12_4_ * (float)((ulong)uVar150 >> 0x20) * (float)((ulong)uVar135 >> 0x20) -
       (float)((ulong)uVar136 >> 0x20) * auVar127._12_4_ * (float)((ulong)uVar164 >> 0x20));
  auVar174._4_4_ = auVar174._0_4_;
  auVar174._8_4_ = auVar174._0_4_;
  auVar174._12_4_ = auVar174._0_4_;
  auVar176 = NEON_frecpe(auVar174,4);
  auVar139 = NEON_frecps(auVar176,auVar174,4);
  auVar177._0_4_ = auVar176._0_4_ * auVar139._0_4_;
  auVar177._4_4_ = auVar176._4_4_ * auVar139._4_4_;
  auVar177._8_4_ = auVar176._8_4_ * auVar139._8_4_;
  auVar177._12_4_ = auVar176._12_4_ * auVar139._12_4_;
  auVar176 = NEON_frecps(auVar177,auVar174,4);
  fVar105 = auVar177._0_4_ * auVar176._0_4_;
  fVar160 = auVar177._4_4_ * auVar176._4_4_;
  fVar179 = auVar177._8_4_ * auVar176._8_4_;
  auVar178._4_4_ = auVar142._0_4_;
  auVar178._0_4_ = fVar167;
  auVar178._8_4_ = auVar158._0_4_;
  auVar178._12_4_ = 0;
  auVar181._4_4_ = auVar142._4_4_;
  auVar181._0_4_ = fVar166;
  auVar181._8_4_ = auVar158._4_4_;
  auVar181._12_4_ = 0;
  auVar129._4_12_ = auVar128._4_12_;
  auVar129._0_4_ = fVar133;
  auVar131._0_8_ = auVar129._0_8_;
  auVar131._8_4_ = auVar158._8_4_;
  auVar131._12_4_ = auVar158._12_4_;
  auVar130._8_8_ = auVar131._8_8_;
  auVar130._4_4_ = auVar142._8_4_;
  auVar130._0_4_ = fVar133;
  auVar132._0_12_ = auVar130._0_12_;
  auVar132._12_4_ = 0;
  uVar135 = a64_TBL(ZEXT816(0),auVar181,DAT_04101580);
  uVar164 = a64_TBL(ZEXT816(0),auVar181,DAT_041015c8);
  uVar149 = a64_TBL(ZEXT816(0),auVar132,DAT_041016a0);
  uVar162 = a64_TBL(ZEXT816(0),auVar132,DAT_04101580);
  uVar136 = a64_TBL(ZEXT816(0),auVar178,DAT_04101580);
  uVar172 = a64_TBL(ZEXT816(0),auVar132,DAT_04101598);
  fVar111 = (float)((ulong)uVar172 >> 0x20);
  uVar175 = a64_TBL(ZEXT816(0),auVar132,DAT_041015c8);
  uVar137 = a64_TBL(ZEXT816(0),auVar178,DAT_041015c8);
  uVar116 = a64_TBL(ZEXT816(0),auVar181,DAT_04101598);
  uVar148 = a64_TBL(ZEXT816(0),auVar181,DAT_041016a0);
  uVar147 = a64_TBL(ZEXT816(0),auVar178,DAT_04101598);
  uVar150 = a64_TBL(ZEXT816(0),auVar178,DAT_041016a0);
  fVar166 = (float)((ulong)uVar135 >> 0x20);
  fVar167 = (float)((ulong)uVar116 >> 0x20);
  fVar145 = (float)((ulong)uVar162 >> 0x20);
  fVar95 = (float)((ulong)uVar147 >> 0x20);
  fVar133 = (float)((ulong)uVar136 >> 0x20);
  fVar180 = fVar105 * ((float)uVar135 * (float)uVar172 - (float)uVar116 * (float)uVar162);
  fVar144 = fVar160 * (fVar166 * fVar111 - fVar167 * fVar145);
  fVar146 = fVar179 * ((float)uVar164 * (float)uVar149 - (float)uVar148 * (float)uVar175);
  fVar168 = fVar105 * ((float)uVar162 * (float)uVar147 - (float)uVar172 * (float)uVar136);
  fVar134 = fVar160 * (fVar145 * fVar95 - fVar111 * fVar133);
  fVar143 = fVar179 * ((float)uVar175 * (float)uVar150 - (float)uVar149 * (float)uVar137);
  fVar105 = fVar105 * ((float)uVar116 * (float)uVar136 - (float)uVar147 * (float)uVar135);
  fVar160 = fVar160 * (fVar167 * fVar133 - fVar95 * fVar166);
  fVar179 = fVar179 * ((float)uVar148 * (float)uVar137 - (float)uVar150 * (float)uVar164);
  fVar167 = auVar97._0_4_;
  fVar166 = auVar97._4_4_;
  fVar133 = auVar97._8_4_;
  fVar95 = (-fVar180 * fVar167 - fVar168 * fVar166) - fVar105 * fVar133;
  fVar111 = (-fVar144 * fVar167 - fVar134 * fVar166) - fVar160 * fVar133;
  fVar145 = (-fVar146 * fVar167 - fVar143 * fVar166) - fVar179 * fVar133;
  iVar36 = -(uint)(auVar174._0_4_ == 0.0);
  iVar106 = -(uint)(auVar174._0_4_ == 0.0);
  iVar112 = -(uint)(auVar174._0_4_ == 0.0);
  bVar94 = (byte)iVar36;
  bVar101 = (byte)((uint)iVar36 >> 8);
  bVar102 = (byte)((uint)iVar36 >> 0x10);
  bVar103 = (byte)((uint)iVar36 >> 0x18);
  bVar104 = (byte)iVar106;
  bVar107 = (byte)((uint)iVar106 >> 8);
  bVar108 = (byte)((uint)iVar106 >> 0x10);
  bVar109 = (byte)((uint)iVar106 >> 0x18);
  bVar110 = (byte)iVar112;
  bVar113 = (byte)((uint)iVar112 >> 8);
  bVar114 = (byte)((uint)iVar112 >> 0x10);
  bVar115 = (byte)((uint)iVar112 >> 0x18);
  fVar180 = (float)CONCAT13((byte)((uint)fVar180 >> 0x18) & ~bVar103,
                            CONCAT12((byte)((uint)fVar180 >> 0x10) & ~bVar102,
                                     CONCAT11((byte)((uint)fVar180 >> 8) & ~bVar101,
                                              SUB41(fVar180,0) & ~bVar94)));
  auVar151._0_8_ =
       CONCAT17((byte)((uint)fVar144 >> 0x18) & ~bVar109,
                CONCAT16((byte)((uint)fVar144 >> 0x10) & ~bVar108,
                         CONCAT15((byte)((uint)fVar144 >> 8) & ~bVar107,
                                  CONCAT14(SUB41(fVar144,0) & ~bVar104,fVar180))));
  auVar151[8] = SUB41(fVar146,0) & ~bVar110;
  auVar151[9] = (byte)((uint)fVar146 >> 8) & ~bVar113;
  auVar151[10] = (byte)((uint)fVar146 >> 0x10) & ~bVar114;
  auVar151[0xb] = (byte)((uint)fVar146 >> 0x18) & ~bVar115;
  fVar168 = (float)CONCAT13((byte)((uint)fVar168 >> 0x18) & ~bVar103,
                            CONCAT12((byte)((uint)fVar168 >> 0x10) & ~bVar102,
                                     CONCAT11((byte)((uint)fVar168 >> 8) & ~bVar101,
                                              SUB41(fVar168,0) & ~bVar94)));
  auVar165._0_8_ =
       CONCAT17((byte)((uint)fVar134 >> 0x18) & ~bVar109,
                CONCAT16((byte)((uint)fVar134 >> 0x10) & ~bVar108,
                         CONCAT15((byte)((uint)fVar134 >> 8) & ~bVar107,
                                  CONCAT14(SUB41(fVar134,0) & ~bVar104,fVar168))));
  auVar165[8] = SUB41(fVar143,0) & ~bVar110;
  auVar165[9] = (byte)((uint)fVar143 >> 8) & ~bVar113;
  auVar165[10] = (byte)((uint)fVar143 >> 0x10) & ~bVar114;
  auVar165[0xb] = (byte)((uint)fVar143 >> 0x18) & ~bVar115;
  fVar105 = (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & ~bVar103,
                            CONCAT12((byte)((uint)fVar105 >> 0x10) & ~bVar102,
                                     CONCAT11((byte)((uint)fVar105 >> 8) & ~bVar101,
                                              SUB41(fVar105,0) & ~bVar94)));
  auVar121._0_8_ =
       CONCAT17((byte)((uint)fVar160 >> 0x18) & ~bVar109,
                CONCAT16((byte)((uint)fVar160 >> 0x10) & ~bVar108,
                         CONCAT15((byte)((uint)fVar160 >> 8) & ~bVar107,
                                  CONCAT14(SUB41(fVar160,0) & ~bVar104,fVar105))));
  auVar121[8] = SUB41(fVar179,0) & ~bVar110;
  auVar121[9] = (byte)((uint)fVar179 >> 8) & ~bVar113;
  auVar121[10] = (byte)((uint)fVar179 >> 0x10) & ~bVar114;
  auVar121[0xb] = (byte)((uint)fVar179 >> 0x18) & ~bVar115;
  fVar133 = (float)local_80;
  fVar167 = (float)CONCAT13(extraout_var_01,
                            CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  fVar166 = (float)CONCAT13((byte)((uint)fVar95 >> 0x18) & ~bVar103,
                            CONCAT12((byte)((uint)fVar95 >> 0x10) & ~bVar102,
                                     CONCAT11((byte)((uint)fVar95 >> 8) & ~bVar101,
                                              SUB41(fVar95,0) & ~bVar94)));
  auVar98._0_8_ =
       CONCAT17((byte)((uint)fVar111 >> 0x18) & ~bVar109,
                CONCAT16((byte)((uint)fVar111 >> 0x10) & ~bVar108,
                         CONCAT15((byte)((uint)fVar111 >> 8) & ~bVar107,
                                  CONCAT14(SUB41(fVar111,0) & ~bVar104,fVar166))));
  auVar98[8] = SUB41(fVar145,0) & ~bVar110;
  auVar98[9] = (byte)((uint)fVar145 >> 8) & ~bVar113;
  auVar98[10] = (byte)((uint)fVar145 >> 0x10) & ~bVar114;
  auVar98[0xb] = (byte)((uint)fVar145 >> 0x18) & ~bVar115;
  fVar166 = fVar180 * fVar133 + fVar168 * fVar167 + fVar105 * local_78 + fVar166;
  uVar46 = SUB41(fVar166,0);
  uVar48 = (undefined1)((uint)fVar166 >> 8);
  uVar50 = (undefined1)((uint)fVar166 >> 0x10);
  uVar52 = (undefined1)((uint)fVar166 >> 0x18);
  fVar166 = (float)((ulong)auVar151._0_8_ >> 0x20) * fVar133 +
            (float)((ulong)auVar165._0_8_ >> 0x20) * fVar167 +
            (float)((ulong)auVar121._0_8_ >> 0x20) * local_78 +
            (float)((ulong)auVar98._0_8_ >> 0x20);
  uVar54 = SUB41(fVar166,0);
  uVar55 = (undefined1)((uint)fVar166 >> 8);
  uVar47 = (undefined1)((uint)fVar166 >> 0x10);
  uVar49 = (undefined1)((uint)fVar166 >> 0x18);
  fVar167 = auVar151._8_4_ * fVar133 + auVar165._8_4_ * fVar167 + auVar121._8_4_ * local_78 +
            auVar98._8_4_;
  uVar51 = SUB41(fVar167,0);
  uVar53 = (undefined1)((uint)fVar167 >> 8);
  uVar56 = (undefined1)((uint)fVar167 >> 0x10);
  uVar57 = (undefined1)((uint)fVar167 >> 0x18);
LAB_015ba23c:
  puVar2 = (undefined8 *)(lVar43 + lVar41 * 0x10);
  *puVar2 = CONCAT17(uVar49,CONCAT16(uVar47,CONCAT15(uVar55,CONCAT14(uVar54,CONCAT13(uVar52,CONCAT12
                                                  (uVar50,CONCAT11(uVar48,uVar46)))))));
  *(uint *)(puVar2 + 1) = CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar53,uVar51)));
  return;
}

