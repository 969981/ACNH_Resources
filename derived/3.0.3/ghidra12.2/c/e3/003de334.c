
undefined8 FUN_003de334(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  code *pcVar15;
  long lVar16;
  byte *pbVar17;
  byte bVar18;
  long *plVar19;
  uint uVar20;
  undefined8 uVar21;
  
  plVar19 = (long *)(param_2 + 0x70);
  pbVar17 = (byte *)*plVar19;
  uVar21 = *(undefined8 *)(param_2 + 0x1d8);
  pbVar14 = pbVar17 + 1;
  *plVar19 = (long)pbVar14;
  bVar2 = *pbVar17;
  if (bVar2 == 0xa2) {
    pbVar14 = pbVar17 + 2;
    *(byte **)(param_2 + 0x70) = pbVar14;
    bVar2 = pbVar17[1];
    bVar5 = *(char *)(param_2 + 0x78) != '\0';
    bVar18 = bVar2 + 0x5d;
    pbVar17 = pbVar14;
    if ((byte)(bVar2 + 0x5d) < 3) goto LAB_003de3a4;
LAB_003de408:
    uVar20 = (uint)bVar2;
    uVar9 = 0;
    if (uVar20 == 0xa0) goto LAB_003de414;
LAB_003de3cc:
    if (uVar20 == 0xa1) {
      uVar13 = 5;
      uVar12 = 5;
      *plVar19 = (long)(pbVar14 + 1);
      bVar2 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      goto joined_r0x003de42c;
    }
    bVar3 = false;
    uVar12 = 0;
    uVar13 = uVar12;
    bVar4 = bVar3;
    if (uVar20 >> 7 == 0) goto LAB_003de49c;
  }
  else {
    bVar5 = true;
    bVar18 = bVar2 + 0x5d;
    pbVar17 = pbVar14;
    if (2 < (byte)(bVar2 + 0x5d)) goto LAB_003de408;
LAB_003de3a4:
    uVar9 = *(undefined4 *)(&DAT_041390a0 + (long)(char)bVar18 * 4);
    pbVar14 = pbVar17 + 1;
    *plVar19 = (long)pbVar14;
    uVar20 = (uint)*pbVar17;
    if (*pbVar17 != 0xa0) goto LAB_003de3cc;
LAB_003de414:
    uVar13 = 4;
    uVar12 = 4;
    *plVar19 = (long)(pbVar14 + 1);
    bVar2 = *pbVar14;
    pbVar14 = pbVar14 + 1;
joined_r0x003de42c:
    bVar3 = true;
    uVar20 = (uint)bVar2;
    bVar4 = true;
    if (-1 < (char)bVar2) {
LAB_003de49c:
      *(byte **)(param_2 + 0x70) = pbVar14 + 1;
      bVar2 = *pbVar14;
      if (!bVar4) {
        uVar12 = 3;
      }
      iVar7 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar12);
      if (!bVar5) {
        return 0;
      }
      if ((*(char *)(param_2 + 0x122) == '\0') && ((param_3 & 1) != 0)) {
        uVar20 = (int)*(char *)(param_2 + 0x19c) + uVar20;
        uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
        if (0x7e < (int)uVar20) {
          uVar20 = 0x7f;
        }
        iVar1 = iVar7;
        if (iVar7 < 1) {
          iVar1 = -1;
        }
        (**(code **)(*param_1 + 0x18))
                  (param_1,param_2,uVar20,bVar2,iVar1,*(undefined1 *)(param_2 + 0x7a));
      }
      if (*(char *)(param_2 + 0x79) == '\0') {
        return 0;
      }
      *(int *)(param_2 + 0x124) = iVar7;
      if (iVar7 == 0) {
        *(undefined1 *)(param_2 + 0x128) = 1;
        return 0;
      }
      return 0;
    }
  }
  switch((uVar20 & 0xf0) - 0x80 >> 4) {
  case 0:
    switch(uVar20) {
    case 0x80:
      if (!bVar3) {
        uVar13 = 3;
      }
      uVar9 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
      if (!bVar5) {
        return 0;
      }
      *(undefined4 *)(param_2 + 0x124) = uVar9;
      return 0;
    case 0x81:
      if (!bVar3) {
        uVar13 = 3;
      }
      uVar11 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
      if (!bVar5) {
        return 0;
      }
      lVar16 = *param_1;
      uVar20 = 0x81;
      break;
    default:
      goto LAB_003de824;
    case 0x88:
      *plVar19 = (long)(pbVar14 + 1);
      uVar11 = (uint)*pbVar14;
      *plVar19 = (long)(pbVar14 + 2);
      bVar2 = pbVar14[1];
      *plVar19 = (long)(pbVar14 + 3);
      bVar18 = pbVar14[2];
      *plVar19 = (long)(pbVar14 + 4);
      if (!bVar5) {
        return 0;
      }
      uVar20 = 0x88;
      uVar8 = (uint)CONCAT12(pbVar14[3],CONCAT11(bVar18,bVar2));
      pcVar15 = *(code **)(*param_1 + 0x10);
      goto LAB_003de81c;
    case 0x89:
      *plVar19 = (long)(pbVar14 + 1);
      bVar2 = *pbVar14;
      *plVar19 = (long)(pbVar14 + 2);
      bVar18 = pbVar14[1];
      *plVar19 = (long)(pbVar14 + 3);
      if (!bVar5) {
        return 0;
      }
      uVar20 = 0x89;
      uVar11 = (uint)CONCAT12(pbVar14[2],CONCAT11(bVar18,bVar2));
      lVar16 = *param_1;
      break;
    case 0x8a:
      *plVar19 = (long)(pbVar14 + 1);
      bVar2 = *pbVar14;
      *plVar19 = (long)(pbVar14 + 2);
      bVar18 = pbVar14[1];
      *plVar19 = (long)(pbVar14 + 3);
      if (!bVar5) {
        return 0;
      }
      uVar20 = 0x8a;
      uVar11 = (uint)CONCAT12(pbVar14[2],CONCAT11(bVar18,bVar2));
      lVar16 = *param_1;
    }
LAB_003de80c:
    pcVar15 = *(code **)(lVar16 + 0x10);
    break;
  case 1:
switchD_003de458_caseD_1:
    if (!bVar5) {
      return 0;
    }
    uVar11 = 0;
    pcVar15 = *(code **)(*param_1 + 0x10);
    break;
  default:
    goto LAB_003de824;
  case 3:
  case 4:
  case 5:
    if (!bVar3) {
      uVar13 = 1;
    }
    uVar10 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
    if (bVar18 < 3) {
      uVar8 = FUN_003de840(uVar10,plVar19,uVar21,param_2,uVar9);
    }
    else {
      uVar8 = 0;
    }
    if (!bVar5) {
      return 0;
    }
    pcVar15 = *(code **)(*param_1 + 0x10);
    uVar11 = (int)(char)uVar10;
    if ((uVar20 + 0x3d & 0xfe) != 0) {
      uVar11 = (uint)uVar10 & 0xff;
    }
    goto LAB_003de81c;
  case 6:
    if (!bVar3) {
      uVar13 = 2;
    }
    sVar6 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
    if (!bVar5) {
      return 0;
    }
    uVar11 = (uint)sVar6;
    pcVar15 = *(code **)(*param_1 + 0x10);
    break;
  case 7:
    if (uVar20 != 0xf0) {
      if (uVar20 == 0xff) {
        if (!bVar5) {
          return 0;
        }
        return 1;
      }
      if (uVar20 == 0xfe) {
        *plVar19 = (long)(pbVar14 + 2);
        return 0;
      }
      goto switchD_003de458_caseD_1;
    }
    *plVar19 = (long)(pbVar14 + 1);
    bVar2 = *pbVar14;
    uVar20 = (bVar2 & 0xf0) - 0x80 >> 4;
    if (1 < uVar20) {
      if (uVar20 - 2 < 2) {
        *plVar19 = (long)(pbVar14 + 2);
        if (!bVar5) {
          return 0;
        }
        uVar11 = (uint)pbVar14[1];
      }
      else {
        if (uVar20 != 6) {
          return 0;
        }
        if (!bVar3) {
          uVar13 = 2;
        }
        uVar11 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
        if (!bVar5) {
          return 0;
        }
        uVar11 = uVar11 & 0xffff;
      }
      lVar16 = *param_1;
      uVar20 = bVar2 | 0xf000;
      goto LAB_003de80c;
    }
    *(byte **)(param_2 + 0x70) = pbVar14 + 2;
    uVar11 = (uint)pbVar14[1];
    if (!bVar3) {
      uVar13 = 2;
    }
    sVar6 = FUN_003de840(param_1,plVar19,uVar21,param_2,uVar13);
    if (!bVar5) {
      return 0;
    }
    uVar8 = (uint)sVar6;
    uVar20 = bVar2 | 0xf000;
    pcVar15 = *(code **)(*param_1 + 0x10);
    goto LAB_003de81c;
  }
  uVar8 = 0;
LAB_003de81c:
  (*pcVar15)(param_1,param_2,uVar20,uVar11,uVar8);
LAB_003de824:
  return 0;
}

