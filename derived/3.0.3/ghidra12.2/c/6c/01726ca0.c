
int FUN_01726ca0(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  char *local_68;
  
  puVar3 = PTR_DAT_04bb2020;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_68 = "Test";
  (**(code **)(*param_1 + 0x18))();
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') {
LAB_01726d30:
      iVar5 = (int)lVar6;
joined_r0x01726d34:
      if (3 < iVar5) {
        uVar11 = 0;
        goto LAB_01726d6c;
      }
      break;
    }
    lVar8 = param_1[1] + lVar6;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01726d30;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01726d34;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  goto LAB_01726f44;
  while (uVar11 = uVar11 + 1, iVar5 - 3 != uVar11) {
LAB_01726d6c:
    pcVar7 = (char *)(param_1[1] + uVar11);
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((pcVar7 == local_68) ||
       ((*pcVar7 == *local_68 &&
        ((*pcVar7 == '\0' ||
         ((pcVar7[1] == local_68[1] &&
          ((pcVar7[1] == '\0' ||
           ((pcVar7[2] == local_68[2] && ((pcVar7[2] == '\0' || (pcVar7[3] == local_68[3])))))))))))
        ))) {
      if ((int)uVar11 != -1) {
        local_80 = puVar3 + 0x10;
        local_78 = "Test";
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar6 = 0;
        goto LAB_01726e04;
      }
      break;
    }
  }
  goto LAB_01726f44;
  while( true ) {
    pcVar7 = local_68;
    lVar10 = lVar8;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar6 + uVar11) != *pcVar7) break;
      if ((*(char *)(lVar6 + uVar11) == '\0') ||
         (lVar6 = lVar6 + 1, pcVar7 = pcVar7 + 1, lVar10 == 0)) goto LAB_017270a4;
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == (iVar5 - iVar4) + 1) break;
LAB_01727020:
    lVar6 = param_2[1];
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar6 + uVar11) == local_68) {
LAB_017270a4:
      if ((int)uVar11 != -1) goto LAB_017270ac;
      break;
    }
  }
  goto LAB_017271bc;
  while( true ) {
    lVar8 = param_2[1] + lVar6;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01726e40;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01726e40;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_01726e04:
    if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01726e40;
  }
  lVar6 = 0;
LAB_01726e40:
  (**(code **)(local_80 + 0x18))(&local_80);
  lVar8 = 0;
  do {
    iVar5 = (int)lVar6;
    if (local_78[lVar8] == '\0') {
LAB_01726e94:
      iVar4 = (int)lVar8;
      if (iVar5 < iVar4) {
        return 1;
      }
LAB_01726eac:
      if (0 < (int)lVar8) {
        uVar11 = 0;
        while( true ) {
          lVar6 = param_2[1];
          (**(code **)(local_80 + 0x18))(&local_80);
          if ((char *)(lVar6 + uVar11) == local_78) break;
          pcVar7 = local_78;
          lVar10 = lVar8;
          while( true ) {
            lVar10 = lVar10 + -1;
            if (*(char *)(lVar6 + uVar11) != *pcVar7) break;
            if ((*(char *)(lVar6 + uVar11) == '\0') ||
               (lVar6 = lVar6 + 1, pcVar7 = pcVar7 + 1, lVar10 == 0)) goto LAB_01726f3c;
          }
          uVar11 = uVar11 + 1;
          if (uVar11 == (iVar5 - iVar4) + 1) {
            return 1;
          }
        }
LAB_01726f3c:
        if ((int)uVar11 == -1) {
          return 1;
        }
        goto LAB_01726f44;
      }
      goto LAB_01726f28;
    }
    if (local_78[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01726e94;
    }
    if (local_78[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      iVar4 = (int)lVar8;
      if (iVar5 < iVar4) {
        return 1;
      }
      goto LAB_01726eac;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (iVar5 < 0) {
    return 1;
  }
LAB_01726f28:
  (**(code **)(local_80 + 0x18))(&local_80);
LAB_01726f44:
  local_70 = puVar3 + 0x10;
  local_68 = "Test";
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01726fa0;
    lVar8 = param_2[1] + lVar6;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01726fa0;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01726fa0;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01726fa0:
  (**(code **)(local_70 + 0x18))(&local_70);
  lVar8 = 0;
  do {
    iVar5 = (int)lVar6;
    if (local_68[lVar8] == '\0') {
LAB_01726ff4:
      iVar4 = (int)lVar8;
      if (iVar5 < iVar4) goto LAB_017271bc;
LAB_0172700c:
      if ((int)lVar8 < 1) goto LAB_01727090;
      uVar11 = 0;
      goto LAB_01727020;
    }
    if (local_68[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01726ff4;
    }
    if (local_68[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      iVar4 = (int)lVar8;
      if (iVar4 <= iVar5) goto LAB_0172700c;
      goto LAB_017271bc;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  if (-1 < iVar5) {
LAB_01727090:
    (**(code **)(local_70 + 0x18))(&local_70);
LAB_017270ac:
    local_80 = puVar3 + 0x10;
    local_78 = "Test";
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    while (*(char *)(param_1[1] + lVar6) != '\0') {
      lVar8 = param_1[1] + lVar6;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        break;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        iVar5 = (int)lVar6 + 2;
        goto joined_r0x01727104;
      }
      lVar6 = lVar6 + 3;
      if (lVar6 == 0x80001) {
        return -1;
      }
    }
    iVar5 = (int)lVar6;
joined_r0x01727104:
    if (iVar5 < 4) {
      return -1;
    }
    uVar11 = 0;
    while( true ) {
      pcVar7 = (char *)(param_1[1] + uVar11);
      (**(code **)(local_80 + 0x18))(&local_80);
      if ((pcVar7 == local_78) ||
         ((*pcVar7 == *local_78 &&
          ((*pcVar7 == '\0' ||
           ((pcVar7[1] == local_78[1] &&
            ((pcVar7[1] == '\0' ||
             ((pcVar7[2] == local_78[2] && ((pcVar7[2] == '\0' || (pcVar7[3] == local_78[3])))))))))
           ))))) break;
      uVar11 = uVar11 + 1;
      if (iVar5 - 3 == uVar11) {
        return -1;
      }
    }
    if ((int)uVar11 == -1) {
      return -1;
    }
  }
LAB_017271bc:
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar12 = (byte *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  if (pbVar12 != (byte *)param_2[1]) {
    pbVar12 = (byte *)param_2[1];
    pbVar9 = (byte *)param_1[1];
    lVar6 = 0x7ffff;
    while( true ) {
      bVar2 = *pbVar9;
      if (bVar2 != *pbVar12) break;
      if ((bVar2 == 0) ||
         (bVar1 = lVar6 == 0, pbVar12 = pbVar12 + 1, pbVar9 = pbVar9 + 1, lVar6 = lVar6 + -1, bVar1)
         ) goto LAB_0172722c;
    }
    if (*pbVar12 <= bVar2) {
      return 1;
    }
  }
LAB_0172722c:
  (**(code **)(*param_1 + 0x18))(param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  pbVar12 = (byte *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  if (pbVar12 == (byte *)param_2[1]) {
    return 0;
  }
  pbVar12 = (byte *)param_2[1];
  pbVar9 = (byte *)param_1[1];
  lVar6 = 0x7ffff;
  while( true ) {
    bVar2 = *pbVar9;
    if (bVar2 != *pbVar12) {
      return -(uint)(bVar2 < *pbVar12);
    }
    if (bVar2 == 0) break;
    bVar1 = lVar6 == 0;
    pbVar12 = pbVar12 + 1;
    pbVar9 = pbVar9 + 1;
    lVar6 = lVar6 + -1;
    if (bVar1) {
      return 0;
    }
  }
  return 0;
}

