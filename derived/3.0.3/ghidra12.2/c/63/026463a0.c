
void FUN_026463a0(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  CalendarTime *pCVar12;
  CalendarTime *pCVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  
  uVar14 = 399;
  do {
    puVar15 = (uint *)((long)param_2 + 0xaf04);
    uVar16 = uVar14;
    do {
      uVar8 = puVar15[-1];
      plVar2 = param_2 + (ulong)uVar8 * 0xe;
      if (399 < uVar8) {
        plVar2 = param_2;
      }
      uVar9 = *puVar15;
      plVar3 = param_2 + (ulong)uVar9 * 0xe;
      if (399 < uVar9) {
        plVar3 = param_2;
      }
      if (*plVar2 == 0) {
LAB_02646440:
        if ((*plVar3 == 0) || (*(int *)((long)plVar3 + 0x2c) == 0 || (int)plVar3[2] == 0))
        goto LAB_026463f4;
        if (*plVar2 != 0) {
          iVar10 = *(int *)((long)plVar2 + 0x2c);
          iVar11 = (int)plVar2[2];
          goto LAB_02646468;
        }
LAB_0264647c:
        if (*(int *)((long)plVar3 + 0x2c) == 0 || (int)plVar3[2] == 0) goto LAB_026464a8;
LAB_026463f0:
        puVar15[-1] = uVar9;
        *puVar15 = uVar8;
      }
      else {
        iVar10 = *(int *)((long)plVar2 + 0x2c);
        iVar11 = (int)plVar2[2];
        if (iVar10 == 0 || iVar11 == 0) goto LAB_02646440;
LAB_02646468:
        if (iVar10 == 0 || iVar11 == 0) {
          if (*plVar3 != 0) goto LAB_0264647c;
        }
        else if (((*plVar3 == 0) || (*(int *)((long)plVar3 + 0x2c) == 0)) || ((int)plVar3[2] == 0))
        goto LAB_026463f4;
LAB_026464a8:
        bVar4 = *(byte *)((long)plVar3 + 0x6e);
        if ((*(byte *)((long)plVar2 + 0x6e) & 1) == 0) {
          if ((bVar4 & 1) == 0) goto LAB_0264651c;
          goto LAB_026463f0;
        }
        if ((bVar4 & 1) != 0) {
          bVar1 = *(byte *)((long)plVar2 + 0x6e) & 6;
          bVar4 = bVar4 & 6;
          if (bVar1 == 6) {
            if (bVar4 == 6) goto LAB_0264651c;
          }
          else {
            if (bVar4 == 6) goto LAB_026463f0;
            if (bVar1 == 4) {
              if (bVar4 != 4) goto LAB_026463f4;
            }
            else {
              if (bVar4 == 4) goto LAB_026463f0;
              if (bVar1 == 2) {
                if (bVar4 != 2) goto LAB_026463f4;
              }
              else if (bVar4 == 2) goto LAB_026463f0;
            }
LAB_0264651c:
            pCVar12 = (CalendarTime *)(plVar2 + 10);
            if (*(short *)pCVar12 == 0) {
LAB_02646540:
              pCVar12 = (CalendarTime *)(plVar2 + 9);
            }
            else {
              lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(plVar2 + 9));
              lVar7 = nn::time::ToPosixTimeFromUtc(pCVar12);
              if (lVar7 < lVar6) goto LAB_02646540;
              nn::time::ToPosixTimeFromUtc(pCVar12);
            }
            pCVar13 = (CalendarTime *)(plVar3 + 10);
            if (*(short *)pCVar13 == 0) {
LAB_02646578:
              pCVar13 = (CalendarTime *)(plVar3 + 9);
            }
            else {
              lVar6 = nn::time::ToPosixTimeFromUtc((CalendarTime *)(plVar3 + 9));
              lVar7 = nn::time::ToPosixTimeFromUtc(pCVar13);
              if (lVar7 < lVar6) goto LAB_02646578;
              nn::time::ToPosixTimeFromUtc(pCVar13);
            }
            lVar6 = nn::time::ToPosixTimeFromUtc(pCVar12);
            lVar7 = nn::time::ToPosixTimeFromUtc(pCVar13);
            if ((lVar6 <= lVar7) && (lVar7 = nn::time::ToPosixTimeFromUtc(pCVar13), lVar7 != lVar6))
            {
              uVar8 = puVar15[-1];
              uVar9 = *puVar15;
              goto LAB_026463f0;
            }
          }
        }
      }
LAB_026463f4:
      uVar16 = uVar16 - 1;
      puVar15 = puVar15 + 1;
    } while (uVar16 != 0);
    bVar5 = uVar14 < 2;
    uVar14 = uVar14 - 1;
    if (bVar5) {
      return;
    }
  } while( true );
}

