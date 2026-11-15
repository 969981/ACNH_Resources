
void FUN_0236b9d0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined *local_78;
  char *local_70;
  uint *local_68;
  char *local_60;
  uint local_54;
  
  cVar3 = *(char *)((long)param_2 + 0x1e);
  local_54 = (uint)*(byte *)(param_2 + 1);
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (5 < local_54) {
    local_54 = 0;
  }
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar18 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar18 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  puVar5 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "PutawayAnimKeep";
  if (((puVar16[0x227] != 0) && (lVar12 = *(long *)(puVar16[0x227] + 0x78), lVar12 != 0)) &&
     (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_78,cVar3 != '\0');
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar18 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar18 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_78 = puVar5 + 0x10;
  local_70 = "PutawayAnim";
  if (((puVar16[0x227] != 0) && (lVar12 = *(long *)(puVar16[0x227] + 0x78), lVar12 != 0)) &&
     (plVar8 = *(long **)(lVar12 + 0x48), plVar8 != (long *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_78,local_54);
  }
  if (*(char *)((long)param_2 + 0x21) == '\0') {
    cVar3 = *(char *)(param_2 + 4);
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_052461c0), iVar18 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar16 = &DAT_05240280;
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    if (cVar3 == '\0') {
      puVar11 = &DAT_054989c0;
    }
    else {
      puVar11 = &DAT_054989d0;
    }
  }
  else {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_052461c0), iVar18 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar16 = &DAT_05240280;
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    puVar11 = &DAT_054989e0;
  }
  FUN_017081d0(puVar16,puVar11,6,0,0);
  sVar4 = *(short *)(param_2 + 2);
  iVar18 = *(int *)((long)param_2 + 0xc);
  iVar20 = *(int *)((long)param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x9d8) = 0x3f800000;
  *(float *)(param_1 + 0x9dc) = (float)iVar18 * 0.001;
  *(float *)(param_1 + 0x9e0) = (float)(int)sVar4 * 0.25;
  *(float *)(param_1 + 0x9e4) = (float)iVar20 * 0.001;
  puVar5 = PTR_DAT_04bb43c0;
  if (*(char *)((long)param_2 + 0x23) == '\0') {
    local_60 = (char *)0xfffe;
    FUN_0277d4ac(&local_60);
    local_60 = (char *)*param_2;
    lVar17 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(&local_60);
    lVar12 = *(long *)puVar5;
    if (lVar12 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_68 = (uint *)0x0;
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_70 = local_60;
        uVar7 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar5 == 0) {
LAB_0236c0b0:
          puVar13 = (uint *)0x0;
LAB_0236c0b4:
          bVar6 = true;
LAB_0236c0b8:
          uVar9 = FUN_01ad673c(&local_78);
          if ((uVar9 & 1) != 0) goto LAB_0236c0c4;
        }
        else {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0236c0b0;
          lVar12 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_60);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_0236c0b0;
          puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
          if (puVar13 == (uint *)0x0) goto LAB_0236c0b4;
          bVar6 = false;
          uVar7 = *puVar13;
          local_68 = puVar13;
          if ((uVar7 == 0) || (puVar13 == (uint *)(ulong)uVar7)) goto LAB_0236c0b8;
          puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
          if ((*puVar14 == 0) ||
             ((uVar7 = puVar14[1], uVar7 == 0 || ((ulong)(ushort)puVar14[2] == 0)))) {
LAB_0236c208:
            bVar6 = false;
            goto LAB_0236c0b8;
          }
          lVar12 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar12 = 0x1c;
          }
          lVar12 = (long)puVar14 + lVar12 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar12 == 0) goto LAB_0236c208;
          uVar1 = 0;
          if ((ulong)uVar7 != 0) {
            uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
          }
          if (*puVar14 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (*(uint *)PTR_DAT_04bc00c8 <= uVar1) goto LAB_0236c208;
          bVar6 = false;
          if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 1)
          goto LAB_0236c0b8;
LAB_0236c0c4:
          lVar12 = FUN_0251e98c(1);
          puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x2ce0) + 0xf0))(lVar12 + 0x2ce0);
          uVar21 = *puVar10;
          puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x2d10) + 0xf0))(lVar12 + 0x2d10);
          uVar22 = *puVar10;
          puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar12 + 0x2d40) + 0xf0))(lVar12 + 0x2d40);
          uVar19 = *puVar10;
          *(undefined4 *)(param_1 + 0x9dc) = uVar21;
          *(undefined4 *)(param_1 + 0x9e0) = uVar22;
          *(undefined4 *)(param_1 + 0x9e4) = uVar19;
        }
        if (!bVar6) {
          puVar14 = (uint *)((long)puVar13 - (ulong)*puVar13);
          if ((((*puVar13 != 0) && (puVar14 != (uint *)0x0)) && (*puVar14 != 0)) &&
             ((uVar7 = puVar14[1], uVar7 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar14 + lVar12 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar7 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
              }
              if (*puVar14 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 2)) {
                lVar12 = FUN_0251e98c(1);
                puVar10 = (undefined4 *)
                          (**(code **)(*(long *)(lVar12 + 0x2da0) + 0xf0))(lVar12 + 0x2da0);
                uVar21 = *puVar10;
                puVar10 = (undefined4 *)
                          (**(code **)(*(long *)(lVar12 + 0x2dd0) + 0xf0))(lVar12 + 0x2dd0);
                uVar22 = *puVar10;
                puVar10 = (undefined4 *)
                          (**(code **)(*(long *)(lVar12 + 0x2e00) + 0xf0))(lVar12 + 0x2e00);
                uVar19 = *puVar10;
                *(undefined4 *)(param_1 + 0x9dc) = uVar21;
                *(undefined4 *)(param_1 + 0x9e0) = uVar22;
                *(undefined4 *)(param_1 + 0x9e4) = uVar19;
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1f0d) = *param_2;
  uVar15 = param_2[3];
  uVar2 = param_2[1];
  uVar19 = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x1f1d) = param_2[2];
  *(undefined8 *)(param_1 + 0x1f25) = uVar15;
  *(undefined8 *)(param_1 + 0x1f15) = uVar2;
  *(undefined4 *)(param_1 + 0x1f2d) = uVar19;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xffff8fff | 0x2000;
  local_60 = (char *)0xfffe;
  FUN_0277d4ac(&local_60);
  local_60 = (char *)*param_2;
  lVar17 = *(long *)puVar5;
  uVar7 = FUN_0277d6c4(&local_60);
  lVar12 = *(long *)puVar5;
  if (lVar12 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = local_60;
      uVar7 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar5 == 0) {
LAB_0236bee8:
        uVar9 = FUN_01ad673c(&local_78);
        if ((uVar9 & 1) == 0) goto LAB_0236bf04;
      }
      else {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0236bee8;
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(&local_60);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
           (((puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar13 == (uint *)0x0 || (uVar7 = *puVar13, local_68 = puVar13, uVar7 == 0)) ||
            (puVar13 == (uint *)(ulong)uVar7)))) goto LAB_0236bee8;
        puVar14 = (uint *)((long)puVar13 - (long)(ulong)uVar7);
        if (*puVar14 == 0) goto LAB_0236bee8;
        uVar7 = puVar14[1];
        if ((uVar7 == 0) || ((ulong)(ushort)puVar14[2] == 0)) {
LAB_0236be7c:
          if ((*puVar14 != 0) &&
             ((uVar7 = puVar14[1], uVar7 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar14 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar14 + lVar12 + (ulong)(ushort)puVar14[2] * 8;
            if (lVar12 != 0) {
              uVar1 = 0;
              if ((ulong)uVar7 != 0) {
                uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
              }
              if (*puVar14 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 2))
              goto LAB_0236bef4;
            }
          }
          goto LAB_0236bee8;
        }
        lVar12 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar14 + lVar12 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar12 == 0) goto LAB_0236be7c;
        uVar1 = 0;
        if ((ulong)uVar7 != 0) {
          uVar1 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar7);
        }
        if (*puVar14 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 1))
        goto LAB_0236be7c;
      }
LAB_0236bef4:
      bVar6 = *(char *)((long)param_2 + 0x23) != '\0';
      goto LAB_0236bf08;
    }
  }
LAB_0236bf04:
  bVar6 = false;
LAB_0236bf08:
  FUN_0236c210(param_1,bVar6);
  return;
}

