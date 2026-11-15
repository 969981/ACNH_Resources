
void FUN_01f97c10(long *param_1)

{
  undefined1 *__src;
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  int *piVar13;
  ushort uVar14;
  undefined8 local_320;
  undefined4 local_2bc;
  undefined1 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined2 local_270;
  undefined2 local_26e;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined1 local_248;
  undefined2 local_244;
  undefined2 local_242;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined1 *local_208;
  int local_200;
  undefined1 *local_1d0;
  int local_1c8;
  undefined4 local_178;
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined2 uStack_138;
  undefined2 uStack_136;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined4 local_114;
  undefined1 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  
  if ((*(long *)PTR_DAT_04bb4978 == 0) ||
     (puVar6 = (uint *)FUN_036f9e68(*(long *)PTR_DAT_04bb4978,(int)param_1[0x15e9]),
     puVar6 == (uint *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01f97eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
    return;
  }
  local_178 = 0;
  local_150 = 0;
  local_13c = 0;
  uStack_138 = 0xfffe;
  uStack_136 = 0;
  local_134 = 0;
  local_170 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_168 = PTR_DAT_04bb2010 + 0x10;
  local_160 = 0;
  puStack_158 = puStack_168;
  FUN_0277d4ac(&uStack_138);
  local_11c = 0;
  uStack_117 = 0;
  local_114 = 0;
  local_110 = 0;
  local_130 = 0x41c8000041800000;
  uVar14 = 0xfffe;
  local_128 = 0xbf800000bf800000;
  local_120 = 0xbf800000;
  local_10c = 0xfffe;
  FUN_0277d4ac();
  local_104 = 0;
  local_a5 = 0;
  local_d0 = local_c4;
  local_c8 = 0x20;
  local_d8 = PTR_DAT_04bb2028 + 0x10;
  local_90 = 0x20;
  local_98 = local_8c;
  local_c4[0] = 0;
  local_6d = 0;
  local_8c[0] = 0;
  local_178 = 0;
  local_160 = 0;
  local_140 = 0;
  local_13c = 0;
  local_320 = 0xfffe;
  local_150 = 0;
  local_148 = 0;
  local_a0 = local_d8;
  FUN_0277d4ac(&local_320);
  uVar4 = local_320;
  local_134 = local_320._4_4_;
  local_130 = 0x41c8000041800000;
  local_128 = 0xbf800000bf800000;
  local_120 = 0xbf800000;
  local_11c = 0;
  uStack_117 = 0;
  local_114 = 0;
  local_110 = 0;
  local_320 = 0xfffe;
  uStack_138 = (undefined2)uVar4;
  uStack_136 = (undefined2)((ulong)uVar4 >> 0x10);
  FUN_0277d4ac(&local_320);
  local_104 = 0;
  local_100 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  uStack_f0 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  local_dc = 0;
  local_10c = local_320;
  *local_d0 = 0;
  *local_98 = 0;
  puVar3 = PTR_DAT_04bc2340;
  puVar2 = PTR_DAT_04bc2338;
  if (*puVar6 != 0) {
    cVar9 = *PTR_DAT_04bc2338;
LAB_01f97dd4:
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x14);
      if (-1 < (int)uVar1) {
        if ((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) {
          uVar14 = *(ushort *)((ulong)uVar1 + (long)puVar6);
          goto LAB_01f97ec8;
        }
LAB_01f97ec4:
        uVar14 = 0xfffe;
        goto LAB_01f97ec8;
      }
      if (uVar1 != 0xffffffff) goto LAB_01f97ec4;
    }
    puVar12 = (uint *)(ulong)*puVar6;
    uVar14 = 0xfffe;
    if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_01f97ec8;
    lVar8 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
    if (lVar8 == 0) goto LAB_01f97ec4;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01f97ec4;
    piVar13 = (int *)(lVar8 + 4);
    while (piVar13[-1] != -0x1e13a72a) {
      piVar13 = piVar13 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01f97ec4;
    }
    iVar7 = 0;
    if (*piVar13 != -1) {
      iVar7 = *piVar13;
    }
    *(int *)(puVar3 + 0x14) = iVar7;
    if (*puVar6 == 0) goto LAB_01f97ec4;
    goto LAB_01f97dd4;
  }
LAB_01f97ec8:
  local_320 = (ulong)uVar14;
  FUN_0277d4ac(&local_320);
  puVar5 = local_d0;
  *(undefined4 *)(param_1 + 0x15ea) = (undefined4)local_320;
  *(undefined4 *)((long)param_1 + 0xaf54) = local_320._4_4_;
  if (*puVar6 != 0) {
    cVar9 = *puVar2;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar3 + 0x18);
        if (-1 < (int)uVar1) {
          puVar11 = (undefined1 *)((ulong)uVar1 + (long)puVar6);
          goto LAB_01f97fb8;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      puVar11 = (undefined1 *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_01f97fb8;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
      if (lVar8 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      puVar11 = (undefined1 *)0x0;
      if (uVar10 == 0) goto LAB_01f97fb8;
      piVar13 = (int *)(lVar8 + 4);
      while (piVar13[-1] != 0x2e7476b) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          puVar11 = (undefined1 *)0x0;
          goto LAB_01f97fb8;
        }
      }
      iVar7 = 0;
      if (*piVar13 != -1) {
        iVar7 = *piVar13;
      }
      *(int *)(puVar3 + 0x18) = iVar7;
    } while (*puVar6 != 0);
  }
  puVar11 = (undefined1 *)0x0;
LAB_01f97fb8:
  __src = *(undefined1 **)PTR_PTR_04bc2348;
  if (puVar11 != (undefined1 *)0x0) {
    __src = puVar11;
  }
  if (local_d0 != __src) {
    lVar8 = 0;
    do {
      if (__src[lVar8] == '\0') {
LAB_01f98034:
        iVar7 = (int)lVar8;
        goto LAB_01f98038;
      }
      if (__src[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f98034;
      }
      if (__src[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f98034;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar7 = 0;
LAB_01f98038:
    if (local_c8 <= iVar7) {
      iVar7 = local_c8 + -1;
    }
    memcpy(local_d0,__src,(long)iVar7);
    puVar5[iVar7] = 0;
  }
  FUN_01f95090(param_1,puVar6,&local_10c);
  FUN_01e63f1c(&local_320);
  local_320 = CONCAT44(local_320._4_4_,1);
  local_2b8 = 1;
  local_2b0 = local_178;
  local_298 = (undefined4)local_160;
  uStack_294 = local_160._4_4_;
  local_288 = (undefined4)local_150;
  uStack_284 = local_150._4_4_;
  local_278 = local_140;
  local_280 = local_148;
  local_258 = local_120;
  local_270 = uStack_138;
  uStack_218 = CONCAT44(local_dc,uStack_e0);
  local_24c = local_114;
  local_274 = local_13c;
  local_26c = local_134;
  local_26e = uStack_136;
  local_268 = local_130;
  uStack_260 = local_128;
  local_254 = CONCAT35(uStack_117,local_11c);
  local_244 = (undefined2)local_10c;
  local_248 = local_110;
  local_242 = local_10c._2_2_;
  local_240 = local_10c._4_4_;
  uStack_23c = local_104;
  local_228 = CONCAT44(local_ec,uStack_f0);
  local_220 = CONCAT44(local_e4,uStack_e8);
  local_238 = CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100));
  uStack_230 = CONCAT44(local_f4,uStack_f8);
  (**(code **)(local_d8 + 0x18))(&local_d8);
  puVar5 = local_d0;
  if (local_208 != local_d0) {
    (**(code **)(local_d8 + 0x18))(&local_d8);
    lVar8 = 0;
    do {
      if (local_d0[lVar8] == '\0') goto LAB_01f981ac;
      if (local_d0[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f981ac;
      }
      if (local_d0[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f981ac;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f981ac:
    iVar7 = (int)lVar8;
    if (local_200 <= (int)lVar8) {
      iVar7 = local_200 + -1;
    }
    memcpy(local_208,puVar5,(long)iVar7);
    local_208[iVar7] = 0;
  }
  (**(code **)(local_a0 + 0x18))(&local_a0);
  puVar5 = local_98;
  if (local_1d0 != local_98) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar8 = 0;
    do {
      if (local_98[lVar8] == '\0') goto LAB_01f9824c;
      if (local_98[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f9824c;
      }
      if (local_98[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f9824c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f9824c:
    iVar7 = (int)lVar8;
    if (local_1c8 <= (int)lVar8) {
      iVar7 = local_1c8 + -1;
    }
    memcpy(local_1d0,puVar5,(long)iVar7);
    local_1d0[iVar7] = 0;
  }
  local_2b4 = 0;
  local_2bc = 1;
  if ((int)param_1[0x15f0] < *(int *)((long)param_1 + 0xaf84)) {
    FUN_021920b0(param_1 + 0x15f0,&local_320);
  }
  FUN_02192850(param_1 + 0x15ee,0,0);
  return;
}

