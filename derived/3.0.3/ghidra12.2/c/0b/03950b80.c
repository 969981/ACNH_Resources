
bool FUN_03950b80(long *param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  ushort *__ptr;
  void *__ptr_00;
  void *pvVar9;
  byte *pbVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ushort uVar15;
  ushort *puVar16;
  long lVar17;
  byte bVar18;
  bool bVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  void *__src;
  uint uVar23;
  ulong uVar24;
  undefined8 local_70;
  void *pvStack_68;
  
  uVar4 = (**(code **)(*param_1 + 0x38))();
  bVar19 = true;
  switch(uVar4) {
  case 0:
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar12 = (char *)param_2[1];
    if (pcVar12 == "true") {
      bVar18 = 1;
    }
    else if (*pcVar12 == 't') {
      uVar24 = 0;
      do {
        uVar21 = uVar24;
        uVar24 = uVar21;
        if (uVar21 == 0x80000) goto LAB_039511a0;
        if (pcVar12[uVar21 + 1] != (&DAT_040a3960)[uVar21]) {
          uVar24 = 0;
          goto LAB_039511a0;
        }
        uVar24 = uVar21 + 1;
      } while (pcVar12[uVar21 + 1] != '\0');
      uVar24 = 1;
LAB_039511a0:
      bVar18 = uVar21 < 0x80000 & (byte)uVar24;
    }
    else {
      bVar18 = 0;
    }
    pbVar10 = (byte *)(**(code **)(*param_1 + 0x48))(param_1);
    *pbVar10 = bVar18;
    bVar19 = true;
    break;
  case 1:
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x48))(param_1);
    uVar24 = FUN_038d52a0(puVar8,param_2);
    goto joined_r0x03950c88;
  case 2:
  case 0x11:
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x48))(param_1);
    uVar24 = FUN_038d30c0(puVar8,param_2,0xffffffff);
joined_r0x03950c88:
    if ((uVar24 & 1) == 0) {
      *puVar8 = 0;
    }
    break;
  case 3:
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_03951200(param_2,uVar7,2);
    break;
  case 4:
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_03951200(param_2,uVar7,3);
    break;
  case 5:
  case 6:
  case 0x10:
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_03951200(param_2,uVar7,4);
    break;
  case 7:
  case 8:
  case 0xf:
  case 0x14:
    plVar22 = *(long **)(DAT_05ae90f0 + 8);
    if (plVar22 == (long *)0x0) {
      return true;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar2 = PTR_DAT_04bb2698;
    uVar24 = 0;
    do {
      if (*(char *)(param_2[1] + uVar24) == '\0') goto LAB_03950d8c;
      lVar11 = param_2[1] + uVar24;
      if (*(char *)(lVar11 + 1) == '\0') {
        uVar24 = uVar24 + 1;
        goto LAB_03950d8c;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        uVar24 = uVar24 + 2;
        goto LAB_03950d8c;
      }
      uVar24 = uVar24 + 3;
    } while (uVar24 != 0x80001);
    uVar24 = 0;
LAB_03950d8c:
    uVar20 = (uint)uVar24 + 1;
    uVar21 = (ulong)uVar20;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      __ptr = malloc(uVar21 << 1);
LAB_03950dec:
      __ptr_00 = malloc(uVar21);
    }
    else {
      __ptr = (ushort *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar21 << 1,8);
      if (*(long *)puVar2 == 0) goto LAB_03950dec;
      __ptr_00 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar21,8);
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    if (uVar20 != 0) {
      lVar13 = param_2[1];
      lVar11 = 0;
      uVar14 = uVar21;
      puVar3 = __ptr;
      while (puVar16 = puVar3, lVar11 != 0x7fffffff) {
        pbVar10 = (byte *)(lVar13 + lVar11);
        bVar18 = *pbVar10;
        uVar15 = (ushort)bVar18;
        if (bVar18 == 0) break;
        if ((char)bVar18 < '\0') {
          uVar15 = (ushort)bVar18;
          if ((uVar15 & 0xe0) == 0xc0) {
            if (pbVar10[1] == 0) break;
            lVar17 = 2;
            uVar15 = pbVar10[1] & 0x3f | (uVar15 & 0x1f) << 6;
          }
          else {
            if ((((uVar15 & 0xf0) != 0xe0) || (pbVar10[1] == 0)) || (pbVar10[2] == 0)) break;
            lVar17 = 3;
            uVar15 = (ushort)bVar18 << 0xc | (pbVar10[1] & 0x3f) << 6 | pbVar10[2] & 0x3f;
          }
        }
        else {
          lVar17 = 1;
        }
        lVar11 = lVar17 + lVar11;
        uVar14 = uVar14 - 1;
        *puVar16 = uVar15;
        puVar3 = puVar16 + 1;
        if (uVar14 == 0) break;
      }
      *puVar16 = 0;
    }
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    FUN_038d4a80(&local_70,__ptr_00,uVar20,__ptr,0xffffffff);
    __src = __ptr_00;
    if ((param_3 & 1) != 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      __src = (void *)param_2[1];
    }
    lVar11 = 0;
    do {
      if (*(char *)((long)__src + lVar11) == '\0') goto LAB_03950f2c;
      if (*(char *)((long)__src + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03950f2c;
      }
      if (*(char *)((long)__src + lVar11 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03950f2c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03950f2c:
    iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
    if (iVar5 == 0x14) {
      if (DAT_05ae7600 == 0) {
        pvVar9 = malloc(uVar21);
      }
      else {
        pvVar9 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar21,8);
      }
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pvStack_68 = pvVar9;
      plVar22 = (long *)(**(code **)(*param_1 + 0x58))(param_1);
      (**(code **)(*plVar22 + 0x10))(plVar22,&local_70);
      if ((uint)uVar24 < 0x7fffffff) {
        *(undefined1 *)((long)pvVar9 + (uVar24 & 0xffffffff)) = 0;
        if (pvVar9 != __src) goto LAB_03951074;
      }
      else {
        uVar20 = 0;
        pvVar9 = (void *)0x0;
        if (__src != (void *)0x0) {
LAB_03951074:
          lVar11 = 0;
          do {
            if (*(char *)((long)__src + lVar11) == '\0') goto LAB_03951100;
            if (*(char *)((long)__src + lVar11 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_03951100;
            }
            if (*(char *)((long)__src + lVar11 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_03951100;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03951100:
          iVar5 = (int)lVar11;
          if ((int)uVar20 <= (int)lVar11) {
            iVar5 = uVar20 - 1;
          }
          memcpy(pvVar9,__src,(long)iVar5);
          *(undefined1 *)((long)pvVar9 + (long)iVar5) = 0;
        }
      }
      bVar19 = true;
    }
    else {
      iVar5 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar5 == 7) {
        iVar5 = 0x20;
      }
      else {
        iVar6 = (**(code **)(*param_1 + 0x38))(param_1);
        iVar5 = 0x40;
        if (iVar6 != 8) {
          iVar5 = 0x100;
        }
      }
      pvVar9 = (void *)(**(code **)(*param_1 + 0x48))(param_1);
      uVar20 = iVar5 - 1;
      *(undefined1 *)((long)pvVar9 + (ulong)uVar20) = 0;
      uVar23 = (uint)lVar11;
      if (pvVar9 != __src) {
        uVar1 = uVar23;
        if ((int)uVar20 <= (int)uVar23) {
          uVar1 = uVar20;
        }
        uVar24 = (ulong)uVar1;
        if ((int)uVar1 < 0) {
          uVar24 = 0;
          do {
            if (*(char *)((long)__src + uVar24) == '\0') goto LAB_03950fe0;
            if (*(char *)((long)__src + uVar24 + 1) == '\0') {
              uVar24 = uVar24 + 1;
              goto LAB_03950fe0;
            }
            if (*(char *)((long)__src + uVar24 + 2) == '\0') {
              uVar24 = uVar24 + 2;
              goto LAB_03950fe0;
            }
            uVar24 = uVar24 + 3;
          } while (uVar24 != 0x80001);
          uVar24 = 0;
        }
LAB_03950fe0:
        uVar1 = (uint)uVar24;
        if (iVar5 <= (int)(uint)uVar24) {
          uVar1 = uVar20;
        }
        memcpy(pvVar9,__src,(long)(int)uVar1);
        *(undefined1 *)((long)pvVar9 + (long)(int)uVar1) = 0;
      }
      bVar19 = (int)uVar23 < iVar5;
    }
    if (__ptr != (ushort *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar22 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x38))(plVar22,__ptr);
        }
      }
    }
    if (__ptr_00 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr_00);
      }
      else {
        plVar22 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
        if (plVar22 != (long *)0x0) {
          (**(code **)(*plVar22 + 0x38))(plVar22,__ptr_00);
        }
      }
    }
  }
  return bVar19;
}

