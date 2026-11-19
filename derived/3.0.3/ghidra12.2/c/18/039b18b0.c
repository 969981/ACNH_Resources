
void FUN_039b18b0(int *param_1,long param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  ulong uVar8;
  long lVar9;
  long local_10b0;
  char *local_10a8;
  long local_c98;
  char *local_c90;
  long local_880;
  char *local_878;
  long local_468;
  char *local_460;
  
  lVar9 = *(long *)(param_3 + 8) + 2;
  FUN_006e9454(&local_468,"%s_auto",lVar9);
  FUN_006e9454(&local_880,"%s_Auto",lVar9);
  FUN_006e9454(&local_c98,"%s_random",lVar9);
  FUN_006e9454(&local_10b0,"%s_Random",lVar9);
  if (*(short *)(param_2 + 0xe2) != 0) {
    uVar8 = 0;
LAB_039b1960:
    lVar9 = *(long *)(param_2 + 0x58) + uVar8 * 0x50;
    (**(code **)(local_c98 + 0x18))(&local_c98);
    cVar7 = *local_c90;
    if (cVar7 != '\0') {
      pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
      pcVar6 = local_c90;
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar7 != *pcVar5) {
          (**(code **)(local_10b0 + 0x18))(&local_10b0);
          cVar7 = *local_10a8;
          if (cVar7 != '\0') {
            pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
            pcVar6 = local_10a8;
            goto LAB_039b19e0;
          }
          break;
        }
        cVar7 = *pcVar6;
        pcVar5 = pcVar5 + 1;
      } while (cVar7 != '\0');
    }
    bVar4 = true;
    goto LAB_039b1a04;
  }
LAB_039b1ae4:
  if (*(short *)(param_2 + 0xe4) != 0) {
    uVar8 = 0;
LAB_039b1b10:
    lVar9 = *(long *)(param_2 + 0x68) + uVar8 * 0x70;
    (**(code **)(local_c98 + 0x18))(&local_c98);
    cVar7 = *local_c90;
    if (cVar7 != '\0') {
      pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
      pcVar6 = local_c90;
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar7 != *pcVar5) {
          (**(code **)(local_10b0 + 0x18))(&local_10b0);
          cVar7 = *local_10a8;
          if (cVar7 != '\0') {
            pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
            pcVar6 = local_10a8;
            goto LAB_039b1b90;
          }
          break;
        }
        cVar7 = *pcVar6;
        pcVar5 = pcVar5 + 1;
      } while (cVar7 != '\0');
    }
    bVar4 = true;
    goto LAB_039b1bb4;
  }
LAB_039b1c94:
  if (*(short *)(param_2 + 0xe6) == 0) {
    return;
  }
  uVar8 = 0;
LAB_039b1cc0:
  lVar9 = *(long *)(param_2 + 0x78) + uVar8 * 0x60;
  (**(code **)(local_c98 + 0x18))(&local_c98);
  cVar7 = *local_c90;
  if (cVar7 != '\0') {
    pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
    pcVar6 = local_c90;
    do {
      pcVar6 = pcVar6 + 1;
      if (cVar7 != *pcVar5) {
        (**(code **)(local_10b0 + 0x18))(&local_10b0);
        cVar7 = *local_10a8;
        if (cVar7 != '\0') {
          pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
          pcVar6 = local_10a8;
          goto LAB_039b1d40;
        }
        break;
      }
      cVar7 = *pcVar6;
      pcVar5 = pcVar5 + 1;
    } while (cVar7 != '\0');
  }
  bVar4 = true;
  goto LAB_039b1d64;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b19e0:
    pcVar6 = pcVar6 + 1;
    bVar4 = cVar7 == *pcVar5;
    if (!bVar4) break;
  }
LAB_039b1a04:
  (**(code **)(local_468 + 0x18))(&local_468);
  cVar7 = *local_460;
  if (cVar7 != '\0') {
    pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
    pcVar6 = local_460;
    do {
      pcVar6 = pcVar6 + 1;
      if (cVar7 != *pcVar5) {
        (**(code **)(local_880 + 0x18))(&local_880);
        cVar7 = *local_878;
        if (cVar7 != '\0') {
          pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
          pcVar6 = local_878;
          goto LAB_039b1a80;
        }
        break;
      }
      cVar7 = *pcVar6;
      pcVar5 = pcVar5 + 1;
    } while (cVar7 != '\0');
  }
LAB_039b1aa0:
  uVar2 = param_1[0xec];
  piVar1 = (int *)((long)(param_1 + 0xcc) + (ulong)uVar2);
  if (0x7f < uVar2) {
    piVar1 = param_1 + 0xcc;
  }
  param_1[0xec] = uVar2 + 1;
  *(bool *)piVar1 = bVar4;
  if (*param_1 < param_1[1]) {
    *(long *)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = lVar9;
    *param_1 = *param_1 + 1;
  }
LAB_039b1950:
  uVar8 = uVar8 + 1;
  if (*(ushort *)(param_2 + 0xe2) <= uVar8) goto LAB_039b1ae4;
  goto LAB_039b1960;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b1a80:
    pcVar6 = pcVar6 + 1;
    if (cVar7 != *pcVar5) {
      if (!bVar4) goto LAB_039b1950;
      break;
    }
  }
  goto LAB_039b1aa0;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b1b90:
    pcVar6 = pcVar6 + 1;
    bVar4 = cVar7 == *pcVar5;
    if (!bVar4) break;
  }
LAB_039b1bb4:
  (**(code **)(local_468 + 0x18))(&local_468);
  cVar7 = *local_460;
  if (cVar7 != '\0') {
    pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
    pcVar6 = local_460;
    do {
      pcVar6 = pcVar6 + 1;
      if (cVar7 != *pcVar5) {
        (**(code **)(local_880 + 0x18))(&local_880);
        cVar7 = *local_878;
        if (cVar7 != '\0') {
          pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
          pcVar6 = local_878;
          goto LAB_039b1c30;
        }
        break;
      }
      cVar7 = *pcVar6;
      pcVar5 = pcVar5 + 1;
    } while (cVar7 != '\0');
  }
LAB_039b1c50:
  uVar2 = param_1[0xec];
  piVar1 = (int *)((long)(param_1 + 0xcc) + (ulong)uVar2);
  if (0x7f < uVar2) {
    piVar1 = param_1 + 0xcc;
  }
  param_1[0xec] = uVar2 + 1;
  iVar3 = param_1[0x45];
  *(bool *)piVar1 = bVar4;
  if (param_1[0x44] < iVar3) {
    *(long *)(*(long *)(param_1 + 0x46) + (long)param_1[0x44] * 8) = lVar9;
    param_1[0x44] = param_1[0x44] + 1;
  }
LAB_039b1b00:
  uVar8 = uVar8 + 1;
  if (*(ushort *)(param_2 + 0xe4) <= uVar8) goto LAB_039b1c94;
  goto LAB_039b1b10;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b1c30:
    pcVar6 = pcVar6 + 1;
    if (cVar7 != *pcVar5) {
      if (!bVar4) goto LAB_039b1b00;
      break;
    }
  }
  goto LAB_039b1c50;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b1d40:
    pcVar6 = pcVar6 + 1;
    bVar4 = cVar7 == *pcVar5;
    if (!bVar4) break;
  }
LAB_039b1d64:
  (**(code **)(local_468 + 0x18))(&local_468);
  cVar7 = *local_460;
  if (cVar7 != '\0') {
    pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
    pcVar6 = local_460;
    do {
      pcVar6 = pcVar6 + 1;
      if (cVar7 != *pcVar5) {
        (**(code **)(local_880 + 0x18))(&local_880);
        cVar7 = *local_878;
        if (cVar7 != '\0') {
          pcVar5 = (char *)(*(long *)(lVar9 + 8) + 2);
          pcVar6 = local_878;
          goto LAB_039b1de0;
        }
        break;
      }
      cVar7 = *pcVar6;
      pcVar5 = pcVar5 + 1;
    } while (cVar7 != '\0');
  }
LAB_039b1e00:
  uVar2 = param_1[0xec];
  piVar1 = (int *)((long)(param_1 + 0xcc) + (ulong)uVar2);
  if (0x7f < uVar2) {
    piVar1 = param_1 + 0xcc;
  }
  param_1[0xec] = uVar2 + 1;
  iVar3 = param_1[0x89];
  *(bool *)piVar1 = bVar4;
  if (param_1[0x88] < iVar3) {
    *(long *)(*(long *)(param_1 + 0x8a) + (long)param_1[0x88] * 8) = lVar9;
    param_1[0x88] = param_1[0x88] + 1;
  }
LAB_039b1cb0:
  uVar8 = uVar8 + 1;
  if (*(ushort *)(param_2 + 0xe6) <= uVar8) {
    return;
  }
  goto LAB_039b1cc0;
  while( true ) {
    cVar7 = *pcVar6;
    pcVar5 = pcVar5 + 1;
    if (cVar7 == '\0') break;
LAB_039b1de0:
    pcVar6 = pcVar6 + 1;
    if (cVar7 != *pcVar5) {
      if (!bVar4) goto LAB_039b1cb0;
      break;
    }
  }
  goto LAB_039b1e00;
}

