
void FUN_01f94520(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  char *pcVar16;
  undefined2 uVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined *local_2c8;
  undefined1 *local_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [7];
  undefined1 local_2ad;
  undefined *local_2a8;
  char *local_2a0;
  undefined4 local_298;
  char local_294 [15];
  undefined1 local_285;
  undefined *local_280;
  undefined2 local_278;
  undefined *local_270;
  char *local_268;
  undefined4 local_260;
  char local_25c [63];
  undefined1 local_21d;
  undefined *local_218;
  char *local_210;
  undefined4 local_208;
  char local_204 [7];
  undefined1 local_1fd;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined1 local_1c0;
  undefined4 local_1b4;
  undefined1 auStack_6c [12];
  
  plVar2 = param_1 + 0x1954;
  pbVar3 = (byte *)((long)param_1 + 0xaf69);
  if ((*(char *)((long)param_1 + 0xad5d) < '\0') &&
     (uVar9 = FUN_021f2ed0(*(long *)(param_1[1] + 0x68) + 0x278,0), (uVar9 & 1) != 0)) {
    FUN_01e5e100(param_1[2]);
    param_1[0x15ab] = param_1[0x15ab] | 0x1000;
  }
  puVar5 = PTR_DAT_04bbc1a0;
  plVar15 = param_1 + 0x15f0;
  if (0 < (int)*plVar15) {
    lVar13 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      plVar14 = *(long **)(param_1[0x15f1] + lVar13 * 8);
      lVar13 = lVar13 + 1;
      plVar14[0xf] = (long)puVar1;
      *plVar14 = param_1[0x15f2];
      param_1[0x15f2] = (long)plVar14;
    } while (lVar13 < (int)param_1[0x15f0]);
  }
  *(int *)plVar15 = 0;
  if (0 < (int)*plVar2) {
    lVar13 = 0;
    do {
      plVar14 = *(long **)(param_1[0x1955] + lVar13 * 8);
      lVar13 = lVar13 + 1;
      plVar14[0xf] = (long)(puVar5 + 0x10);
      *plVar14 = param_1[0x1956];
      param_1[0x1956] = (long)plVar14;
    } while (lVar13 < (int)*plVar2);
  }
  *(int *)plVar2 = 0;
  param_1[0x1cb8] = 0;
  param_1[0x1cb9] = 0;
  param_1[0x1cba] = 0;
  *pbVar3 = *pbVar3 & 0xfd;
  FUN_0376baa0(param_1[1] + 0x3e0);
  uVar9 = FUN_0376f950();
  local_25c[0] = '\0';
  local_260 = 0x40;
  local_21d = 0;
  local_270 = PTR_DAT_04bb2bc0 + 0x10;
  local_268 = local_25c;
  lVar13 = 0;
  if ((uVar9 & 1) == 0) {
    do {
      if (local_25c[lVar13] == '\0') goto LAB_01f94738;
      if (local_25c[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f94738;
      }
      if (local_25c[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f94738;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f94738:
    uVar19 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    uVar4 = 0x23;
    if (0x1c < uVar19) {
      uVar4 = 0x3f - uVar19;
    }
    if (0 < (int)uVar4) {
      pcVar11 = "NNPC_Spot_WherearenMainFieldVisitor";
      goto LAB_01f94764;
    }
  }
  else {
    do {
      if (local_25c[lVar13] == '\0') goto LAB_01f94704;
      if (local_25c[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f94704;
      }
      if (local_25c[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f94704;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f94704:
    uVar19 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    uVar4 = 0x1c;
    if (0x23 < uVar19) {
      uVar4 = 0x3f - uVar19;
    }
    if (0 < (int)uVar4) {
      pcVar11 = "NNPC_Spot_WherearenMainField";
LAB_01f94764:
      memcpy(local_25c + uVar19,pcVar11,(ulong)uVar4);
      local_25c[uVar4 + uVar19] = '\0';
    }
  }
  local_280 = PTR_DAT_04bb7648 + 0x10;
  local_278 = FUN_0376baa0(param_1[1] + 0x3e0);
  puVar5 = PTR_DAT_04bb2020;
  local_218 = PTR_DAT_04bb2020 + 0x10;
  local_210 = "ApproachOccurringFlag";
  iVar8 = FUN_0376c020(&local_280,&local_218);
  puVar1 = PTR_DAT_04bb27f8;
  local_294[0] = '\0';
  local_298 = 0x10;
  local_2a8 = PTR_DAT_04bb2ab0 + 0x10;
  local_2a0 = local_294;
  if (((iVar8 < 1) || (*(long *)PTR_DAT_04bb27f8 == 0)) ||
     ((uVar9 & 1) != 0 || (*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) & 2) == 0)) {
    lVar13 = 0;
    local_285 = 0;
    do {
      if (local_294[lVar13] == '\0') goto LAB_01f94850;
      if (local_294[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f94850;
      }
      if (local_294[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f94850;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f94850:
    uVar19 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    uVar4 = 4;
    if (0xb < uVar19) {
      uVar4 = 0xf - uVar19;
    }
    if (0 < (int)uVar4) {
      pcVar11 = "Root";
      goto LAB_01f9487c;
    }
  }
  else {
    lVar13 = 0;
    local_285 = 0;
    do {
      if (local_294[lVar13] == '\0') goto LAB_01f94d20;
      if (local_294[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f94d20;
      }
      if (local_294[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f94d20;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f94d20:
    uVar19 = (uint)lVar13 & ((int)(uint)lVar13 >> 0x1f ^ 0xffffffffU);
    uVar4 = 8;
    if (7 < uVar19) {
      uVar4 = 0xf - uVar19;
    }
    if (0 < (int)uVar4) {
      pcVar11 = "Approach";
LAB_01f9487c:
      local_285 = 0;
      memcpy(local_294 + uVar19,pcVar11,(ulong)uVar4);
      local_294[uVar4 + uVar19] = '\0';
    }
  }
  pcVar16 = (char *)param_1[0x1041];
  (**(code **)(local_270 + 0x18))(&local_270);
  pcVar11 = local_268;
  if (pcVar16 != local_268) {
    (**(code **)(local_270 + 0x18))(&local_270);
    lVar13 = 0;
    do {
      if (local_268[lVar13] == '\0') goto LAB_01f9493c;
      if (local_268[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f9493c;
      }
      if (local_268[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f9493c;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f9493c:
    iVar8 = (int)lVar13;
    if ((int)param_1[0x1042] <= (int)lVar13) {
      iVar8 = (int)param_1[0x1042] + -1;
    }
    memcpy(pcVar16,pcVar11,(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  pcVar16 = (char *)param_1[0x104c];
  (**(code **)(local_2a8 + 0x18))(&local_2a8);
  pcVar11 = local_2a0;
  if (pcVar16 != local_2a0) {
    (**(code **)(local_2a8 + 0x18))(&local_2a8);
    lVar13 = 0;
    do {
      if (local_2a0[lVar13] == '\0') goto LAB_01f949dc;
      if (local_2a0[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01f949dc;
      }
      if (local_2a0[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01f949dc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_01f949dc:
    iVar8 = (int)lVar13;
    if ((int)param_1[0x104d] <= (int)lVar13) {
      iVar8 = (int)param_1[0x104d] + -1;
    }
    memcpy(pcVar16,pcVar11,(long)iVar8);
    pcVar16[iVar8] = '\0';
  }
  lVar13 = *(long *)puVar1;
  if (lVar13 != 0) {
    local_1fd = 0;
    local_208 = 8;
    local_210 = local_204;
    local_204[0] = '\0';
    local_2c8 = PTR_DAT_04bb3768 + 0x10;
    local_2b8 = 8;
    local_2ad = 0;
    local_2b4[0] = 0;
    local_2c0 = local_2b4;
    local_218 = local_2c8;
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) ||
       ((*(long *)PTR_DAT_04bc1530 == 0 ||
        (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
      uVar17 = *(undefined2 *)(lVar13 + 0x2a);
    }
    else if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
            (puVar10 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar10 == (undefined8 *)0x0)) {
      uVar17 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
    }
    else {
      uVar9 = (**(code **)*puVar10)();
      uVar17 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
         (puVar10 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8), puVar10 != (undefined8 *)0x0)) {
        (**(code **)*puVar10)();
      }
    }
    uVar9 = FUN_0376b510(&local_218,uVar17);
    if ((uVar9 & 1) != 0) {
      lVar18 = param_1[1];
      (**(code **)(local_218 + 0x18))(&local_218);
      (**(code **)(local_218 + 0x18))(&local_218);
      pcVar11 = local_210;
      (**(code **)(*(long *)(lVar18 + 0x3e0) + 0x18))(lVar18 + 0x3e0);
      if (pcVar11 == *(char **)(lVar18 + 1000)) goto LAB_01f94fa0;
      uVar9 = 0;
      bVar7 = true;
      do {
        if (local_210[uVar9] != (*(char **)(lVar18 + 1000))[uVar9]) break;
        if (local_210[uVar9] == '\0') {
          if (bVar7) goto LAB_01f94fa0;
          break;
        }
        bVar7 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
    }
    uVar9 = FUN_036e1fd8(lVar13,&local_2c8);
    if ((uVar9 & 1) != 0) {
      lVar13 = param_1[1];
      (**(code **)(local_2c8 + 0x18))(&local_2c8);
      (**(code **)(local_2c8 + 0x18))(&local_2c8);
      puVar6 = local_2c0;
      (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
      if (puVar6 == *(undefined1 **)(lVar13 + 1000)) goto LAB_01f94fa0;
      uVar9 = 0;
      bVar7 = true;
      do {
        if (local_2c0[uVar9] != (*(undefined1 **)(lVar13 + 1000))[uVar9]) break;
        if (local_2c0[uVar9] == '\0') {
          if (bVar7) goto LAB_01f94fa0;
          break;
        }
        bVar7 = uVar9 < 0x80000;
        uVar9 = uVar9 + 1;
      } while (uVar9 != 0x80001);
    }
  }
  local_218 = puVar5 + 0x10;
  local_210 = "TutorialDone";
  iVar8 = FUN_02758850(&local_218);
  if (iVar8 == 0) goto LAB_01f94fa0;
  if (*(int *)((long)param_1 + 0xaf4c) == 0xe) {
    return;
  }
  if (*(int *)((long)param_1 + 0xaf4c) == 0xb) {
    return;
  }
  uVar9 = (**(code **)(*param_1 + 0x80))(param_1);
  if ((uVar9 & 1) != 0) {
    return;
  }
  local_1fd = 0;
  local_208 = 8;
  local_2b8 = 8;
  local_210 = local_204;
  local_2c0 = local_2b4;
  local_204[0] = '\0';
  local_2ad = 0;
  local_2c8 = PTR_DAT_04bb3768 + 0x10;
  local_2b4[0] = 0;
  local_218 = local_2c8;
  uVar9 = FUN_0376ee00(&local_218,&local_2c8);
  if ((uVar9 & 1) != 0) {
    lVar13 = param_1[1];
    (**(code **)(local_218 + 0x18))(&local_218);
    (**(code **)(local_218 + 0x18))(&local_218);
    pcVar11 = local_210;
    (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
    if (pcVar11 == *(char **)(lVar13 + 1000)) goto LAB_01f94fa0;
    uVar9 = 0;
    bVar7 = true;
    do {
      if (local_210[uVar9] != (*(char **)(lVar13 + 1000))[uVar9]) break;
      if (local_210[uVar9] == '\0') {
        if (bVar7) goto LAB_01f94fa0;
        break;
      }
      bVar7 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
    lVar13 = param_1[1];
    (**(code **)(local_2c8 + 0x18))(&local_2c8);
    (**(code **)(local_2c8 + 0x18))(&local_2c8);
    puVar6 = local_2c0;
    (**(code **)(*(long *)(lVar13 + 0x3e0) + 0x18))(lVar13 + 0x3e0);
    if (puVar6 == *(undefined1 **)(lVar13 + 1000)) goto LAB_01f94fa0;
    uVar9 = 0;
    bVar7 = true;
    do {
      if (local_2c0[uVar9] != (*(undefined1 **)(lVar13 + 1000))[uVar9]) break;
      if (local_2c0[uVar9] == '\0') {
        if (bVar7) goto LAB_01f94fa0;
        break;
      }
      bVar7 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  puVar1 = PTR_DAT_04bb4978;
  uVar19 = *(uint *)(param_1 + 0x15e9);
  if ((uVar19 != 0xffffffff) && ((int)uVar19 < 0x10)) {
    puVar12 = &DAT_0545b240 + (ulong)uVar19 * 0x118;
    if (0xf < uVar19) {
      puVar12 = &DAT_0545b240;
    }
    if ((puVar12[0x8c] != '\0') && (*(int *)(puVar12 + 0xa8) == 0x1e)) {
      FUN_01f93710(param_1,&local_2c8,auStack_6c);
      FUN_01e63f1c(&local_218);
      local_218 = (undefined *)CONCAT44(local_218._4_4_,0x2f);
      local_1c0 = 1;
      local_1b4 = 1;
      local_1f0 = local_2c8;
      local_1e8 = local_2c0._0_4_;
      if ((int)param_1[0x15f0] < *(int *)((long)param_1 + 0xaf84)) {
        FUN_021920b0(plVar15,&local_218);
      }
      FUN_02192850(param_1 + 0x15ee,0,0);
      return;
    }
  }
  if ((*(long *)PTR_DAT_04bb4978 != 0) && (lVar13 = FUN_036f9e68(), lVar13 != 0)) {
    if ((*(long *)puVar1 == 0) ||
       ((uVar9 = FUN_036f98d0(*(long *)puVar1,(int *)((long)param_1 + 0xaf4c),&local_2c8),
        (uVar9 & 1) == 0 || (uVar9 = FUN_01f935e0(lVar13,4), (uVar9 & 1) != 0)))) {
      local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,*(undefined4 *)(param_1[1] + 0x6a8));
      local_2c0 = (undefined1 *)CONCAT44(local_2c0._4_4_,*(undefined4 *)(param_1[1] + 0x6b0));
    }
    if ((*(char *)((long)param_1 + 0xad5d) < '\0') &&
       (uVar9 = FUN_01f935e0(lVar13,3), (uVar9 & 1) != 0)) {
      lVar18 = param_1[1];
      fVar20 = local_2c8._0_4_ - *(float *)(lVar18 + 0x6a8);
      fVar21 = local_2c0._0_4_ - *(float *)(lVar18 + 0x6b0);
      if (fVar21 * fVar21 + fVar20 * fVar20 < 25.0) {
        FUN_01e5e500(*(undefined8 *)(lVar18 + 0x3b0));
        local_218 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_218);
        uVar9 = FUN_01f95090(param_1,lVar13,&local_218);
        if ((uVar9 & 1) != 0) {
          FUN_01e57c78(*(undefined8 *)(param_1[1] + 0x3b0),&local_218,0,1);
        }
        param_1[0x15ab] = param_1[0x15ab] | 0x1000;
        *pbVar3 = *pbVar3 | 4;
        return;
      }
    }
    local_218 = puVar5 + 0x10;
    local_210 = "KeepStandingUpFlag";
    iVar8 = FUN_0376c020(&local_280,&local_218);
    if (iVar8 == 1) {
      FUN_01f95268(param_1);
      return;
    }
    uVar9 = FUN_01f935e0(lVar13,0);
    if ((uVar9 & 1) != 0) {
      FUN_01f952ec(param_1);
      return;
    }
    uVar9 = FUN_01f935e0(lVar13,3);
    if ((uVar9 & 1) != 0) {
      FUN_01f958a4(param_1);
      return;
    }
    uVar9 = FUN_01f959b8(param_1);
    if ((uVar9 & 1) != 0) {
      FUN_01e63f1c(&local_218);
      uVar9 = FUN_01f95a20(param_1,&local_218);
      if ((uVar9 & 1) != 0) {
        FUN_01f95f04(param_1,&local_218);
        return;
      }
    }
    FUN_01f95fb0(param_1);
    return;
  }
LAB_01f94fa0:
  (**(code **)(*param_1 + 0x38))(param_1,1,0,1);
  return;
}

