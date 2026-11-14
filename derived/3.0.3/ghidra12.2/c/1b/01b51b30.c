
undefined8 FUN_01b51b30(undefined8 param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  char *pcVar13;
  
  puVar8 = PTR_DAT_04bc0600;
  puVar7 = PTR_DAT_04bc05f8;
  uVar4 = *param_2;
  if (uVar4 != 0) {
    cVar10 = *PTR_DAT_04bc05f8;
    do {
      if (cVar10 == '\0') {
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        cVar10 = '\x01';
        *(undefined4 *)(puVar8 + 8) = 0xffffffff;
        uVar4 = *param_2;
        *puVar7 = 1;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 8);
        if (-1 < (int)uVar5) {
          pcVar13 = (char *)((ulong)uVar5 + (long)param_2);
          goto LAB_01b51c2c;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar6 = (uint *)(ulong)uVar4;
      pcVar13 = (char *)0x0;
      if ((puVar6 == (uint *)0x0) || (pcVar13 = (char *)0x0, param_2 == puVar6)) goto LAB_01b51c2c;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar6)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar6);
      pcVar13 = (char *)0x0;
      if (lVar2 == 0) goto LAB_01b51c2c;
      uVar11 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar6));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01b51c28;
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar8 + 8) = iVar1;
      uVar4 = *param_2;
      if (uVar4 == 0) break;
    } while( true );
  }
LAB_01b51c28:
  pcVar13 = (char *)0x0;
LAB_01b51c2c:
  pcVar3 = PTR_DAT_04c485d0;
  if (pcVar13 != (char *)0x0) {
    pcVar3 = pcVar13;
  }
  (**(code **)(DAT_05335000 + 0x18))(&DAT_05335000);
  (**(code **)(DAT_05335000 + 0x18))(&DAT_05335000);
  puVar8 = PTR_DAT_04bc0600;
  puVar7 = PTR_DAT_04bc05f8;
  if (DAT_05335008 == pcVar3) {
    return 1;
  }
  if (*DAT_05335008 == *pcVar3) {
    if (*DAT_05335008 == '\0') {
      return 1;
    }
    uVar11 = 0;
    do {
      uVar9 = uVar11;
      if ((uVar9 == 0x80000) || (DAT_05335008[uVar9 + 1] != pcVar3[uVar9 + 1])) goto LAB_01b51cd8;
      if (DAT_05335008[uVar9 + 1] == '\0') goto LAB_01b51cd0;
      if (DAT_05335008[uVar9 + 2] != pcVar3[uVar9 + 2]) goto LAB_01b51cd8;
      uVar11 = uVar9 + 2;
    } while (DAT_05335008[uVar9 + 2] != '\0');
    uVar9 = uVar9 + 1;
LAB_01b51cd0:
    if (uVar9 < 0x80000) {
      return 1;
    }
  }
LAB_01b51cd8:
  uVar4 = *param_2;
  if (uVar4 != 0) {
    cVar10 = *PTR_DAT_04bc05f8;
    do {
      if (cVar10 == '\0') {
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        cVar10 = '\x01';
        *(undefined4 *)(puVar8 + 8) = 0xffffffff;
        uVar4 = *param_2;
        *puVar7 = 1;
      }
      else {
        uVar5 = *(uint *)(puVar8 + 8);
        if (-1 < (int)uVar5) {
          pcVar13 = (char *)((ulong)uVar5 + (long)param_2);
          goto LAB_01b51dbc;
        }
        if (uVar5 != 0xffffffff) break;
      }
      puVar6 = (uint *)(ulong)uVar4;
      pcVar13 = (char *)0x0;
      if ((puVar6 == (uint *)0x0) || (pcVar13 = (char *)0x0, param_2 == puVar6)) goto LAB_01b51dbc;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar6)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar6);
      pcVar13 = (char *)0x0;
      if (lVar2 == 0) goto LAB_01b51dbc;
      uVar11 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar6));
      *(undefined4 *)(puVar8 + 8) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01b51db8;
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar8 + 8) = iVar1;
      uVar4 = *param_2;
      if (uVar4 == 0) break;
    } while( true );
  }
LAB_01b51db8:
  pcVar13 = (char *)0x0;
LAB_01b51dbc:
  pcVar3 = PTR_DAT_04c485d0;
  if (pcVar13 != (char *)0x0) {
    pcVar3 = pcVar13;
  }
  (**(code **)(DAT_05335010 + 0x18))(&DAT_05335010);
  (**(code **)(DAT_05335010 + 0x18))(&DAT_05335010);
  if (DAT_05335018 != pcVar3) {
    if (*DAT_05335018 != *pcVar3) {
      return 0;
    }
    if (*DAT_05335018 != '\0') {
      uVar11 = 0;
      do {
        uVar9 = uVar11;
        if (uVar9 == 0x80000) {
          return 0;
        }
        if (DAT_05335018[uVar9 + 1] != pcVar3[uVar9 + 1]) {
          return 0;
        }
        if (DAT_05335018[uVar9 + 1] == '\0') goto LAB_01b51e60;
        if (DAT_05335018[uVar9 + 2] != pcVar3[uVar9 + 2]) {
          return 0;
        }
        uVar11 = uVar9 + 2;
      } while (DAT_05335018[uVar9 + 2] != '\0');
      uVar9 = uVar9 + 1;
LAB_01b51e60:
      if (0x7ffff < uVar9) {
        return 0;
      }
    }
  }
  return 1;
}

