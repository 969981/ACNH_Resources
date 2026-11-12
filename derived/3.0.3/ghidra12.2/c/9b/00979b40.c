
undefined8 FUN_00979b40(long *param_1,uint param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined *puVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  undefined *local_170;
  char *local_168;
  int local_160;
  char local_15c [255];
  undefined1 local_5d;
  uint local_54;
  
  local_54 = param_2;
  local_160 = 0x100;
  local_15c[0] = '\0';
  lVar15 = 0;
  local_5d = 0;
  local_170 = PTR_DAT_04bb21f8 + 0x10;
  do {
    if (local_15c[lVar15] == '\0') goto LAB_00979bdc;
    if (local_15c[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_00979bdc;
    }
    if (local_15c[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_00979bdc;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_00979bdc:
  uVar2 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
  local_168 = local_15c;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar15 = 0;
  do {
    if (*(char *)(param_1[1] + lVar15) == '\0') goto LAB_00979c3c;
    lVar1 = param_1[1] + lVar15;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_00979c3c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_00979c3c;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_00979c3c:
  uVar3 = (uint)lVar15;
  if ((int)(local_160 - uVar2) <= (int)(uint)lVar15) {
    uVar3 = local_160 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    memcpy(local_15c + uVar2,(void *)param_1[1],(ulong)uVar3);
    local_15c[(int)(uVar3 + uVar2)] = '\0';
  }
  pcVar11 = local_168;
  (**(code **)(local_170 + 0x18))(&local_170);
  lVar15 = 0;
  do {
    if (local_168[lVar15] == '\0') goto LAB_00979cdc;
    if (local_168[lVar15 + 1] == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_00979cdc;
    }
    if (local_168[lVar15 + 2] == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_00979cdc;
    }
    lVar15 = lVar15 + 3;
  } while (lVar15 != 0x80001);
  lVar15 = 0;
LAB_00979cdc:
  uVar2 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_160 - uVar2) < 5) {
    uVar3 = local_160 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(pcVar11 + uVar2,&DAT_0405c04e,(ulong)uVar3);
    pcVar11[(ulong)uVar3 + (ulong)uVar2] = '\0';
  }
  puVar10 = PTR_DAT_04bb2228;
  lVar15 = FUN_00952cb0(*(undefined8 *)PTR_DAT_04bb2228,&local_170);
  if (((lVar15 == 0) && (lVar15 = FUN_00953160(*(undefined8 *)puVar10,&local_170), lVar15 == 0)) &&
     (lVar15 = FUN_00954120(*(undefined8 *)puVar10,&local_170), lVar15 == 0)) {
    return 0;
  }
  if ((*(int *)(lVar15 + 8) != 0) && (iVar8 = *(int *)(lVar15 + 4), iVar8 != 0)) {
    iVar19 = 0;
    bVar9 = false;
    iVar14 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    pbVar20 = (byte *)(lVar15 + 0x44);
    do {
      iVar12 = 0;
      pbVar13 = pbVar20;
      do {
        iVar5 = iVar14;
        iVar7 = iVar17;
        iVar6 = iVar18;
        iVar4 = iVar16;
        if (!bVar9) {
          iVar5 = iVar12;
          iVar7 = iVar19;
          iVar6 = iVar19;
          iVar4 = iVar12;
        }
        if (iVar12 <= iVar4) {
          iVar4 = iVar12;
        }
        if (iVar5 <= iVar12) {
          iVar5 = iVar12;
        }
        iVar12 = iVar12 + 1;
        if (iVar19 <= iVar6) {
          iVar6 = iVar19;
        }
        if (iVar7 <= iVar19) {
          iVar7 = iVar19;
        }
        if (local_54 == *pbVar13) {
          bVar9 = true;
          iVar14 = iVar5;
          iVar16 = iVar4;
          iVar17 = iVar7;
          iVar18 = iVar6;
        }
        pbVar13 = pbVar13 + 0x34;
      } while (iVar8 != iVar12);
      iVar19 = iVar19 + 1;
      pbVar20 = pbVar20 + (ulong)(iVar8 - 1) * 0x34 + 0x34;
    } while (iVar19 != *(int *)(lVar15 + 8));
    if (bVar9) {
      if (param_3 != (float *)0x0) {
        iVar8 = iVar18;
        if (iVar18 <= iVar17) {
          iVar8 = iVar17;
        }
        if (iVar17 <= iVar18) {
          iVar18 = iVar17;
        }
        iVar19 = iVar16;
        if (iVar16 <= iVar14) {
          iVar19 = iVar14;
        }
        if (iVar14 <= iVar16) {
          iVar16 = iVar14;
        }
        param_3[2] = ((float)iVar18 * 5.0 + (float)iVar8 * 5.0 + 5.0) * 0.5;
        *param_3 = ((float)iVar16 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
      }
      return 1;
    }
  }
  return 0;
}

