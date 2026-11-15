
void FUN_01f95fb0(long *param_1)

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
  undefined1 *puVar10;
  int *piVar11;
  uint *puVar12;
  ulong uVar13;
  ushort uVar14;
  undefined8 local_338;
  long *local_328;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_2f4;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined2 local_288;
  undefined2 local_286;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined4 local_264;
  undefined1 local_260;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 *local_220;
  int local_218;
  undefined1 *local_1e8;
  int local_1e0;
  undefined4 local_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined2 uStack_150;
  undefined2 uStack_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined5 local_134;
  undefined3 uStack_12f;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_dc [31];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [31];
  undefined1 local_85;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  if ((*(long *)PTR_DAT_04bb4978 == 0) ||
     (puVar6 = (uint *)FUN_036f9e68(*(long *)PTR_DAT_04bb4978,(int)param_1[0x15e9]),
     puVar6 == (uint *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x01f9626c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
    return;
  }
  local_7c = 0;
  FUN_01f93710(param_1,&local_78,&local_7c);
  local_190 = 0;
  local_168 = 0;
  local_80 = 1;
  local_154 = 0;
  uStack_150 = 0xfffe;
  uStack_14e = 0;
  local_14c = 0;
  local_188 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_180 = PTR_DAT_04bb2010 + 0x10;
  local_178 = 0;
  puStack_170 = puStack_180;
  FUN_0277d4ac(&uStack_150);
  local_134 = 0;
  uStack_12f = 0;
  local_12c = 0;
  local_128 = 0;
  local_148 = 0x41c8000041800000;
  uVar14 = 0xfffe;
  local_140 = 0xbf800000bf800000;
  local_138 = 0xbf800000;
  local_124 = 0xfffe;
  FUN_0277d4ac();
  local_11c = 0;
  local_bd = 0;
  local_e8 = local_dc;
  local_e0 = 0x20;
  local_f0 = PTR_DAT_04bb2028 + 0x10;
  local_a8 = 0x20;
  local_b0 = local_a4;
  local_dc[0] = 0;
  local_85 = 0;
  local_a4[0] = 0;
  local_190 = 0;
  local_178 = 0;
  local_158 = 0;
  local_154 = 0;
  local_338 = 0xfffe;
  local_168 = 0;
  local_160 = 0;
  local_b8 = local_f0;
  FUN_0277d4ac(&local_338);
  uVar4 = local_338;
  local_14c = local_338._4_4_;
  local_148 = 0x41c8000041800000;
  local_140 = 0xbf800000bf800000;
  local_138 = 0xbf800000;
  local_134 = 0;
  uStack_12f = 0;
  local_12c = 0;
  local_128 = 0;
  local_338 = 0xfffe;
  uStack_150 = (undefined2)uVar4;
  uStack_14e = (undefined2)((ulong)uVar4 >> 0x10);
  FUN_0277d4ac(&local_338);
  local_11c = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_10c = 0;
  uStack_108 = 0;
  local_104 = 0;
  uStack_100 = 0;
  local_fc = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  local_124 = local_338;
  *local_e8 = 0;
  *local_b0 = 0;
  puVar3 = PTR_DAT_04bc2340;
  puVar2 = PTR_DAT_04bc2338;
  if (*puVar6 != 0) {
    cVar9 = *PTR_DAT_04bc2338;
LAB_01f96190:
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
          goto LAB_01f96284;
        }
LAB_01f96280:
        uVar14 = 0xfffe;
        goto LAB_01f96284;
      }
      if (uVar1 != 0xffffffff) goto LAB_01f96280;
    }
    puVar12 = (uint *)(ulong)*puVar6;
    uVar14 = 0xfffe;
    if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_01f96284;
    lVar8 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
    if (lVar8 == 0) goto LAB_01f96280;
    uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x14) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_01f96280;
    piVar11 = (int *)(lVar8 + 4);
    while (piVar11[-1] != -0x1e13a72a) {
      piVar11 = piVar11 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_01f96280;
    }
    iVar7 = 0;
    if (*piVar11 != -1) {
      iVar7 = *piVar11;
    }
    *(int *)(puVar3 + 0x14) = iVar7;
    if (*puVar6 == 0) goto LAB_01f96280;
    goto LAB_01f96190;
  }
LAB_01f96284:
  local_338 = (ulong)uVar14;
  FUN_0277d4ac(&local_338);
  puVar5 = local_e8;
  *(undefined4 *)(param_1 + 0x15ea) = (undefined4)local_338;
  *(undefined4 *)((long)param_1 + 0xaf54) = local_338._4_4_;
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
          puVar10 = (undefined1 *)((ulong)uVar1 + (long)puVar6);
          goto LAB_01f9636c;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      puVar10 = (undefined1 *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_01f9636c;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
      if (lVar8 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x18) = 0xfffffffe;
      puVar10 = (undefined1 *)0x0;
      if (uVar13 == 0) goto LAB_01f9636c;
      piVar11 = (int *)(lVar8 + 4);
      while (piVar11[-1] != 0x2e7476b) {
        piVar11 = piVar11 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          puVar10 = (undefined1 *)0x0;
          goto LAB_01f9636c;
        }
      }
      iVar7 = 0;
      if (*piVar11 != -1) {
        iVar7 = *piVar11;
      }
      *(int *)(puVar3 + 0x18) = iVar7;
    } while (*puVar6 != 0);
  }
  puVar10 = (undefined1 *)0x0;
LAB_01f9636c:
  __src = *(undefined1 **)PTR_PTR_04bc2348;
  if (puVar10 != (undefined1 *)0x0) {
    __src = puVar10;
  }
  if (local_e8 != __src) {
    lVar8 = 0;
    do {
      if (__src[lVar8] == '\0') {
LAB_01f96414:
        iVar7 = (int)lVar8;
        goto LAB_01f96418;
      }
      if (__src[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f96414;
      }
      if (__src[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f96414;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar7 = 0;
LAB_01f96418:
    if (local_e0 <= iVar7) {
      iVar7 = local_e0 + -1;
    }
    memcpy(local_e8,__src,(long)iVar7);
    puVar5[iVar7] = 0;
  }
  FUN_01f95090(param_1,puVar6,&local_124);
  FUN_01e63f1c(&local_338);
  local_338 = CONCAT44(local_338._4_4_,local_80);
  local_2c8 = local_190;
  local_2b0 = (undefined4)local_178;
  uStack_2ac = local_178._4_4_;
  uStack_230 = CONCAT44(local_f4,uStack_f8);
  local_290 = local_158;
  local_264 = local_12c;
  local_2a0 = (undefined4)local_168;
  uStack_29c = local_168._4_4_;
  local_298 = local_160;
  local_28c = local_154;
  local_288 = uStack_150;
  local_286 = uStack_14e;
  local_284 = local_14c;
  local_280 = local_148;
  uStack_278 = local_140;
  local_270 = local_138;
  local_26c = CONCAT35(uStack_12f,local_134);
  local_260 = local_128;
  local_25c = (undefined2)local_124;
  local_25a = local_124._2_2_;
  local_258 = local_124._4_4_;
  uStack_254 = local_11c;
  local_240 = CONCAT44(local_104,uStack_108);
  local_238 = CONCAT44(local_fc,uStack_100);
  local_250 = CONCAT44(uStack_114,CONCAT22(uStack_116,local_118));
  uStack_248 = CONCAT44(local_10c,uStack_110);
  (**(code **)(local_f0 + 0x18))(&local_f0);
  puVar5 = local_e8;
  if (local_220 != local_e8) {
    (**(code **)(local_f0 + 0x18))(&local_f0);
    lVar8 = 0;
    do {
      if (local_e8[lVar8] == '\0') goto LAB_01f96590;
      if (local_e8[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f96590;
      }
      if (local_e8[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f96590;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f96590:
    iVar7 = (int)lVar8;
    if (local_218 <= (int)lVar8) {
      iVar7 = local_218 + -1;
    }
    memcpy(local_220,puVar5,(long)iVar7);
    local_220[iVar7] = 0;
  }
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puVar5 = local_b0;
  if (local_1e8 != local_b0) {
    (**(code **)(local_b8 + 0x18))(&local_b8);
    lVar8 = 0;
    do {
      if (local_b0[lVar8] == '\0') goto LAB_01f9662c;
      if (local_b0[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01f9662c;
      }
      if (local_b0[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01f9662c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_01f9662c:
    iVar7 = (int)lVar8;
    if (local_1e0 <= (int)lVar8) {
      iVar7 = local_1e0 + -1;
    }
    memcpy(local_1e8,puVar5,(long)iVar7);
    local_1e8[iVar7] = 0;
  }
  local_2d0 = 1;
  local_2e0 = 1;
  local_2d8 = 0x100000002;
  local_310 = local_78;
  local_304 = 0xc0400000;
  local_308 = local_70;
  local_2f4 = local_7c;
  local_6c = 7;
  if (*puVar6 == 0) {
LAB_01f967cc:
    if ((int)param_1[0x15f0] < *(int *)((long)param_1 + 0xaf84)) {
      FUN_021920b0(param_1 + 0x15f0,&local_338);
    }
    FUN_02192850(param_1 + 0x15ee,0,0);
    return;
  }
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
      uVar1 = *puVar6;
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x20);
      if (-1 < (int)uVar1) {
        if (((char *)((ulong)uVar1 + (long)puVar6) != (char *)0x0) &&
           (*(char *)((ulong)uVar1 + (long)puVar6) < '\0')) {
          local_328 = param_1 + 0x1ce4;
          param_1[0x1ce5] = (long)param_1;
          param_1[0x1ce6] = (long)&LAB_01f96820;
          param_1[0x1ce7] = 0;
        }
        goto LAB_01f967cc;
      }
      if (uVar1 != 0xffffffff) goto LAB_01f967cc;
      uVar1 = *puVar6;
    }
    if ((uVar1 == 0) || (puVar12 = (uint *)(ulong)uVar1, puVar6 == puVar12)) goto LAB_01f967cc;
    lVar8 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
    if (lVar8 == 0) goto LAB_01f967cc;
    uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x20) = 0xfffffffe;
    if (uVar13 == 0) goto LAB_01f967cc;
    piVar11 = (int *)(lVar8 + 4);
    while (piVar11[-1] != 0x767f28cb) {
      piVar11 = piVar11 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) goto LAB_01f967cc;
    }
    iVar7 = 0;
    if (*piVar11 != -1) {
      iVar7 = *piVar11;
    }
    *(int *)(puVar3 + 0x20) = iVar7;
    if (*puVar6 == 0) goto LAB_01f967cc;
  } while( true );
}

