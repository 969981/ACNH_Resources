
void FUN_03ede310(long *param_1,int param_2,int param_3,long param_4,long param_5,int param_6)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  long local_68;
  
  if ((int)(uint)*(ushort *)(param_4 + 0x4e) <= param_3 + 1) {
    iVar17 = 0;
LAB_03ede7f0:
    *(char *)(param_5 + 0x31) = (char)iVar17;
    return;
  }
  lVar12 = (long)param_2;
  lVar1 = lVar12 + (long)param_2 * 2;
  lVar18 = (long)param_3 + 1;
  lVar8 = (long)(int)lVar1;
  iVar17 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
LAB_03ede3b0:
  lVar15 = 0;
  plVar3 = (long *)(*(long *)(param_4 + 0x30) + lVar18 * 0x40);
  local_68 = *plVar3 + 2;
  do {
    lVar9 = *plVar3 + lVar15;
    if (*(char *)(lVar9 + 2) == '\0') goto LAB_03ede414;
    if (*(char *)(lVar9 + 3) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_03ede414;
    }
    if (*(char *)(lVar9 + 4) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_03ede414;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_03ede414:
  local_70 = puVar2;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar9 = 0;
  do {
    iVar14 = (int)lVar15;
    if (*(char *)(param_1[1] + lVar9) == '\0') {
LAB_03ede464:
      iVar7 = (int)lVar9;
      if (iVar14 < iVar7) goto LAB_03ede3a0;
LAB_03ede47c:
      if ((int)lVar9 < 1) goto LAB_03ede510;
      uVar16 = 0;
      goto LAB_03ede494;
    }
    lVar13 = param_1[1] + lVar9;
    if (*(char *)(lVar13 + 1) == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_03ede464;
    }
    if (*(char *)(lVar13 + 2) == '\0') {
      lVar9 = lVar9 + 2;
      iVar7 = (int)lVar9;
      if (iVar7 <= iVar14) goto LAB_03ede47c;
      goto LAB_03ede3a0;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  if (-1 < iVar14) {
LAB_03ede510:
    (**(code **)(*param_1 + 0x18))(param_1);
LAB_03ede538:
    local_80 = PTR_DAT_04bb2020 + 0x10;
    local_78 = "_";
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar15 = 0;
    do {
      if (*(char *)(local_68 + lVar15) == '\0') goto LAB_03ede5ac;
      if (*(char *)(local_68 + lVar15 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ede5ac;
      }
      if (*(char *)(local_68 + lVar15 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ede5ac;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ede5ac:
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar9 = 0;
    do {
      iVar14 = (int)lVar15;
      if (local_78[lVar9] == '\0') {
LAB_03ede5f8:
        uVar5 = iVar14 - (int)lVar9;
        if ((int)uVar5 < 0) goto LAB_03ede6a0;
LAB_03ede610:
        uVar16 = (ulong)uVar5;
        if ((int)lVar9 < 1) goto LAB_03ede690;
        goto LAB_03ede620;
      }
      if (local_78[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03ede5f8;
      }
      if (local_78[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        uVar5 = iVar14 - (int)lVar9;
        if (-1 < (int)uVar5) goto LAB_03ede610;
        goto LAB_03ede6a0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (-1 < iVar14) {
LAB_03ede690:
      (**(code **)(local_80 + 0x18))(&local_80);
    }
LAB_03ede6a0:
    (**(code **)(local_70 + 0x18))(&local_70);
    cVar6 = *(char *)((long)plVar3 + 0x14);
    if (cVar6 == '\x02') {
      *(long *)(param_5 + (ulong)*(byte *)(param_5 + 0x30)) = *(long *)(plVar3[1] + lVar12 * 8) + 2;
      lVar15 = (long)iVar17;
      iVar17 = iVar17 + 1;
      *(undefined1 *)(param_5 + lVar15 + 0x28) = 4;
      *(undefined1 *)(param_5 + lVar15 + 0x20) = *(undefined1 *)(param_5 + 0x30);
      *(char *)(param_5 + 0x30) = *(char *)(param_5 + 0x30) + '\b';
      cVar6 = *(char *)((long)plVar3 + 0x14);
    }
    if (cVar6 == '\x01') {
      if ((int)plVar3[2] == param_6) {
        uVar11 = 3;
        *(undefined4 *)(param_5 + (ulong)*(byte *)(param_5 + 0x30)) =
             *(undefined4 *)(plVar3[1] + lVar12 * 4);
        cVar6 = '\x04';
      }
      else {
        puVar4 = (undefined4 *)(param_5 + (ulong)*(byte *)(param_5 + 0x30));
        *puVar4 = *(undefined4 *)(plVar3[1] + lVar1 * 4);
        puVar4[1] = *(undefined4 *)(plVar3[1] + (lVar8 + 1) * 4);
        uVar11 = 6;
        puVar4[2] = *(undefined4 *)(plVar3[1] + (lVar8 + 2) * 4);
        cVar6 = '\f';
      }
      lVar15 = (long)iVar17;
      iVar17 = iVar17 + 1;
      *(undefined1 *)(param_5 + lVar15 + 0x28) = uVar11;
      *(undefined1 *)(param_5 + lVar15 + 0x20) = *(undefined1 *)(param_5 + 0x30);
      *(char *)(param_5 + 0x30) = *(char *)(param_5 + 0x30) + cVar6;
      cVar6 = *(char *)((long)plVar3 + 0x14);
    }
    if (cVar6 == '\0') {
      *(undefined4 *)(param_5 + (ulong)*(byte *)(param_5 + 0x30)) =
           *(undefined4 *)(plVar3[1] + lVar12 * 4);
      lVar15 = (long)iVar17;
      iVar17 = iVar17 + 1;
      *(undefined1 *)(param_5 + lVar15 + 0x28) = 2;
      *(undefined1 *)(param_5 + lVar15 + 0x20) = *(undefined1 *)(param_5 + 0x30);
      *(char *)(param_5 + 0x30) = *(char *)(param_5 + 0x30) + '\x04';
    }
  }
  goto LAB_03ede3a0;
  while( true ) {
    pcVar10 = (char *)param_1[1];
    lVar13 = lVar9;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (*(char *)(lVar15 + uVar16) != *pcVar10) break;
      if (*(char *)(lVar15 + uVar16) == '\0') goto LAB_03ede524;
      lVar15 = lVar15 + 1;
      pcVar10 = pcVar10 + 1;
      if (lVar13 == 0) goto LAB_03ede524;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (iVar14 - iVar7) + 1) break;
LAB_03ede494:
    lVar15 = local_68;
    pcVar10 = (char *)(local_68 + uVar16);
    (**(code **)(*param_1 + 0x18))(param_1);
    if (pcVar10 == (char *)param_1[1]) {
LAB_03ede524:
      if ((int)uVar16 != -1) goto LAB_03ede538;
      break;
    }
  }
LAB_03ede3a0:
  lVar18 = lVar18 + 1;
  if ((long)(ulong)*(ushort *)(param_4 + 0x4e) <= lVar18) goto LAB_03ede7f0;
  goto LAB_03ede3b0;
LAB_03ede620:
  lVar15 = local_68;
  pcVar10 = (char *)(local_68 + uVar16);
  (**(code **)(local_80 + 0x18))(&local_80);
  if (pcVar10 == local_78) goto LAB_03ede6a0;
  pcVar10 = local_78;
  lVar13 = lVar9;
  while( true ) {
    lVar13 = lVar13 + -1;
    if (*(char *)(lVar15 + uVar16) != *pcVar10) break;
    if (*(char *)(lVar15 + uVar16) == '\0') goto LAB_03ede6a0;
    lVar15 = lVar15 + 1;
    pcVar10 = pcVar10 + 1;
    if (lVar13 == 0) goto LAB_03ede6a0;
  }
  iVar14 = (int)uVar16;
  uVar16 = uVar16 - 1;
  if (iVar14 < 1) goto LAB_03ede6a0;
  goto LAB_03ede620;
}

