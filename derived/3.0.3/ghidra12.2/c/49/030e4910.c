
void FUN_030e4910(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  char *__dest;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  int iVar12;
  size_t __size;
  undefined *puVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined *local_138;
  char *local_130;
  undefined4 local_128;
  char local_124 [63];
  undefined1 local_e5;
  undefined *local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  int local_c0;
  char local_bc [63];
  undefined1 local_7d;
  long local_78;
  uint local_6c [3];
  
  puVar5 = PTR_PTR_04bb2238;
  puVar13 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_c8 = "*Num";
  local_d0 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_d0,PTR_PTR_04bb2238);
  lVar11 = 0;
  *(undefined8 *)(param_1 + 0x208) = uVar6;
  local_c8 = "*Point";
  do {
    if ((lVar11 == 0x80000) || (lVar8 = lVar11 + 1, "*Point"[lVar8] == '\0')) {
      local_d0 = puVar1;
      FUN_0386fd70(&local_d0);
      uVar6 = FUN_03c688b0(param_2,&local_d0);
      goto LAB_030e49c4;
    }
    lVar11 = lVar11 + 1;
  } while ("*Point"[lVar8] != '@');
  local_d0 = puVar1;
  uVar6 = FUN_03c68b00(param_2,&local_d0);
LAB_030e49c4:
  *(undefined8 *)(param_1 + 0x210) = uVar6;
  plVar7 = *(long **)(param_1 + 0x58);
  local_78 = 0;
  plVar9 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_78);
    if (local_78 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)0x0;
      if (*(long *)(local_78 + 0xb8) != 0) {
        plVar9 = (long *)(local_78 + 0xb8);
      }
    }
  }
  local_7d = 0;
  local_c0 = 0x40;
  local_c8 = local_bc;
  local_bc[0] = '\0';
  local_d0 = PTR_DAT_04bb2bc0 + 0x10;
  local_130 = (char *)0x0;
  if (plVar9 != (long *)0x0) {
    local_130 = (char *)FUN_00364d70(plVar9,"EndPosition");
  }
  uVar16 = 0;
  local_138 = puVar13 + 0x10;
  local_d8 = "_";
  do {
    local_e0 = local_138;
    if (local_130[uVar16] == '\0') {
LAB_030e4a94:
      iVar15 = (int)uVar16;
joined_r0x030e4a98:
      if (iVar15 < 1) {
        iVar15 = -1;
        goto LAB_030e4b1c;
      }
      uVar14 = (ulong)((int)uVar16 - 1);
      iVar15 = -1;
      goto LAB_030e4ab0;
    }
    if (local_130[uVar16 + 1] == '\0') {
      uVar16 = uVar16 + 1;
      goto LAB_030e4a94;
    }
    if (local_130[uVar16 + 2] == '\0') {
      uVar16 = uVar16 + 2;
      iVar15 = (int)uVar16;
      goto joined_r0x030e4a98;
    }
    uVar16 = uVar16 + 3;
  } while (uVar16 != 0x80001);
  iVar15 = -1;
  goto LAB_030e4b1c;
  while( true ) {
    uVar14 = uVar14 - 1;
    uVar16 = (ulong)(iVar12 - 1U);
    if (iVar12 - 1U == 0 || iVar12 < 1) break;
LAB_030e4ab0:
    pcVar2 = local_130 + uVar14;
    (**(code **)(local_e0 + 0x18))(&local_e0);
    iVar12 = (int)uVar16;
    if ((pcVar2 == local_d8) || (*pcVar2 == *local_d8)) {
      iVar15 = iVar12 + -1;
      break;
    }
  }
  puVar13 = PTR_DAT_04bb2020;
LAB_030e4b1c:
  (**(code **)(local_138 + 0x18))(&local_138);
  lVar11 = 0;
  do {
    if (local_130[lVar11] == '\0') goto LAB_030e4b7c;
    if (local_130[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_030e4b7c;
    }
    if (local_130[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_030e4b7c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_030e4b7c:
  local_6c[0] = 0;
  local_d8 = *(char **)(puVar5 + 8);
  if (iVar15 < (int)lVar11 && -2 < iVar15) {
    local_d8 = local_130 + (iVar15 + 1);
  }
  local_e0 = puVar13 + 0x10;
  FUN_038d2c30(local_6c,&local_e0,0xffffffff);
  uVar4 = local_6c[0];
  __dest = local_c8;
  (**(code **)(local_138 + 0x18))(&local_138);
  pcVar2 = local_130;
  if (__dest != local_130) {
    (**(code **)(local_138 + 0x18))(&local_138);
    lVar11 = 0;
    do {
      if (local_130[lVar11] == '\0') goto LAB_030e4c2c;
      if (local_130[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_030e4c2c;
      }
      if (local_130[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_030e4c2c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_030e4c2c:
    iVar12 = (int)lVar11;
    if (local_c0 <= (int)lVar11) {
      iVar12 = local_c0 + -1;
    }
    memcpy(__dest,pcVar2,(long)iVar12);
    __dest[iVar12] = '\0';
  }
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar11 = 0;
  do {
    if (local_c8[lVar11] == '\0') goto LAB_030e4cac;
    if (local_c8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_030e4cac;
    }
    if (local_c8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_030e4cac;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_030e4cac:
  iVar15 = (int)lVar11 - iVar15;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar11 = 0;
  do {
    if (local_c8[lVar11] == '\0') {
LAB_030e4d08:
      iVar12 = (int)lVar11;
      goto joined_r0x030e4d08;
    }
    if (local_c8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_030e4d08;
    }
    if (local_c8[lVar11 + 2] == '\0') {
      iVar12 = (int)lVar11 + 2;
      goto joined_r0x030e4d08;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  iVar12 = 0;
joined_r0x030e4d08:
  if (-1 < iVar15) {
    iVar3 = iVar12;
    if (iVar15 <= iVar12) {
      iVar3 = iVar15;
    }
    local_c8[iVar12 - iVar3] = '\0';
  }
  if ((uVar4 == 0) || (*local_c8 == '\0')) goto LAB_030e4f0c;
  if (uVar4 < 0x7fffffff) {
    __size = (size_t)(int)((uVar4 + 1) * 8);
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar10 = malloc(__size);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_030e4dc0;
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,__size,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(param_1 + 0x220) = pvVar10;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(uint *)(param_1 + 0x21c) = uVar4 + 1;
    }
  }
LAB_030e4dc0:
  local_e5 = 0;
  local_128 = 0x40;
  local_124[0] = '\0';
  uVar4 = *(uint *)(param_1 + 0x21c);
  local_130 = local_124;
  local_138 = PTR_DAT_04bb2bc0 + 0x10;
  if (uVar4 != 0) {
    uVar16 = 0;
    do {
      (**(code **)(local_d0 + 0x18))(&local_d0);
      FUN_038d1270(&local_138,"%s_%02d",local_c8,uVar16 & 0xffffffff);
      (**(code **)(local_138 + 0x18))(&local_138);
      iVar15 = (int)uVar16;
      if (*local_130 == '\0') {
LAB_030e4eb0:
        FUN_0386fd70(&local_138);
        uVar6 = FUN_03c688b0(param_2,&local_138);
      }
      else {
        if (*local_130 != '@') {
          lVar11 = 0;
          do {
            if ((lVar11 == 0x80000) || (lVar8 = lVar11 + 1, local_130[lVar8] == '\0'))
            goto LAB_030e4eb0;
            lVar11 = lVar11 + 1;
          } while (local_130[lVar8] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_138);
      }
      if (((-1 < iVar15) && (iVar12 = *(int *)(param_1 + 0x218), iVar15 <= iVar12)) &&
         (iVar12 < *(int *)(param_1 + 0x21c))) {
        if (iVar12 - iVar15 != 0 && iVar15 <= iVar12) {
          pvVar10 = (void *)(*(long *)(param_1 + 0x220) + uVar16 * 8);
          memmove((void *)((long)pvVar10 + 8),pvVar10,(long)((iVar12 - iVar15) * 8));
        }
        *(undefined8 *)(*(long *)(param_1 + 0x220) + uVar16 * 8) = uVar6;
        *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar4);
  }
LAB_030e4f0c:
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x24c) = 4;
  *(undefined8 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(param_1 + 0x244) = 0;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

