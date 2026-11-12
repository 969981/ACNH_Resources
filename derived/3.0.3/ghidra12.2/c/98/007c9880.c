
void FUN_007c9880(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined *local_2c0;
  char *pcStack_2b8;
  char *local_2b0;
  undefined8 local_2a8;
  char local_2a0 [256];
  undefined *local_1a0;
  char *local_198;
  int local_190;
  char local_18c [255];
  undefined1 local_8d;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  void *local_70 [2];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xa0));
  local_8d = 0;
  local_190 = 0x100;
  local_198 = local_18c;
  local_18c[0] = '\0';
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar10 = (char *)param_2[1];
  local_2a0[0] = '\0';
  local_2a8 = 0x10000000000;
  local_2b0 = local_2a0;
  if (local_2a0 == pcVar10) {
    uVar6 = 0;
  }
  else {
    lVar16 = 0;
    do {
      lVar7 = lVar16;
      lVar16 = lVar7 + 1;
    } while (pcVar10[lVar7] != '\0');
    uVar6 = (uint)lVar7;
    if ((int)uVar6 < 1) {
      uVar6 = 0;
      pcVar10 = local_2a0;
    }
    else {
      if (0xfe < (int)uVar6) {
        uVar6 = 0xff;
      }
      memcpy(local_2a0,pcVar10,(ulong)uVar6);
      pcVar10 = local_2a0 + uVar6;
    }
    *pcVar10 = '\0';
    local_2a8 = CONCAT44(local_2a8._4_4_,uVar6);
  }
  puVar4 = PTR_PTR_04bb2238;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar10 = local_198;
  if (uVar6 == 0) {
    uVar14 = 0;
  }
  else {
    uVar13 = 0;
    uVar14 = (ulong)uVar6;
    do {
      if (local_2a0[uVar13] == '.') {
        uVar14 = (ulong)((int)uVar13 + 1);
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
  }
  if ((local_2a0 != local_2b0) || ((int)uVar14 != (int)local_2a8)) {
    if (local_2a0 != local_2b0) {
LAB_007c99ec:
      iVar12 = (int)uVar14;
      uVar13 = 0;
      bVar5 = true;
      pcVar11 = local_2a0 + iVar12;
LAB_007c9a20:
      if (pcVar11[uVar13] != '\0') {
        if (pcVar11[uVar13] == '/') {
          if (bVar5) goto LAB_007c9a10;
          goto LAB_007c9a80;
        }
        if (pcVar11[uVar13 + 1] == '\0') goto LAB_007c9a80;
        if (pcVar11[uVar13 + 1] == '/') goto LAB_007c9a10;
        if (pcVar11[uVar13 + 2] != '\0') {
          if (pcVar11[uVar13 + 2] == '/') goto LAB_007c9a10;
          bVar5 = uVar13 < 0x7fffe;
          uVar13 = uVar13 + 3;
          if (uVar13 == 0x80001) goto LAB_007c9a80;
          goto LAB_007c9a20;
        }
      }
LAB_007c9a80:
      uVar13 = 0;
      bVar5 = true;
      while( true ) {
        lVar16 = uVar13 + (long)iVar12 + -0x2b0;
        if (local_2a0[lVar16 + 0x2b0] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar16 + 0x2b0] == '\\') break;
        if (local_2a0[lVar16 + 0x2b1] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar16 + 0x2b1] == '\\') goto LAB_007c9a10;
        if (local_2a0[lVar16 + 0x2b2] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar16 + 0x2b2] == '\\') goto LAB_007c9a10;
        bVar5 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
        if (uVar13 == 0x80001) goto LAB_007c9b00;
      }
      if (!bVar5) goto LAB_007c9b00;
LAB_007c9a10:
      uVar13 = 0;
      bVar5 = true;
      if (iVar12 < (int)uVar6) goto LAB_007c9ae0;
      goto LAB_007c9a20;
    }
    do {
      iVar12 = (int)uVar14;
      uVar13 = 0;
      bVar5 = true;
      lVar16 = (long)iVar12 + -0x2b0;
      do {
        lVar7 = uVar13 + lVar16;
        if (local_2a0[lVar7 + 0x2b0] == '\0') break;
        if (local_2a0[lVar7 + 0x2b0] == '/') {
          if (bVar5) goto LAB_007c9d90;
          break;
        }
        if (local_2a0[lVar7 + 0x2b1] == '\0') break;
        if (local_2a0[lVar7 + 0x2b1] == '/') goto LAB_007c9d90;
        if (local_2a0[lVar7 + 0x2b2] == '\0') break;
        if (local_2a0[lVar7 + 0x2b2] == '/') goto LAB_007c9d90;
        bVar5 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
      } while (uVar13 != 0x80001);
      uVar13 = 0;
      bVar5 = true;
      while( true ) {
        lVar7 = uVar13 + lVar16;
        if (local_2a0[lVar7 + 0x2b0] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar7 + 0x2b0] == '\\') break;
        if (local_2a0[lVar7 + 0x2b1] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar7 + 0x2b1] == '\\') goto LAB_007c9d90;
        if (local_2a0[lVar7 + 0x2b2] == '\0') goto LAB_007c9b00;
        if (local_2a0[lVar7 + 0x2b2] == '\\') goto LAB_007c9d90;
        bVar5 = uVar13 < 0x7fffe;
        uVar13 = uVar13 + 3;
        if (uVar13 == 0x80001) goto LAB_007c9b00;
      }
      if (!bVar5) goto LAB_007c9b00;
LAB_007c9d90:
      if (iVar12 < (int)uVar6) {
        pcVar11 = local_2a0 + iVar12;
        do {
          uVar1 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar1;
          if (*pcVar11 == '.') goto LAB_007c9cc0;
          pcVar11 = pcVar11 + 1;
        } while (uVar6 != uVar1);
        uVar14 = (ulong)uVar6;
      }
LAB_007c9cc0:
    } while ((int)uVar14 != (int)local_2a8);
  }
  iVar12 = (int)local_2a8;
LAB_007c9b00:
  if (((local_2a0 != local_2b0) || (iVar12 != (int)local_2a8)) && (local_198 != local_2b0)) {
    if (iVar12 < 1) {
      uVar14 = 0;
      do {
        if (local_2b0[uVar14] == '\0') goto LAB_007c9b28;
        if (local_2b0[uVar14 + 1] == '\0') {
          uVar14 = uVar14 + 1;
          goto LAB_007c9b28;
        }
        if (local_2b0[uVar14 + 2] == '\0') {
          uVar14 = uVar14 + 2;
          goto LAB_007c9b28;
        }
        uVar14 = uVar14 + 3;
      } while (uVar14 != 0x80001);
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)(iVar12 - 1);
    }
LAB_007c9b28:
    iVar12 = (int)uVar14;
    if (local_190 <= (int)uVar14) {
      iVar12 = local_190 + -1;
    }
    memcpy(local_198,local_2b0,(long)iVar12);
    pcVar10[iVar12] = '\0';
  }
  puVar3 = PTR_DAT_04bb2020;
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "/";
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  lVar16 = 0;
  do {
    if (local_198[lVar16] == '\0') goto LAB_007c9bbc;
    if (local_198[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_007c9bbc;
    }
    if (local_198[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_007c9bbc;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_007c9bbc:
  uVar6 = (uint)lVar16;
  (**(code **)(local_88 + 0x18))(&local_88);
  lVar16 = 0;
  do {
    if (local_80[lVar16] == '\0') {
LAB_007c9c08:
      uVar6 = uVar6 - (int)lVar16;
      if ((int)uVar6 < 0) goto LAB_007c9ca4;
LAB_007c9c10:
      uVar14 = (ulong)uVar6;
      if ((int)lVar16 < 1) goto LAB_007c9dc4;
      goto LAB_007c9c20;
    }
    if (local_80[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_007c9c08;
    }
    if (local_80[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      uVar6 = uVar6 - (int)lVar16;
      if (-1 < (int)uVar6) goto LAB_007c9c10;
      goto LAB_007c9ca4;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  if ((int)uVar6 < 0) {
LAB_007c9ca4:
    uVar6 = 0xffffffff;
  }
  else {
LAB_007c9dc4:
    (**(code **)(local_88 + 0x18))(&local_88);
  }
LAB_007c9dd4:
  (**(code **)(local_1a0 + 0x18))(&local_1a0);
  lVar16 = 0;
  do {
    if (local_198[lVar16] == '\0') goto LAB_007c9e2c;
    if (local_198[lVar16 + 1] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_007c9e2c;
    }
    if (local_198[lVar16 + 2] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_007c9e2c;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_007c9e2c:
  pcStack_2b8 = *(char **)(puVar4 + 8);
  if ((int)uVar6 < (int)lVar16 && -2 < (int)uVar6) {
    pcStack_2b8 = local_198 + (uVar6 + 1);
  }
  local_2c0 = puVar3 + 0x10;
  uVar6 = FUN_006bd550(pcStack_2b8,0);
  for (lVar16 = *(long *)(param_1 + 8); lVar16 != 0; lVar16 = *(long *)(lVar16 + 8)) {
    while (*(uint *)(lVar16 + 0x30) <= uVar6) {
      if (uVar6 <= *(uint *)(lVar16 + 0x30)) {
        if (*(long *)(lVar16 + 0x38) != 0) {
          plVar15 = *(long **)(*(long *)PTR_DAT_04bb2118 + 0x540);
          lVar16 = *(long *)PTR_DAT_04bb2698;
          if (lVar16 == 0) {
            pvVar9 = malloc(200);
          }
          else {
            plVar8 = plVar15;
            if (plVar15 == (long *)0x0) {
              lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              puVar2 = (undefined8 *)(lVar16 + 8);
              if (lVar7 != 0) {
                puVar2 = (undefined8 *)(lVar7 + 0xa8);
              }
              plVar8 = (long *)*puVar2;
            }
            pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,200,8);
          }
          FUN_007ca314(pvVar9,&local_2c0,plVar15);
          local_88 = puVar3 + 0x10;
          local_80 = *(char **)((long)pvVar9 + 0x30);
          local_70[0] = pvVar9;
          (**(code **)(*(long *)((long)pvVar9 + 0x28) + 0x18))((long *)((long)pvVar9 + 0x28));
          local_78 = FUN_006bd550(*(undefined8 *)((long)pvVar9 + 0x30),0);
          FUN_007c9750((long *)(param_1 + 8),&local_88,local_70);
        }
        goto LAB_007c9f88;
      }
      lVar16 = *(long *)(lVar16 + 0x10);
      if (lVar16 == 0) goto LAB_007c9f88;
    }
  }
LAB_007c9f88:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xa0));
  return;
  while (pcVar11 = pcVar11 + 1, uVar6 != uVar1) {
LAB_007c9ae0:
    uVar1 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar1;
    if (*pcVar11 == '.') goto LAB_007c99ec;
  }
  uVar14 = (ulong)uVar6;
  goto LAB_007c99ec;
LAB_007c9c20:
  pcVar10 = local_198;
  pcVar11 = local_198 + uVar14;
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar6 = (uint)uVar14;
  if (pcVar11 == local_80) goto LAB_007c9dd4;
  pcVar11 = local_80;
  lVar7 = lVar16;
  while( true ) {
    lVar7 = lVar7 + -1;
    if (pcVar10[uVar14] != *pcVar11) break;
    if (pcVar10[uVar14] == '\0') goto LAB_007c9dd4;
    pcVar10 = pcVar10 + 1;
    pcVar11 = pcVar11 + 1;
    if (lVar7 == 0) goto LAB_007c9dd4;
  }
  uVar14 = uVar14 - 1;
  bVar5 = (int)uVar6 < 1;
  uVar6 = 0xffffffff;
  if (bVar5) goto LAB_007c9dd4;
  goto LAB_007c9c20;
}

