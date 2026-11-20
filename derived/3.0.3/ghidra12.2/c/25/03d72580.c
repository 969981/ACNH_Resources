
undefined8 * FUN_03d72580(long param_1,long param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uVar11;
  void *__src;
  long lVar12;
  void *__dest;
  long *plVar13;
  undefined8 *puVar14;
  undefined **local_170;
  char *local_168;
  int local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined **local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  puVar4 = PTR_DAT_04bb2bc0;
  local_6d = 0;
  local_b0 = 0x40;
  local_b8 = local_ac;
  local_ac[0] = 0;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  plVar13 = (long *)(param_2 + 0x30);
  plVar7 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
  (**(code **)(*plVar7 + 0x18))();
  FUN_038d1270(&local_c0,"Anm_%s",plVar7[1]);
  if (*(char *)param_3[1] != '\0') {
    (**(code **)(*param_3 + 0x18))(param_3);
    FUN_038d13f0(&local_c0,&DAT_040a677f,param_3[1]);
  }
  lVar12 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar9 = malloc(0x60);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar9 = (undefined8 *)(lVar12 + 8);
    if (lVar8 != 0) {
      puVar9 = (undefined8 *)(lVar8 + 0xa8);
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)*puVar9 + 0x30))((long *)*puVar9,0x60,8);
  }
  *puVar9 = 0;
  puVar9[1] = 0;
  *(undefined1 *)((long)puVar9 + 0x2c) = 0;
  puVar9[4] = (undefined1 *)((long)puVar9 + 0x2c);
  *(undefined4 *)(puVar9 + 5) = 0x20;
  *(undefined1 *)((long)puVar9 + 0x4b) = 0;
  puVar14 = puVar9 + 10;
  *puVar14 = 0;
  puVar9[0xb] = 0;
  puVar9[2] = 0;
  puVar9[3] = &PTR_LAB_048f9700;
  pbVar10 = (byte *)(**(code **)(*(long *)(param_2 + 0x98) + 0xf0))((long *)(param_2 + 0x98));
  if ((*pbVar10 & 1) == 0) {
    uVar11 = FUN_03ea4cf4(*(undefined8 *)(param_1 + 0x18),&local_c0);
    *puVar14 = uVar11;
  }
  else {
    local_108 = 0x40;
    local_c5 = 0;
    local_118 = &PTR_LAB_048fd2d8;
    local_110 = local_104;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    puVar6 = local_b8;
    if (local_104 != local_b8) {
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar12 = 0;
      do {
        if (local_b8[lVar12] == '\0') goto LAB_03d7279c;
        if (local_b8[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_03d7279c;
        }
        if (local_b8[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_03d7279c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_03d7279c:
      iVar2 = (int)lVar12;
      if (local_108 <= (int)lVar12) {
        iVar2 = local_108 + -1;
      }
      memcpy(local_104,puVar6,(long)iVar2);
      local_104[iVar2] = 0;
    }
    puVar6 = local_110;
    local_118 = (undefined **)(puVar4 + 0x10);
    lVar12 = 0;
    local_170 = &PTR_LAB_048f9770;
    local_168 = "_Forward";
    local_110[(long)local_108 + -1] = 0;
    do {
      if (local_110[lVar12] == '\0') goto LAB_03d72850;
      if (local_110[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_03d72850;
      }
      if (local_110[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_03d72850;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_03d72850:
    uVar1 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
    (*(code *)PTR_FUN_048f9788)(&local_170);
    lVar12 = 0;
    do {
      if (local_168[lVar12] == '\0') goto LAB_03d728ac;
      if (local_168[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_03d728ac;
      }
      if (local_168[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_03d728ac;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_03d728ac:
    uVar3 = (uint)lVar12;
    if ((int)(local_108 - uVar1) <= (int)(uint)lVar12) {
      uVar3 = local_108 + ~uVar1;
    }
    if (0 < (int)uVar3) {
      (*(code *)local_170[3])(&local_170);
      memcpy(puVar6 + uVar1,local_168,(ulong)uVar3);
      puVar6[(int)(uVar3 + uVar1)] = 0;
    }
    uVar11 = FUN_03ea4cf4(*(undefined8 *)(param_1 + 0x18),&local_118);
    *puVar14 = uVar11;
    local_11d = 0;
    local_160 = 0x40;
    local_170 = &PTR_LAB_048fd2d8;
    local_168 = local_15c;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    puVar6 = local_b8;
    if (local_15c != local_b8) {
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar12 = 0;
      do {
        if (local_b8[lVar12] == '\0') goto LAB_03d7299c;
        if (local_b8[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_03d7299c;
        }
        if (local_b8[lVar12 + 2] == '\0') {
          lVar12 = lVar12 + 2;
          goto LAB_03d7299c;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      lVar12 = 0;
LAB_03d7299c:
      iVar2 = (int)lVar12;
      if (local_160 <= (int)lVar12) {
        iVar2 = local_160 + -1;
      }
      memcpy(local_15c,puVar6,(long)iVar2);
      local_15c[iVar2] = 0;
    }
    pcVar5 = local_168;
    local_170 = (undefined **)(puVar4 + 0x10);
    lVar12 = 0;
    local_168[(long)local_160 + -1] = 0;
    do {
      if (local_168[lVar12] == '\0') goto LAB_03d72a2c;
      if (local_168[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_03d72a2c;
      }
      if (local_168[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_03d72a2c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_03d72a2c:
    uVar1 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
    uVar3 = 9;
    if ((int)(local_160 - uVar1) < 10) {
      uVar3 = local_160 + ~uVar1;
    }
    if (0 < (int)uVar3) {
      memcpy(local_168 + uVar1,"_Backward",(ulong)uVar3);
      pcVar5[(ulong)uVar3 + (ulong)uVar1] = 0;
    }
    uVar11 = FUN_03ea4cf4(*(undefined8 *)(param_1 + 0x18),&local_170);
    puVar9[0xb] = uVar11;
  }
  puVar9[2] = param_4;
  plVar7 = (long *)(**(code **)(*plVar13 + 0xf0))(plVar13);
  (**(code **)(*plVar7 + 0x18))();
  __src = (void *)plVar7[1];
  __dest = (void *)puVar9[4];
  if (__dest != __src) {
    lVar12 = 0;
    do {
      if (*(char *)((long)__src + lVar12) == '\0') goto LAB_03d72afc;
      if (*(char *)((long)__src + lVar12 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_03d72afc;
      }
      if (*(char *)((long)__src + lVar12 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_03d72afc;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_03d72afc:
    iVar2 = (int)lVar12;
    if (*(int *)(puVar9 + 5) <= (int)lVar12) {
      iVar2 = *(int *)(puVar9 + 5) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  return puVar9;
}

