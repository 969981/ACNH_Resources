
undefined8 FUN_01b51200(undefined8 param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  char *pcVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b512ec;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b512ec;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b512ec;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b512ec;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b512ec:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334fa0 + 0x18))(&DAT_05334fa0);
  (**(code **)(DAT_05334fa0 + 0x18))(&DAT_05334fa0);
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (DAT_05334fa8 == pcVar3) {
    return 1;
  }
  if (*DAT_05334fa8 == *pcVar3) {
    if (*DAT_05334fa8 == '\0') {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar7 = uVar10;
      if ((uVar7 == 0x80000) || (DAT_05334fa8[uVar7 + 1] != pcVar3[uVar7 + 1])) goto LAB_01b51398;
      if (DAT_05334fa8[uVar7 + 1] == '\0') goto LAB_01b51390;
      if (DAT_05334fa8[uVar7 + 2] != pcVar3[uVar7 + 2]) goto LAB_01b51398;
      uVar10 = uVar7 + 2;
    } while (DAT_05334fa8[uVar7 + 2] != '\0');
    uVar7 = uVar7 + 1;
LAB_01b51390:
    if (uVar7 < 0x80000) {
      return 1;
    }
  }
LAB_01b51398:
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b5146c;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b5146c;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b5146c;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b5146c;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b5146c:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334fb0 + 0x18))(&DAT_05334fb0);
  (**(code **)(DAT_05334fb0 + 0x18))(&DAT_05334fb0);
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (DAT_05334fb8 == pcVar3) {
    return 1;
  }
  if (*DAT_05334fb8 == *pcVar3) {
    if (*DAT_05334fb8 == '\0') {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar7 = uVar10;
      if ((uVar7 == 0x80000) || (DAT_05334fb8[uVar7 + 1] != pcVar3[uVar7 + 1])) goto LAB_01b51518;
      if (DAT_05334fb8[uVar7 + 1] == '\0') goto LAB_01b51510;
      if (DAT_05334fb8[uVar7 + 2] != pcVar3[uVar7 + 2]) goto LAB_01b51518;
      uVar10 = uVar7 + 2;
    } while (DAT_05334fb8[uVar7 + 2] != '\0');
    uVar7 = uVar7 + 1;
LAB_01b51510:
    if (uVar7 < 0x80000) {
      return 1;
    }
  }
LAB_01b51518:
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b515e8;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b515e8;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b515e8;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b515e8;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b515e8:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334fc0 + 0x18))(&DAT_05334fc0);
  (**(code **)(DAT_05334fc0 + 0x18))(&DAT_05334fc0);
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (DAT_05334fc8 == pcVar3) {
    return 1;
  }
  if (*DAT_05334fc8 == *pcVar3) {
    if (*DAT_05334fc8 == '\0') {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar7 = uVar10;
      if ((uVar7 == 0x80000) || (DAT_05334fc8[uVar7 + 1] != pcVar3[uVar7 + 1])) goto LAB_01b5168c;
      if (DAT_05334fc8[uVar7 + 1] == '\0') goto LAB_01b51684;
      if (DAT_05334fc8[uVar7 + 2] != pcVar3[uVar7 + 2]) goto LAB_01b5168c;
      uVar10 = uVar7 + 2;
    } while (DAT_05334fc8[uVar7 + 2] != '\0');
    uVar7 = uVar7 + 1;
LAB_01b51684:
    if (uVar7 < 0x80000) {
      return 1;
    }
  }
LAB_01b5168c:
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b51758;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b51758;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b51758;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b51758;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b51758:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334fd0 + 0x18))(&DAT_05334fd0);
  (**(code **)(DAT_05334fd0 + 0x18))(&DAT_05334fd0);
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (DAT_05334fd8 == pcVar3) {
    return 1;
  }
  if (*DAT_05334fd8 == *pcVar3) {
    if (*DAT_05334fd8 == '\0') {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar7 = uVar10;
      if ((uVar7 == 0x80000) || (DAT_05334fd8[uVar7 + 1] != pcVar3[uVar7 + 1])) goto LAB_01b517fc;
      if (DAT_05334fd8[uVar7 + 1] == '\0') goto LAB_01b517f4;
      if (DAT_05334fd8[uVar7 + 2] != pcVar3[uVar7 + 2]) goto LAB_01b517fc;
      uVar10 = uVar7 + 2;
    } while (DAT_05334fd8[uVar7 + 2] != '\0');
    uVar7 = uVar7 + 1;
LAB_01b517f4:
    if (uVar7 < 0x80000) {
      return 1;
    }
  }
LAB_01b517fc:
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b518c8;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b518c8;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b518c8;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b518c8;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b518c8:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334fe0 + 0x18))(&DAT_05334fe0);
  (**(code **)(DAT_05334fe0 + 0x18))(&DAT_05334fe0);
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (DAT_05334fe8 == pcVar3) {
    return 1;
  }
  if (*DAT_05334fe8 == *pcVar3) {
    if (*DAT_05334fe8 == '\0') {
      return 1;
    }
    uVar10 = 0;
    do {
      uVar7 = uVar10;
      if ((uVar7 == 0x80000) || (DAT_05334fe8[uVar7 + 1] != pcVar3[uVar7 + 1])) goto LAB_01b5196c;
      if (DAT_05334fe8[uVar7 + 1] == '\0') goto LAB_01b51964;
      if (DAT_05334fe8[uVar7 + 2] != pcVar3[uVar7 + 2]) goto LAB_01b5196c;
      uVar10 = uVar7 + 2;
    } while (DAT_05334fe8[uVar7 + 2] != '\0');
    uVar7 = uVar7 + 1;
LAB_01b51964:
    if (uVar7 < 0x80000) {
      return 1;
    }
  }
LAB_01b5196c:
  if (*param_2 != 0) {
    cVar8 = *PTR_DAT_04bc0640;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 0x24);
        if (-1 < (int)uVar4) {
          pcVar9 = (char *)((ulong)uVar4 + (long)param_2);
          goto LAB_01b51a38;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*param_2;
      pcVar9 = (char *)0x0;
      if ((*param_2 == 0) || (param_2 == puVar11)) goto LAB_01b51a38;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar11));
      *(undefined4 *)(puVar6 + 0x24) = 0xfffffffe;
      pcVar9 = (char *)0x0;
      if (uVar10 == 0) goto LAB_01b51a38;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x7840ff18) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          pcVar9 = (char *)0x0;
          goto LAB_01b51a38;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 0x24) = iVar1;
    } while (*param_2 != 0);
  }
  pcVar9 = (char *)0x0;
LAB_01b51a38:
  pcVar3 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar3 = pcVar9;
  }
  (**(code **)(DAT_05334ff0 + 0x18))(&DAT_05334ff0);
  (**(code **)(DAT_05334ff0 + 0x18))(&DAT_05334ff0);
  if (DAT_05334ff8 != pcVar3) {
    if (*DAT_05334ff8 != *pcVar3) {
      return 0;
    }
    if (*DAT_05334ff8 != '\0') {
      uVar10 = 0;
      do {
        uVar7 = uVar10;
        if (uVar7 == 0x80000) {
          return 0;
        }
        if (DAT_05334ff8[uVar7 + 1] != pcVar3[uVar7 + 1]) {
          return 0;
        }
        if (DAT_05334ff8[uVar7 + 1] == '\0') goto LAB_01b51ad4;
        if (DAT_05334ff8[uVar7 + 2] != pcVar3[uVar7 + 2]) {
          return 0;
        }
        uVar10 = uVar7 + 2;
      } while (DAT_05334ff8[uVar7 + 2] != '\0');
      uVar7 = uVar7 + 1;
LAB_01b51ad4:
      if (0x7ffff < uVar7) {
        return 0;
      }
    }
  }
  return 1;
}

