
void FUN_02443694(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *local_78;
  char *local_70;
  uint *local_68;
  undefined *local_60;
  char *pcStack_58;
  char *local_38;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    *(undefined4 *)(param_1 + 0x190c) = *(undefined4 *)((long)puVar16 + 0x160c);
  }
  puVar3 = PTR_DAT_04bb2020;
  cVar2 = *(char *)(param_1 + 0x190a);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "PlayerIsShowInsect";
  local_38 = (char *)0xfffe;
  FUN_0277d4ac(&local_38);
  local_38 = *(char **)(param_1 + 0x1900);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (((puVar16[0x227] != 0) && (lVar13 = *(long *)(puVar16[0x227] + 0x78), lVar13 != 0)) &&
     (plVar10 = *(long **)(lVar13 + 0x48), plVar10 != (long *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,&local_60,0);
  }
  puVar4 = PTR_DAT_04bb43c0;
  lVar18 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_38);
  lVar13 = *(long *)puVar4;
  if (lVar13 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = local_38;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_38);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
             (((puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8),
               puVar14 != (uint *)0x0 && (uVar7 = *puVar14, local_68 = puVar14, uVar7 != 0)) &&
              (puVar14 != (uint *)(ulong)uVar7)))) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
            if (((*puVar15 != 0) && (uVar7 = puVar15[1], uVar7 != 0)) &&
               ((ulong)(ushort)puVar15[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar15 + lVar13 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar13 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x69)) {
                  puVar16 = *(undefined8 **)(param_1 + 0x60);
                  if (puVar16 == (undefined8 *)0x0) {
                    if ((DAT_052461c0 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                      puVar16 = &DAT_05240280;
                      if (iVar9 != 0) {
                        FUN_016fcf10(&DAT_05240280);
                        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                        __cxa_guard_release(&DAT_052461c0);
                      }
                    }
                    else {
                      puVar16 = &DAT_05240280;
                    }
                  }
                  if (((puVar16[0x227] != 0) &&
                      (lVar13 = *(long *)(puVar16[0x227] + 0x78), lVar13 != 0)) &&
                     (plVar10 = *(long **)(lVar13 + 0x48), plVar10 != (long *)0x0)) {
                    (**(code **)(*plVar10 + 0x28))(plVar10,&local_60,1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar17 = *(undefined8 *)PTR_DAT_04bb3d80;
  uVar8 = FUN_0277d6c4(&local_38);
  bVar6 = FUN_013eec20(uVar17,uVar8);
  lVar18 = *(long *)puVar4;
  uVar7 = FUN_0277d6c4(&local_38);
  lVar13 = *(long *)puVar4;
  if (lVar13 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = local_38;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar4 == 0) {
        uVar11 = FUN_01ad673c(&local_78);
        if ((uVar11 & 1) == 0) {
LAB_02443ba4:
          uVar12 = 0xbc;
          goto LAB_02443ba8;
        }
LAB_02443b9c:
        bVar5 = true;
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_38);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (*(uint *)(lVar13 + 0x1d8) <= uVar7) goto LAB_02443ae8;
          puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8);
          if (puVar14 == (uint *)0x0) goto LAB_02443aec;
          bVar5 = false;
          uVar7 = *puVar14;
          local_68 = puVar14;
          if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
            if ((*puVar15 != 0) &&
               ((uVar7 = puVar15[1], uVar7 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar15 + lVar13 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar13 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 1))
                goto LAB_02443b9c;
              }
            }
            bVar5 = false;
          }
        }
        else {
LAB_02443ae8:
          puVar14 = (uint *)0x0;
LAB_02443aec:
          bVar5 = true;
        }
        uVar11 = FUN_01ad673c(&local_78);
        if ((uVar11 & 1) != 0) goto LAB_02443b9c;
        if (bVar5) goto LAB_02443ba4;
        uVar7 = *puVar14;
        uVar12 = 0;
        if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
          uVar12 = 0;
          if (*puVar15 != 0) {
            uVar7 = puVar15[1];
            if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar15 + lVar13 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar13 != 0) {
                uVar1 = 0;
                if ((ulong)uVar7 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar7);
                }
                if (*puVar15 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   uVar12 < 0xbd)) goto LAB_02443ba8;
              }
            }
            uVar12 = 0;
          }
        }
LAB_02443ba8:
        bVar5 = uVar12 == 2;
      }
      bVar6 = bVar6 | bVar5;
      puVar16 = *(undefined8 **)(param_1 + 0x60);
      goto joined_r0x02443ab4;
    }
  }
  bVar5 = false;
  puVar16 = *(undefined8 **)(param_1 + 0x60);
joined_r0x02443ab4:
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar16 = &DAT_05240280;
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (cVar2 == '\0') {
    if ((bVar6 & 1) == 0) {
      local_70 = "PlayerShow";
    }
    else if (bVar5 == false) {
      local_70 = "PlayerShowSideways";
    }
    else {
      local_70 = "PlayerShowDish";
    }
  }
  else if ((bVar6 & 1) == 0) {
    local_70 = "PlayerShowKeep";
  }
  else if (bVar5 == false) {
    local_70 = "PlayerShowSidewaysKeep";
  }
  else {
    local_70 = "PlayerShowDishKeep";
  }
  local_78 = puVar3 + 0x10;
  FUN_017081d0(puVar16,&local_78,6,0,0);
  *(undefined8 *)(param_1 + 0x9e0) = 0;
  *(undefined8 *)(param_1 + 0x9d8) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x100;
  return;
}

