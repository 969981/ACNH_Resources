
void FUN_03099c60(long param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  long *plVar20;
  undefined *puStack_3b1a0;
  undefined1 *puStack_3b198;
  undefined **ppuStack_3b180;
  undefined8 uStack_3b178;
  undefined8 *puStack_3b170;
  long *plStack_3b168;
  long *plStack_3b160;
  long alStack_3b158 [2];
  long lStack_3b148;
  long lStack_3b140;
  undefined1 auStack_3b138 [119968];
  undefined8 auStack_1dc98 [15000];
  undefined **local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  pcVar1 = (char *)(param_1 + 0x574fc);
  piVar2 = (int *)(param_1 + 0x1c3b8);
  local_7d8 = &PTR_LAB_049ff3a8;
  uVar10 = nn::os::GetSystemTick();
  local_7c = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_7d0,(void *)(param_1 + 0x56d60),0x754);
  puVar9 = PTR_DAT_04bb43c0;
  switch(param_2) {
  case 0:
    ppuStack_3b180 = &PTR_FUN_04b2a6d8;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_03099da4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_03099da4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 1:
    ppuStack_3b180 = &PTR_FUN_04b2a728;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_03099ea4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_03099ea4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 2:
    ppuStack_3b180 = &PTR_FUN_04b2a750;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_03099fa4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_03099fa4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 3:
    ppuStack_3b180 = &PTR_FUN_04b2a778;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a0a4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a0a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 4:
    ppuStack_3b180 = &PTR_FUN_04b2a7a0;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a1a4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a1a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 5:
    ppuStack_3b180 = &PTR_FUN_04b2a7c8;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a2a4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a2a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 6:
    ppuStack_3b180 = &PTR_FUN_04b2a7f0;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a3a4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a3a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 7:
    ppuStack_3b180 = &PTR_FUN_04b2a700;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a4a4;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a4a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    break;
  case 8:
    ppuStack_3b180 = &PTR_FUN_04b2a6d8;
    uVar10 = 0;
    do {
      (*(code *)local_7d8[2])(&puStack_3b1a0,&local_7d8,uVar10);
      lVar15 = (*(code *)local_7d8[4])(&local_7d8);
      uVar8 = 1 << (ulong)(uVar10 & 0x1f);
      if ((*(uint *)(lVar15 + (ulong)(uVar10 >> 5) * 4) & uVar8) != 0) {
        lVar15 = *(long *)puVar9;
        uVar11 = FUN_0277d6c4(&puStack_3b1a0);
        if (*(long *)puVar9 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
             (uVar12 = (*(code *)*ppuStack_3b180)(&ppuStack_3b180,&puStack_3b1a0), (uVar12 & 1) != 0
             )) goto LAB_0309a594;
        }
        lVar15 = (*(code *)local_7d8[3])(&local_7d8);
        lVar14 = (ulong)(uVar10 >> 5) * 4;
        *(uint *)(lVar15 + lVar14) = *(uint *)(lVar15 + lVar14) & (uVar8 ^ 0xffffffff);
      }
LAB_0309a594:
      uVar10 = uVar10 + 1;
    } while (uVar10 != 15000);
    FUN_01c08a10(&local_7d8,param_1 + 0x1c340);
  }
  plStack_3b168 = alStack_3b158;
  ppuStack_3b180 = (undefined **)(PTR_DAT_04bb60c8 + 0x10);
  puStack_3b170 = (undefined8 *)0x0;
  uStack_3b178._4_4_ = 0;
  lVar15 = 0;
  while( true ) {
    plVar20 = (long *)((long)alStack_3b158 + lVar15 + 8);
    *plVar20 = (long)alStack_3b158 + lVar15 + 0x10;
    *(long **)((long)alStack_3b158 + lVar15) = plVar20;
    *(undefined1 **)((long)alStack_3b158 + lVar15 + 0x10) = auStack_3b138 + lVar15 + -8;
    if (lVar15 == 0x1d4a0) break;
    *(undefined1 **)(auStack_3b138 + lVar15 + -8) = auStack_3b138 + lVar15;
    lVar15 = lVar15 + 0x20;
  }
  if (auStack_1dc98 != (undefined8 *)0x0) {
    uStack_3b178._4_4_ = 15000;
    puStack_3b170 = auStack_1dc98;
  }
  uStack_3b178 = (ulong)uStack_3b178._4_4_ << 0x20;
  plStack_3b160 = plStack_3b168;
  FUN_009aa4b0(&ppuStack_3b180,&local_7d8);
  puStack_3b1a0 = PTR_DAT_04bc5a40 + 0x10;
  if (param_2 == 7) {
    puStack_3b198 = &LAB_034336b0;
  }
  else {
    puStack_3b198 = &LAB_034336a0;
  }
  (*(code *)ppuStack_3b180[4])(&ppuStack_3b180);
  uVar13 = (*(code *)ppuStack_3b180[2])(&ppuStack_3b180);
  FUN_02c5ef70(uVar13,&puStack_3b1a0);
  if (0 < *piVar2) {
    lVar15 = 0;
    puVar16 = *(undefined8 **)(param_1 + 0x1c3c8);
    do {
      puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x1c3c0) + lVar15 * 8);
      lVar15 = lVar15 + 1;
      *puVar18 = puVar16;
      *(undefined8 **)(param_1 + 0x1c3c8) = puVar18;
      puVar16 = puVar18;
    } while (lVar15 < *piVar2);
  }
  *piVar2 = 0;
  if ((int)uStack_3b178 == 0) {
    *(int *)(param_1 + 0x1c204) = 0;
    cVar6 = *pcVar1;
  }
  else {
    iVar17 = 0;
    lVar15 = (long)(int)uStack_3b178 << 3;
    puVar16 = puStack_3b170;
    do {
      if (iVar17 < *(int *)(param_1 + 0x1c3bc)) {
        puVar19 = (undefined2 *)*puVar16;
        uVar7 = *puVar19;
        uVar4 = *(undefined1 *)(puVar19 + 1);
        uVar5 = *(undefined1 *)((long)puVar19 + 3);
        uVar3 = *(undefined4 *)(puVar19 + 2);
        puVar18 = *(undefined8 **)(param_1 + 0x1c3c8);
        if (puVar18 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x1c3c8) = *puVar18;
        }
        *(undefined2 *)puVar18 = uVar7;
        *(undefined1 *)((long)puVar18 + 2) = uVar4;
        *(undefined1 *)((long)puVar18 + 3) = uVar5;
        *(undefined4 *)((long)puVar18 + 4) = uVar3;
        iVar17 = *piVar2;
        if (iVar17 < *(int *)(param_1 + 0x1c3bc)) {
          *(undefined8 **)(*(long *)(param_1 + 0x1c3c0) + (long)iVar17 * 8) = puVar18;
          iVar17 = *piVar2 + 1;
          *piVar2 = iVar17;
        }
      }
      puVar16 = puVar16 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
    *(int *)(param_1 + 0x1c204) = iVar17;
    if (iVar17 != 0) {
      return;
    }
    cVar6 = *pcVar1;
  }
  if (cVar6 != '\0') {
    FUN_033ba890(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),1);
    *pcVar1 = '\0';
  }
  return;
}

