
bool FUN_00874dd0(undefined8 param_1,uint *param_2,undefined1 *param_3,char *param_4,uint param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  short sVar14;
  int *piVar15;
  uint *puVar16;
  undefined8 uVar17;
  
  puVar7 = PTR_DAT_04bb3250;
  puVar6 = PTR_DAT_04bb3248;
  if (*param_2 != 0) {
    cVar9 = *PTR_DAT_04bb3248;
    do {
      if (cVar9 != '\0') {
        if (*(int *)(puVar7 + 0x148) == -1) goto LAB_00874e5c;
LAB_00874ed4:
        puVar16 = (uint *)(ulong)*param_2;
        sVar14 = 0;
        bVar8 = puVar16 == (uint *)0x0;
        if ((*param_2 == 0) || (param_2 == puVar16)) goto LAB_00874f74;
        puVar16 = (uint *)((long)param_2 - (long)puVar16);
        if ((*puVar16 != 0) &&
           ((uVar12 = puVar16[1], uVar12 != 0 && ((ulong)(ushort)puVar16[2] != 0)))) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar16 + lVar2 + (ulong)(ushort)puVar16[2] * 8;
          if (lVar2 == 0) {
            bVar8 = false;
            sVar14 = 0;
            goto LAB_00874f74;
          }
          uVar3 = 0;
          if ((ulong)uVar12 != 0) {
            uVar3 = (uint)((ulong)((long)param_2 - lVar2) / (ulong)uVar12);
          }
          if (*puVar16 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if (uVar3 < DAT_04ce9758) {
            bVar8 = false;
            sVar14 = *(short *)(DAT_04ce9760 + (long)(int)uVar3 * 2);
            if (sVar14 != 3) {
              sVar14 = 0;
            }
            goto LAB_00874f74;
          }
        }
        bVar8 = false;
        sVar14 = 0;
        goto LAB_00874f74;
      }
      cVar9 = '\x01';
      *puVar6 = 1;
      memset(puVar7,0xff,0x288);
LAB_00874e5c:
      lVar2 = (long)param_2 - (ulong)*param_2;
      if ((*param_2 == 0) || (lVar2 == 0)) goto LAB_00874ed4;
      lVar1 = 0xc;
      if (*(char *)(lVar2 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar2 == 0) goto LAB_00874ed4;
      uVar13 = (ulong)*(ushort *)(lVar2 + 8);
      *(undefined4 *)(puVar7 + 0x148) = 0xfffffffe;
      if (uVar13 == 0) goto LAB_00874ed4;
      piVar15 = (int *)(lVar1 + lVar2 + 4);
      while (piVar15[-1] != 0x443c0fb7) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_00874ed4;
      }
      iVar5 = 0;
      if (*piVar15 != -1) {
        iVar5 = *piVar15;
      }
      *(int *)(puVar7 + 0x148) = iVar5;
    } while (*param_2 != 0);
  }
  sVar14 = 0;
  bVar8 = true;
LAB_00874f74:
  puVar7 = PTR_DAT_04bb3250;
  puVar6 = PTR_DAT_04bb3248;
  sVar4 = (short)param_5;
  switch(sVar14) {
  case 0:
    break;
  case 1:
    if ((param_5 & 0xffff) != 0x7e4) {
      return false;
    }
    break;
  case 2:
    if ((param_5 & 0xffff) != 0x7e5) {
      return false;
    }
    break;
  default:
    goto switchD_00874f9c_caseD_3;
  case 4:
    if ((param_5 - 0x7e6 & 0xffff) < 0xfffe) {
      return false;
    }
    break;
  case 5:
    if (sVar4 < 0x7e5) {
      return false;
    }
  }
  if (!bVar8) {
    cVar9 = *PTR_DAT_04bb3248;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *puVar6 = 1;
        memset(puVar7,0xff,0x288);
      }
      else {
        uVar12 = *(uint *)(puVar7 + 0x150);
        if (-1 < (int)uVar12) {
          if ((char *)((long)param_2 + (ulong)uVar12) == (char *)0x0) break;
          cVar9 = *(char *)((long)param_2 + (ulong)uVar12);
          cVar11 = '\x0f';
          if ((param_5 & 0xffff) != 0x7e5) {
            cVar11 = '\n';
          }
          if (cVar9 != -3) {
            cVar11 = cVar9;
          }
          goto LAB_00874fe8;
        }
        if (uVar12 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)*param_2;
      cVar11 = '\0';
      if ((*param_2 == 0) || (param_2 == puVar16)) goto LAB_00874fe8;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar16)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar16);
      if (lVar2 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar16));
      *(undefined4 *)(puVar7 + 0x150) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar15 = (int *)(lVar2 + 4);
      while (piVar15[-1] != -0x3e838358) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_00874fe4;
      }
      cVar11 = '\0';
      iVar5 = 0;
      if (*piVar15 != -1) {
        iVar5 = *piVar15;
      }
      *(int *)(puVar7 + 0x150) = iVar5;
      if (*param_2 == 0) goto LAB_00874fe8;
    } while( true );
  }
LAB_00874fe4:
  cVar11 = '\0';
LAB_00874fe8:
  cVar9 = FUN_00870ee0(param_2);
  if ((((cVar9 == '\0') && (cVar9 = FUN_00871280(param_2), cVar9 == '\0')) &&
      (cVar9 = FUN_00871620(param_2), cVar9 == '\0')) &&
     (cVar9 = FUN_008719c0(param_2), cVar9 == '\0')) {
    cVar9 = FUN_00871d60(param_2,(int)sVar4);
    if ((cVar9 == '\0') && (cVar9 = FUN_00872174(param_2,(int)sVar4), cVar9 == '\0')) {
      return false;
    }
  }
  if (cVar11 == -2) {
    cVar9 = FUN_00871620(param_2);
    if ((cVar9 != '\0') && (cVar9 = FUN_008719c0(param_2), cVar9 != '\0')) {
      uVar10 = FUN_00871620(param_2);
      *param_3 = uVar10;
      cVar9 = FUN_008719c0(param_2);
      *param_4 = cVar9;
      return cVar9 != '\0';
    }
    cVar9 = FUN_00871620(param_2);
    if ((cVar9 != '\0') && (cVar9 = FUN_00870ee0(param_2), cVar9 != '\0')) {
      uVar12 = FUN_00871620(param_2);
      *param_3 = (char)uVar12;
      if ((uVar12 & 0xff) == 0) {
        cVar9 = *param_4;
      }
      else {
        uVar17 = *(undefined8 *)PTR_DAT_04bb32e8;
        cVar9 = FUN_00871280(param_2);
        cVar11 = FUN_00870ee0(param_2);
        cVar9 = FUN_00a831ac(uVar17,param_5,uVar12,(int)cVar9,(int)cVar11);
        *param_4 = cVar9;
      }
LAB_008753a8:
      return '\0' < cVar9;
    }
  }
  else {
    iVar5 = (int)sVar4;
    cVar9 = FUN_00871d60(param_2,iVar5);
    if ((cVar9 == '\0') || (cVar9 = FUN_00872174(param_2,iVar5), cVar9 == '\0')) {
      cVar9 = FUN_00871620(param_2);
      if ((cVar9 != '\0') && (cVar9 = FUN_008719c0(param_2), cVar9 != '\0')) {
        uVar10 = FUN_00871620(param_2);
        *param_3 = uVar10;
        cVar9 = FUN_008719c0(param_2);
        goto LAB_008752ac;
      }
      cVar9 = FUN_00870ee0(param_2);
      if ((((cVar9 != '\0') || (cVar9 = FUN_008719c0(param_2), cVar9 != '\0')) &&
          ((cVar9 = FUN_00870ee0(param_2), cVar9 != '\0' ||
           (cVar9 = FUN_00871620(param_2), cVar9 != '\0')))) &&
         (cVar9 = FUN_00870ee0(param_2), cVar9 != '\0')) {
        uVar12 = FUN_00871620(param_2);
        *param_3 = (char)uVar12;
        if ((uVar12 & 0xff) != 0) {
          uVar17 = *(undefined8 *)PTR_DAT_04bb32e8;
          cVar9 = FUN_00871280(param_2);
          cVar11 = FUN_00870ee0(param_2);
          cVar9 = FUN_00a831ac(uVar17,param_5,uVar12,(int)cVar9,(int)cVar11);
          *param_4 = cVar9;
          goto LAB_008753a8;
        }
      }
    }
    else {
      cVar9 = FUN_00871d60(param_2,iVar5);
      if ((cVar9 != '\0') && (cVar9 = FUN_00872174(param_2,iVar5), cVar9 != '\0')) {
        uVar10 = FUN_00871d60(param_2,iVar5);
        *param_3 = uVar10;
        cVar9 = FUN_00872174(param_2,iVar5);
LAB_008752ac:
        *param_4 = cVar9;
        return true;
      }
    }
  }
switchD_00874f9c_caseD_3:
  return false;
}

