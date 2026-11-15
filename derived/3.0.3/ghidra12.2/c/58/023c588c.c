
void FUN_023c588c(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ushort uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  char *local_68;
  char *pcStack_60;
  undefined *local_58;
  char *local_50;
  uint *local_48;
  char *local_28;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x60);
    if (puVar13 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar13 = &DAT_05240280;
        param_2 = extraout_x1;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          param_2 = extraout_x1_00;
        }
      }
      else {
        puVar13 = &DAT_05240280;
      }
    }
    *(undefined4 *)(param_1 + 0x1914) = *(undefined4 *)((long)puVar13 + 0x160c);
    bVar5 = *(char *)(param_1 + 0x1911) == '\x01';
    if (*(int *)(param_1 + 0x178) == 0) {
      pbVar1 = (byte *)(param_1 + 0x18f4);
      if (*(char *)(param_1 + 0x1911) == '\x01') {
        local_68 = (char *)CONCAT44(local_68._4_4_,2);
        *pbVar1 = *pbVar1 | 4;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
        bVar5 = true;
        puVar13 = *(undefined8 **)(param_1 + 0x60);
      }
      else {
        local_68 = (char *)CONCAT44(local_68._4_4_,2);
        *pbVar1 = *pbVar1 & 0xfb;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
        bVar5 = false;
        puVar13 = *(undefined8 **)(param_1 + 0x60);
      }
    }
    else {
      puVar13 = *(undefined8 **)(param_1 + 0x60);
    }
  }
  else {
    bVar5 = *(char *)(param_1 + 0x1911) == '\x01';
    puVar13 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar13 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0,param_2,bVar5);
      puVar13 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar13 = &DAT_05240280;
    }
  }
  puVar3 = PTR_DAT_04bb2020;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "PlayerEatDelicious";
  if (((puVar13[0x227] != 0) && (lVar11 = *(long *)(puVar13[0x227] + 0x78), lVar11 != 0)) &&
     (plVar8 = *(long **)(lVar11 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_58,bVar5);
  }
  local_28 = (char *)0xfffe;
  FUN_0277d4ac(&local_28);
  puVar4 = PTR_DAT_04bb43c0;
  local_28 = *(char **)(param_1 + 0x1908);
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_28);
  lVar11 = *(long *)puVar4;
  if (lVar11 != 0) {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_48 = (uint *)0x0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = local_28;
      uVar6 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar4 == 0) {
        uVar9 = FUN_01ad673c(&local_58);
        if ((uVar9 & 1) != 0) goto LAB_023c5c20;
LAB_023c5cb0:
        uVar10 = 0xbc;
LAB_023c5cb4:
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        if (puVar13 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar13 = &DAT_05240280;
          }
          else {
            puVar13 = &DAT_05240280;
          }
        }
        if (uVar10 == 2) {
          pcStack_60 = "PlayerDrinkDish";
        }
        else {
          pcStack_60 = "PlayerEat";
        }
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_28);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (*(uint *)(lVar11 + 0x1d8) <= uVar6) goto LAB_023c5b6c;
          puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar14 == (uint *)0x0) goto LAB_023c5b70;
          bVar5 = false;
          uVar6 = *puVar14;
          local_48 = puVar14;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar12 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            if ((*puVar12 != 0) &&
               ((uVar6 = puVar12[1], uVar6 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar12 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar6);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 1))
                goto LAB_023c5c20;
              }
            }
            bVar5 = false;
          }
        }
        else {
LAB_023c5b6c:
          puVar14 = (uint *)0x0;
LAB_023c5b70:
          bVar5 = true;
        }
        uVar9 = FUN_01ad673c(&local_58);
        if ((uVar9 & 1) == 0) {
          if (bVar5) goto LAB_023c5cb0;
          uVar6 = *puVar14;
          uVar10 = 0;
          if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
            puVar12 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
            uVar10 = 0;
            if (*puVar12 != 0) {
              uVar6 = puVar12[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar6);
                  }
                  if (*puVar12 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                     uVar10 < 0xbd)) goto LAB_023c5cb4;
                }
              }
              uVar10 = 0;
            }
          }
          goto LAB_023c5cb4;
        }
LAB_023c5c20:
        puVar13 = *(undefined8 **)(param_1 + 0x60);
        if (puVar13 == (undefined8 *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(&DAT_052461c0);
            if (iVar7 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
            puVar13 = &DAT_05240280;
          }
          else {
            puVar13 = &DAT_05240280;
          }
        }
        pcStack_60 = "PlayerEatDish";
      }
      local_68 = puVar3 + 0x10;
      FUN_017081d0(puVar13,&local_68,6,0,0);
    }
  }
  *(undefined8 *)(param_1 + 0x9d0) = 0;
  *(undefined8 *)(param_1 + 0x9c8) = 0x3f800000;
  local_68 = (char *)0xfffe;
  FUN_0277d4ac(&local_68);
  local_68 = *(char **)(param_1 + 0x1908);
  lVar15 = *(long *)puVar4;
  uVar6 = FUN_0277d6c4(&local_68);
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar6) {
    return;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return;
  }
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = local_68;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 == 0) {
    uVar9 = FUN_01ad673c(&local_58);
    if ((uVar9 & 1) == 0) {
      return;
    }
    goto LAB_023c5f48;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(&local_68);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar6) goto LAB_023c5ea4;
    puVar14 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar14 == (uint *)0x0) goto LAB_023c5ea8;
    bVar5 = false;
    uVar6 = *puVar14;
    local_48 = puVar14;
    if ((uVar6 != 0) && (puVar14 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)puVar14 - (long)(ulong)uVar6);
      if ((*puVar12 != 0) && ((uVar6 = puVar12[1], uVar6 != 0 && ((ulong)(ushort)puVar12[2] != 0))))
      {
        lVar11 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar11 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar6);
          }
          if (*puVar12 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
             (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 1))
          goto LAB_023c5f48;
        }
      }
      bVar5 = false;
    }
  }
  else {
LAB_023c5ea4:
    puVar14 = (uint *)0x0;
LAB_023c5ea8:
    bVar5 = true;
  }
  uVar9 = FUN_01ad673c(&local_58);
  if ((uVar9 & 1) == 0) {
    if (bVar5) {
      return;
    }
    puVar12 = (uint *)((long)puVar14 - (ulong)*puVar14);
    if (*puVar14 == 0) {
      return;
    }
    if (puVar12 == (uint *)0x0) {
      return;
    }
    if (*puVar12 == 0) {
      return;
    }
    uVar6 = puVar12[1];
    if (uVar6 == 0) {
      return;
    }
    if ((ulong)(ushort)puVar12[2] == 0) {
      return;
    }
    lVar11 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar11 == 0) {
      return;
    }
    uVar2 = 0;
    if ((ulong)uVar6 != 0) {
      uVar2 = (uint)((ulong)((long)puVar14 - lVar11) / (ulong)uVar6);
    }
    if (*puVar12 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc00c8 <= uVar2) {
      return;
    }
    if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 2) {
      return;
    }
  }
LAB_023c5f48:
  *(undefined4 *)(param_1 + 0x9c8) = 0;
  return;
}

