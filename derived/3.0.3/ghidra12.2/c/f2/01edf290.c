
long FUN_01edf290(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *__s;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  float local_5c;
  float fStack_58;
  undefined4 local_54;
  undefined8 local_28;
  
  lVar9 = param_1;
  switch(*(undefined4 *)(param_1 + 0xae74)) {
  case 0:
    if (*(int *)(param_1 + 0xaa00) == 3) {
      return param_1;
    }
    lVar9 = FUN_020d1018(param_1 + 0x8998);
    if ((*(byte *)(param_1 + 0xaa44) >> 5 & 1) != 0) {
      piVar10 = *(int **)PTR_DAT_04bb47d0;
      if ((piVar10 != (int *)0x0) &&
         ((*piVar10 != 0 || piVar10[2] != 0) && *piVar10 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar10 + 0x2c) = 1;
      }
      uVar3 = DAT_053e0cf4;
      uVar6 = DAT_053e0cec;
      uVar5 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0xaa18) = DAT_053e0cf8;
      *(undefined8 *)(param_1 + 0xaa04) = uVar5;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar6;
      uVar7 = DAT_053e0cfc;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar3;
      *(undefined4 *)(param_1 + 0xaa1c) = uVar7;
      uVar3 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined4 *)(param_1 + 0xaa20) = uVar3;
      FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      iVar8 = FUN_006f0400(*(float *)(param_1 + 0x7830) - *(float *)(lVar9 + 0x278),
                           *(float *)(param_1 + 0x7838) - *(float *)(lVar9 + 0x280));
      local_5c = (float)(long)((float)(iVar8 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
      lVar9 = FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_5c,PTR_DAT_04bb65b0,
                           local_94 + 0x44,6);
      *(undefined4 *)(param_1 + 0xae74) = 1;
      return lVar9;
    }
    if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) == 0) {
      return lVar9;
    }
    break;
  case 1:
    lVar9 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar9 + 0x360) == 4) {
      if (*(int *)(lVar9 + 0x4b8) == 0) {
        return lVar9;
      }
      if (*(int *)(lVar9 + 0x378) != 0x23) {
        return lVar9;
      }
      if ((*(byte *)(param_1 + 0xad5d) >> 3 & 1) != 0) {
        return lVar9;
      }
      local_5c = (float)((ulong)unaff_x29 >> 0x20);
      fStack_58 = (float)unaff_x30;
      local_54 = (float)((ulong)unaff_x30 >> 0x20);
      local_75 = 0;
      local_98 = 0x20;
      puStack_a0 = local_94;
      local_94[0] = 0;
      iVar8 = *(int *)(param_1 + 0x7818);
      iVar2 = *(int *)(param_1 + 0x781c);
      lVar12 = *(long *)(lVar9 + 0x358);
      local_a8 = PTR_DAT_04bb2028 + 0x10;
      (**(code **)(*(long *)(lVar12 + 0x3e0) + 0x18))(lVar12 + 0x3e0);
      FUN_038d1270(&local_a8,"NpcActorAction.%s",*(undefined8 *)(lVar12 + 1000));
      __s = *(undefined8 **)(lVar9 + 0x3b8);
      *(undefined4 *)(lVar9 + 0x378) = 0x14;
      *(undefined8 *)(lVar9 + 0x38c) = 0;
      *(undefined8 *)(lVar9 + 0x394) = 0;
      *(undefined8 *)(lVar9 + 0x380) = 0;
      *(undefined4 *)(lVar9 + 0x388) = 0xbf800000;
      *(undefined1 *)(lVar9 + 0x418) = *(undefined1 *)(lVar9 + 0x59e);
      *(undefined4 *)(lVar9 + 0x39c) = 6;
      *(undefined8 *)(lVar9 + 0x3a0) = 0;
      *(undefined8 *)(lVar9 + 0x3a8) = 0;
      if (__s != &DAT_0407ebb1) {
        iVar1 = 0;
        if (*(int *)(lVar9 + 0x3c0) < 1) {
          iVar1 = *(int *)(lVar9 + 0x3c0) + -1;
        }
        memset(__s,0,(long)iVar1);
        *(undefined1 *)((long)__s + (long)iVar1) = 0;
      }
      *(undefined8 *)(lVar9 + 0x408) = 0xfffe;
      FUN_0277d4ac(lVar9 + 0x408);
      *(undefined1 *)(lVar9 + 0x412) = 0;
      *(undefined8 *)(lVar9 + 0x3a4) = 0;
      *(undefined2 *)(lVar9 + 0x410) = 0;
      *(float *)(lVar9 + 0x390) = (float)iVar8 * 5.0 + 2.5;
      *(undefined4 *)(lVar9 + 0x394) = 0;
      *(float *)(lVar9 + 0x398) = (float)iVar2 * 5.0 + 2.5;
      *(undefined8 *)(lVar9 + 0x380) = 0;
      *(undefined4 *)(lVar9 + 0x388) = 0xbf800000;
      *(undefined4 *)(lVar9 + 0x39c) = 6;
      *(undefined4 *)(lVar9 + 0x38c) = 0x40000000;
      *(undefined2 *)(lVar9 + 0x408) = *(undefined2 *)(param_1 + 0x7840);
      *(undefined1 *)(lVar9 + 0x40a) = *(undefined1 *)(param_1 + 0x7842);
      *(undefined1 *)(lVar9 + 0x40b) = *(undefined1 *)(param_1 + 0x7843);
      *(undefined4 *)(lVar9 + 0x40c) = *(undefined4 *)(param_1 + 0x7844);
      return 1;
    }
    if (*(int *)(lVar9 + 0x360) != 0x14) {
      return lVar9;
    }
    if (*(int *)(lVar9 + 0x4b8) == 0) {
      return lVar9;
    }
    if (*(int *)(lVar9 + 0x378) != 0x23) {
      return lVar9;
    }
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 1) {
      uVar3 = *(undefined4 *)(param_1 + 0x787c);
      *(undefined4 *)(lVar9 + 0x630) = uVar3;
      *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x634) = *(undefined1 *)(param_1 + 0x7868);
      if ((*(long *)(param_1 + 8) != 0) &&
         (uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar4 != 0xffffffff)) {
        puVar11 = &DAT_053fe348 + (ulong)uVar4 * 0xba0;
        if (9 < uVar4) {
          puVar11 = &DAT_053fe348;
        }
        *(undefined4 *)(puVar11 + 0x8a0) = uVar3;
        puVar11[0x8a4] = *(undefined1 *)(param_1 + 0x7868);
      }
      if (*(char *)(param_1 + 0x7878) == '\0') {
        lVar9 = FUN_02085ce8(*(undefined8 *)(param_1 + 0x18),0,0,PTR_DAT_04bb2150);
      }
      *(undefined1 *)(param_1 + 0x7878) = 1;
      *(undefined4 *)(param_1 + 0xae74) = 2;
      return lVar9;
    }
    break;
  default:
    goto switchD_01edf2dc_caseD_2;
  case 3:
    iVar8 = *(int *)(param_1 + 0xae5c) + -1;
    if ((0 < *(int *)(param_1 + 0xae5c)) && (*(int *)(param_1 + 0xae5c) = iVar8, iVar8 != 0)) {
      return param_1;
    }
    local_5c = 0.0;
    fStack_58 = 0.0;
    local_54 = 0.0;
    local_28 = local_28 & 0xffffffff;
    lVar9 = FUN_02201470(&local_5c,(long)&local_28 + 4,param_1 + 0x7830,
                         *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,param_1 + 0x7868);
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar15 = *(float *)(lVar12 + 0x278);
    fVar16 = *(float *)(lVar12 + 0x280);
    fVar14 = fVar15 + 2.5;
    fVar13 = fVar16 + 2.5;
    if (((local_5c != 0.0) || (fStack_58 != 0.0)) || (local_54 != 0.0)) {
      fVar16 = local_54 - fVar16;
      fVar15 = local_5c - fVar15;
      lVar9 = param_1 + 0xaa24;
      if (*(char *)(param_1 + 0x789c) != '\0') {
        lVar9 = param_1 + 0x7848;
      }
      if ((*(float *)(lVar9 + 4) * *(float *)(lVar9 + 4) < fVar16 * fVar16 + fVar15 * fVar15) &&
         ((((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0) & 0xffff) !=
           (int)((float)(int)local_5c / 5.0) - (uint)(local_5c < 0.0) ||
          (((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0) & 0xffff) !=
           (int)((float)(int)local_54 / 5.0) - (uint)(local_54 < 0.0))))) {
        FUN_02085d90(*(undefined8 *)(param_1 + 0x18),0,local_94 + 0x44,1);
        local_28 = CONCAT44(local_28._4_4_,1);
        *(undefined4 *)(param_1 + 0x787c) = local_28._4_4_;
        lVar9 = 0;
        if (*(char *)(param_1 + 0x789c) != '\0') {
          lVar9 = param_1 + 0x7848;
        }
        lVar9 = FUN_020d0b58(param_1 + 0x8998,&local_5c,lVar9,&local_28);
        *(undefined4 *)(param_1 + 0xae74) = 0;
        return lVar9;
      }
      *(undefined4 *)(param_1 + 0xae74) = 1;
      FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      iVar8 = FUN_006f0400(*(float *)(param_1 + 0x7830) - *(float *)(lVar9 + 0x278),
                           *(float *)(param_1 + 0x7838) - *(float *)(lVar9 + 0x280));
      local_28 = CONCAT44(local_28._4_4_,
                          (int)(long)((float)(iVar8 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0));
      lVar9 = FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_28,PTR_DAT_04bb65b0,
                           local_94 + 0x44,6);
      return lVar9;
    }
    goto LAB_01edf7f8;
  case 4:
    iVar8 = *(int *)(param_1 + 0xae5c) + -1;
    if (((*(int *)(param_1 + 0xae5c) < 1) || (*(int *)(param_1 + 0xae5c) = iVar8, iVar8 == 0)) &&
       ((*(byte *)(param_1 + 0xad5d) >> 3 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0xae74) = 1;
      local_5c = 0.0;
      lVar12 = *(long *)(param_1 + 0x10);
      local_28 = local_28 & 0xffffffff;
      lVar9 = FUN_01e5a930(0x40000000,lVar12,0x14,local_94 + 0x44,&local_5c,(long)&local_28 + 4,
                           PTR_DAT_04bc1600,6);
      *(undefined2 *)(lVar12 + 0x408) = *(undefined2 *)(param_1 + 0x7840);
      *(undefined1 *)(lVar12 + 0x40a) = *(undefined1 *)(param_1 + 0x7842);
      *(undefined1 *)(lVar12 + 0x40b) = *(undefined1 *)(param_1 + 0x7843);
      *(undefined4 *)(lVar12 + 0x40c) = *(undefined4 *)(param_1 + 0x7844);
    }
    goto switchD_01edf2dc_caseD_2;
  }
  *(undefined4 *)(param_1 + 0xae74) = 3;
LAB_01edf7f8:
  *(undefined4 *)(param_1 + 0xae5c) = 0x96;
switchD_01edf2dc_caseD_2:
  return lVar9;
}

