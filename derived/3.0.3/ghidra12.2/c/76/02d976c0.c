
void FUN_02d976c0(long param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined2 local_8a8;
  undefined1 local_8a6;
  char local_8a5;
  int local_8a4;
  undefined8 local_8a0;
  undefined8 *local_898;
  undefined8 ***local_890;
  undefined8 ***pppuStack_888;
  undefined8 ***local_880;
  undefined8 ***local_878;
  undefined8 ***local_870;
  undefined8 ***local_868;
  undefined8 ***local_860;
  undefined8 **local_858;
  undefined8 *local_850;
  undefined8 local_848;
  undefined8 local_840 [8];
  undefined *local_800;
  undefined2 local_7f8;
  undefined1 local_7f6;
  char local_7f5;
  int local_7f4;
  long local_7f0;
  undefined2 local_7e8;
  undefined1 local_7e6;
  char local_7e5;
  int local_7e4;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_6c [3];
  
  plVar1 = (long *)(param_1 + 0x1e4d0);
  local_6c[0] = param_2;
  piVar11 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
  if (0 < *piVar11) {
    lVar16 = 0;
    puVar20 = *(undefined8 **)(piVar11 + 4);
    do {
      puVar18 = *(undefined8 **)(*(long *)(piVar11 + 2) + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *puVar18 = puVar20;
      *(undefined8 **)(piVar11 + 4) = puVar18;
      puVar20 = puVar18;
    } while (lVar16 < *piVar11);
  }
  *piVar11 = 0;
  puVar2 = PTR_DAT_04bbfe60;
  if (local_6c[0] == 0x78) {
    puVar14 = (uint *)(param_1 + 0x1c350);
    puVar12 = (uint *)FUN_0369fc5c(*(undefined8 *)PTR_DAT_04bc3a50);
    if (puVar14 != puVar12) {
      uVar8 = *(uint *)(param_1 + 0x1c354);
      if ((int)*puVar12 <= (int)*(uint *)(param_1 + 0x1c354)) {
        uVar8 = *puVar12;
      }
      if (0 < (int)*puVar14) {
        lVar16 = 0;
        puVar20 = *(undefined8 **)(param_1 + 0x1c360);
        do {
          puVar18 = *(undefined8 **)(*(long *)(param_1 + 0x1c358) + lVar16 * 8);
          lVar16 = lVar16 + 1;
          *puVar18 = puVar20;
          *(undefined8 **)(param_1 + 0x1c360) = puVar18;
          puVar20 = puVar18;
        } while (lVar16 < (int)*puVar14);
      }
      *puVar14 = 0;
      if ((0 < (int)uVar8) && (0 < *(int *)(param_1 + 0x1c354))) {
        lVar16 = 0;
        uVar9 = 0;
        do {
          if ((int)uVar9 < *(int *)(param_1 + 0x1c354)) {
            puVar20 = *(undefined8 **)(param_1 + 0x1c360);
            puVar19 = *(undefined2 **)(*(long *)(puVar12 + 2) + lVar16);
            if (puVar20 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x1c360) = *puVar20;
            }
            *(undefined2 *)puVar20 = *puVar19;
            *(undefined1 *)((long)puVar20 + 2) = *(undefined1 *)(puVar19 + 1);
            *(undefined1 *)((long)puVar20 + 3) = *(undefined1 *)((long)puVar19 + 3);
            *(undefined4 *)((long)puVar20 + 4) = *(undefined4 *)(puVar19 + 2);
            uVar9 = *puVar14;
            if ((int)uVar9 < *(int *)(param_1 + 0x1c354)) {
              *(undefined8 **)(*(long *)(param_1 + 0x1c358) + (long)(int)uVar9 * 8) = puVar20;
              uVar9 = *puVar14 + 1;
              *puVar14 = uVar9;
            }
          }
          lVar16 = lVar16 + 8;
        } while ((ulong)uVar8 * 8 != lVar16);
      }
    }
  }
  else {
    puVar21 = PTR_DAT_04bbfe60 + 0x10;
    local_7e0 = puVar21;
    uVar8 = nn::os::GetSystemTick();
    local_84 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
    local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
    local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_7d8,(void *)(param_1 + 0x1c6b0),0x754);
    if (local_6c[0] == 0xc) {
      memcpy(auStack_7d8,(void *)(param_1 + 0x1d590),0x754);
    }
    else if (local_6c[0] == 0xd) {
      memcpy(auStack_7d8,(void *)(param_1 + 0x1ce20),0x754);
      puVar21 = puVar2 + 0x10;
    }
    else {
      FUN_02da3bf0(*(undefined4 *)(param_1 + 0x108b14),&local_7e0,local_6c);
      puVar21 = local_7e0;
    }
    lVar16 = (**(code **)(puVar21 + 0x20))(&local_7e0);
    uVar22 = 0;
    do {
      if ((*(uint *)(lVar16 + (uVar22 >> 5) * 4) >> (ulong)((uint)uVar22 & 0x1f) & 1) != 0)
      goto LAB_02d97970;
      uVar8 = (uint)uVar22 + 1;
      uVar22 = (ulong)uVar8;
    } while (uVar8 != 15000);
    uVar22 = 0;
LAB_02d97970:
    lVar13 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    puVar21 = PTR_DAT_04bbfe58;
    puVar2 = PTR_DAT_04bb37e0;
    iVar10 = 15000;
    do {
      if ((*(uint *)(lVar13 + (ulong)(iVar10 - 1U >> 5) * 4) >> (ulong)(iVar10 - 1U & 0x1f) & 1) !=
          0) break;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (iVar10 != (int)uVar22) {
LAB_02d97d50:
      puVar19 = (undefined2 *)(puVar21 + uVar22 * 8);
      if (0x752 < (uint)(uVar22 >> 3)) {
        puVar19 = (undefined2 *)puVar21;
      }
      puVar17 = (undefined2 *)puVar2;
      if ((uint)uVar22 < 0x3a99) {
        puVar17 = puVar19;
      }
      uVar6 = *puVar17;
      uVar4 = *(undefined1 *)(puVar17 + 1);
      uVar5 = *(undefined1 *)((long)puVar17 + 3);
      uVar3 = *(undefined4 *)(puVar17 + 2);
      piVar11 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1);
      if (*piVar11 < piVar11[1]) {
        puVar20 = *(undefined8 **)(piVar11 + 4);
        if (puVar20 != (undefined8 *)0x0) {
          *(undefined8 *)(piVar11 + 4) = *puVar20;
        }
        *(undefined2 *)puVar20 = uVar6;
        *(undefined1 *)((long)puVar20 + 2) = uVar4;
        *(undefined1 *)((long)puVar20 + 3) = uVar5;
        *(undefined4 *)((long)puVar20 + 4) = uVar3;
        if (*piVar11 < piVar11[1]) {
          *(undefined8 **)(*(long *)(piVar11 + 2) + (long)*piVar11 * 8) = puVar20;
          *piVar11 = *piVar11 + 1;
        }
      }
      do {
        uVar8 = (int)uVar22 + 1;
        uVar22 = (ulong)uVar8;
        if (0x752 < uVar8 >> 3) {
          uVar8 = 0x3a95;
          goto LAB_02d97e10;
        }
      } while ((*(uint *)(lVar16 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) == 0);
      goto LAB_02d97d48;
    }
LAB_02d979a8:
    puVar14 = (uint *)(**(code **)(*plVar1 + 0x18))(plVar1);
    uVar8 = *puVar14;
    if (0 < (int)uVar8) {
      uVar22 = 0;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      puVar19 = (undefined2 *)PTR_DAT_04bb37e0;
      do {
        piVar11 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
        puVar17 = puVar19;
        if ((*piVar11 != 0) &&
           (piVar11 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1), uVar22 <= *piVar11 - 1)) {
          lVar16 = (**(code **)(*plVar1 + 0x18))(plVar1);
          puVar17 = *(undefined2 **)(*(long *)(lVar16 + 8) + uVar22 * 8);
        }
        puVar21 = PTR_DAT_04bb43c0;
        local_7f8 = *puVar17;
        local_7f6 = *(undefined1 *)(puVar17 + 1);
        local_7f5 = *(char *)((long)puVar17 + 3);
        local_7f4 = *(int *)(puVar17 + 2);
        lVar16 = *(long *)PTR_DAT_04bb43c0;
        local_7f0 = 0;
        local_800 = puVar2;
        local_7e8 = local_7f8;
        local_7e6 = local_7f6;
        local_7e5 = local_7f5;
        local_7e4 = local_7f4;
        uVar9 = FUN_0277d6c4(&local_7f8);
        if (*(long *)puVar21 != 0) {
          lVar16 = *(long *)(lVar16 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar16 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_7e8);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
              lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
              if (lVar16 != 0) {
                local_7f0 = lVar16;
              }
            }
          }
        }
        iVar10 = FUN_01ad7260(&local_800);
        if (iVar10 != 0) {
          uVar15 = FUN_03422cc0(&local_7e8);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_03422a60(&local_7e8,param_1 + 0x1f8);
            if ((uVar15 & 1) == 0) {
              local_8a0 = 0;
              local_898 = (undefined8 *)0x0;
              local_848 = 0;
              if (local_840 != (undefined8 *)0x0) {
                local_8a0 = 0x800000000;
                local_898 = local_840;
              }
              local_890 = &local_880;
              pppuStack_888 = &local_880;
              local_880 = &local_878;
              local_878 = &local_870;
              local_870 = &local_868;
              local_868 = &local_860;
              local_860 = &local_858;
              local_858 = &local_850;
              local_850 = &local_848;
              FUN_0264cdf0(&local_8a0,&local_7e8);
              if ((int)local_8a0 != 0) {
                lVar16 = (long)(int)local_8a0 << 3;
                puVar20 = local_898;
                do {
                  puVar19 = (undefined2 *)*puVar20;
                  local_8a8 = *puVar19;
                  local_8a6 = *(undefined1 *)(puVar19 + 1);
                  local_8a5 = *(char *)((long)puVar19 + 3);
                  local_8a4 = *(int *)(puVar19 + 2);
                  uVar15 = FUN_0277d7b4(&local_8a8,&local_7e8);
                  if ((((uVar15 & 1) == 0) || (local_8a5 != local_7e5)) || (local_8a4 != local_7e4))
                  {
                    uVar15 = FUN_01b00960(&local_8a8);
                    iVar10 = local_8a4;
                    cVar7 = local_8a5;
                    uVar4 = local_8a6;
                    uVar6 = local_8a8;
                    if (((((uint)(uVar15 >> 7) & 0x1ffffff) < 0x7d) &&
                        ((*(uint *)(param_1 + 0x1dcf8 + (uVar15 >> 5 & 0x7ffffff) * 4) >>
                          (ulong)((uint)uVar15 & 0x1f) & 1) != 0)) &&
                       (piVar11 = (int *)(**(code **)(*plVar1 + 0x10))(plVar1),
                       *piVar11 < piVar11[1])) {
                      puVar18 = *(undefined8 **)(piVar11 + 4);
                      if (puVar18 != (undefined8 *)0x0) {
                        *(undefined8 *)(piVar11 + 4) = *puVar18;
                      }
                      *(undefined2 *)puVar18 = uVar6;
                      *(undefined1 *)((long)puVar18 + 2) = uVar4;
                      *(char *)((long)puVar18 + 3) = cVar7;
                      *(int *)((long)puVar18 + 4) = iVar10;
                      if (*piVar11 < piVar11[1]) {
                        *(undefined8 **)(*(long *)(piVar11 + 2) + (long)*piVar11 * 8) = puVar18;
                        *piVar11 = *piVar11 + 1;
                      }
                    }
                  }
                  puVar20 = puVar20 + 1;
                  lVar16 = lVar16 + -8;
                } while (lVar16 != 0);
              }
              puVar19 = (undefined2 *)PTR_DAT_04bb37e0;
            }
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar8);
    }
  }
  return;
  while( true ) {
    uVar9 = uVar8 + 1;
    if ((*(uint *)(lVar16 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_02d97d40;
    if ((*(uint *)(lVar16 + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)
    goto LAB_02d97d44;
    uVar8 = uVar8 - 3;
    if (uVar8 == 0xfffffffd) break;
LAB_02d97e10:
    uVar9 = uVar8 + 2;
    if ((*(uint *)(lVar16 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0) {
LAB_02d97d40:
      uVar8 = uVar9;
LAB_02d97d44:
      uVar22 = (ulong)(uVar8 + 1);
      goto LAB_02d97d48;
    }
  }
  uVar22 = 0;
LAB_02d97d48:
  if (iVar10 == (int)uVar22) goto LAB_02d979a8;
  goto LAB_02d97d50;
}

