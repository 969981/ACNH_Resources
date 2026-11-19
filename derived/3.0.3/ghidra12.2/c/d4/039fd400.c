
void FUN_039fd400(long *param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  void *pvVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  ulong *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  undefined *local_10b0;
  undefined1 *local_10a8;
  undefined *local_10a0;
  undefined1 *local_1098;
  long *local_1090 [2];
  undefined4 local_1080;
  undefined1 local_107c [1023];
  undefined1 local_c7d;
  undefined *local_898;
  long local_890;
  undefined *local_480;
  undefined1 *local_478;
  int local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  puVar6 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  param_1[1] = 0;
  puVar6 = PTR_DAT_04bb2698;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar10 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar10;
    if (lVar10 != 0) {
      if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = lVar10 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
      }
      plVar19 = (long *)(lVar10 + 0x70);
      lVar17 = *plVar19;
      plVar22 = (long *)((long)*(int *)(lVar10 + 0x84) + (long)param_1);
      *plVar19 = (long)plVar22;
      *plVar22 = lVar17;
      plVar22[1] = (long)plVar19;
      if (lVar17 != 0) {
        *(long **)(lVar17 + 8) = plVar22;
      }
      *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + 1;
      if (lVar20 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar20 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = (long)&PTR_FUN_04b6bdd8;
  plVar22 = param_1 + 4;
  *plVar22 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_04bd1758 + 0x10;
  *(undefined2 *)((long)param_1 + 0x11a) = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = (long)puVar1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)puVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  param_1[0x2b] = 0;
  *(undefined2 *)((long)param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x1e] = (long)puVar1;
  param_1[0x1f] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = (long)puVar1;
  FUN_003490b4(param_1 + 0x2c);
  param_1[0x52] = 0;
  param_1[0x50] = (long)&PTR_LAB_04b6bdf8;
  param_1[0x51] = (long)&PTR_LAB_04b6bdf8;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  FUN_038e18e4(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar8 = 2;
  if (*(int *)(param_2 + 0x104) != -1) {
    iVar8 = *(int *)(param_2 + 0x104);
  }
  *(char *)((long)param_1 + 0x304) = (char)iVar8;
  if (param_3 == (long *)0x0) {
    lVar20 = *(long *)puVar6;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar20 + 8);
    if (lVar10 != 0) {
      param_3 = (long *)(lVar10 + 0xa8);
    }
    param_3 = (long *)*param_3;
  }
  iVar8 = (**(code **)(*param_3 + 0x78))(param_3);
  param_1[0xf] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar6 = PTR_DAT_04bb2f40;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_4 != 0) {
    FUN_006e9454(&local_898,"%s_%s",&DAT_04069d61,"folder");
    local_c7d = 0;
    local_1080 = 0x400;
    local_107c[0] = 0;
    local_1090[0] = (long *)(puVar6 + 0x10);
    local_1090[1] = (long *)local_107c;
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_006e9454(&local_480,"%s\\%s","resource",local_890);
    (**(code **)(local_480 + 0x18))(&local_480);
    FUN_038d1270(local_1090,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_478);
    FUN_006e9454(&local_898,"%s_%s",&DAT_04069d61,"folder");
    local_c7d = 0;
    local_1080 = 0x400;
    local_107c[0] = 0;
    local_1090[0] = (long *)(puVar6 + 0x10);
    local_1090[1] = (long *)local_107c;
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_006e9454(&local_480,"%s\\%s","resource",local_890);
    (**(code **)(local_480 + 0x18))(&local_480);
    FUN_038d1270(local_1090,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_478);
  }
  param_1[0x15] = param_2[0x105];
  lVar10 = FUN_0039c3f8(*param_2);
  param_1[4] = lVar10;
  FUN_038fdc20();
  puVar11 = (undefined8 *)param_1[0x15];
  if (puVar11 != (undefined8 *)0x0) {
    local_1090[0] = (long *)param_1[4];
    local_1090[1] = param_1;
    (**(code **)*puVar11)(puVar11,local_1090,param_3);
  }
  puVar6 = PTR_PTR_04bb2238;
  lVar10 = *plVar22;
  if (*(short *)(lVar10 + 0xec) == 0) {
    uVar28 = 0;
LAB_039fdafc:
    uVar27 = (uint)uVar28;
    uVar21 = uVar28;
    if ((1 - uVar27 & 1) != 0) {
      if (0xfe < uVar27) {
        uVar21 = 0;
      }
      local_1090[uVar21] = (long *)0x0;
      uVar21 = (ulong)(uVar27 + 1);
    }
    if (uVar27 != 0xfe) {
      do {
        uVar15 = (uint)uVar21;
        uVar18 = (ulong)(uVar15 + 1);
        if (0xfe < uVar15) {
          uVar21 = 0;
        }
        local_1090[uVar21] = (long *)0x0;
        if (0xfe < uVar15 + 1) {
          uVar18 = 0;
        }
        local_1090[uVar18] = (long *)0x0;
        uVar21 = (ulong)(uVar15 + 2);
      } while (uVar15 + 2 != 0xff);
    }
    plVar19 = (long *)PTR_DAT_04bb2698;
    if ((int)uVar27 < 1) goto LAB_039fdbdc;
  }
  else {
    uVar21 = 0;
    uVar28 = 0;
    puVar1 = PTR_DAT_04bb2f40 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bbdbd8 + 0x10;
    do {
      if (*(long *)(lVar10 + 0xc0) == 0) {
        local_890 = 0;
      }
      else {
        local_890 = *(long *)(*(long *)(lVar10 + 0xc0) + uVar21 * 0x10 + 0x20) + 2;
      }
      uVar18 = 0;
      do {
        if (*(char *)(local_890 + uVar18) == '\0') {
LAB_039fd864:
          uVar18 = uVar18 & 0xffffffff;
          goto LAB_039fd868;
        }
        if (*(char *)(local_890 + uVar18 + 1) == '\0') {
          uVar18 = uVar18 + 1;
          goto LAB_039fd864;
        }
        if (*(char *)(local_890 + uVar18 + 2) == '\0') {
          uVar18 = uVar18 + 2;
          goto LAB_039fd864;
        }
        uVar18 = uVar18 + 3;
      } while (uVar18 != 0x80001);
      uVar18 = 0;
LAB_039fd868:
      local_470 = 0x400;
      local_6d = 0;
      local_898 = puVar2;
      local_480 = puVar3;
      local_478 = local_46c;
      (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
      puVar24 = *(undefined1 **)(puVar6 + 8);
      if (local_46c != puVar24) {
        (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
        lVar10 = 0;
        do {
          if (*(char *)(*(long *)(puVar6 + 8) + lVar10) == '\0') goto LAB_039fd8fc;
          lVar20 = *(long *)(puVar6 + 8) + lVar10;
          if (*(char *)(lVar20 + 1) == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_039fd8fc;
          }
          if (*(char *)(lVar20 + 2) == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_039fd8fc;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_039fd8fc:
        iVar9 = (int)lVar10;
        if (local_470 <= (int)lVar10) {
          iVar9 = local_470 + -1;
        }
        memcpy(local_46c,puVar24,(long)iVar9);
        local_46c[iVar9] = 0;
      }
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      local_1098 = PTR_DAT_04bb2120;
      local_10a0 = puVar4;
      local_480 = puVar1;
      if (0 < (int)uVar18) {
        uVar25 = 0;
        do {
          (**(code **)(local_898 + 0x18))(&local_898);
          cVar5 = *(char *)(local_890 + uVar25);
          if (cVar5 == '.') {
            local_1098 = (undefined1 *)(local_890 + uVar25 + 1);
            break;
          }
          (**(code **)(local_480 + 0x18))(&local_480);
          lVar10 = 0;
          do {
            if (local_478[lVar10] == '\0') goto LAB_039fd9e4;
            if (local_478[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_039fd9e4;
            }
            if (local_478[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_039fd9e4;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_039fd9e4:
          if ((int)lVar10 < local_470 + -1) {
            local_478[(int)lVar10] = cVar5;
            (local_478 + (int)lVar10)[1] = '\0';
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != uVar18);
      }
      local_10a8 = &DAT_040c7754;
      local_10b0 = puVar4;
      (**(code **)(local_10a0 + 0x18))(&local_10a0);
      (**(code **)(local_10a0 + 0x18))(&local_10a0);
      puVar24 = local_1098;
      (**(code **)(local_10b0 + 0x18))(&local_10b0);
      if (puVar24 == local_10a8) {
LAB_039fd7b4:
        uVar27 = (uint)uVar28;
        if (0xfe < uVar27) {
          uVar28 = 0;
        }
        local_1090[uVar28] = (long *)(*(long *)(*plVar22 + 0xb8) + uVar21 * 0x10);
        uVar28 = (ulong)(uVar27 + 1);
      }
      else {
        uVar18 = 0;
        bVar7 = true;
        do {
          if (local_1098[uVar18] != local_10a8[uVar18]) break;
          if (local_1098[uVar18] == '\0') {
            if (bVar7) goto LAB_039fd7b4;
            break;
          }
          if (local_1098[uVar18 + 1] != local_10a8[uVar18 + 1]) break;
          if (local_1098[uVar18 + 1] == '\0') goto LAB_039fd7b4;
          if (local_1098[uVar18 + 2] != local_10a8[uVar18 + 2]) break;
          if (local_1098[uVar18 + 2] == '\0') goto LAB_039fd7b4;
          bVar7 = uVar18 < 0x7fffe;
          uVar18 = uVar18 + 3;
        } while (uVar18 != 0x80001);
      }
      lVar10 = *plVar22;
      uVar21 = uVar21 + 1;
    } while (uVar21 < *(ushort *)(lVar10 + 0xec));
    if ((int)uVar28 < 0xff) goto LAB_039fdafc;
  }
  plVar19 = (long *)PTR_DAT_04bb2698;
  uVar21 = uVar28 * 0x50 | 8;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar12 = malloc(uVar21);
  }
  else {
    puVar12 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar21,8);
  }
  if (puVar12 != (ulong *)0x0) {
    *puVar12 = uVar28;
    lVar10 = uVar28 * 0x50;
    puVar23 = puVar12 + 1;
    do {
      FUN_03ad28ac(puVar23);
      puVar23 = puVar23 + 10;
      lVar10 = lVar10 + -0x50;
    } while (lVar10 != 0);
    *(int *)(param_1 + 0x11) = (int)uVar28;
    param_1[0x12] = (long)(puVar12 + 1);
  }
LAB_039fdbdc:
  puVar6 = PTR_DAT_04bd15b8;
  iVar9 = *(int *)(param_2 + 1) + (int)param_1[0x11];
  lVar10 = *(long *)PTR_DAT_04bd15b8;
  if (lVar10 != 0) {
    iVar9 = *(int *)(*(long *)(lVar10 + 8) + 0x5cb40) + iVar9;
  }
  if (0 < iVar9) {
    if (*plVar19 == 0) {
      pvVar13 = malloc((long)(iVar9 << 3));
    }
    else {
      pvVar13 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(iVar9 << 3),8);
    }
    if (pvVar13 != (void *)0x0) {
      param_1[0x14] = (long)pvVar13;
      *(undefined4 *)(param_1 + 0x13) = 0;
      *(int *)((long)param_1 + 0x9c) = iVar9;
    }
  }
  lVar20 = param_1[0x11];
  if ((int)lVar20 != 0) {
    lVar17 = param_1[0x12];
    uVar28 = 0;
    uVar21 = 0;
    do {
      if ((int)param_1[0x13] < *(int *)((long)param_1 + 0x9c)) {
        *(long *)(param_1[0x14] + (long)(int)param_1[0x13] * 8) = lVar17 + (long)(int)uVar21 * 0x50;
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] + 1;
      }
      lVar26 = lVar17 + (long)(int)uVar21 * 0x50;
      uVar18 = uVar21;
      if (0xfe < (uint)uVar28) {
        uVar18 = 0;
      }
      *(long *)(lVar26 + 0x20) = *local_1090[uVar18];
      lVar14 = FUN_003a0970();
      *(undefined8 *)(lVar26 + 0x28) = *(undefined8 *)(lVar14 + 0x20);
      uVar28 = uVar21 + 1;
      uVar21 = uVar28 & 0xffffffff;
    } while ((int)lVar20 != (int)uVar28);
  }
  if ((*(int *)(param_2 + 1) != 0) &&
     (iVar9 = (int)param_1[0x13], iVar9 < *(int *)((long)param_1 + 0x9c))) {
    puVar11 = (undefined8 *)param_2[2];
    lVar20 = (long)*(int *)(param_2 + 1) << 3;
    do {
      if (iVar9 < *(int *)((long)param_1 + 0x9c)) {
        *(undefined8 *)(param_1[0x14] + (long)iVar9 * 8) = *puVar11;
        iVar9 = (int)param_1[0x13] + 1;
        *(int *)(param_1 + 0x13) = iVar9;
      }
      puVar11 = puVar11 + 1;
      lVar20 = lVar20 + -8;
    } while (lVar20 != 0);
  }
  if (lVar10 != 0) {
    iVar9 = *(int *)(*(long *)(*(long *)puVar6 + 8) + 0x5cb40);
    if ((iVar9 != 0) && (iVar16 = (int)param_1[0x13], iVar16 < *(int *)((long)param_1 + 0x9c))) {
      puVar11 = *(undefined8 **)(*(long *)(*(long *)puVar6 + 8) + 0x5cb48);
      lVar10 = (long)iVar9 << 3;
      do {
        if (iVar16 < *(int *)((long)param_1 + 0x9c)) {
          *(undefined8 *)(param_1[0x14] + (long)iVar16 * 8) = *puVar11;
          iVar16 = (int)param_1[0x13] + 1;
          *(int *)(param_1 + 0x13) = iVar16;
        }
        puVar11 = puVar11 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
  }
  uVar15 = *(uint *)((long)param_1 + 0x2b4) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x103);
  *(uint *)((long)param_1 + 0x2b4) = uVar15;
  uVar27 = (uint)*(byte *)((long)param_2 + 0x819) << 6;
  *(uint *)((long)param_1 + 0x2b4) = uVar15 & 0xffffffbf | uVar27;
  uVar15 = uVar15 & 0xffffffb7 | uVar27 | (uint)*(byte *)((long)param_2 + 0x81a) << 3;
  *(uint *)((long)param_1 + 0x2b4) = uVar15;
  uVar27 = (uint)*(byte *)((long)param_2 + 0x81b) << 4;
  *(uint *)((long)param_1 + 0x2b4) = uVar15 & 0xffffffef | uVar27;
  *(uint *)((long)param_1 + 0x2b4) =
       uVar15 & 0xffffffed | uVar27 | (uint)*(byte *)((long)param_2 + 0x81c) << 1;
  if (param_4 != 0) {
    FUN_006e9454(&local_480,&DAT_0409e973,*(long *)(*plVar22 + 0x20) + 2);
    local_46c[0] = 0;
    local_478 = local_46c;
    local_6d = 0;
    local_470 = 0x400;
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png","NW_3DEditor1");
  }
  iVar9 = (**(code **)(*param_3 + 0x78))(param_3);
  *(int *)(param_1 + 0x56) = (int)param_1[0x56] + (iVar8 - iVar9);
  return;
}

