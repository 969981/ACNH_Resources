
void FUN_016c2ee0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  ushort uVar8;
  void *__src;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *__src_00;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint *puVar20;
  char cVar21;
  uint *puVar22;
  int *piVar23;
  ulong uVar24;
  void *__dest;
  undefined1 *puVar25;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [7];
  undefined1 local_9d;
  undefined8 local_98;
  uint *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined1 local_7d;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  
  iVar12 = FUN_0252d29c();
  puVar9 = PTR_DAT_04bb46b0;
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 == 0) {
    return;
  }
  puVar18 = *(undefined8 **)(lVar17 + 0x10);
  if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
    lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
    if (lVar17 == 0) {
      return;
    }
    lVar17 = lVar17 + (long)iVar12 * 0xcb0;
    lVar1 = lVar17 + 0x211c90;
    plVar19 = *(long **)(lVar17 + 0x211cb8);
  }
  else {
    if (puVar18 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar18[0x26] == (long *)0x0) {
      return;
    }
    lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
    if (lVar17 == 0) {
      return;
    }
    lVar17 = lVar17 + (long)iVar12 * 0xcb0;
    lVar1 = lVar17 + 0x211c20;
    plVar19 = *(long **)(lVar17 + 0x211c48);
  }
  if ((plVar19 == (long *)0x0) || ((undefined8 *)*plVar19 == (undefined8 *)0x0)) {
    uVar24 = 0;
  }
  else {
    uVar24 = (*(code *)**(undefined8 **)*plVar19)();
    uVar24 = uVar24 & 0xffffffff;
  }
  lVar17 = *(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8);
  pbVar3 = (byte *)(lVar17 + 0x1590);
  bVar16 = *pbVar3;
  if ((bVar16 & 1) != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    bVar16 = *pbVar3;
  }
  uVar13 = *(uint *)(lVar17 + 0x158c);
  puVar2 = (undefined1 *)(param_1 + 8);
  if ((bVar16 >> 1 & 1) == 0) {
    *puVar2 = 0;
    if (7 < uVar13) {
      uVar13 = 0xffffffff;
    }
LAB_016c300c:
    *(uint *)(param_1 + 0xc) = uVar13;
  }
  else {
    *(uint *)(param_1 + 0xc) = uVar13;
    *(undefined1 *)(param_1 + 8) = 1;
    if (7 < uVar13) {
      *puVar2 = 0;
      uVar13 = 0xffffffff;
      goto LAB_016c300c;
    }
  }
  if ((*(long **)(lVar1 + 0x98) == (long *)0x0) ||
     (puVar18 = (undefined8 *)**(long **)(lVar1 + 0x98), puVar18 == (undefined8 *)0x0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)*puVar18)();
    uVar14 = uVar14 & 0xffffffff;
  }
  FUN_016ce250(&local_98,*(undefined2 *)(*(long *)(lVar1 + 0x80) + *(long *)(lVar1 + 0x78)));
  if (local_98._2_1_ == '\0') {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    *(undefined2 *)(param_1 + 0x10) = (undefined2)local_98;
  }
  __dest = *(void **)(param_1 + 0x20);
  (**(code **)(local_90 + 6))(&local_90);
  __src = (void *)CONCAT44(uStack_84,local_88);
  if (__dest != __src) {
    (**(code **)(local_90 + 6))(&local_90);
    lVar17 = 0;
    do {
      if (*(char *)(CONCAT44(uStack_84,local_88) + lVar17) == '\0') goto LAB_016c30fc;
      lVar4 = CONCAT44(uStack_84,local_88) + lVar17;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_016c30fc;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_016c30fc;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_016c30fc:
    iVar12 = (int)lVar17;
    if (*(int *)(param_1 + 0x28) <= (int)lVar17) {
      iVar12 = *(int *)(param_1 + 0x28) + -1;
    }
    memcpy(__dest,__src,(long)iVar12);
    *(undefined1 *)((long)__dest + (long)iVar12) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = local_70;
  *(undefined4 *)(param_1 + 0x3c) = uStack_6c;
  *(undefined1 *)(param_1 + 0x40) = local_68;
  FUN_016bde70(param_1);
  puVar11 = PTR_DAT_04bbc450;
  puVar10 = PTR_DAT_04bbc448;
  if (*(char *)(param_1 + 0x12) != '\0') {
    lVar17 = *(long *)PTR_DAT_04bb4930;
    uVar13 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar17 + 0x1d8)) &&
       (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar13 * 8),
       puVar20 != (uint *)0x0)) {
      uVar13 = *puVar20;
      if (uVar13 != 0) {
        cVar21 = *PTR_DAT_04bbc448;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar11 = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
            *puVar10 = 1;
            *(undefined4 *)(puVar11 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
            uVar13 = *puVar20;
          }
          else {
            uVar7 = *(uint *)puVar11;
            if (-1 < (int)uVar7) {
              if (((ushort *)((ulong)uVar7 + (long)puVar20) != (ushort *)0x0) &&
                 (uVar8 = *(ushort *)((ulong)uVar7 + (long)puVar20), uVar8 != 0xffff)) {
                local_98 = (undefined *)(ulong)uVar8;
                FUN_0277d4ac(&local_98);
                *(undefined4 *)(param_1 + 0x4c) = (undefined4)local_98;
                *(undefined4 *)(param_1 + 0x50) = local_98._4_4_;
                goto LAB_016c3290;
              }
              break;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar22 = (uint *)(ulong)uVar13;
          if ((puVar22 == (uint *)0x0) || (puVar20 == puVar22)) break;
          lVar17 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar22)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar20 + (lVar17 - (long)puVar22);
          if (lVar17 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar22));
          *(undefined4 *)puVar11 = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar23 = (int *)(lVar17 + 4);
          while (piVar23[-1] != -0x59d9ee3) {
            piVar23 = piVar23 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_016c3280;
          }
          iVar12 = 0;
          if (*piVar23 != -1) {
            iVar12 = *piVar23;
          }
          *(int *)puVar11 = iVar12;
          uVar13 = *puVar20;
          if (uVar13 == 0) break;
        } while( true );
      }
LAB_016c3280:
      uVar6 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)(param_1 + 0x50) = uVar6;
    }
  }
LAB_016c3290:
  FUN_016bed70(param_1);
  if ((*(int *)(param_1 + 0xc) == -1) || (lVar17 = *(long *)puVar9, lVar17 == 0)) {
LAB_016c3374:
    local_98._4_4_ = (undefined4)((ulong)local_98 >> 0x20);
LAB_016c3384:
    bVar16 = *(byte *)(param_1 + 0x54) & 0xfe;
  }
  else {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar17 == 0) goto LAB_016c3374;
      lVar17 = lVar17 + 0x70;
    }
    else if (((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0)) ||
            (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 == 0))
    goto LAB_016c3374;
    iVar12 = *(int *)(param_1 + 0xc);
    puVar25 = &LAB_002057b0 + lVar17;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar25 = (undefined1 *)(lVar17 + 0x20b9e8);
    }
    if ((*(long **)(puVar25 + (long)iVar12 * 0xc40 + 0x28) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(puVar25 + (long)iVar12 * 0xc40 + 0x28),
       puVar18 == (undefined8 *)0x0)) {
      bVar16 = *(byte *)(*(long *)(puVar25 + (long)iVar12 * 0xc40 + 0x10) +
                        *(long *)(puVar25 + (long)iVar12 * 0xc40 + 8));
      local_98._4_4_ = (undefined4)((ulong)local_98 >> 0x20);
    }
    else {
      uVar15 = (**(code **)*puVar18)();
      bVar16 = *(byte *)(*(long *)(puVar25 + (long)iVar12 * 0xc40 + 0x10) +
                        *(long *)(puVar25 + (long)iVar12 * 0xc40 + 8));
      if ((((uVar15 & 1) != 0) && (*(long *)(puVar25 + (long)iVar12 * 0xc40 + 0x28) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(puVar25 + (long)iVar12 * 0xc40 + 0x28) + 8),
         puVar18 != (undefined8 *)0x0)) {
        (**(code **)*puVar18)();
      }
      local_98._4_4_ = (undefined4)((ulong)local_98 >> 0x20);
    }
    if ((bVar16 & 1) != 0) goto LAB_016c3384;
    bVar16 = *(byte *)(param_1 + 0x54) | 1;
  }
  *(byte *)(param_1 + 0x54) = bVar16;
  bVar5 = bVar16 & 0xf7;
  if ((*(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1590) & 4) != 0) {
    bVar5 = bVar16 | 8;
  }
  *(byte *)(param_1 + 0x54) = bVar5;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,4);
  bVar16 = bVar5 & 0xef;
  if ((*(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1590) & 8) != 0) {
    bVar16 = bVar5 | 0x10;
  }
  *(byte *)(param_1 + 0x54) = bVar16;
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_016bdc00(param_1);
    goto LAB_016c3628;
  }
  if ((*(long **)(lVar1 + 0x728) == (long *)0x0) ||
     (puVar18 = (undefined8 *)**(long **)(lVar1 + 0x728), puVar18 == (undefined8 *)0x0)) {
    uVar13 = 1;
  }
  else {
    uVar13 = (**(code **)*puVar18)();
    uVar13 = uVar13 ^ 1;
  }
  local_7d = 0;
  local_88 = 8;
  local_a8 = 8;
  local_90 = &uStack_84;
  uStack_84 = uStack_84 & 0xffffff00;
  local_9d = 0;
  local_b8 = PTR_DAT_04bb3768 + 0x10;
  local_a4[0] = 0;
  local_b0 = local_a4;
  local_98 = local_b8;
  FUN_02774cf0(*(long *)(lVar1 + 0x710) + *(long *)(lVar1 + 0x708),&local_98);
  puVar22 = *(uint **)(param_1 + 0x60);
  (**(code **)(local_98 + 0x18))(&local_98);
  puVar20 = local_90;
  if (puVar22 != local_90) {
    (**(code **)(local_98 + 0x18))(&local_98);
    lVar17 = 0;
    do {
      if (*(char *)((long)local_90 + lVar17) == '\0') goto LAB_016c3524;
      if (*(char *)((long)local_90 + lVar17 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_016c3524;
      }
      if (*(char *)((long)local_90 + lVar17 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_016c3524;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_016c3524:
    iVar12 = (int)lVar17;
    if (*(int *)(param_1 + 0x68) <= (int)lVar17) {
      iVar12 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(puVar22,puVar20,(long)iVar12);
    *(undefined1 *)((long)puVar22 + (long)iVar12) = 0;
  }
  uVar15 = FUN_02775100(*(long *)(lVar1 + 0x710) + *(long *)(lVar1 + 0x708),&local_b8);
  puVar25 = *(undefined1 **)(param_1 + 0x80);
  if ((uVar15 & 1) == 0) {
LAB_016c3604:
    *puVar25 = 0;
  }
  else {
    (**(code **)(local_b8 + 0x18))(&local_b8);
    __src_00 = local_b0;
    if (puVar25 != local_b0) {
      (**(code **)(local_b8 + 0x18))(&local_b8);
      lVar17 = 0;
      do {
        if (local_b0[lVar17] == '\0') goto LAB_016c35dc;
        if (local_b0[lVar17 + 1] == '\0') {
          lVar17 = lVar17 + 1;
          goto LAB_016c35dc;
        }
        if (local_b0[lVar17 + 2] == '\0') {
          lVar17 = lVar17 + 2;
          goto LAB_016c35dc;
        }
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
      lVar17 = 0;
LAB_016c35dc:
      iVar12 = (int)lVar17;
      if (*(int *)(param_1 + 0x88) <= (int)lVar17) {
        iVar12 = *(int *)(param_1 + 0x88) + -1;
      }
      memcpy(puVar25,__src_00,(long)iVar12);
      puVar25 = puVar25 + iVar12;
      goto LAB_016c3604;
    }
  }
  if ((((uVar13 & 1) == 0) && (*(long *)(lVar1 + 0x728) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar1 + 0x728) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
LAB_016c3628:
  if ((*(byte *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1590) >> 4 & 1) != 0) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,*(undefined4 *)PTR_DAT_04bb4b48);
    FUN_007d6d7c(&local_98,puVar2);
    FUN_016c7f78(&local_98,0);
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar1 + 0x98) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar1 + 0x98) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
  if ((((uVar24 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar18 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar18 != (undefined8 *)0x0)) {
    (**(code **)*puVar18)();
  }
  return;
}

