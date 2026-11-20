
float FUN_03ed7a30(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                  long param_7,uint *param_8)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined1 local_194 [255];
  undefined1 local_95;
  float local_8c;
  float local_88;
  float local_84;
  short local_80 [2];
  short local_7c [2];
  short local_78 [2];
  short local_74 [2];
  
  puVar11 = *(uint **)(param_4 + 0x18);
  if ((int)*puVar11 < 0) {
    lVar17 = *(long *)(param_5 + 8);
    plVar8 = *(long **)(lVar17 + 0x18);
    uVar6 = (**(code **)(*plVar8 + 0x118))
                      (plVar8,*(undefined8 *)(*(long *)(param_6 + 0x70) + 0x10),*puVar11 & 0xffff);
    plVar8 = *(long **)(lVar17 + 0x20);
    uVar5 = (**(code **)(*plVar8 + 0x128))(plVar8,uVar6);
    puVar11 = *(uint **)(param_4 + 0x18);
  }
  else {
    uVar5 = puVar11[1];
  }
  lVar17 = *(long *)(param_5 + 8);
  fVar19 = param_3;
  if (0.0 <= param_2) {
    fVar19 = param_2;
  }
  uVar15 = puVar11[2];
  if ((*(byte *)(lVar17 + 0x68) >> 2 & 1) == 0) {
    if ((int)puVar11[9] < 0) {
      uVar6 = (**(code **)(**(long **)(lVar17 + 0x18) + 0x128))
                        (*(long **)(lVar17 + 0x18),*(undefined8 *)(*(long *)(param_6 + 0x70) + 0x10)
                         ,puVar11[9] & 0xffff);
      uVar9 = (**(code **)(**(long **)(lVar17 + 0x20) + 0x138))(*(long **)(lVar17 + 0x20),uVar6);
      if ((uVar9 & 1) == 0) goto LAB_03ed7b28;
    }
    else if (puVar11[10] == 0) goto LAB_03ed7b28;
switchD_03ed7b48_caseD_3:
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar15 = puVar11[3];
    uVar5 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar5 = uVar5 >> 8 ^ uVar15 >> 0x13 ^ uVar5 ^ uVar15;
    puVar11[2] = uVar15;
    puVar11[3] = uVar5;
    fVar18 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar19 = fVar19 - param_1;
LAB_03ed7c3c:
    *(undefined1 *)((long)param_8 + 0x32) = 1;
    return param_1 + fVar19 * fVar18;
  }
LAB_03ed7b28:
  switch(uVar5) {
  case 1:
  case 2:
  case 6:
  case 7:
    puVar11 = *(uint **)(*(long *)(param_5 + 8) + 0x40);
    if (uVar15 == 0) {
      uVar15 = *(uint *)(*(long *)(*(long *)(param_4 + 0x10) + 0x18) +
                         (ulong)*(ushort *)(param_7 + 10) * 0x24 + 4);
    }
    *param_8 = *param_8 & 0xfffffff7;
    sVar4 = *(short *)(param_7 + 8);
    if (sVar4 == 3) {
      if ((int)puVar11[4] < 1) {
        return param_1;
      }
      uVar14 = 0;
      while( true ) {
        uVar2 = uVar14;
        if (*puVar11 <= uVar14) {
          uVar2 = 0;
        }
        pfVar16 = (float *)(*(long *)(puVar11 + 2) + (ulong)uVar2 * 0x20);
        uVar9 = FUN_03eca100(*(undefined8 *)(param_4 + 0x10),uVar15,*(undefined8 *)(pfVar16 + 4),
                             pfVar16[2]);
        if ((uVar9 & 1) != 0) break;
        uVar14 = uVar14 + 1;
        if ((int)puVar11[4] <= (int)uVar14) {
          return param_1;
        }
      }
      if (uVar5 == 6) {
        fVar19 = pfVar16[1];
        goto switchD_03ed7b48_caseD_5;
      }
      if (uVar5 == 2) {
        fVar19 = *pfVar16;
        goto LAB_03ed7f8c;
      }
      if (uVar5 == 1) {
        fVar19 = *pfVar16 * param_3;
        goto switchD_03ed7b48_caseD_5;
      }
      fVar18 = pfVar16[1];
    }
    else {
      if (sVar4 == 0xb) {
        if ((int)puVar11[10] < 1) {
          return param_1;
        }
        uVar14 = 0;
        while( true ) {
          uVar2 = uVar14;
          if (puVar11[6] <= uVar14) {
            uVar2 = 0;
          }
          pfVar16 = (float *)(*(long *)(puVar11 + 8) + (ulong)uVar2 * 0x18);
          uVar9 = FUN_03eca100(*(undefined8 *)(param_4 + 0x10),uVar15,*(undefined8 *)(pfVar16 + 4),
                               pfVar16[2]);
          if ((uVar9 & 1) != 0) break;
          uVar14 = uVar14 + 1;
          if ((int)puVar11[10] <= (int)uVar14) {
            return param_1;
          }
        }
      }
      else {
        if (sVar4 != 0x18) {
          return param_1;
        }
        if ((int)puVar11[0x10] < 1) {
          return param_1;
        }
        uVar14 = 0;
        while( true ) {
          uVar2 = uVar14;
          if (puVar11[0xc] <= uVar14) {
            uVar2 = 0;
          }
          pfVar16 = (float *)(*(long *)(puVar11 + 0xe) + (ulong)uVar2 * 0x18);
          uVar9 = FUN_03eca100(*(undefined8 *)(param_4 + 0x10),uVar15,*(undefined8 *)(pfVar16 + 4),
                               pfVar16[2]);
          if ((uVar9 & 1) != 0) break;
          uVar14 = uVar14 + 1;
          if ((int)puVar11[0x10] <= (int)uVar14) {
            return param_1;
          }
        }
      }
      if (uVar5 == 6) {
        fVar19 = pfVar16[1];
        goto switchD_03ed7b48_caseD_5;
      }
      if (uVar5 == 2) {
        fVar19 = *pfVar16;
LAB_03ed7f8c:
        fVar19 = (1.0 - fVar19) * param_3;
        goto switchD_03ed7b48_caseD_5;
      }
      if (uVar5 == 1) {
        fVar19 = *pfVar16 * param_3;
        goto switchD_03ed7b48_caseD_5;
      }
      fVar18 = pfVar16[1];
    }
    fVar19 = fVar19 + (param_1 - fVar18);
switchD_03ed7b48_caseD_5:
    *(undefined1 *)((long)param_8 + 0x32) = 1;
    return fVar19;
  case 3:
    goto switchD_03ed7b48_caseD_3;
  case 4:
    lVar12 = *(long *)(param_4 + 0x18);
    lVar17 = *(long *)(param_6 + 0x70);
    if ((int)*(uint *)(lVar12 + 0xc) < 0) {
      lVar13 = *(long *)(param_5 + 8);
      plVar8 = *(long **)(lVar13 + 0x18);
      uVar6 = (**(code **)(*plVar8 + 0x110))
                        (plVar8,*(undefined8 *)(lVar17 + 0x10),*(uint *)(lVar12 + 0xc) & 0xffff);
      plVar8 = *(long **)(lVar13 + 0x20);
      pcVar10 = (char *)(**(code **)(*plVar8 + 0x120))(plVar8,uVar6);
      lVar12 = *(long *)(param_4 + 0x18);
      lVar17 = *(long *)(param_6 + 0x70);
      uVar5 = *(uint *)(lVar12 + 0x14);
      if ((int)uVar5 < 0) goto LAB_03ed7dbc;
LAB_03ed7c7c:
      lVar17 = *(long *)(*(long *)(lVar17 + 0x10) + 8);
      lVar17 = lVar17 + *(int *)(lVar12 + 0x18) + (long)*(int *)(lVar17 + 0x24);
      cVar3 = *pcVar10;
    }
    else {
      lVar13 = *(long *)(*(long *)(lVar17 + 0x10) + 8);
      pcVar10 = (char *)(lVar13 + *(int *)(lVar12 + 0x10) + (long)*(int *)(lVar13 + 0x24));
      uVar5 = *(uint *)(lVar12 + 0x14);
      if (-1 < (int)uVar5) goto LAB_03ed7c7c;
LAB_03ed7dbc:
      lVar12 = *(long *)(param_5 + 8);
      plVar8 = *(long **)(lVar12 + 0x18);
      uVar6 = (**(code **)(*plVar8 + 0x110))(plVar8,*(undefined8 *)(lVar17 + 0x10),uVar5 & 0xffff);
      plVar8 = *(long **)(lVar12 + 0x20);
      lVar17 = (**(code **)(*plVar8 + 0x120))(plVar8,uVar6);
      cVar3 = *pcVar10;
    }
    if (cVar3 != '\0') {
      uVar5 = *(uint *)(*(long *)(param_4 + 0x18) + 0x1c);
      if ((int)uVar5 < 0) {
        lVar12 = *(long *)(param_5 + 8);
        plVar8 = *(long **)(lVar12 + 0x18);
        uVar6 = (**(code **)(*plVar8 + 0x118))
                          (plVar8,*(undefined8 *)(*(long *)(param_6 + 0x70) + 0x10),uVar5 & 0xffff);
        plVar8 = *(long **)(lVar12 + 0x20);
        iVar7 = (**(code **)(*plVar8 + 0x128))(plVar8,uVar6);
      }
      else {
        iVar7 = *(int *)(*(long *)(param_4 + 0x18) + 0x20);
      }
      plVar8 = *(long **)(*(long *)(param_5 + 8) + 0x30);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_1a8 = puVar1;
      local_1a0 = pcVar10;
      uVar9 = (**(code **)(*plVar8 + 0x68))(plVar8,&local_1a8,local_74,local_78);
      if (((uVar9 & 1) == 0) ||
         (local_1a8 = puVar1, local_1a0 = (char *)lVar17,
         uVar9 = (**(code **)(*plVar8 + 0x68))(plVar8,&local_1a8,local_7c,local_80),
         (uVar9 & 1) == 0)) {
        local_95 = 0;
        local_1a0 = local_194;
        local_198 = 0x100;
        local_194[0] = 0;
        local_1a8 = PTR_DAT_04bb21f8 + 0x10;
        lVar17 = *(long *)(*(long *)(param_4 + 0x10) + 8);
        FUN_038d1270(&local_1a8,"%s.as",
                     lVar17 + *(int *)(lVar17 + 0x24) + (long)*(int *)(lVar17 + 8));
        return param_1;
      }
      (**(code **)(*plVar8 + 0x80))(plVar8,&local_1a8,(long)local_74[0],(long)local_78[0]);
      (**(code **)(*plVar8 + 0x80))(plVar8,&local_8c,(long)local_7c[0],(long)local_80[0]);
      if (iVar7 == 1) {
        local_1a8._0_4_ = local_1a8._4_4_;
        local_8c = local_88;
      }
      else if (iVar7 == 0) {
      }
      else {
        local_1a8._0_4_ = local_1a0._0_4_;
        local_8c = local_84;
      }
      if (local_8c <= (float)local_1a8) {
        return param_1;
      }
      *(undefined1 *)((long)param_8 + 0x32) = 1;
      return param_1 + (fVar19 - param_1) * 0.5;
    }
    fVar18 = fVar19 - param_1;
    fVar19 = 0.5;
    goto LAB_03ed7c3c;
  case 5:
    goto switchD_03ed7b48_caseD_5;
  default:
    return param_1;
  }
}

