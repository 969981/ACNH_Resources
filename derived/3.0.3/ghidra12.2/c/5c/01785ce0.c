
void * FUN_01785ce0(undefined4 *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  char cVar13;
  char *pcVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  undefined *local_260;
  char *local_258;
  undefined *local_250;
  char *local_248;
  int local_240;
  char local_23c [127];
  undefined1 local_1bd;
  undefined *local_1b8;
  char *local_1b0;
  int local_1a8;
  char local_1a4 [127];
  undefined1 local_125;
  undefined *local_120;
  char *local_118;
  int local_110;
  char local_10c [127];
  undefined1 local_8d;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined1 local_6c [12];
  
  puVar3 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = *param_1;
  uStack_7c = param_1[1];
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar18 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (uVar6 < *(uint *)(lVar18 + 0x1d8)) {
        lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8);
        if (lVar18 != 0) {
          local_78 = lVar18;
        }
      }
    }
  }
  uVar5 = FUN_01b020f0(&local_88);
  puVar3 = PTR_DAT_04bb2e90;
  if (uVar5 == 0xffff) {
    return (void *)0x0;
  }
  local_110 = 0x80;
  local_8d = 0;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  local_120 = puVar1;
  local_118 = local_10c;
  (**(code **)(DAT_0528c830 + 0x18))(&DAT_0528c830);
  pcVar14 = DAT_0528c838;
  if (local_10c != DAT_0528c838) {
    (**(code **)(DAT_0528c830 + 0x18))(&DAT_0528c830);
    lVar18 = 0;
    do {
      if (DAT_0528c838[lVar18] == '\0') goto LAB_01785e7c;
      if (DAT_0528c838[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_01785e7c;
      }
      if (DAT_0528c838[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_01785e7c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_01785e7c:
    iVar17 = (int)lVar18;
    if (local_110 <= (int)lVar18) {
      iVar17 = local_110 + -1;
    }
    memcpy(local_10c,pcVar14,(long)iVar17);
    local_10c[iVar17] = '\0';
  }
  puVar4 = PTR_DAT_04bb2d88;
  local_125 = 0;
  local_1a8 = 0x80;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  local_1b8 = puVar1;
  local_1b0 = local_1a4;
  local_120 = puVar2;
  (**(code **)(DAT_0528c830 + 0x18))(&DAT_0528c830);
  pcVar14 = DAT_0528c838;
  if (local_1a4 != DAT_0528c838) {
    (**(code **)(DAT_0528c830 + 0x18))(&DAT_0528c830);
    lVar18 = 0;
    do {
      if (DAT_0528c838[lVar18] == '\0') goto LAB_01785f3c;
      if (DAT_0528c838[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_01785f3c;
      }
      if (DAT_0528c838[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_01785f3c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_01785f3c:
    iVar17 = (int)lVar18;
    if (local_1a8 <= (int)lVar18) {
      iVar17 = local_1a8 + -1;
    }
    memcpy(local_1a4,pcVar14,(long)iVar17);
    local_1a4[iVar17] = '\0';
  }
  local_1bd = 0;
  local_240 = 0x80;
  local_250 = puVar3 + 0x10;
  local_248 = local_23c;
  local_1b8 = puVar2;
  (**(code **)(local_120 + 0x18))(&local_120);
  pcVar14 = local_118;
  if (local_23c != local_118) {
    (**(code **)(local_120 + 0x18))(&local_120);
    lVar18 = 0;
    do {
      if (local_118[lVar18] == '\0') goto LAB_01785ffc;
      if (local_118[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_01785ffc;
      }
      if (local_118[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_01785ffc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_01785ffc:
    iVar17 = (int)lVar18;
    if (local_240 <= (int)lVar18) {
      iVar17 = local_240 + -1;
    }
    memcpy(local_23c,pcVar14,(long)iVar17);
    local_23c[iVar17] = '\0';
  }
  puVar1 = PTR_DAT_04bb5c60;
  puVar3 = PTR_DAT_04bb5c58;
  local_250 = puVar4 + 0x10;
  lVar18 = *(long *)PTR_DAT_04bb46d0;
  uVar6 = (uint)uVar5 - (uint)*(ushort *)(lVar18 + 0x200);
  if (*(uint *)(lVar18 + 0x1e0) <= uVar6) {
    return (void *)0x0;
  }
  puVar12 = *(uint **)(*(long *)(lVar18 + 0x1e8) + (long)(int)uVar6 * 8);
  if (puVar12 == (uint *)0x0) {
    return (void *)0x0;
  }
  if (*puVar12 != 0) {
    cVar13 = *PTR_DAT_04bb5c58;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar1 = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar1 + 0x2c);
        if (-1 < (int)uVar6) {
          pcVar14 = (char *)((ulong)uVar6 + (long)puVar12);
          goto LAB_01786138;
        }
        if (uVar6 != 0xffffffff) break;
      }
      puVar15 = (uint *)(ulong)*puVar12;
      pcVar14 = (char *)0x0;
      if ((*puVar12 == 0) || (puVar12 == puVar15)) goto LAB_01786138;
      lVar18 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar15)) != '\0') {
        lVar18 = 0x1c;
      }
      lVar18 = (long)puVar12 + (lVar18 - (long)puVar15);
      if (lVar18 == 0) break;
      uVar19 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar15));
      *(undefined4 *)(puVar1 + 0x2c) = 0xfffffffe;
      pcVar14 = (char *)0x0;
      if (uVar19 == 0) goto LAB_01786138;
      piVar16 = (int *)(lVar18 + 4);
      while (piVar16[-1] != 0x4b9c4229) {
        piVar16 = piVar16 + 2;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) {
          pcVar14 = (char *)0x0;
          goto LAB_01786138;
        }
      }
      iVar17 = 0;
      if (*piVar16 != -1) {
        iVar17 = *piVar16;
      }
      *(int *)(puVar1 + 0x2c) = iVar17;
    } while (*puVar12 != 0);
  }
  pcVar14 = (char *)0x0;
LAB_01786138:
  puVar3 = PTR_DAT_04bb2698;
  local_258 = *(char **)PTR_PTR_04bb5c50;
  if (pcVar14 != (char *)0x0) {
    local_258 = pcVar14;
  }
  if (local_258 == (char *)0x0) {
    return (void *)0x0;
  }
  local_260 = PTR_DAT_04bb2020 + 0x10;
  if (*local_258 == '\0') {
    return (void *)0x0;
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    pvVar9 = malloc(0x1298);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar18 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_017861fc;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1298,8);
  }
LAB_017861fc:
  FUN_018015a0(pvVar9,&local_260);
  (**(code **)(local_260 + 0x18))(&local_260);
  lVar18 = 0;
  do {
    if (local_258[lVar18] == '\0') goto LAB_0178626c;
    if (local_258[lVar18 + 1] == '\0') {
      lVar18 = lVar18 + 1;
      goto LAB_0178626c;
    }
    if (local_258[lVar18 + 2] == '\0') {
      lVar18 = lVar18 + 2;
      goto LAB_0178626c;
    }
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x80001);
  lVar18 = 0;
LAB_0178626c:
  (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
  lVar7 = 0;
  do {
    iVar17 = (int)lVar18;
    if (DAT_0528d028[lVar7] == '\0') {
LAB_017862cc:
      iVar11 = (int)lVar7;
      if (iVar17 < iVar11) goto LAB_01786540;
      if (iVar11 < 1) goto LAB_01786348;
      uVar19 = 0;
      goto LAB_017862e8;
    }
    if (DAT_0528d028[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_017862cc;
    }
    if (DAT_0528d028[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_017862cc;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  if (-1 < iVar17) {
LAB_01786348:
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
LAB_01786364:
    pcVar20 = local_118;
    (**(code **)(local_260 + 0x18))(&local_260);
    pcVar14 = local_258;
    if (pcVar20 != local_258) {
      (**(code **)(local_260 + 0x18))(&local_260);
      lVar18 = 0;
      do {
        if (local_258[lVar18] == '\0') goto LAB_017863e8;
        if (local_258[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_017863e8;
        }
        if (local_258[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_017863e8;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_017863e8:
      iVar17 = (int)lVar18;
      if (local_110 <= (int)lVar18) {
        iVar17 = local_110 + -1;
      }
      memcpy(pcVar20,pcVar14,(long)iVar17);
      pcVar20[iVar17] = '\0';
    }
    pcVar20 = local_1b0;
    (**(code **)(local_250 + 0x18))(&local_250);
    pcVar14 = local_248;
    if (pcVar20 != local_248) {
      (**(code **)(local_250 + 0x18))(&local_250);
      lVar18 = 0;
      do {
        if (local_248[lVar18] == '\0') goto LAB_01786484;
        if (local_248[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_01786484;
        }
        if (local_248[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_01786484;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_01786484:
      iVar17 = (int)lVar18;
      if (local_1a8 <= (int)lVar18) {
        iVar17 = local_1a8 + -1;
      }
      memcpy(pcVar20,pcVar14,(long)iVar17);
      pcVar20[iVar17] = '\0';
    }
    iVar17 = local_1a8;
    pcVar14 = local_1b0;
    local_6c[0] = 0;
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    pcVar20 = local_1b0;
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    lVar18 = 0;
    do {
      if (local_1b0[lVar18] == '\0') goto LAB_0178651c;
      if (local_1b0[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0178651c;
      }
      if (local_1b0[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0178651c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0178651c:
    FUN_038d0770(pcVar14,0,iVar17,pcVar20,lVar18,&DAT_0528ccc0,&local_120,local_6c);
  }
  goto LAB_01786540;
  while( true ) {
    pcVar20 = DAT_0528d028;
    lVar18 = lVar7;
    while( true ) {
      lVar18 = lVar18 + -1;
      if (pcVar14[uVar19] != *pcVar20) break;
      if (pcVar14[uVar19] == '\0') goto LAB_0178635c;
      pcVar14 = pcVar14 + 1;
      pcVar20 = pcVar20 + 1;
      if (lVar18 == 0) goto LAB_0178635c;
    }
    uVar19 = uVar19 + 1;
    if (uVar19 == (iVar17 - iVar11) + 1) break;
LAB_017862e8:
    pcVar14 = local_258;
    pcVar20 = local_258 + uVar19;
    (**(code **)(DAT_0528d020 + 0x18))(&DAT_0528d020);
    if (pcVar20 == DAT_0528d028) {
LAB_0178635c:
      if ((int)uVar19 != -1) goto LAB_01786364;
      break;
    }
  }
LAB_01786540:
  pcVar20 = *(char **)((long)pvVar9 + 0x280);
  (**(code **)(local_120 + 0x18))(&local_120);
  pcVar14 = local_118;
  if (pcVar20 != local_118) {
    (**(code **)(local_120 + 0x18))(&local_120);
    lVar18 = 0;
    do {
      if (local_118[lVar18] == '\0') goto LAB_017865bc;
      if (local_118[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_017865bc;
      }
      if (local_118[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_017865bc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_017865bc:
    iVar17 = (int)lVar18;
    if (*(int *)((long)pvVar9 + 0x288) <= (int)lVar18) {
      iVar17 = *(int *)((long)pvVar9 + 0x288) + -1;
    }
    memcpy(pcVar20,pcVar14,(long)iVar17);
    pcVar20[iVar17] = '\0';
  }
  *(undefined4 *)((long)pvVar9 + 0x10d8) = 0;
  pcVar20 = *(char **)((long)pvVar9 + 0xf90);
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  pcVar14 = local_1b0;
  if (pcVar20 != local_1b0) {
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    lVar18 = 0;
    do {
      if (local_1b0[lVar18] == '\0') goto LAB_0178665c;
      if (local_1b0[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0178665c;
      }
      if (local_1b0[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0178665c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0178665c:
    iVar17 = (int)lVar18;
    if (*(int *)((long)pvVar9 + 0xf98) <= (int)lVar18) {
      iVar17 = *(int *)((long)pvVar9 + 0xf98) + -1;
    }
    memcpy(pcVar20,pcVar14,(long)iVar17);
    pcVar20[iVar17] = '\0';
  }
  *(undefined2 *)((long)pvVar9 + 0x1288) = *(undefined2 *)param_1;
  *(undefined1 *)((long)pvVar9 + 0x128a) = *(undefined1 *)((long)param_1 + 2);
  *(undefined1 *)((long)pvVar9 + 0x128b) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)((long)pvVar9 + 0x128c) = param_1[1];
  if ((param_3 & 1) != 0) {
    *(undefined1 *)((long)pvVar9 + 0x1290) = 1;
  }
  if (*(long *)((long)pvVar9 + 0x1190) == 0) {
    lVar18 = *(long *)puVar3;
    if (lVar18 == 0) {
      puVar10 = malloc(4);
    }
    else {
      plVar8 = param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar18 + 8);
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB_01786738;
      }
      puVar10 = (undefined4 *)(**(code **)(*plVar8 + 0x30))(plVar8,4,8);
    }
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0xffffffff;
      *(undefined4 **)((long)pvVar9 + 0x1190) = puVar10;
      *(undefined4 *)((long)pvVar9 + 0x1188) = 1;
    }
  }
LAB_01786738:
  if (*(long *)((long)pvVar9 + 0x1180) == 0) {
    lVar18 = *(long *)puVar3;
    if (lVar18 == 0) {
      puVar10 = malloc(0x58);
    }
    else {
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_2 = (long *)(lVar18 + 8);
        if (lVar7 != 0) {
          param_2 = (long *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return pvVar9;
        }
      }
      puVar10 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0x58,8);
    }
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar10 + 1) = 0xffff;
      *(undefined2 *)(puVar10 + 3) = 0xffff;
      *(undefined2 *)(puVar10 + 5) = 0xffff;
      *(undefined2 *)(puVar10 + 7) = 0xffff;
      *(undefined2 *)(puVar10 + 9) = 0xffff;
      *(undefined2 *)(puVar10 + 0xb) = 0xffff;
      *(undefined2 *)(puVar10 + 0xc) = 0xffff;
      *(undefined2 *)(puVar10 + 0xe) = 0xffff;
      *(undefined2 *)(puVar10 + 0x11) = 0xffff;
      *(undefined2 *)(puVar10 + 0x13) = 0xffff;
      *(undefined2 *)(puVar10 + 0x15) = 0xffff;
      *puVar10 = 0xffffffff;
      puVar10[2] = 0xffffffff;
      puVar10[4] = 0xffffffff;
      puVar10[6] = 0xffffffff;
      puVar10[8] = 0xffffffff;
      puVar10[10] = 0xffffffff;
      *(undefined4 *)((long)puVar10 + 0x32) = 0xffffffff;
      *(undefined4 *)((long)puVar10 + 0x3a) = 0xffffffff;
      puVar10[0x10] = 0xffffffff;
      puVar10[0x12] = 0xffffffff;
      puVar10[0x14] = 0xffffffff;
      *(undefined4 *)((long)pvVar9 + 0x1178) = 0xb;
      *(undefined4 **)((long)pvVar9 + 0x1180) = puVar10;
    }
  }
  return pvVar9;
}

