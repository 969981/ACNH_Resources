
undefined8 FUN_01be5840(long param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *__dest;
  uint uVar10;
  undefined *puVar11;
  undefined **local_188;
  char *local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  local_55 = 0;
  local_154[0] = 0;
  local_158 = 0x100;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  local_160 = local_154;
  if (local_154 != param_2) {
    lVar6 = 0;
    do {
      if (param_2[lVar6] == '\0') {
LAB_01be58d4:
        iVar5 = (int)lVar6;
joined_r0x01be58d8:
        if (0xff < iVar5) {
          iVar5 = 0xff;
        }
        goto LAB_01be58e0;
      }
      if (param_2[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01be58d4;
      }
      if (param_2[lVar6 + 2] == '\0') {
        iVar5 = (int)lVar6 + 2;
        goto joined_r0x01be58d8;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    iVar5 = 0;
LAB_01be58e0:
    memcpy(local_154,param_2,(long)iVar5);
    local_154[iVar5] = 0;
  }
  puVar11 = PTR_DAT_04bb2020;
  local_188 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_180 = ".mstxt";
  (**(code **)(local_168 + 0x18))(&local_168);
  uVar9 = 0;
  do {
    if (local_160[uVar9] == '\0') goto LAB_01be5960;
    if (local_160[uVar9 + 1] == '\0') {
      uVar9 = uVar9 + 1;
      goto LAB_01be5960;
    }
    if (local_160[uVar9 + 2] == '\0') {
      uVar9 = uVar9 + 2;
      goto LAB_01be5960;
    }
    uVar9 = uVar9 + 3;
  } while (uVar9 != 0x80001);
  uVar9 = 0;
LAB_01be5960:
  (*(code *)local_188[3])(&local_188);
  puVar1 = local_160;
  lVar6 = 0;
  do {
    iVar5 = (int)uVar9;
    if (local_180[lVar6] == '\0') {
LAB_01be59bc:
      uVar10 = (uint)lVar6;
      iVar4 = iVar5 - uVar10;
      if (iVar5 < (int)uVar10) goto LAB_01be5a48;
      goto LAB_01be59c4;
    }
    if (local_180[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01be59bc;
    }
    if (local_180[lVar6 + 2] == '\0') {
      uVar10 = (int)lVar6 + 2;
      iVar4 = iVar5 - uVar10;
      if ((int)uVar10 <= iVar5) goto LAB_01be59c4;
      goto LAB_01be5a48;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  uVar10 = 0;
  iVar4 = iVar5;
  if (-1 < iVar5) {
LAB_01be59c4:
    (*(code *)local_188[3])(&local_188);
    if ((0 < (int)uVar10) && (puVar1 + iVar4 != local_180)) {
      if (0x7ffff < (int)uVar10) {
        uVar10 = 0x80000;
      }
      lVar6 = -(ulong)uVar10;
      pcVar7 = local_180;
      do {
        cVar2 = puVar1[lVar6 + (uVar9 & 0xffffffff)];
        if (cVar2 != *pcVar7) goto LAB_01be5a48;
        bVar3 = lVar6 != -1;
        lVar6 = lVar6 + 1;
      } while ((cVar2 != '\0') && (pcVar7 = pcVar7 + 1, bVar3));
    }
    local_160[iVar4] = 0;
  }
LAB_01be5a48:
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar6 = 0;
  do {
    if (local_160[lVar6] == '\0') {
LAB_01be5a9c:
      uVar10 = (int)lVar6 + 1;
      goto LAB_01be5aa0;
    }
    if (local_160[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01be5a9c;
    }
    if (local_160[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01be5a9c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  uVar10 = 1;
LAB_01be5aa0:
  local_188 = &local_168;
  local_180 = (char *)CONCAT44(local_180._4_4_,uVar10);
  local_178 = puVar11 + 0x10;
  local_170 = &DAT_04079e84;
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar6 = 0;
  do {
    if (local_160[lVar6] == '\0') {
LAB_01be5b20:
      iVar5 = (int)lVar6 + 1;
      goto joined_r0x01be5b24;
    }
    if (local_160[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01be5b20;
    }
    if (local_160[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01be5b20;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar5 = 1;
joined_r0x01be5b24:
  if (uVar10 != 0) {
    if (uVar10 == 1) {
      uVar10 = 0;
    }
    else {
      if (((int)uVar10 < 0) || (iVar5 < (int)uVar10)) goto LAB_01be5bfc;
      uVar9 = (ulong)(uVar10 - 2);
      do {
        puVar11 = local_188[1];
        if (puVar11[uVar9] == '\0') goto LAB_01be5bf4;
        (**(code **)(local_178 + 0x18))(&local_178);
        uVar8 = 0;
        bVar3 = true;
        cVar2 = puVar11[uVar9];
        do {
          if (local_170[uVar8] == '\0') break;
          if (local_170[uVar8] == cVar2) {
            if (bVar3) goto LAB_01be5bf4;
            break;
          }
          if (local_170[uVar8 + 1] == '\0') break;
          if (local_170[uVar8 + 1] == cVar2) goto LAB_01be5bf4;
          if (local_170[uVar8 + 2] == '\0') break;
          if (local_170[uVar8 + 2] == cVar2) goto LAB_01be5bf4;
          bVar3 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        bVar3 = uVar9 != 0;
        uVar9 = uVar9 - 1;
      } while (bVar3);
      uVar9 = 0xffffffff;
LAB_01be5bf4:
      uVar10 = (int)uVar9 + 1;
    }
    local_180 = (char *)CONCAT44(local_180._4_4_,uVar10);
  }
LAB_01be5bfc:
  (**(code **)(local_168 + 0x18))(&local_168);
  lVar6 = 0;
  do {
    if (local_160[lVar6] == '\0') goto LAB_01be5c50;
    if (local_160[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01be5c50;
    }
    if (local_160[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01be5c50;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01be5c50:
  __dest = *(undefined1 **)(param_1 + 8);
  puVar1 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar10 <= (int)lVar6 && -1 < (int)uVar10) {
    puVar1 = local_160 + uVar10;
  }
  if (__dest != puVar1) {
    lVar6 = 0;
    do {
      if (puVar1[lVar6] == '\0') goto LAB_01be5cbc;
      if (puVar1[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01be5cbc;
      }
      if (puVar1[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01be5cbc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01be5cbc:
    iVar5 = (int)lVar6;
    if (*(int *)(param_1 + 0x10) <= (int)lVar6) {
      iVar5 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,puVar1,(long)iVar5);
    __dest[iVar5] = 0;
  }
  return 1;
}

