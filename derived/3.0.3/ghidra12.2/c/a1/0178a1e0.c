
void FUN_0178a1e0(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  undefined4 uVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  pvVar12 = *(void **)(param_1 + 0x38);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar13 = (void *)param_3[1];
  if (pvVar12 != pvVar13) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_0178a28c;
      lVar1 = param_3[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178a28c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178a28c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178a28c:
    iVar15 = (int)lVar7;
    if (*(int *)(param_1 + 0x40) <= (int)lVar7) {
      iVar15 = *(int *)(param_1 + 0x40) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0xd0);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar13 = (void *)param_3[1];
  if (pvVar12 != pvVar13) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_0178a32c;
      lVar1 = param_3[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178a32c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178a32c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178a32c:
    iVar15 = (int)lVar7;
    if (*(int *)(param_1 + 0xd8) <= (int)lVar7) {
      iVar15 = *(int *)(param_1 + 0xd8) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  pvVar12 = *(void **)(param_1 + 0x168);
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar13 = (void *)param_4[1];
  if (pvVar12 != pvVar13) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar7 = 0;
    do {
      if (*(char *)(param_4[1] + lVar7) == '\0') goto LAB_0178a3cc;
      lVar1 = param_4[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178a3cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178a3cc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178a3cc:
    iVar15 = (int)lVar7;
    if (*(int *)(param_1 + 0x170) <= (int)lVar7) {
      iVar15 = *(int *)(param_1 + 0x170) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  lVar7 = param_1 + 0x30;
  pvVar12 = *(void **)(param_1 + 0x200);
  lVar1 = param_1 + 0x160;
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar13 = (void *)param_4[1];
  if (pvVar12 != pvVar13) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar8 = 0;
    do {
      if (*(char *)(param_4[1] + lVar8) == '\0') goto LAB_0178a47c;
      lVar9 = param_4[1] + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a47c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a47c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a47c:
    iVar15 = (int)lVar8;
    if (*(int *)(param_1 + 0x208) <= (int)lVar8) {
      iVar15 = *(int *)(param_1 + 0x208) + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  if (*(char *)(param_1 + 0x298) == '\0') {
    if (*(char *)(param_1 + 0x488) == '\0') goto LAB_0178a9e8;
    (**(code **)(*(long *)(param_1 + 200) + 0x18))(param_1 + 200);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xd0) + lVar8) == '\0') goto LAB_0178a794;
      lVar9 = *(long *)(param_1 + 0xd0) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a794;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a794;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a794:
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
    lVar9 = 0;
    do {
      iVar15 = (int)lVar8;
      if (DAT_0528dba8[lVar9] == '\0') {
LAB_0178a7e8:
        iVar6 = (int)lVar9;
        if (iVar15 < iVar6) goto LAB_0178a9e8;
LAB_0178a800:
        if ((int)lVar9 < 1) goto LAB_0178a894;
        uVar4 = 0;
        goto LAB_0178a818;
      }
      if (DAT_0528dba8[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178a7e8;
      }
      if (DAT_0528dba8[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        iVar6 = (int)lVar9;
        if (iVar6 <= iVar15) goto LAB_0178a800;
        goto LAB_0178a9e8;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (iVar15 < 0) goto LAB_0178a9e8;
LAB_0178a894:
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
LAB_0178a8b8:
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar14 = *(undefined4 *)(param_1 + 0x40);
    local_68[0] = 0;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
    uVar17 = *(undefined8 *)(param_1 + 0x38);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar8) == '\0') goto LAB_0178a92c;
      lVar9 = *(long *)(param_1 + 0x38) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a92c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a92c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a92c:
    FUN_038d0770(uVar16,0,uVar14,uVar17,lVar8,&DAT_0528dbb0,&DAT_0528db90,local_68);
    uVar16 = *(undefined8 *)(param_1 + 0x168);
    uVar14 = *(undefined4 *)(param_1 + 0x170);
    local_64[0] = 0;
    (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
    uVar17 = *(undefined8 *)(param_1 + 0x168);
    (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x168) + lVar8) == '\0') goto LAB_0178a9c0;
      lVar9 = *(long *)(param_1 + 0x168) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a9c0;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a9c0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a9c0:
    puVar5 = local_64;
  }
  else {
    (**(code **)(*(long *)(param_1 + 200) + 0x18))(param_1 + 200);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xd0) + lVar8) == '\0') goto LAB_0178a550;
      lVar9 = *(long *)(param_1 + 0xd0) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a550;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a550;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a550:
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
    lVar9 = 0;
    do {
      iVar15 = (int)lVar8;
      if (DAT_0528dba8[lVar9] == '\0') {
LAB_0178a5a4:
        iVar6 = (int)lVar9;
        if (iVar15 < iVar6) goto LAB_0178a9e8;
LAB_0178a5bc:
        if ((int)lVar9 < 1) goto LAB_0178a648;
        uVar4 = 0;
        goto LAB_0178a5d4;
      }
      if (DAT_0528dba8[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_0178a5a4;
      }
      if (DAT_0528dba8[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        iVar6 = (int)lVar9;
        if (iVar6 <= iVar15) goto LAB_0178a5bc;
        goto LAB_0178a9e8;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (iVar15 < 0) goto LAB_0178a9e8;
LAB_0178a648:
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
LAB_0178a66c:
    uVar16 = *(undefined8 *)(param_1 + 0x38);
    uVar14 = *(undefined4 *)(param_1 + 0x40);
    local_70[0] = 0;
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
    uVar17 = *(undefined8 *)(param_1 + 0x38);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar8) == '\0') goto LAB_0178a6dc;
      lVar9 = *(long *)(param_1 + 0x38) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a6dc;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a6dc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a6dc:
    FUN_038d0770(uVar16,0,uVar14,uVar17,lVar8,&DAT_0528dbb0,&DAT_0528db90,local_70);
    uVar16 = *(undefined8 *)(param_1 + 0x168);
    uVar14 = *(undefined4 *)(param_1 + 0x170);
    local_6c[0] = 0;
    (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
    uVar17 = *(undefined8 *)(param_1 + 0x168);
    (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x168) + lVar8) == '\0') goto LAB_0178a770;
      lVar9 = *(long *)(param_1 + 0x168) + lVar8;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0178a770;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0178a770;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0178a770:
    puVar5 = local_6c;
  }
  FUN_038d0770(uVar16,0,uVar14,uVar17,lVar8,&DAT_0528dbb0,&DAT_0528db90,puVar5);
  goto LAB_0178a9e8;
  while( true ) {
    pcVar10 = DAT_0528dba8;
    lVar11 = lVar9;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (*(char *)(lVar8 + uVar4) != *pcVar10) break;
      if ((*(char *)(lVar8 + uVar4) == '\0') ||
         (lVar8 = lVar8 + 1, pcVar10 = pcVar10 + 1, lVar11 == 0)) goto LAB_0178a8a8;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == (iVar15 - iVar6) + 1) break;
LAB_0178a818:
    lVar8 = *(long *)(param_1 + 0xd0);
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
    if ((char *)(lVar8 + uVar4) == DAT_0528dba8) {
LAB_0178a8a8:
      if ((int)uVar4 != -1) goto LAB_0178a8b8;
      break;
    }
  }
  goto LAB_0178a9e8;
  while( true ) {
    pcVar10 = DAT_0528dba8;
    lVar11 = lVar9;
    while( true ) {
      lVar11 = lVar11 + -1;
      if (*(char *)(lVar8 + uVar4) != *pcVar10) break;
      if ((*(char *)(lVar8 + uVar4) == '\0') ||
         (lVar8 = lVar8 + 1, pcVar10 = pcVar10 + 1, lVar11 == 0)) goto LAB_0178a65c;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == (iVar15 - iVar6) + 1) break;
LAB_0178a5d4:
    lVar8 = *(long *)(param_1 + 0xd0);
    (**(code **)(DAT_0528dba0 + 0x18))(&DAT_0528dba0);
    if ((char *)(lVar8 + uVar4) == DAT_0528dba8) {
LAB_0178a65c:
      if ((int)uVar4 != -1) goto LAB_0178a66c;
      break;
    }
  }
LAB_0178a9e8:
  if ((*(char *)(param_1 + 0x298) == '\0' && *(char *)(param_1 + 0x488) == '\0') &&
     (*(char *)(param_1 + 0x350) != '\0')) {
    uVar4 = FUN_017c2270(DAT_05293a70,*(undefined2 *)(param_1 + 0x290));
    if ((uVar4 & 1) != 0) {
      lVar8 = param_1 + 0x5d8;
      pvVar12 = *(void **)(param_1 + 0x38);
      (**(code **)(*(long *)(param_1 + 0x5d8) + 0x18))(lVar8);
      pvVar13 = *(void **)(param_1 + 0x5e0);
      if (pvVar12 != pvVar13) {
        (**(code **)(*(long *)(param_1 + 0x5d8) + 0x18))(lVar8);
        lVar9 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5e0) + lVar9) == '\0') goto LAB_0178aa90;
          lVar11 = *(long *)(param_1 + 0x5e0) + lVar9;
          if (*(char *)(lVar11 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_0178aa90;
          }
          if (*(char *)(lVar11 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_0178aa90;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_0178aa90:
        iVar15 = (int)lVar9;
        if (*(int *)(param_1 + 0x40) <= (int)lVar9) {
          iVar15 = *(int *)(param_1 + 0x40) + -1;
        }
        memcpy(pvVar12,pvVar13,(long)iVar15);
        *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
      }
      pvVar12 = *(void **)(param_1 + 0x168);
      (**(code **)(*(long *)(param_1 + 0x5d8) + 0x18))(lVar8);
      pvVar13 = *(void **)(param_1 + 0x5e0);
      if (pvVar12 != pvVar13) {
        (**(code **)(*(long *)(param_1 + 0x5d8) + 0x18))(lVar8);
        lVar8 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5e0) + lVar8) == '\0') goto LAB_0178ab2c;
          lVar9 = *(long *)(param_1 + 0x5e0) + lVar8;
          if (*(char *)(lVar9 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_0178ab2c;
          }
          if (*(char *)(lVar9 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_0178ab2c;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_0178ab2c:
        iVar15 = (int)lVar8;
        if (*(int *)(param_1 + 0x170) <= (int)lVar8) {
          iVar15 = *(int *)(param_1 + 0x170) + -1;
        }
        memcpy(pvVar12,pvVar13,(long)iVar15);
        *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
      }
      lVar9 = *(long *)(param_1 + 0x168);
      (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(param_1 + 0x168) + lVar8) == '\0') goto LAB_0178abac;
        lVar11 = *(long *)(param_1 + 0x168) + lVar8;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0178abac;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0178abac;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0178abac:
      uVar2 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_0528dbc0 + 0x18))(&DAT_0528dbc0);
      lVar8 = 0;
      do {
        if (*(char *)((long)DAT_0528dbc8 + lVar8) == '\0') goto LAB_0178ac0c;
        if (*(char *)((long)DAT_0528dbc8 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0178ac0c;
        }
        if (*(char *)((long)DAT_0528dbc8 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0178ac0c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0178ac0c:
      uVar3 = (uint)lVar8;
      if ((int)(*(int *)(param_1 + 0x170) - uVar2) <= (int)(uint)lVar8) {
        uVar3 = *(int *)(param_1 + 0x170) + ~uVar2;
      }
      if (0 < (int)uVar3) {
        (**(code **)(DAT_0528dbc0 + 0x18))(&DAT_0528dbc0);
        memcpy((void *)(lVar9 + (ulong)uVar2),DAT_0528dbc8,(ulong)uVar3);
        *(undefined1 *)(lVar9 + (int)(uVar3 + uVar2)) = 0;
      }
    }
    *(undefined1 *)(param_1 + 0x350) = 1;
  }
  pvVar12 = (void *)param_3[1];
  (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
  pvVar13 = *(void **)(param_1 + 0x38);
  if (pvVar12 != pvVar13) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x18))(lVar7);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x38) + lVar7) == '\0') goto LAB_0178acec;
      lVar8 = *(long *)(param_1 + 0x38) + lVar7;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178acec;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178acec;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178acec:
    iVar15 = (int)lVar7;
    if ((int)param_3[2] <= (int)lVar7) {
      iVar15 = (int)param_3[2] + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  pvVar12 = (void *)param_4[1];
  (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
  pvVar13 = *(void **)(param_1 + 0x168);
  if (pvVar12 != pvVar13) {
    (**(code **)(*(long *)(param_1 + 0x160) + 0x18))(lVar1);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x168) + lVar7) == '\0') goto LAB_0178ad8c;
      lVar1 = *(long *)(param_1 + 0x168) + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0178ad8c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0178ad8c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0178ad8c:
    iVar15 = (int)lVar7;
    if ((int)param_4[2] <= (int)lVar7) {
      iVar15 = (int)param_4[2] + -1;
    }
    memcpy(pvVar12,pvVar13,(long)iVar15);
    *(undefined1 *)((long)pvVar12 + (long)iVar15) = 0;
  }
  return;
}

