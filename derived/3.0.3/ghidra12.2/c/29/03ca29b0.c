
/* WARNING: Type propagation algorithm not settling */

bool FUN_03ca29b0(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  char *pcVar5;
  long lVar6;
  byte *pbVar7;
  char cVar8;
  int iVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *local_40;
  byte *local_38;
  
  pcVar12 = *(char **)(param_2 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcVar5 = (char *)param_1[1];
  cVar8 = *pcVar5;
  if (cVar8 != '\0') {
    pcVar11 = pcVar12;
    do {
      pcVar5 = pcVar5 + 1;
      if (*pcVar11 != cVar8) {
        return false;
      }
      cVar8 = *pcVar5;
      pcVar11 = pcVar11 + 1;
    } while (cVar8 != '\0');
  }
  local_38 = (byte *)pcVar12;
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar4 = PTR_PTR_04bb2238;
  uVar10 = 0;
  do {
    if (*(char *)(param_1[1] + uVar10) == '\0') goto LAB_03ca2a60;
    lVar6 = param_1[1] + uVar10;
    if (*(char *)(lVar6 + 1) == '\0') {
      uVar10 = uVar10 + 1;
      goto LAB_03ca2a60;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      uVar10 = uVar10 + 2;
      goto LAB_03ca2a60;
    }
    uVar10 = uVar10 + 3;
  } while (uVar10 != 0x80001);
  uVar10 = 0;
LAB_03ca2a60:
  lVar6 = 0;
  do {
    if (pcVar12[lVar6] == '\0') goto LAB_03ca2aa0;
    if (pcVar12[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03ca2aa0;
    }
    if (pcVar12[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_03ca2aa0;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_03ca2aa0:
  local_38 = *(byte **)(PTR_PTR_04bb2238 + 8);
  pbVar7 = local_38;
  if ((int)uVar10 <= (int)lVar6 && -1 < (int)uVar10) {
    pbVar7 = (byte *)(pcVar12 + (uVar10 & 0xffffffff));
  }
  bVar2 = *pbVar7;
  if (bVar2 == 0) {
    return false;
  }
  lVar6 = 0;
  do {
    if (pbVar7[lVar6] == 0) {
LAB_03ca2b10:
      pbVar1 = pbVar7;
      if ((int)lVar6 < 0) {
        pbVar1 = PTR_DAT_04bb2120;
      }
      bVar2 = *pbVar1;
      break;
    }
    if (pbVar7[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_03ca2b10;
    }
    if (pbVar7[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_03ca2b10;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if ((bVar2 != 0x5e) && (bVar2 != 0x2b)) {
    return false;
  }
  lVar6 = 0;
  do {
    if (pbVar7[lVar6] == 0) {
LAB_03ca2b70:
      iVar9 = (int)lVar6;
joined_r0x03ca2b74:
      if (0 < iVar9) {
        local_38 = pbVar7 + 1;
      }
      break;
    }
    if (pbVar7[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_03ca2b70;
    }
    if (pbVar7[lVar6 + 2] == 0) {
      iVar9 = (int)lVar6 + 2;
      goto joined_r0x03ca2b74;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  bVar2 = *local_38;
  if (bVar2 == 0) {
    return false;
  }
  lVar6 = 0;
  do {
    if (local_38[lVar6] == 0) {
LAB_03ca2be4:
      pbVar7 = local_38;
      if ((int)lVar6 < 0) {
        pbVar7 = PTR_DAT_04bb2120;
      }
      bVar3 = *pbVar7;
      break;
    }
    if (local_38[lVar6 + 1] == 0) {
      lVar6 = lVar6 + 1;
      goto LAB_03ca2be4;
    }
    if (local_38[lVar6 + 2] == 0) {
      lVar6 = lVar6 + 2;
      goto LAB_03ca2be4;
    }
    lVar6 = lVar6 + 3;
    bVar3 = bVar2;
  } while (lVar6 != 0x80001);
  if (bVar3 < 0x61) {
LAB_03ca2c98:
    FUN_006bd3a4(&local_40);
    lVar6 = 0;
    do {
      pbVar7 = local_38;
      if (local_38[lVar6] == 0) {
LAB_03ca2ce8:
        if ((int)lVar6 < 0) {
          pbVar7 = PTR_DAT_04bb2120;
        }
        break;
      }
      if (local_38[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03ca2ce8;
      }
      if (local_38[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03ca2ce8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    if (*pbVar7 != 0x5f) {
      return false;
    }
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar6 = 0;
    do {
      if (local_38[lVar6] == 0) {
LAB_03ca2d58:
        if (0 < (int)lVar6) {
          local_38 = local_38 + 1;
          goto LAB_03ca2d6c;
        }
        break;
      }
      if (local_38[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03ca2d58;
      }
      if (local_38[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03ca2d58;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    local_38 = *(byte **)(puVar4 + 8);
LAB_03ca2d6c:
    if (*local_38 == 0) {
      return false;
    }
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar6 = 0;
    do {
      pbVar7 = local_38;
      if (local_38[lVar6] == 0) {
LAB_03ca2dc8:
        if ((int)lVar6 < 0) {
          pbVar7 = PTR_DAT_04bb2120;
        }
        break;
      }
      if (local_38[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03ca2dc8;
      }
      if (local_38[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03ca2dc8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    if (*pbVar7 < 0x41) {
      return false;
    }
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar6 = 0;
    do {
      pbVar7 = local_38;
      if (local_38[lVar6] == 0) {
LAB_03ca2e34:
        if ((int)lVar6 < 0) {
          pbVar7 = PTR_DAT_04bb2120;
        }
        break;
      }
      if (local_38[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03ca2e34;
      }
      if (local_38[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03ca2e34;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    if (0x5a < *pbVar7) {
      return false;
    }
    (**(code **)(local_40 + 0x18))(&local_40);
    lVar6 = 0;
    do {
      if (local_38[lVar6] == 0) goto LAB_03ca2ec4;
      if (local_38[lVar6 + 1] == 0) goto LAB_03ca2eac;
      if (local_38[lVar6 + 2] == 0) goto LAB_03ca2ec0;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  else {
    lVar6 = 0;
    do {
      if (local_38[lVar6] == 0) {
LAB_03ca2c7c:
        pbVar7 = local_38;
        if ((int)lVar6 < 0) {
          pbVar7 = PTR_DAT_04bb2120;
        }
        bVar2 = *pbVar7;
        break;
      }
      if (local_38[lVar6 + 1] == 0) {
        lVar6 = lVar6 + 1;
        goto LAB_03ca2c7c;
      }
      if (local_38[lVar6 + 2] == 0) {
        lVar6 = lVar6 + 2;
        goto LAB_03ca2c7c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    if (0x7a < bVar2) goto LAB_03ca2c98;
    FUN_006bd3a4(&local_40);
    lVar6 = 0;
    do {
      if (local_38[lVar6] == 0) goto LAB_03ca2ec4;
      if (local_38[lVar6 + 1] == 0) goto LAB_03ca2eac;
      if (local_38[lVar6 + 2] == 0) goto LAB_03ca2ec0;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  goto LAB_03ca2eb8;
LAB_03ca2eac:
  iVar9 = (int)lVar6 + 1;
  goto joined_r0x03ca2eb4;
LAB_03ca2ec0:
  lVar6 = lVar6 + 2;
LAB_03ca2ec4:
  iVar9 = (int)lVar6;
joined_r0x03ca2eb4:
  if (iVar9 < 1) {
LAB_03ca2eb8:
    local_38 = *(byte **)(puVar4 + 8);
  }
  else {
    local_38 = (byte *)((long)local_38 + 1);
  }
  return *local_38 == 0;
}

