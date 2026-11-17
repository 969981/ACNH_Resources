
undefined8 FUN_02a21b90(long *param_1,undefined4 *param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 *__src;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  size_t __n;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  long lVar12;
  undefined **local_78;
  undefined *local_70;
  int local_68;
  undefined local_64 [31];
  undefined1 local_45;
  
  switch(*param_2) {
  case 1:
    local_45 = 0;
    local_64[0] = 0;
    local_68 = 0x20;
    local_78 = &PTR_LAB_048f9700;
    lVar12 = *(long *)(DAT_055f6860 + 0x19f820);
    local_70 = local_64;
    if (lVar12 != 0) {
      uVar7 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      do {
        while (*(int *)(lVar12 + 0x20) <= (int)uVar7) {
          if ((int)uVar7 <= *(int *)(lVar12 + 0x20)) {
            puVar2 = *(undefined **)(lVar12 + 0x40);
            if (local_64 == puVar2) goto LAB_02a223a0;
            lVar12 = 0;
            goto LAB_02a22230;
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_02a21c5c;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
    }
LAB_02a21c5c:
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar2 = PTR_DAT_04c4b988;
    if (local_64 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar12 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar12] == '\0') goto LAB_02a2230c;
        if (PTR_DAT_04c4b988[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02a2230c;
        }
        if (PTR_DAT_04c4b988[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02a2230c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02a2230c:
      iVar3 = (int)lVar12;
      if (local_68 <= (int)lVar12) {
        iVar3 = local_68 + -1;
      }
      goto LAB_02a22394;
    }
    goto LAB_02a223a0;
  case 2:
    local_45 = 0;
    local_64[0] = 0;
    local_68 = 0x20;
    local_78 = &PTR_LAB_048f9700;
    lVar12 = *(long *)(DAT_055f6860 + 0x19f820);
    local_70 = local_64;
    if (lVar12 != 0) {
      uVar7 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      do {
        while (*(int *)(lVar12 + 0x20) <= (int)uVar7) {
          if ((int)uVar7 <= *(int *)(lVar12 + 0x20)) {
            puVar2 = *(undefined **)(lVar12 + 0x40);
            if (local_64 == puVar2) goto LAB_02a224d0;
            lVar12 = 0;
            goto LAB_02a22278;
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_02a21d4c;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
    }
LAB_02a21d4c:
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar2 = PTR_DAT_04c4b988;
    if (local_64 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar12 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar12] == '\0') goto LAB_02a22330;
        if (PTR_DAT_04c4b988[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02a22330;
        }
        if (PTR_DAT_04c4b988[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02a22330;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02a22330:
      iVar3 = (int)lVar12;
      if (local_68 <= (int)lVar12) {
        iVar3 = local_68 + -1;
      }
      goto LAB_02a224c4;
    }
    goto LAB_02a224d0;
  case 3:
    local_45 = 0;
    local_64[0] = 0;
    local_68 = 0x20;
    local_78 = &PTR_LAB_048f9700;
    lVar12 = *(long *)(DAT_055f6860 + 0x19f820);
    local_70 = local_64;
    if (lVar12 != 0) {
      uVar7 = *param_3 & ((int)*param_3 >> 0x1f ^ 0xffffffffU);
      do {
        while (*(int *)(lVar12 + 0x20) <= (int)uVar7) {
          if ((int)uVar7 <= *(int *)(lVar12 + 0x20)) {
            puVar2 = *(undefined **)(lVar12 + 0x40);
            if (local_64 == puVar2) goto LAB_02a22600;
            lVar12 = 0;
            goto LAB_02a222c0;
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if (lVar12 == 0) goto LAB_02a21e3c;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != 0);
    }
LAB_02a21e3c:
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar2 = PTR_DAT_04c4b988;
    if (local_64 != PTR_DAT_04c4b988) {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      lVar12 = 0;
      do {
        if (PTR_DAT_04c4b988[lVar12] == '\0') goto LAB_02a22354;
        if (PTR_DAT_04c4b988[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_02a22354;
        }
        if (PTR_DAT_04c4b988[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_02a22354;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_02a22354:
      iVar3 = (int)lVar12;
      if (local_68 <= (int)lVar12) {
        iVar3 = local_68 + -1;
      }
      goto LAB_02a225f4;
    }
    goto LAB_02a22600;
  case 4:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 0x10;
    if (*(int *)((long)param_1 + 0xc) < 0x11) {
      uVar7 = *(int *)((long)param_1 + 0xc) - 1;
    }
    uVar9 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
      uVar9 = 0;
    }
    else {
      pvVar11 = (void *)*param_1;
      memcpy(pvVar11,"BGM_DJ_Emission_",uVar9);
      *(undefined1 *)((long)pvVar11 + uVar9) = 0;
      *(uint *)(param_1 + 1) = uVar7;
    }
    if (*param_3 - 0xc9 < 0xb) {
      __src = (&PTR_DAT_04a99a20)[(int)(*param_3 - 0xc9)];
    }
    else {
      __src = &DAT_040c8ea8;
    }
    lVar12 = *param_1;
    lVar5 = 0;
    iVar3 = *(int *)((long)param_1 + 0xc);
    do {
      pcVar1 = __src + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    break;
  case 5:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 0xe;
    if (*(int *)((long)param_1 + 0xc) < 0xf) {
      uVar7 = *(int *)((long)param_1 + 0xc) - 1;
    }
    uVar9 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
      uVar9 = 0;
    }
    else {
      pvVar11 = (void *)*param_1;
      memcpy(pvVar11,&DAT_040b6ec9,uVar9);
      *(undefined1 *)((long)pvVar11 + uVar9) = 0;
      *(uint *)(param_1 + 1) = uVar7;
    }
    if (*param_3 - 0x12d < 0xb) {
      __src = (&PTR_DAT_04a99a20)[(int)(*param_3 - 0x12d)];
    }
    else {
      __src = &DAT_040c8ea8;
    }
    lVar12 = *param_1;
    lVar5 = 0;
    iVar3 = *(int *)((long)param_1 + 0xc);
    do {
      pcVar1 = __src + lVar5;
      lVar5 = lVar5 + 1;
    } while (*pcVar1 != '\0');
    break;
  case 6:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 0x13;
    if (*(int *)((long)param_1 + 0xc) < 0x14) {
      uVar7 = *(int *)((long)param_1 + 0xc) - 1;
    }
    if ((int)uVar7 < 1) {
      return 1;
    }
    pvVar11 = (void *)*param_1;
    pcVar1 = "BGM_DJ_Demo_First_L";
    goto LAB_02a21fb4;
  case 7:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 0x1a;
    if (*(int *)((long)param_1 + 0xc) < 0x1b) {
      uVar7 = *(int *)((long)param_1 + 0xc) - 1;
    }
    if ((int)uVar7 < 1) {
      return 1;
    }
    pvVar11 = (void *)*param_1;
    pcVar1 = "BGM_DJ_Demo_Intro_Second_L";
LAB_02a21fb4:
    memcpy(pvVar11,pcVar1,(ulong)uVar7);
    *(undefined1 *)((long)pvVar11 + (ulong)uVar7) = 0;
    *(uint *)(param_1 + 1) = uVar7;
    return 1;
  case 8:
    *(undefined1 *)*param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    uVar7 = 0x12;
    if (*(int *)((long)param_1 + 0xc) < 0x13) {
      uVar7 = *(int *)((long)param_1 + 0xc) - 1;
    }
    uVar9 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
      uVar9 = 0;
    }
    else {
      pvVar11 = (void *)*param_1;
      memcpy(pvVar11,"BGM_DJ_Demo_Outro_",uVar9);
      *(undefined1 *)((long)pvVar11 + uVar9) = 0;
      *(uint *)(param_1 + 1) = uVar7;
    }
    uVar7 = (uint)uVar9;
    if (*param_3 - 600 < 0xc) {
      lVar12 = *param_1;
      lVar5 = 0;
      iVar3 = *(int *)((long)param_1 + 0xc);
      do {
        pcVar1 = (&PTR_DAT_04a99a78)[(int)(*param_3 - 600)] + lVar5;
        lVar5 = lVar5 + 1;
      } while (*pcVar1 != '\0');
      uVar6 = (int)lVar5 - 1;
      uVar4 = iVar3 + ~uVar7;
      if (iVar3 <= (int)(uVar6 + uVar7)) {
        uVar6 = uVar4;
      }
      if (0 < (int)uVar6) {
        memcpy((void *)(lVar12 + (int)uVar7),(&PTR_DAT_04a99a78)[(int)(*param_3 - 600)],(ulong)uVar6
              );
        uVar9 = (long)(int)uVar7 + (long)(int)uVar6;
LAB_02a221c0:
        *(undefined1 *)(lVar12 + uVar9) = 0;
        *(uint *)(param_1 + 1) = (uint)uVar9;
        iVar3 = *(int *)((long)param_1 + 0xc);
        uVar4 = iVar3 + ~(uint)uVar9;
      }
    }
    else {
      iVar3 = *(int *)((long)param_1 + 0xc);
      uVar4 = iVar3 + ~uVar7;
      uVar6 = uVar4;
      if ((int)(uVar7 + 1) < iVar3) {
        uVar6 = 1;
      }
      if (0 < (int)uVar6) {
        lVar12 = *param_1;
        memcpy((void *)(lVar12 + uVar9),&DAT_040c8ea8,(ulong)uVar6);
        uVar9 = (ulong)(uVar6 + uVar7);
        goto LAB_02a221c0;
      }
    }
    iVar8 = (int)uVar9;
    uVar7 = 2;
    if (iVar3 <= iVar8 + 2) {
      uVar7 = uVar4;
    }
    if ((int)uVar7 < 1) {
      return 1;
    }
    lVar12 = *param_1;
    goto LAB_02a221f4;
  default:
    return 1;
  }
  uVar7 = (int)lVar5 - 1;
  uVar6 = (uint)uVar9;
  uVar4 = iVar3 + ~uVar6;
  if (iVar3 <= (int)(uVar7 + uVar6)) {
    uVar7 = uVar4;
  }
  if (0 < (int)uVar7) {
    memcpy((void *)(lVar12 + (int)uVar6),__src,(ulong)uVar7);
    uVar9 = (long)(int)uVar6 + (long)(int)uVar7;
    *(undefined1 *)(lVar12 + uVar9) = 0;
    *(uint *)(param_1 + 1) = (uint)uVar9;
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar12 = *param_1;
    uVar4 = iVar3 + ~(uint)uVar9;
  }
  iVar8 = (int)uVar9;
  uVar7 = 2;
  if (iVar3 <= iVar8 + 2) {
    uVar7 = uVar4;
  }
  if ((int)uVar7 < 1) {
    return 1;
  }
LAB_02a221f4:
  memcpy((void *)(lVar12 + iVar8),&DAT_04076984,(ulong)uVar7);
  lVar5 = (long)iVar8 + (long)(int)uVar7;
  *(undefined1 *)(lVar12 + lVar5) = 0;
  goto LAB_02a22714;
  while( true ) {
    if (puVar2[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_02a225e0;
    }
    if (puVar2[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_02a225e0;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_02a222c0:
    if (puVar2[lVar12] == '\0') {
LAB_02a225e0:
      iVar3 = (int)lVar12;
      if (0x1f < (int)lVar12) {
        iVar3 = 0x1f;
      }
      goto LAB_02a225f4;
    }
  }
  iVar3 = 0;
LAB_02a225f4:
  memcpy(local_64,puVar2,(long)iVar3);
  local_64[iVar3] = 0;
LAB_02a22600:
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar7 = 6;
  if (*(int *)((long)param_1 + 0xc) < 7) {
    uVar7 = *(int *)((long)param_1 + 0xc) - 1;
  }
  if (0 < (int)uVar7) {
    pvVar11 = (void *)*param_1;
    memcpy(pvVar11,"BGM_DJ",(ulong)uVar7);
    *(undefined1 *)((long)pvVar11 + (ulong)uVar7) = 0;
    *(uint *)(param_1 + 1) = uVar7;
  }
  FUN_038d17d4(param_1,"_%03d_",*param_3);
  (*(code *)local_78[3])(&local_78);
  lVar12 = 0;
  lVar10 = *param_1;
  iVar3 = *(int *)((long)param_1 + 0xc);
  do {
    pcVar1 = local_70 + lVar12;
    lVar12 = lVar12 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = *(uint *)(param_1 + 1);
  uVar6 = (int)lVar12 - 1;
  uVar7 = iVar3 + ~uVar4;
  if (iVar3 <= (int)(uVar6 + uVar4)) {
    uVar6 = uVar7;
  }
  if (0 < (int)uVar6) {
    memcpy((void *)(lVar10 + (int)uVar4),local_70,(ulong)uVar6);
    uVar4 = uVar6 + uVar4;
    *(undefined1 *)(lVar10 + (int)uVar4) = 0;
    *(uint *)(param_1 + 1) = uVar4;
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar10 = *param_1;
    uVar7 = iVar3 + ~uVar4;
  }
  uVar6 = 8;
  if (iVar3 <= (int)(uVar4 + 8)) {
    uVar6 = uVar7;
  }
  __n = (size_t)uVar6;
  if ((int)uVar6 < 1) {
    return 1;
  }
  lVar5 = (long)(int)uVar4;
  pcVar1 = "_Outro_L";
  goto LAB_02a22700;
  while( true ) {
    if (puVar2[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_02a224b0;
    }
    if (puVar2[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_02a224b0;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_02a22278:
    if (puVar2[lVar12] == '\0') {
LAB_02a224b0:
      iVar3 = (int)lVar12;
      if (0x1f < (int)lVar12) {
        iVar3 = 0x1f;
      }
      goto LAB_02a224c4;
    }
  }
  iVar3 = 0;
LAB_02a224c4:
  memcpy(local_64,puVar2,(long)iVar3);
  local_64[iVar3] = 0;
LAB_02a224d0:
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar7 = 6;
  if (*(int *)((long)param_1 + 0xc) < 7) {
    uVar7 = *(int *)((long)param_1 + 0xc) - 1;
  }
  if (0 < (int)uVar7) {
    pvVar11 = (void *)*param_1;
    memcpy(pvVar11,"BGM_DJ",(ulong)uVar7);
    *(undefined1 *)((long)pvVar11 + (ulong)uVar7) = 0;
    *(uint *)(param_1 + 1) = uVar7;
  }
  FUN_038d17d4(param_1,"_%03d_",*param_3);
  (*(code *)local_78[3])(&local_78);
  lVar12 = 0;
  lVar10 = *param_1;
  iVar3 = *(int *)((long)param_1 + 0xc);
  do {
    pcVar1 = local_70 + lVar12;
    lVar12 = lVar12 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = *(uint *)(param_1 + 1);
  uVar6 = (int)lVar12 - 1;
  uVar7 = iVar3 + ~uVar4;
  if (iVar3 <= (int)(uVar6 + uVar4)) {
    uVar6 = uVar7;
  }
  if (0 < (int)uVar6) {
    memcpy((void *)(lVar10 + (int)uVar4),local_70,(ulong)uVar6);
    uVar4 = uVar6 + uVar4;
    *(undefined1 *)(lVar10 + (int)uVar4) = 0;
    *(uint *)(param_1 + 1) = uVar4;
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar10 = *param_1;
    uVar7 = iVar3 + ~uVar4;
  }
  uVar6 = 7;
  if (iVar3 <= (int)(uVar4 + 7)) {
    uVar6 = uVar7;
  }
  __n = (size_t)uVar6;
  if ((int)uVar6 < 1) {
    return 1;
  }
  lVar5 = (long)(int)uVar4;
  pcVar1 = "_Song_L";
  goto LAB_02a22700;
  while( true ) {
    if (puVar2[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_02a22380;
    }
    if (puVar2[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_02a22380;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_02a22230:
    if (puVar2[lVar12] == '\0') {
LAB_02a22380:
      iVar3 = (int)lVar12;
      if (0x1f < (int)lVar12) {
        iVar3 = 0x1f;
      }
      goto LAB_02a22394;
    }
  }
  iVar3 = 0;
LAB_02a22394:
  memcpy(local_64,puVar2,(long)iVar3);
  local_64[iVar3] = 0;
LAB_02a223a0:
  *(undefined1 *)*param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar7 = 6;
  if (*(int *)((long)param_1 + 0xc) < 7) {
    uVar7 = *(int *)((long)param_1 + 0xc) - 1;
  }
  if (0 < (int)uVar7) {
    pvVar11 = (void *)*param_1;
    memcpy(pvVar11,"BGM_DJ",(ulong)uVar7);
    *(undefined1 *)((long)pvVar11 + (ulong)uVar7) = 0;
    *(uint *)(param_1 + 1) = uVar7;
  }
  FUN_038d17d4(param_1,"_%03d_",*param_3);
  (*(code *)local_78[3])(&local_78);
  lVar12 = 0;
  lVar10 = *param_1;
  iVar3 = *(int *)((long)param_1 + 0xc);
  do {
    pcVar1 = local_70 + lVar12;
    lVar12 = lVar12 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = *(uint *)(param_1 + 1);
  uVar6 = (int)lVar12 - 1;
  uVar7 = iVar3 + ~uVar4;
  if (iVar3 <= (int)(uVar6 + uVar4)) {
    uVar6 = uVar7;
  }
  if (0 < (int)uVar6) {
    memcpy((void *)(lVar10 + (int)uVar4),local_70,(ulong)uVar6);
    uVar4 = uVar6 + uVar4;
    *(undefined1 *)(lVar10 + (int)uVar4) = 0;
    *(uint *)(param_1 + 1) = uVar4;
    iVar3 = *(int *)((long)param_1 + 0xc);
    lVar10 = *param_1;
    uVar7 = iVar3 + ~uVar4;
  }
  uVar6 = 8;
  if (iVar3 <= (int)(uVar4 + 8)) {
    uVar6 = uVar7;
  }
  __n = (size_t)uVar6;
  if ((int)uVar6 < 1) {
    return 1;
  }
  lVar5 = (long)(int)uVar4;
  pcVar1 = "_Intro_L";
LAB_02a22700:
  memcpy((void *)(lVar10 + lVar5),pcVar1,__n);
  lVar5 = lVar5 + (int)__n;
  *(undefined1 *)(lVar10 + lVar5) = 0;
LAB_02a22714:
  *(int *)(param_1 + 1) = (int)lVar5;
  return 1;
}

