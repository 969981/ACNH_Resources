
void FUN_01e3b790(undefined4 *param_1,long param_2)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  undefined2 uVar11;
  char cVar12;
  ushort uVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_48 = 0x1515;
  uStack_44 = 0;
  FUN_0277d4ac(&local_48);
  puVar2 = PTR_DAT_04bb43c0;
  iVar7 = *(int *)(param_2 + 0x500);
  if (iVar7 == 0) {
    local_50 = 0;
    local_60 = PTR_DAT_04bc0510 + 0x10;
    local_58 = local_48;
    local_54 = uStack_44;
    lVar19 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_48);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if (uVar5 < *(uint *)(lVar19 + 0x1d8)) {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8);
          if (lVar19 != 0) {
            local_50 = lVar19;
          }
        }
      }
    }
    uVar18 = *(undefined8 *)PTR_DAT_04bb4138;
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
    uVar4 = FUN_006bd550(*(undefined8 *)(param_2 + 1000),0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar4);
    puVar8 = (uint *)FUN_0079e770(uVar18,&local_70);
    puVar3 = PTR_DAT_04bb40b8;
    puVar2 = PTR_DAT_04bb40b0;
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar12 = *PTR_DAT_04bb40b0;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0xa0) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x4c);
            if (-1 < (int)uVar5) {
              if ((undefined2 *)((ulong)uVar5 + (long)puVar8) != (undefined2 *)0x0) {
                uVar11 = *(undefined2 *)((ulong)uVar5 + (long)puVar8);
                goto LAB_01e3bdd0;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          uVar11 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_01e3bdd0;
          lVar19 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar8 + (lVar19 - (long)puVar14);
          if (lVar19 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar16 = (int *)(lVar19 + 4);
          while (piVar16[-1] != -0x741806c) {
            piVar16 = piVar16 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_01e3bdcc;
          }
          iVar7 = 0;
          if (*piVar16 != -1) {
            iVar7 = *piVar16;
          }
          *(int *)(puVar3 + 0x4c) = iVar7;
          if (*puVar8 == 0) break;
        } while( true );
      }
LAB_01e3bdcc:
      uVar11 = 0;
LAB_01e3bdd0:
      FUN_01afdcc4(&local_60,uVar11);
      if ((*(int *)(param_2 + 0x508) != -1) && (lVar19 = FUN_0265c2a0(), lVar19 != 0)) {
        if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar9 == (undefined8 *)0x0)) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)*puVar9)();
          uVar5 = uVar5 ^ 1;
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        pcStack_68 = "IsReFabricSmartPhone";
        iVar7 = FUN_02749340(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1267c,&local_70);
        if ((((uVar5 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
        if (iVar7 != 0) {
          local_70 = (undefined *)CONCAT44(local_70._4_4_,2);
          iVar7 = FUN_01afcfa0(&local_60);
          if (iVar7 != 0) {
            iVar7 = (int)local_70;
            iVar6 = FUN_01b006b0(&local_60);
            if ((iVar7 == iVar6) &&
               (psVar10 = (short *)FUN_0079e910(puVar8,0x12,0x57e889b2,0), psVar10 != (short *)0x0))
            {
              sVar1 = *psVar10;
joined_r0x01e3bec4:
              if (sVar1 != -1) {
                FUN_01afdd70(&local_60);
              }
            }
          }
        }
      }
    }
    goto LAB_01e3c020;
  }
  if (iVar7 == 2) {
    plVar17 = *(long **)(param_2 + 0x60);
    if (plVar17 != (long *)0x0) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar15 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb3798);
      if ((uVar15 & 1) != 0) {
        FUN_02340234(&local_60,plVar17);
        local_70._0_4_ = (undefined4)local_60;
        local_70._4_4_ = local_60._4_4_;
LAB_01e3bdb0:
        local_48 = (int)local_70;
        uStack_44 = local_70._4_4_;
      }
    }
  }
  else if (iVar7 == 1) {
    uVar18 = *(undefined8 *)PTR_DAT_04bb4130;
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
    uVar4 = FUN_006bd550(*(undefined8 *)(param_2 + 1000),0);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar4);
    puVar8 = (uint *)FUN_0079e4d0(uVar18,&local_60);
    puVar3 = PTR_DAT_04bb40a8;
    puVar2 = PTR_DAT_04bb40a0;
    if (puVar8 != (uint *)0x0) {
      if (*puVar8 != 0) {
        cVar12 = *PTR_DAT_04bb40a0;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x78) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
          }
          else {
            uVar5 = *(uint *)(puVar3 + 0x2c);
            if (-1 < (int)uVar5) {
              if ((ushort *)((ulong)uVar5 + (long)puVar8) != (ushort *)0x0) {
                uVar13 = *(ushort *)((ulong)uVar5 + (long)puVar8);
                goto LAB_01e3bb44;
              }
              break;
            }
            if (uVar5 != 0xffffffff) break;
          }
          puVar14 = (uint *)(ulong)*puVar8;
          uVar13 = 0xfffe;
          if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_01e3bb44;
          lVar19 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar8 + (lVar19 - (long)puVar14);
          if (lVar19 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
          *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
          if (uVar15 == 0) break;
          piVar16 = (int *)(lVar19 + 4);
          while (piVar16[-1] != 0x3f858678) {
            piVar16 = piVar16 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_01e3bb40;
          }
          iVar7 = 0;
          if (*piVar16 != -1) {
            iVar7 = *piVar16;
          }
          *(int *)(puVar3 + 0x2c) = iVar7;
          if (*puVar8 == 0) break;
        } while( true );
      }
LAB_01e3bb40:
      uVar13 = 0xfffe;
LAB_01e3bb44:
      local_70 = (undefined *)(ulong)uVar13;
      FUN_0277d4ac(&local_70);
      puVar2 = PTR_DAT_04bb43c0;
      if ((short)local_70 == -2) {
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        local_60 = PTR_DAT_04bc0510 + 0x10;
        local_50 = 0;
        local_58 = local_48;
        local_54 = uStack_44;
        uVar5 = FUN_0277d6c4(&local_58);
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar19 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_48);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if (uVar5 < *(uint *)(lVar19 + 0x1d8)) {
              lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8);
              if (lVar19 != 0) {
                local_50 = lVar19;
              }
            }
          }
        }
        puVar3 = PTR_DAT_04bb40a8;
        puVar2 = PTR_DAT_04bb40a0;
        if (*puVar8 != 0) {
          cVar12 = *PTR_DAT_04bb40a0;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 0x78) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
            }
            else {
              uVar5 = *(uint *)(puVar3 + 0x34);
              if (-1 < (int)uVar5) {
                if ((undefined2 *)((ulong)uVar5 + (long)puVar8) != (undefined2 *)0x0) {
                  uVar11 = *(undefined2 *)((ulong)uVar5 + (long)puVar8);
                  goto LAB_01e3bee8;
                }
                break;
              }
              if (uVar5 != 0xffffffff) break;
            }
            puVar14 = (uint *)(ulong)*puVar8;
            uVar11 = 0;
            if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_01e3bee8;
            lVar19 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar8 + (lVar19 - (long)puVar14);
            if (lVar19 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
            *(undefined4 *)(puVar3 + 0x34) = 0xfffffffe;
            if (uVar15 == 0) break;
            piVar16 = (int *)(lVar19 + 4);
            while (piVar16[-1] != -0x741806c) {
              piVar16 = piVar16 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_01e3bee4;
            }
            iVar7 = 0;
            if (*piVar16 != -1) {
              iVar7 = *piVar16;
            }
            *(int *)(puVar3 + 0x34) = iVar7;
            if (*puVar8 == 0) break;
          } while( true );
        }
LAB_01e3bee4:
        uVar11 = 0;
LAB_01e3bee8:
        FUN_01afdcc4(&local_60,uVar11);
        iVar7 = FUN_01afcfa0(&local_60);
        if (iVar7 != 0) {
          iVar7 = FUN_01b006b0(&local_60);
          puVar3 = PTR_DAT_04bb40a8;
          puVar2 = PTR_DAT_04bb40a0;
          if ((iVar7 == 2) && (*puVar8 != 0)) {
            cVar12 = *PTR_DAT_04bb40a0;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar3 = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                *puVar2 = 1;
                *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
                *(undefined4 *)(puVar3 + 0x78) = 0xffffffff;
                *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
              }
              else {
                uVar5 = *(uint *)(puVar3 + 0x30);
                if (-1 < (int)uVar5) {
                  if ((short *)((ulong)uVar5 + (long)puVar8) != (short *)0x0) {
                    sVar1 = *(short *)((ulong)uVar5 + (long)puVar8);
                    goto joined_r0x01e3bec4;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar8;
              if ((*puVar8 == 0) || (puVar8 == puVar14)) break;
              lVar19 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
                lVar19 = 0x1c;
              }
              lVar19 = (long)puVar8 + (lVar19 - (long)puVar14);
              if (lVar19 == 0) break;
              uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
              *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
              if (uVar15 == 0) break;
              piVar16 = (int *)(lVar19 + 4);
              while (piVar16[-1] != 0x57e889b2) {
                piVar16 = piVar16 + 2;
                uVar15 = uVar15 - 1;
                if (uVar15 == 0) goto LAB_01e3c020;
              }
              iVar7 = 0;
              if (*piVar16 != -1) {
                iVar7 = *piVar16;
              }
              *(int *)(puVar3 + 0x30) = iVar7;
              if (*puVar8 == 0) break;
            } while( true );
          }
        }
        goto LAB_01e3c020;
      }
      local_60 = PTR_DAT_04bc0510 + 0x10;
      lVar19 = *(long *)PTR_DAT_04bb43c0;
      local_50 = 0;
      local_58 = SUB84(local_70,0);
      local_54 = local_70._4_4_;
      uVar5 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar2 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_70);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if (uVar5 < *(uint *)(lVar19 + 0x1d8)) {
            lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar5 * 8);
            if (lVar19 != 0) {
              local_50 = lVar19;
            }
          }
        }
      }
      iVar7 = FUN_01ad78cc(&local_60);
      if (iVar7 == 0x1c) {
        goto LAB_01e3bdb0;
      }
    }
  }
  local_58 = local_48;
  local_54 = uStack_44;
LAB_01e3c020:
  *param_1 = local_58;
  param_1[1] = local_54;
  return;
}

