
byte FUN_00875530(undefined8 param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined *local_80;
  long lStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  puVar8 = PTR_DAT_04bb3250;
  puVar7 = PTR_DAT_04bb3248;
  if (*param_2 != 0) {
    cVar10 = *PTR_DAT_04bb3248;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *puVar7 = 1;
        memset(puVar8,0xff,0x288);
      }
      else {
        uVar12 = *(uint *)(puVar8 + 0x148);
        if (-1 < (int)uVar12) {
          lVar14 = (ulong)uVar12 + (long)param_2;
          goto LAB_0087563c;
        }
        if (uVar12 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)*param_2;
      lVar14 = 0;
      if ((*param_2 == 0) || (param_2 == puVar16)) goto LAB_0087563c;
      lVar14 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar16)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar1 = (long)param_2 + (lVar14 - (long)puVar16);
      if (lVar1 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar16));
      *(undefined4 *)(puVar8 + 0x148) = 0xfffffffe;
      lVar14 = 0;
      if (uVar13 == 0) goto LAB_0087563c;
      piVar15 = (int *)(lVar1 + 4);
      while (piVar15[-1] != 0x443c0fb7) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          lVar14 = 0;
          goto LAB_0087563c;
        }
      }
      iVar6 = 0;
      if (*piVar15 != -1) {
        iVar6 = *piVar15;
      }
      *(int *)(puVar8 + 0x148) = iVar6;
    } while (*param_2 != 0);
  }
  lVar14 = 0;
LAB_0087563c:
  puVar8 = PTR_DAT_04bb3250;
  puVar7 = PTR_DAT_04bb3248;
  uVar12 = 0;
  lStack_78 = *(long *)PTR_PTR_04bb3260;
  if (lVar14 != 0) {
    lStack_78 = lVar14;
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  uVar3 = *param_2;
  if ((uVar3 != 0) && (param_2 != (uint *)(ulong)uVar3)) {
    puVar16 = (uint *)((long)param_2 - (long)(ulong)uVar3);
    uVar12 = 0;
    if (*puVar16 != 0) {
      uVar12 = puVar16[1];
      if ((uVar12 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar16 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar16 + lVar14 + (ulong)(ushort)puVar16[2] * 8;
        if (lVar14 != 0) {
          uVar2 = 0;
          if ((ulong)uVar12 != 0) {
            uVar2 = (uint)((ulong)((long)param_2 - lVar14) / (ulong)uVar12);
          }
          if (*puVar16 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < DAT_04ce9758) {
            uVar4 = *(ushort *)(DAT_04ce9760 + (long)(int)uVar2 * 2);
            uVar12 = (uint)uVar4;
            if (uVar4 != 3) {
              uVar12 = 0;
            }
            goto LAB_008756f0;
          }
        }
      }
      uVar12 = 0;
    }
  }
LAB_008756f0:
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
  bVar9 = 0;
  sVar5 = (short)param_3;
  switch(uVar12) {
  case 0:
    break;
  case 1:
    if ((param_3 & 0xffff) == 0x7e4) break;
    goto LAB_00875adc;
  case 2:
    if ((param_3 & 0xffff) != 0x7e5) goto LAB_00875adc;
    break;
  default:
    goto switchD_00875718_caseD_3;
  case 4:
    if ((param_3 - 0x7e6 & 0xffff) < 0xfffe) goto LAB_00875adc;
    break;
  case 5:
    if (sVar5 < 0x7e5) goto LAB_00875adc;
  }
  if (uVar3 != 0) {
    cVar10 = *PTR_DAT_04bb3248;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *puVar7 = 1;
        memset(puVar8,0xff,0x288);
      }
      else {
        uVar12 = *(uint *)(puVar8 + 0x150);
        if (-1 < (int)uVar12) {
          if ((char *)((long)param_2 + (ulong)uVar12) != (char *)0x0) {
            cVar10 = *(char *)((long)param_2 + (ulong)uVar12);
            cVar11 = '\x0f';
            if ((param_3 & 0xffff) != 0x7e5) {
              cVar11 = '\n';
            }
            if (cVar10 != -3) {
              cVar11 = cVar10;
            }
            goto LAB_00875878;
          }
          break;
        }
        if (uVar12 != 0xffffffff) break;
      }
      puVar16 = (uint *)(ulong)*param_2;
      cVar11 = '\0';
      if ((*param_2 == 0) || (param_2 == puVar16)) goto LAB_00875878;
      lVar14 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar16)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)param_2 + (lVar14 - (long)puVar16);
      if (lVar14 == 0) break;
      uVar13 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar16));
      *(undefined4 *)(puVar8 + 0x150) = 0xfffffffe;
      if (uVar13 == 0) break;
      piVar15 = (int *)(lVar14 + 4);
      while (piVar15[-1] != -0x3e838358) {
        piVar15 = piVar15 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) goto LAB_00875874;
      }
      iVar6 = 0;
      if (*piVar15 != -1) {
        iVar6 = *piVar15;
      }
      *(int *)(puVar8 + 0x150) = iVar6;
      if (*param_2 == 0) break;
    } while( true );
  }
LAB_00875874:
  cVar11 = '\0';
LAB_00875878:
  cVar10 = FUN_00870ee0(param_2);
  if ((((cVar10 == '\0') && (cVar10 = FUN_00871280(param_2), cVar10 == '\0')) &&
      (cVar10 = FUN_00871620(param_2), cVar10 == '\0')) &&
     (cVar10 = FUN_008719c0(param_2), cVar10 == '\0')) {
    cVar10 = FUN_00871d60(param_2,(int)sVar5);
    if ((cVar10 == '\0') && (cVar10 = FUN_00872174(param_2,(int)sVar5), cVar10 == '\0')) {
      uVar13 = FUN_00710cb0(&local_80,&DAT_04ce96f8);
      if ((uVar13 & 1) == 0) {
        uVar13 = FUN_00710cb0(&local_80,&DAT_04ce9708);
        if ((uVar13 & 1) == 0) {
          uVar13 = FUN_00710cb0(&local_80,&DAT_04ce9718);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_00710cb0(&local_80,&DAT_04ce9728);
            if ((uVar13 & 1) == 0) {
              uVar13 = FUN_00710cb0(&local_80,&DAT_04ce9738);
              bVar9 = 0;
              if (((uVar13 & 1) != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248)) {
                local_70 = PTR_DAT_04bb2020 + 0x10;
                pcStack_68 = "TkkFirstLiveReserved";
                bVar9 = FUN_0273f0a0(&local_70);
              }
            }
            else {
              bVar9 = FUN_00874300(param_3,param_4,param_5);
            }
          }
          else {
            bVar9 = FUN_008732d0(param_1,param_3,param_4,param_5);
          }
        }
        else {
          bVar9 = FUN_0087312c(uVar13,param_3,param_4,param_5);
        }
      }
      else {
        bVar9 = FUN_008727d0(uVar13,param_3,param_4,param_5);
      }
      goto switchD_00875718_caseD_3;
    }
  }
  iVar6 = (int)sVar5;
  cVar10 = FUN_00871d60(param_2,iVar6);
  if (((cVar10 == '\0') || (cVar10 = FUN_00872174(param_2,iVar6), cVar11 == -2)) || (cVar10 == '\0')
     ) {
    cVar10 = FUN_00871620(param_2);
    if ((cVar10 == '\0') || (cVar10 = FUN_008719c0(param_2), cVar10 == '\0')) {
      cVar10 = FUN_00870ee0(param_2);
      if ((cVar10 == '\0') && (cVar10 = FUN_008719c0(param_2), cVar10 == '\0')) {
        uVar12 = FUN_00871620(param_2);
        if ((uVar12 & 0xff) == (param_4 & 0xff)) {
LAB_00875ab4:
          uVar12 = nn::time::GetDayOfWeek(iVar6,(int)(char)param_4,(int)(char)param_5);
          local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar12);
          cVar10 = FUN_00871280(param_2);
          bVar9 = (uVar12 & 0xff) == (int)cVar10;
          goto switchD_00875718_caseD_3;
        }
      }
      else {
        cVar10 = FUN_00870ee0(param_2);
        if ((cVar10 == '\0') && (cVar10 = FUN_00871620(param_2), cVar10 == '\0')) {
          uVar12 = FUN_008719c0(param_2);
          if ((uVar12 & 0xff) == (param_5 & 0xff)) goto LAB_00875ab4;
        }
        else {
          cVar10 = FUN_00870ee0(param_2);
          if ((cVar10 != '\0') &&
             (uVar12 = FUN_00871620(param_2), (uVar12 & 0xff) == (param_4 & 0xff))) {
            uVar17 = *(undefined8 *)PTR_DAT_04bb32e8;
            cVar10 = FUN_00871280(param_2);
            cVar11 = FUN_00870ee0(param_2);
            uVar12 = FUN_00a831ac(uVar17,param_3,param_4,(int)cVar10,(int)cVar11);
            bVar9 = (uVar12 & 0xff) == (int)(char)param_5;
            goto switchD_00875718_caseD_3;
          }
        }
      }
    }
    else {
      uVar12 = FUN_00871620(param_2);
      if ((uVar12 & 0xff) == (param_4 & 0xff)) {
        uVar12 = FUN_008719c0(param_2);
        uVar12 = uVar12 & 0xff;
        goto LAB_008759b4;
      }
    }
  }
  else {
    cVar10 = FUN_00871d60(param_2,iVar6);
    if (((cVar10 != '\0') && (cVar10 = FUN_00872174(param_2,iVar6), cVar10 != '\0')) &&
       (cVar10 = FUN_00871d60(param_2,iVar6), (int)cVar10 == (param_4 & 0xff))) {
      cVar10 = FUN_00872174(param_2,iVar6);
      uVar12 = (uint)cVar10;
LAB_008759b4:
      bVar9 = uVar12 == (param_5 & 0xff);
      goto switchD_00875718_caseD_3;
    }
  }
LAB_00875adc:
  bVar9 = 0;
switchD_00875718_caseD_3:
  return bVar9 & 1;
}

