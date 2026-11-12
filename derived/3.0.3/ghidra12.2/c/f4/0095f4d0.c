
void FUN_0095f4d0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  uint *puVar12;
  undefined *puVar13;
  long lVar14;
  char cVar15;
  long lVar16;
  int *piVar17;
  undefined1 *puVar18;
  long *plVar19;
  undefined1 *puVar20;
  uint uVar21;
  long lVar22;
  undefined *local_110;
  undefined1 *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  
  if (((*(char *)(param_1 + 0x540) == '\0') || (*(int *)(*(long *)PTR_DAT_04bb2110 + 8) == 0)) ||
     (plVar10 = (long *)**(long **)(*(long *)PTR_DAT_04bb2110 + 0x10), plVar10 == (long *)0x0)) {
    return;
  }
  lVar16 = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
LAB_0095f580:
  lVar22 = 0;
LAB_0095f5cc:
  puVar13 = PTR_DAT_04bbbd68;
  local_6d = 0;
  local_f0 = 0x80;
  local_ec[0] = 0;
  lVar11 = *(long *)PTR_DAT_04bb27a8;
  uVar8 = (uint)*(ushort *)(param_2 + (lVar22 + lVar16 * 9) * 2) - (uint)*(ushort *)(lVar11 + 0xb90)
  ;
  if ((uVar8 < *(uint *)(lVar11 + 0xb70)) &&
     (puVar12 = *(uint **)(*(long *)(lVar11 + 0xb78) + (long)(int)uVar8 * 8), puVar12 != (uint *)0x0
     )) {
    uVar8 = *puVar12;
    if (uVar8 != 0) {
      cVar15 = *PTR_DAT_04bbbd60;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *PTR_DAT_04bbbd60 = 1;
          *(undefined8 *)puVar13 = 0xffffffffffffffff;
          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
          uVar8 = *puVar12;
        }
        else {
          uVar21 = *(uint *)(puVar13 + 0xc);
          if (-1 < (int)uVar21) {
            puVar18 = (undefined1 *)((ulong)uVar21 + (long)puVar12);
            goto LAB_0095f6f4;
          }
          if (uVar21 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar8;
        puVar18 = (undefined1 *)0x0;
        if ((puVar5 == (uint *)0x0) || (puVar18 = (undefined1 *)0x0, puVar12 == puVar5))
        goto LAB_0095f6f4;
        lVar11 = 0xc;
        if (*(char *)((long)puVar12 + (10 - (long)puVar5)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar12 + (lVar11 - (long)puVar5);
        puVar18 = (undefined1 *)0x0;
        if (lVar11 == 0) goto LAB_0095f6f4;
        uVar7 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar5));
        *(undefined4 *)(puVar13 + 0xc) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar17 = (int *)(lVar11 + 4);
        while (piVar17[-1] != 0x39b5a93d) {
          piVar17 = piVar17 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_0095f6f0;
        }
        iVar9 = 0;
        if (*piVar17 != -1) {
          iVar9 = *piVar17;
        }
        *(int *)(puVar13 + 0xc) = iVar9;
        uVar8 = *puVar12;
        if (uVar8 == 0) break;
      } while( true );
    }
LAB_0095f6f0:
    puVar18 = (undefined1 *)0x0;
LAB_0095f6f4:
    puVar20 = *(undefined1 **)PTR_PTR_04bbc3a8;
    if (puVar18 != (undefined1 *)0x0) {
      puVar20 = puVar18;
    }
    local_100 = puVar1;
    local_f8 = local_ec;
    if (local_ec == puVar20) {
      puVar13 = PTR_DAT_04bb2d88 + 0x10;
    }
    else {
      lVar11 = 0;
      do {
        if (puVar20[lVar11] == '\0') {
LAB_0095f75c:
          iVar9 = (int)lVar11;
joined_r0x0095f760:
          if (0x7f < iVar9) {
            iVar9 = 0x7f;
          }
          goto LAB_0095f768;
        }
        if (puVar20[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0095f75c;
        }
        if (puVar20[lVar11 + 2] == '\0') {
          iVar9 = (int)lVar11 + 2;
          goto joined_r0x0095f760;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      iVar9 = 0;
LAB_0095f768:
      memcpy(local_ec,puVar20,(long)iVar9);
      local_ec[iVar9] = 0;
      puVar13 = local_100;
    }
    puVar18 = local_f8;
    local_108 = &DAT_040b50da;
    local_110 = puVar2;
    (**(code **)(puVar13 + 0x18))(&local_100);
    lVar11 = 0;
    do {
      if (local_f8[lVar11] == '\0') goto LAB_0095f7e0;
      if (local_f8[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0095f7e0;
      }
      if (local_f8[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0095f7e0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0095f7e0:
    uVar8 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
    (**(code **)(local_110 + 0x18))(&local_110);
    lVar11 = 0;
    do {
      if (local_108[lVar11] == '\0') goto LAB_0095f83c;
      if (local_108[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0095f83c;
      }
      if (local_108[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0095f83c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0095f83c:
    uVar21 = (uint)lVar11;
    if ((int)(local_f0 - uVar8) <= (int)(uint)lVar11) {
      uVar21 = local_f0 + ~uVar8;
    }
    if (0 < (int)uVar21) {
      (**(code **)(local_110 + 0x18))(&local_110);
      memcpy(puVar18 + uVar8,local_108,(ulong)uVar21);
      puVar18[(int)(uVar21 + uVar8)] = 0;
    }
    uVar8 = *(uint *)(param_1 + 0x530);
    if (0 < (int)uVar8) {
      uVar21 = 0;
      while( true ) {
        uVar3 = uVar21;
        if (uVar8 <= uVar21) {
          uVar3 = 0;
        }
        lVar11 = *(long *)(param_1 + 0x538) + (ulong)uVar3 * 0xe8;
        if (((*(byte *)(lVar11 + 0x18) >> 1 & 1) == 0) ||
           (uVar7 = FUN_03f2d924(lVar11 + 0x10), (uVar7 & 1) == 0)) break;
        uVar8 = uVar21;
        if (*(uint *)(param_1 + 0x530) <= uVar21) {
          uVar8 = 0;
        }
        lVar11 = *(long *)(param_1 + 0x538) + (ulong)uVar8 * 0xe8;
        plVar19 = (long *)(lVar11 + 0x50);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        puVar18 = *(undefined1 **)(lVar11 + 0x58);
        (**(code **)(local_100 + 0x18))(&local_100);
        if (puVar18 == local_f8) goto LAB_0095f5c0;
        uVar7 = 0;
        bVar6 = true;
        lVar11 = *(long *)(lVar11 + 0x58) + 2;
        do {
          lVar14 = lVar11 + uVar7;
          cVar15 = *(char *)(lVar14 + -2);
          if (cVar15 != local_f8[uVar7]) break;
          if (cVar15 == '\0') {
            if (bVar6) goto LAB_0095f5c0;
            break;
          }
          cVar15 = *(char *)(lVar14 + -1);
          if (cVar15 != local_f8[uVar7 + 1]) break;
          if (cVar15 == '\0') goto LAB_0095f5c0;
          cVar15 = *(char *)(lVar11 + uVar7);
          if (cVar15 != local_f8[uVar7 + 2]) break;
          if (cVar15 == '\0') goto LAB_0095f5c0;
          bVar6 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        uVar8 = *(uint *)(param_1 + 0x530);
        uVar21 = uVar21 + 1;
        if ((int)uVar8 <= (int)uVar21) goto LAB_0095f5c0;
      }
      (**(code **)(local_100 + 0x18))(&local_100);
      (**(code **)(local_100 + 0x18))(&local_100);
      puVar18 = local_f8;
      (**(code **)(DAT_04cf8588 + 0x18))(&DAT_04cf8588);
      if (puVar18 != DAT_04cf8590) {
        uVar7 = 0;
        bVar6 = true;
        goto LAB_0095fa10;
      }
    }
  }
  goto LAB_0095f5c0;
  while( true ) {
    if (local_f8[uVar7] == '\0') {
      if (bVar6) goto LAB_0095f5c0;
      break;
    }
    if (local_f8[uVar7 + 1] != DAT_04cf8590[uVar7 + 1]) break;
    if (local_f8[uVar7 + 1] == '\0') goto LAB_0095f5c0;
    if (local_f8[uVar7 + 2] != DAT_04cf8590[uVar7 + 2]) break;
    if (local_f8[uVar7 + 2] == '\0') goto LAB_0095f5c0;
    bVar6 = uVar7 < 0x7fffe;
    uVar7 = uVar7 + 3;
    if (uVar7 == 0x80001) break;
LAB_0095fa10:
    if (local_f8[uVar7] != DAT_04cf8590[uVar7]) break;
  }
  lVar11 = *(long *)(param_1 + 0x538);
  uVar8 = uVar21;
  if (*(uint *)(param_1 + 0x530) <= uVar21) {
    uVar8 = 0;
  }
  nn::os::LockMutex((MutexType *)(plVar10 + 0x4d));
  (**(code **)(*plVar10 + 0x30))(plVar10,lVar11 + (ulong)uVar8 * 0xe8,&local_100,PTR_PTR_04bb2238);
  nn::os::UnlockMutex((MutexType *)(plVar10 + 0x4d));
  if (*(uint *)(param_1 + 0x530) <= uVar21) {
    uVar21 = 0;
  }
  lVar11 = *(long *)(param_1 + 0x538) + (ulong)uVar21 * 0xe8;
  puVar20 = *(undefined1 **)(lVar11 + 0x58);
  (**(code **)(local_100 + 0x18))(&local_100);
  puVar18 = local_f8;
  if (puVar20 != local_f8) {
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar14 = 0;
    do {
      if (local_f8[lVar14] == '\0') goto LAB_0095f594;
      if (local_f8[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_0095f594;
      }
      if (local_f8[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_0095f594;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_0095f594:
    iVar4 = *(int *)(lVar11 + 0x60);
    iVar9 = (int)lVar14;
    if (iVar4 <= (int)lVar14) {
      iVar9 = iVar4 + -1;
    }
    memcpy(puVar20,puVar18,(long)iVar9);
    puVar20[iVar9] = 0;
  }
LAB_0095f5c0:
  lVar22 = lVar22 + 1;
  if (lVar22 == 9) goto LAB_0095f570;
  goto LAB_0095f5cc;
LAB_0095f570:
  lVar16 = lVar16 + 1;
  if (lVar16 == 8) {
    return;
  }
  goto LAB_0095f580;
}

