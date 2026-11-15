
void FUN_02099b90(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  long *plVar14;
  undefined4 *puVar15;
  float *pfVar16;
  char cVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined1 uVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  uint *puVar27;
  long lVar28;
  undefined8 *puVar29;
  uint uVar30;
  long lVar31;
  undefined4 uVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  int iVar36;
  undefined *local_1ba8;
  char *local_1ba0;
  undefined4 local_74;
  
  lVar31 = *(long *)PTR_DAT_04bb3968;
  if (*(int *)(param_1 + 0xe4) == 0) {
    if ((*(char *)(param_1 + 0x428) != '\0') && (*(long *)(param_1 + 0x420) != 0)) {
      iVar18 = *(int *)(param_1 + 0x18);
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1b48) + 0xf0))(lVar31 + 0x1b48);
      iVar12 = 0x14;
      if (iVar18 <= *piVar13) {
        iVar12 = 100;
      }
      piVar13 = *(int **)(param_1 + 0x420);
      if ((param_2 != 0) &&
         ((((*(int *)(param_2 + 0xc) == *piVar13 && (*(int *)(param_2 + 0x4c) == piVar13[1])) &&
           (*(int *)(param_2 + 0x50) == piVar13[2])) || (param_3 <= piVar13[3] + iVar12)))) {
        iVar12 = *(int *)(param_1 + 0x18);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1698) + 0xf0))(lVar31 + 0x1698);
        fVar35 = *pfVar16;
        iVar18 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x16c8) + 0xf0))(lVar31 + 0x16c8);
        if ((float)iVar12 < *pfVar16 + (float)iVar18 * fVar35) goto LAB_02099d7c;
        piVar13 = *(int **)(param_1 + 0x420);
      }
      uVar30 = piVar13[5];
      *(undefined1 *)(param_1 + 0x428) = 0;
      *(undefined8 *)(param_1 + 0x420) = 0;
      if (99 < (int)uVar30) {
        uVar30 = 100;
      }
      uVar30 = (uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU)) + *(int *)(param_1 + 0x18);
      if (99 < (int)uVar30) {
        uVar30 = 100;
      }
      *(uint *)(param_1 + 0x18) = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
      lVar28 = *(long *)(param_1 + 0x10);
      if (0 < *(int *)(lVar28 + 0x1b30)) {
        lVar20 = 0;
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        do {
          puVar29 = *(undefined8 **)(*(long *)(lVar28 + 0x1b38) + lVar20 * 8);
          lVar20 = lVar20 + 1;
          puVar29[0xf] = puVar2;
          *puVar29 = *(undefined8 *)(lVar28 + 0x1b40);
          *(undefined8 **)(lVar28 + 0x1b40) = puVar29;
        } while (lVar20 < *(int *)(lVar28 + 0x1b30));
        *(undefined4 *)(lVar28 + 0x1b30) = 0;
        *(undefined4 *)(lVar28 + 0x365c) = 0;
        *(undefined4 *)(lVar28 + 0x3664) = 0;
        *(ushort *)(*(long *)(param_1 + 8) + 0x12570) =
             *(ushort *)(*(long *)(param_1 + 8) + 0x12570) | 0x1000;
      }
    }
LAB_02099d7c:
    cVar17 = *(char *)(param_1 + 0x428);
    if ((param_2 != 0) && (cVar17 == '\0')) {
      if (*(int *)(param_2 + 0xc) != 2) {
        iVar12 = *(int *)(param_1 + 0x18);
        pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1638) + 0xf0))(lVar31 + 0x1638);
        fVar35 = *pfVar16;
        pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1668) + 0xf0))(lVar31 + 0x1668);
        if ((float)iVar12 < *pfVar16 + (float)param_3 * fVar35) {
          *(undefined1 *)(param_1 + 0x428) = 1;
          iVar12 = *(int *)(param_2 + 0x4c);
          if (iVar12 == -1) {
            iVar12 = 0;
            if (*(int *)(param_2 + 0x50) != -1) {
              iVar12 = *(int *)(param_2 + 0x50) + 10;
            }
          }
          lVar28 = param_1 + 0x180 + (ulong)*(uint *)(param_2 + 0xc) * 0x20;
          if (0x14 < *(uint *)(param_2 + 0xc)) {
            lVar28 = param_1 + 0x180;
          }
          lVar28 = *(long *)(*(long *)(lVar28 + 8) + (long)iVar12 * 8);
          *(long *)(param_1 + 0x420) = lVar28;
          *(undefined4 *)(lVar28 + 0xc) = *(undefined4 *)(lVar28 + 0x10);
          *(undefined4 *)(*(long *)(param_1 + 0x420) + 0x14) = 0;
        }
      }
      cVar17 = *(char *)(param_1 + 0x428);
    }
    if (cVar17 == '\0') goto LAB_02099be4;
LAB_02099e40:
    uVar21 = 0;
LAB_02099e44:
    *(undefined1 *)(param_1 + 0x434) = uVar21;
  }
  else {
    *(undefined1 *)(param_1 + 0x428) = 0;
    *(undefined8 *)(param_1 + 0x420) = 0;
LAB_02099be4:
    if (*(int *)(param_1 + 0x18) == 100) {
      cVar17 = '\0';
      goto LAB_02099e40;
    }
    cVar17 = '\0';
    if (*(int *)(param_1 + 0x18) == 0) {
      cVar17 = '\0';
      uVar21 = 1;
      goto LAB_02099e44;
    }
  }
  if (*(int *)(param_1 + 0xe4) == 1) {
LAB_02099e54:
    bVar11 = false;
  }
  else if ((param_2 == 0) || (cVar17 == '\0')) {
LAB_02099eb8:
    if (*(long *)PTR_DAT_04bb3968 == 0) {
LAB_02099edc:
      puVar22 = (uint *)PTR_DAT_04bc2828;
    }
    else {
      puVar22 = (uint *)FUN_01e32888(*(long *)PTR_DAT_04bb3968 + 0x16908,
                                     *(undefined4 *)(param_1 + 0x88));
      if (puVar22 == (uint *)0x0) goto LAB_02099edc;
    }
    puVar4 = PTR_DAT_04bc1568;
    puVar2 = PTR_DAT_04bc1560;
    if (*puVar22 != 0) {
      cVar17 = *PTR_DAT_04bc1560;
      do {
        if (cVar17 == '\0') {
          cVar17 = '\x01';
          *puVar2 = 1;
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar30 = *(uint *)(puVar4 + 0x40);
          if (-1 < (int)uVar30) {
            if (((byte *)((ulong)uVar30 + (long)puVar22) != (byte *)0x0) &&
               (*(byte *)((ulong)uVar30 + (long)puVar22) < 7)) goto LAB_02099e54;
            break;
          }
          if (uVar30 != 0xffffffff) break;
        }
        lVar28 = (long)puVar22 - (ulong)*puVar22;
        if ((*puVar22 == 0) || (lVar28 == 0)) break;
        lVar20 = 0xc;
        if (*(char *)(lVar28 + 10) != '\0') {
          lVar20 = 0x1c;
        }
        if (lVar20 + lVar28 == 0) break;
        uVar19 = (ulong)*(ushort *)(lVar28 + 8);
        *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
        if (uVar19 == 0) break;
        piVar13 = (int *)(lVar20 + lVar28 + 4);
        while (piVar13[-1] != 0x35c78d62) {
          piVar13 = piVar13 + 2;
          uVar19 = uVar19 - 1;
          if (uVar19 == 0) goto LAB_0209a04c;
        }
        iVar12 = 0;
        if (*piVar13 != -1) {
          iVar12 = *piVar13;
        }
        *(int *)(puVar4 + 0x40) = iVar12;
        if (*puVar22 == 0) break;
      } while( true );
    }
LAB_0209a04c:
    lVar28 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3c0);
    piVar13 = (int *)(lVar28 + 0x10);
    piVar7 = piVar13 + (ulong)*(uint *)(lVar28 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar28 + 0x294)) {
      piVar7 = piVar13;
    }
    local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,*piVar7);
    if ((*piVar7 != 1) && (uVar19 = FUN_02085a50(lVar28,1,0), (uVar19 & 1) != 0)) {
      *(undefined1 *)(lVar28 + 0x801) = 1;
      piVar7 = piVar13 + (ulong)*(uint *)(lVar28 + 0x294) * 0x20;
      if (4 < *(uint *)(lVar28 + 0x294)) {
        piVar7 = piVar13;
      }
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[5] = 0;
    }
    bVar11 = false;
    lVar20 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3c0);
    lVar28 = lVar20 + 0x10;
    uVar30 = *(uint *)(lVar20 + 0x294);
    lVar20 = lVar28 + (ulong)uVar30 * 0x80;
    if (4 < uVar30) {
      lVar20 = lVar28;
    }
    *(undefined8 *)(lVar20 + 0xc) = 0;
    *(undefined4 *)(lVar20 + 0x14) = 0;
  }
  else if (*(int *)(param_2 + 0x48) == 0) {
    if (((*(float *)(param_2 + 0x14) == 0.0) && (*(float *)(param_2 + 0x18) == 0.0)) &&
       (*(float *)(param_2 + 0x1c) == 0.0)) goto LAB_02099eb8;
    lVar28 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3c0);
    uVar19 = FUN_02085a50(lVar28,3,0);
    bVar11 = true;
    if ((uVar19 & 1) != 0) {
      *(undefined1 *)(lVar28 + 0x801) = 1;
      lVar20 = lVar28 + 0x10;
      lVar24 = lVar20 + (ulong)*(uint *)(lVar28 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar28 + 0x294)) {
        lVar24 = lVar20;
      }
      *(undefined4 *)(lVar24 + 0xc) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(lVar24 + 0x10) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(lVar24 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
      lVar24 = lVar20 + (ulong)*(uint *)(lVar28 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar28 + 0x294)) {
        lVar24 = lVar20;
      }
      *(undefined1 *)(lVar24 + 0x7e) = 0;
    }
  }
  else {
    FUN_02085e20(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x3c0),0,
                 *(int *)(param_2 + 0x48),PTR_DAT_04bb6928,0);
    bVar11 = true;
  }
  puVar29 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x60);
  if (puVar29 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar29 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar29 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_1ba8 = PTR_DAT_04bb2020 + 0x10;
  local_1ba0 = "NpcConcentrationType";
  iVar12 = *(int *)(param_1 + 0x18);
  lVar28 = *(long *)PTR_DAT_04bb3968;
  piVar13 = (int *)(**(code **)(*(long *)(lVar28 + 0x1608) + 0xf0))(lVar28 + 0x1608);
  if (iVar12 < *piVar13) {
    uVar21 = 2;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x18);
    piVar13 = (int *)(**(code **)(*(long *)(lVar28 + 0x15d8) + 0xf0))(lVar28 + 0x15d8);
    uVar21 = iVar12 < *piVar13;
  }
  if (((puVar29[0x227] != 0) && (lVar28 = *(long *)(puVar29[0x227] + 0x78), lVar28 != 0)) &&
     (plVar14 = *(long **)(lVar28 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_1ba8,uVar21);
  }
  local_74 = 5;
  if ((*(char *)(param_1 + 0x428) == '\0') || (*(long *)(param_1 + 0x420) == 0)) {
LAB_0209a480:
    lVar28 = *(long *)(param_1 + 0x10);
    if (0 < *(int *)(lVar28 + 0x1b30)) {
      lVar20 = 0;
      puVar4 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        puVar29 = *(undefined8 **)(*(long *)(lVar28 + 0x1b38) + lVar20 * 8);
        lVar20 = lVar20 + 1;
        puVar29[0xf] = puVar4;
        *puVar29 = *(undefined8 *)(lVar28 + 0x1b40);
        *(undefined8 **)(lVar28 + 0x1b40) = puVar29;
      } while (lVar20 < *(int *)(lVar28 + 0x1b30));
      *(undefined4 *)(lVar28 + 0x1b30) = 0;
      *(undefined4 *)(lVar28 + 0x365c) = 0;
      *(undefined4 *)(lVar28 + 0x3664) = 0;
      *(ushort *)(*(long *)(param_1 + 8) + 0x12570) =
           *(ushort *)(*(long *)(param_1 + 8) + 0x12570) | 0x1000;
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x18);
    piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1b78) + 0xf0))(lVar31 + 0x1b78);
    if ((*piVar13 <= iVar12) ||
       (iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10),
       piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1c38) + 0xf0))(lVar31 + 0x1c38),
       iVar12 <= *piVar13)) {
      iVar12 = *(int *)(param_1 + 0x18);
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1b48) + 0xf0))(lVar31 + 0x1b48);
      if ((iVar12 < *piVar13) &&
         (iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10),
         piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1c08) + 0xf0))(lVar31 + 0x1c08),
         *piVar13 < iVar12)) {
        local_74 = 3;
      }
      else {
        iVar12 = *(int *)(param_1 + 0x18);
        piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1b18) + 0xf0))(lVar31 + 0x1b18);
        if ((iVar12 < *piVar13) &&
           (iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10),
           piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1bd8) + 0xf0))(lVar31 + 0x1bd8),
           *piVar13 < iVar12)) {
          local_74 = 2;
        }
        else {
          iVar12 = *(int *)(param_1 + 0x18);
          piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1ae8) + 0xf0))(lVar31 + 0x1ae8);
          if ((iVar12 < *piVar13) &&
             (iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10),
             piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1ba8) + 0xf0))(lVar31 + 0x1ba8),
             *piVar13 < iVar12)) {
            local_74 = 1;
          }
          else {
            local_74 = 0;
          }
        }
      }
      goto LAB_0209a480;
    }
    lVar28 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (*(int *)(lVar28 + 0x750) != 0) goto LAB_0209a480;
    iVar12 = *(int *)(*(long *)(lVar28 + 0x3b0) + 0x56c);
    local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,iVar12);
    if (iVar12 == 0xc) goto LAB_0209a480;
    local_74 = 4;
    if ((param_2 != 0) &&
       ((((*(float *)(param_2 + 0x14) != 0.0 || (*(float *)(param_2 + 0x18) != 0.0)) ||
         (*(float *)(param_2 + 0x1c) != 0.0)) && (*(int *)(*(long *)(param_1 + 0x10) + 0x1b30) < 1))
       )) {
      FUN_02065aa0(&local_1ba8);
      puVar15 = (undefined4 *)FUN_02065b58(&local_1ba8);
      if (puVar15 != (undefined4 *)0x0) {
        *puVar15 = 1;
        puVar15[0xe] = *(undefined4 *)(param_2 + 0x14);
        puVar15[0xf] = *(undefined4 *)(param_2 + 0x18);
        uVar32 = *(undefined4 *)(param_2 + 0x1c);
        puVar15[0x18] = 1;
        *(undefined2 *)((long)puVar15 + 0x69) = 0x101;
        puVar15[0x10] = uVar32;
        FUN_021949c0(*(undefined8 *)(param_1 + 0x10),&local_1ba8,1);
        *(ushort *)(*(long *)(param_1 + 8) + 0x12570) =
             *(ushort *)(*(long *)(param_1 + 8) + 0x12570) | 0x1000;
      }
      puVar4 = PTR_DAT_04bbc1a0;
      if (0 < (int)(uint)local_1ba8) {
        uVar19 = (ulong)local_1ba8 & 3;
        lVar28 = 0;
        if (3 < (uint)local_1ba8) {
          plVar14 = (long *)(local_1ba0 + 0x10);
          puVar3 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            lVar28 = lVar28 + -4;
            *(undefined **)(plVar14[-2] + 0x78) = puVar3;
            *(undefined **)(plVar14[-1] + 0x78) = puVar3;
            *(undefined **)(*plVar14 + 0x78) = puVar3;
            plVar1 = plVar14 + 1;
            plVar14 = plVar14 + 4;
            *(undefined **)(*plVar1 + 0x78) = puVar3;
          } while (-lVar28 != ((ulong)local_1ba8 & 0xfffffffc));
          lVar28 = -lVar28;
        }
        if (((ulong)local_1ba8 & 3) != 0) {
          plVar14 = (long *)(local_1ba0 + lVar28 * 8);
          do {
            uVar19 = uVar19 - 1;
            *(undefined **)(*plVar14 + 0x78) = puVar4 + 0x10;
            plVar14 = plVar14 + 1;
          } while (uVar19 != 0);
        }
      }
    }
  }
  puVar29 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x60);
  if (puVar29 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar29 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar29 = &DAT_05240280;
    }
  }
  local_1ba8 = puVar2 + 0x10;
  local_1ba0 = "NpcConcentrationInterestType";
  if (((puVar29[0x227] != 0) && (lVar28 = *(long *)(puVar29[0x227] + 0x78), lVar28 != 0)) &&
     (plVar14 = *(long **)(lVar28 + 0x48), plVar14 != (long *)0x0)) {
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_1ba8,local_74);
  }
  if (*(int *)(param_1 + 0xe4) == 1) {
    bVar11 = false;
    *(undefined4 *)(param_1 + 0x18) = 100;
  }
  else {
    if ((*(char *)(param_1 + 0x428) == '\0') || (*(long *)(param_1 + 0x420) == 0)) {
      if (*(char *)(param_1 + 0x434) == '\0') {
        if (bVar11) {
          piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x14b8) + 0xf0))(lVar31 + 0x14b8);
          iVar12 = *piVar13;
          piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                                     (*(long *)PTR_DAT_04bb3968 + 0x13f8);
          iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
          if (iVar18 == -1) {
            iVar18 = 0;
          }
          else {
            iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
          }
          iVar18 = *(int *)(param_1 + 0x160) - iVar18;
          iVar33 = iVar18 / 0x1e;
          if (iVar18 % 0x1e == 0) {
            iVar18 = 0;
            if (iVar12 != 0) {
              iVar18 = iVar33 / iVar12;
            }
            if (iVar33 == iVar18 * iVar12) {
              lVar28 = lVar31 + 0x1488;
              lVar20 = *(long *)(lVar31 + 0x1488);
              goto LAB_0209b5f0;
            }
          }
        }
        else {
          piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1458) + 0xf0))(lVar31 + 0x1458);
          iVar12 = *piVar13;
          piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                                     (*(long *)PTR_DAT_04bb3968 + 0x13f8);
          iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
          if (iVar18 == -1) {
            iVar18 = 0;
          }
          else {
            iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
          }
          iVar18 = *(int *)(param_1 + 0x160) - iVar18;
          iVar33 = iVar18 / 0x1e;
          if (iVar18 % 0x1e == 0) {
            iVar18 = 0;
            if (iVar12 != 0) {
              iVar18 = iVar33 / iVar12;
            }
            if (iVar33 == iVar18 * iVar12) {
              lVar28 = lVar31 + 0x1428;
              lVar20 = *(long *)(lVar31 + 0x1428);
LAB_0209b5f0:
              piVar13 = (int *)(**(code **)(lVar20 + 0xf0))(lVar28);
              bVar11 = false;
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + *piVar13;
              goto LAB_0209ac90;
            }
          }
        }
      }
      else {
        piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x15a8) + 0xf0))(lVar31 + 0x15a8);
        iVar12 = *piVar13;
        piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                                   (*(long *)PTR_DAT_04bb3968 + 0x13f8);
        iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
        if (iVar18 == -1) {
          iVar18 = 0;
        }
        else {
          iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
        }
        iVar18 = *(int *)(param_1 + 0x160) - iVar18;
        iVar33 = iVar18 / 0x1e;
        if (iVar18 % 0x1e == 0) {
          iVar18 = 0;
          if (iVar12 != 0) {
            iVar18 = iVar33 / iVar12;
          }
          if (iVar33 == iVar18 * iVar12) {
            lVar28 = lVar31 + 0x1578;
            lVar20 = *(long *)(lVar31 + 0x1578);
            goto LAB_0209b5f0;
          }
        }
      }
    }
    else {
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1788) + 0xf0))(lVar31 + 0x1788);
      iVar12 = *piVar13;
      piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                                 (*(long *)PTR_DAT_04bb3968 + 0x13f8);
      iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
      if (iVar18 == -1) {
        iVar18 = 0;
      }
      else {
        iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
      }
      iVar18 = *(int *)(param_1 + 0x160) - iVar18;
      iVar33 = iVar18 / 0x1e;
      if (iVar18 % 0x1e == 0) {
        iVar18 = 0;
        if (iVar12 != 0) {
          iVar18 = iVar33 / iVar12;
        }
        if (iVar33 == iVar18 * iVar12) {
          iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
          pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x16f8) + 0xf0))(lVar31 + 0x16f8);
          iVar18 = (int)((float)*(int *)(param_1 + 0x42c) +
                         (float)*(int *)(*(long *)(param_1 + 0x420) + 0x10) * *pfVar16 +
                        (float)*(int *)(param_1 + 0x18));
          *(int *)(param_1 + 0x18) = iVar18;
          piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1878) + 0xf0))(lVar31 + 0x1878);
          if (iVar18 < *piVar13) {
            iVar18 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x18a8) + 0xf0))(lVar31 + 0x18a8);
            if (iVar18 < *piVar13) {
              iVar18 = *(int *)(param_1 + 0x18);
              piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1878) + 0xf0))(lVar31 + 0x1878);
              iVar33 = *piVar13;
              pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1848) + 0xf0))(lVar31 + 0x1848);
              fVar35 = *pfVar16;
              iVar36 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
              piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x18a8) + 0xf0))(lVar31 + 0x18a8);
              iVar34 = *piVar13;
              pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1848) + 0xf0))(lVar31 + 0x1848);
              if ((((float)iVar33 - fVar35) * (float)iVar36) / (float)iVar34 + *pfVar16 <=
                  (float)iVar18) goto LAB_0209a828;
            }
          }
          else {
LAB_0209a828:
            iVar18 = *(int *)(param_1 + 0x18);
            iVar33 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
            piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1608) + 0xf0))
                                       (*(long *)PTR_DAT_04bb3968 + 0x1608);
            lVar28 = 0x1758;
            lVar20 = lVar31 + 0x1758;
            if (*piVar13 <= iVar18) {
              lVar28 = 0x1728;
              lVar20 = lVar31 + 0x1728;
            }
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + lVar28) + 0xf0))(lVar20);
            uVar30 = *piVar13 + iVar33 + *(int *)(param_1 + 0x430);
            if (99 < (int)uVar30) {
              uVar30 = 100;
            }
            *(uint *)(*(long *)(param_1 + 0x420) + 0x10) =
                 uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
          }
          lVar28 = *(long *)(param_1 + 0x420);
          *(int *)(lVar28 + 0x14) = (iVar12 - *(int *)(lVar28 + 0x10)) + *(int *)(lVar28 + 0x14);
        }
      }
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1ab8) + 0xf0))(lVar31 + 0x1ab8);
      iVar12 = *piVar13;
      piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                                 (*(long *)PTR_DAT_04bb3968 + 0x13f8);
      iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
      if (iVar18 == -1) {
        iVar18 = 0;
      }
      else {
        iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
      }
      iVar18 = *(int *)(param_1 + 0x160) - iVar18;
      iVar33 = iVar18 / 0x1e;
      if (iVar18 % 0x1e == 0) {
        iVar18 = 0;
        if (iVar12 != 0) {
          iVar18 = iVar33 / iVar12;
        }
        if (iVar33 == iVar18 * iVar12) {
          pfVar16 = (float *)(**(code **)(*(long *)(lVar31 + 0x1a88) + 0xf0))(lVar31 + 0x1a88);
          *(int *)(*(long *)(param_1 + 0x420) + 0x14) =
               (int)(*pfVar16 * (float)*(int *)(*(long *)(param_1 + 0x420) + 0x14));
        }
      }
      if (*(int *)(param_1 + 0x18) < 1) {
        iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
        piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x18d8) + 0xf0))(lVar31 + 0x18d8);
        if (*piVar13 <= iVar12) {
          iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
          lVar28 = lVar31 + 0x1908;
          piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1908) + 0xf0))(lVar28);
          if (iVar12 <= *piVar13) {
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1938) + 0xf0))(lVar31 + 0x1938);
            iVar12 = *piVar13;
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1968) + 0xf0))(lVar31 + 0x1968);
            iVar18 = *piVar13;
            iVar33 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1908) + 0xf0))(lVar28);
            iVar34 = *piVar13;
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x18d8) + 0xf0))(lVar31 + 0x18d8);
            iVar36 = *piVar13;
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1908) + 0xf0))(lVar28);
            iVar10 = 0;
            if (iVar36 - *piVar13 != 0) {
              iVar10 = ((iVar33 - iVar34) * (iVar12 - iVar18)) / (iVar36 - *piVar13);
            }
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1968) + 0xf0))(lVar31 + 0x1968);
            iVar12 = *piVar13;
            lVar28 = *(long *)(*(long *)(param_1 + 8) + 8);
            uVar30 = *(uint *)(lVar28 + 0x288);
            *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
            uVar30 = uVar30 ^ uVar30 << 0xb;
            *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
            uVar25 = *(uint *)(lVar28 + 0x294);
            *(uint *)(lVar28 + 0x290) = uVar25;
            uVar30 = uVar30 >> 8 ^ uVar25 >> 0x13 ^ uVar30 ^ uVar25;
            *(uint *)(lVar28 + 0x294) = uVar30;
            if (((float)(uVar30 >> 9 | 0x3f800000) + -1.0) * 100.0 < (float)(iVar12 + iVar10)) {
              *(undefined4 *)(param_1 + 0x18) = 100;
              iVar12 = *(int *)(*(long *)(param_1 + 0x420) + 0x10);
              piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1998) + 0xf0))(lVar31 + 0x1998);
              bVar11 = true;
              if (*piVar13 <= iVar12) {
                iVar12 = *piVar13;
              }
              *(int *)(*(long *)(param_1 + 0x420) + 0x10) = iVar12;
              *(undefined1 *)(param_1 + 0x428) = 0;
              *(undefined8 *)(param_1 + 0x420) = 0;
              goto LAB_0209ac90;
            }
          }
        }
      }
    }
    bVar11 = false;
  }
LAB_0209ac90:
  puVar2 = PTR_DAT_04bc1578;
  uVar30 = *(uint *)(param_1 + 0x18);
  uVar19 = 0;
  lVar28 = param_1 + 0x20;
  if (99 < (int)uVar30) {
    uVar30 = 100;
  }
  *(uint *)(param_1 + 0x18) = uVar30 & ((int)uVar30 >> 0x1f ^ 0xffffffffU);
  do {
    piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1d58) + 0xf0))((long *)(lVar31 + 0x1d58));
    iVar12 = *piVar13;
    piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                               (*(long *)PTR_DAT_04bb3968 + 0x13f8);
    iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
    if (iVar18 == -1) {
      iVar18 = 0;
    }
    else {
      iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
    }
    iVar18 = *(int *)(param_1 + 0x160) - iVar18;
    iVar33 = iVar18 / 0x1e;
    if (iVar18 % 0x1e == 0) {
      iVar18 = 0;
      if (iVar12 != 0) {
        iVar18 = iVar33 / iVar12;
      }
      if (iVar33 != iVar18 * iVar12) goto LAB_0209ad84;
      puVar15 = (undefined4 *)(**(code **)(*(long *)(lVar31 + 0x1d28) + 0xf0))();
      uVar32 = *puVar15;
      lVar20 = lVar28 + uVar19 * 0x20;
      if (bVar11) goto LAB_0209ad90;
LAB_0209aff4:
      FUN_020e944c(lVar20,*(undefined4 *)(param_1 + 0x164),uVar32);
    }
    else {
LAB_0209ad84:
      uVar32 = 0;
      lVar20 = lVar28 + uVar19 * 0x20;
      if (!bVar11) goto LAB_0209aff4;
LAB_0209ad90:
      if (*(uint **)(param_1 + 0x420) == (uint *)0x0) goto LAB_0209aff4;
      uVar30 = *(uint *)(lVar20 + 8);
      lVar24 = *(long *)PTR_DAT_04bb3968;
      if (lVar24 == 0) {
LAB_0209ae90:
        puVar22 = (uint *)PTR_DAT_04bc2820;
        if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_0209af94;
LAB_0209aea0:
        cVar17 = *PTR_DAT_04bc1570;
        do {
          if (cVar17 == '\0') {
            cVar17 = '\x01';
            *PTR_DAT_04bc1570 = 1;
            *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar2 + 0x68) = 0xffffffff;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          }
          else {
            uVar25 = *(uint *)(puVar2 + 0x2c);
            if (-1 < (int)uVar25) {
              if (((byte *)((ulong)uVar25 + (long)puVar22) == (byte *)0x0) ||
                 (bVar9 = *(byte *)((ulong)uVar25 + (long)puVar22), uVar25 = (uint)bVar9, 3 < bVar9)
                 ) goto LAB_0209af94;
              goto LAB_0209af98;
            }
            if (uVar25 != 0xffffffff) goto LAB_0209af94;
          }
          puVar23 = (uint *)(ulong)*puVar22;
          uVar25 = 0;
          if ((*puVar22 == 0) || (puVar22 == puVar23)) goto LAB_0209af98;
          lVar24 = 0xc;
          if (*(char *)((long)puVar22 + (10 - (long)puVar23)) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar22 + (lVar24 - (long)puVar23);
          if (lVar24 == 0) goto LAB_0209af94;
          uVar26 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar23));
          *(undefined4 *)(puVar2 + 0x2c) = 0xfffffffe;
          uVar25 = 0;
          if (uVar26 == 0) goto LAB_0209af98;
          piVar13 = (int *)(lVar24 + 4);
          while (piVar13[-1] != -0x2947dcfb) {
            piVar13 = piVar13 + 2;
            uVar26 = uVar26 - 1;
            if (uVar26 == 0) {
              uVar25 = 0;
              goto LAB_0209af98;
            }
          }
          iVar12 = 0;
          if (*piVar13 != -1) {
            iVar12 = *piVar13;
          }
          *(int *)(puVar2 + 0x2c) = iVar12;
        } while (*puVar22 != 0);
        uVar25 = 0;
      }
      else {
        uVar25 = **(uint **)(param_1 + 0x420);
        if ((int)*(uint *)(lVar24 + 0x16ca0) < 1) {
          if (((*(long *)(lVar24 + 0x16b90) != 0) &&
              (puVar22 = *(uint **)(*(long *)(lVar24 + 0x16b90) + 8), puVar22 != (uint *)0x0)) &&
             (((*(uint *)(lVar24 + 0x16ba8) <= uVar25 ||
               (*(char *)(*(long *)(lVar24 + 0x16bb0) + (long)(int)uVar25) != '\0')) &&
              (((uVar25 < *puVar22 && (puVar22[1] != 0)) && ((ushort)puVar22[2] != 0)))))) {
            iVar12 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              iVar12 = 0x1c;
            }
            puVar22 = (uint *)((ulong)(puVar22[1] * uVar25 + (uint)(ushort)puVar22[2] * 8 + iVar12)
                              + (long)puVar22);
            if (puVar22 != (uint *)0x0) goto LAB_0209adf0;
          }
          goto LAB_0209ae90;
        }
        if (*(uint *)(lVar24 + 0x16ca0) <= uVar25) goto LAB_0209ae90;
        if (*(uint *)(lVar24 + 0x16c90) <= uVar25) {
          uVar25 = 0;
        }
        puVar22 = *(uint **)(*(long *)(lVar24 + 0x16c98) + (ulong)uVar25 * 8);
        if (puVar22 == (uint *)0x0) goto LAB_0209ae90;
LAB_0209adf0:
        if (*puVar22 != 0) goto LAB_0209aea0;
LAB_0209af94:
        uVar25 = 0;
      }
LAB_0209af98:
      local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar25);
      if (uVar30 != uVar25) goto LAB_0209aff4;
      fVar35 = *(float *)(lVar20 + 0xc);
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1998) + 0xf0))();
      if ((int)fVar35 <= *piVar13) goto LAB_0209aff4;
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1998) + 0xf0))();
      *(float *)(lVar20 + 0xc) = (float)*piVar13;
    }
    uVar30 = (int)uVar19 + 1;
    uVar19 = (ulong)uVar30;
  } while (uVar30 != 3);
  piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1a58) + 0xf0))(lVar31 + 0x1a58);
  iVar12 = *piVar13;
  piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                             (*(long *)PTR_DAT_04bb3968 + 0x13f8);
  iVar18 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508);
  if (iVar18 == -1) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)(((float)iVar18 / 10.0) * (float)*piVar13);
  }
  iVar18 = *(int *)(param_1 + 0x160) - iVar18;
  iVar33 = iVar18 / 0x1e;
  if (iVar18 % 0x1e == 0) {
    iVar18 = 0;
    if (iVar12 != 0) {
      iVar18 = iVar33 / iVar12;
    }
    if (iVar33 == iVar18 * iVar12 && *(char *)(param_1 + 0x428) == '\0') {
      uVar30 = 0;
      do {
        piVar13 = (int *)(param_1 + 0x180 + ((long)((ulong)uVar30 << 0x20) >> 0x1b));
        iVar12 = *piVar13;
        if (iVar12 != 0) {
          puVar29 = *(undefined8 **)(piVar13 + 2);
          puVar5 = puVar29 + iVar12;
          do {
            puVar22 = (uint *)*puVar29;
            lVar20 = *(long *)PTR_DAT_04bb3968;
            if (lVar20 == 0) {
LAB_0209b380:
              puVar23 = (uint *)PTR_DAT_04bc2820;
              if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_0209b484;
LAB_0209b390:
              cVar17 = *PTR_DAT_04bc1570;
              do {
                if (cVar17 == '\0') {
                  cVar17 = '\x01';
                  *PTR_DAT_04bc1570 = 1;
                  *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)puVar2 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar2 + 0x68) = 0xffffffff;
                  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                }
                else {
                  uVar25 = *(uint *)(puVar2 + 0x2c);
                  if (-1 < (int)uVar25) {
                    if (((byte *)((ulong)uVar25 + (long)puVar23) == (byte *)0x0) ||
                       (bVar9 = *(byte *)((ulong)uVar25 + (long)puVar23), uVar19 = (ulong)bVar9,
                       3 < bVar9)) goto LAB_0209b484;
                    goto LAB_0209b488;
                  }
                  if (uVar25 != 0xffffffff) goto LAB_0209b484;
                }
                puVar27 = (uint *)(ulong)*puVar23;
                uVar19 = 0;
                if ((*puVar23 == 0) || (puVar23 == puVar27)) goto LAB_0209b488;
                lVar24 = 0xc;
                if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar23 + (lVar24 - (long)puVar27);
                if (lVar24 == 0) goto LAB_0209b484;
                uVar26 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
                *(undefined4 *)(puVar2 + 0x2c) = 0xfffffffe;
                uVar19 = 0;
                if (uVar26 == 0) goto LAB_0209b488;
                piVar13 = (int *)(lVar24 + 4);
                while (piVar13[-1] != -0x2947dcfb) {
                  piVar13 = piVar13 + 2;
                  uVar26 = uVar26 - 1;
                  if (uVar26 == 0) {
                    uVar19 = 0;
                    goto LAB_0209b488;
                  }
                }
                iVar12 = 0;
                if (*piVar13 != -1) {
                  iVar12 = *piVar13;
                }
                *(int *)(puVar2 + 0x2c) = iVar12;
              } while (*puVar23 != 0);
              uVar19 = 0;
            }
            else {
              uVar25 = *puVar22;
              if ((int)*(uint *)(lVar20 + 0x16ca0) < 1) {
                if ((((*(long *)(lVar20 + 0x16b90) != 0) &&
                     (puVar23 = *(uint **)(*(long *)(lVar20 + 0x16b90) + 8), puVar23 != (uint *)0x0)
                     ) && ((*(uint *)(lVar20 + 0x16ba8) <= uVar25 ||
                           (*(char *)(*(long *)(lVar20 + 0x16bb0) + (long)(int)uVar25) != '\0'))))
                   && (((uVar25 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                  iVar12 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    iVar12 = 0x1c;
                  }
                  puVar23 = (uint *)((ulong)(puVar23[1] * uVar25 + (uint)(ushort)puVar23[2] * 8 +
                                            iVar12) + (long)puVar23);
                  if (puVar23 != (uint *)0x0) goto LAB_0209b300;
                }
                goto LAB_0209b380;
              }
              if (*(uint *)(lVar20 + 0x16ca0) <= uVar25) goto LAB_0209b380;
              if (*(uint *)(lVar20 + 0x16c90) <= uVar25) {
                uVar25 = 0;
              }
              puVar23 = *(uint **)(*(long *)(lVar20 + 0x16c98) + (ulong)uVar25 * 8);
              if (puVar23 == (uint *)0x0) goto LAB_0209b380;
LAB_0209b300:
              if (*puVar23 != 0) goto LAB_0209b390;
LAB_0209b484:
              uVar19 = 0;
            }
LAB_0209b488:
            uVar25 = (uint)uVar19;
            local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar25);
            if (uVar25 == 3) {
              uVar25 = 0;
            }
            else {
              lVar24 = lVar28 + uVar19 * 0x20;
              if (2 < uVar25) {
                lVar24 = lVar28;
              }
              fVar35 = *(float *)(lVar24 + 0xc);
              piVar13 = (int *)(**(code **)(*(long *)(lVar20 + 0x1cc8) + 0xf0))(lVar20 + 0x1cc8);
              uVar25 = (int)fVar35 - *piVar13;
              uVar25 = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
            }
            uVar8 = puVar22[4];
            piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1a28) + 0xf0))
                                       ((long *)(lVar31 + 0x1a28));
            puVar29 = puVar29 + 1;
            uVar8 = *piVar13 + uVar8;
            uVar6 = uVar8;
            if ((int)uVar25 <= (int)uVar8) {
              uVar6 = uVar25;
            }
            uVar25 = 0;
            if (-1 < (int)uVar8) {
              uVar25 = uVar6;
            }
            puVar22[4] = uVar25;
          } while (puVar29 != puVar5);
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != 0x15);
    }
  }
  piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x1818) + 0xf0))(lVar31 + 0x1818);
  iVar12 = *piVar13;
  piVar13 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x13f8) + 0xf0))
                             (*(long *)PTR_DAT_04bb3968 + 0x13f8);
  lVar28 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (*(int *)(lVar28 + 0x508) == -1) {
    iVar18 = 0;
  }
  else {
    iVar18 = (int)(((float)*(int *)(lVar28 + 0x508) / 10.0) * (float)*piVar13);
  }
  iVar18 = *(int *)(param_1 + 0x160) - iVar18;
  iVar33 = iVar18 / 0x1e;
  if (iVar18 % 0x1e == 0) {
    iVar18 = 0;
    if (iVar12 != 0) {
      iVar18 = iVar33 / iVar12;
    }
    if (iVar33 == iVar18 * iVar12) {
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x17b8) + 0xf0))(lVar31 + 0x17b8);
      iVar18 = *piVar13;
      uVar30 = *(uint *)(lVar28 + 0x288);
      *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
      uVar30 = uVar30 ^ uVar30 << 0xb;
      iVar12 = -iVar18;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
      uVar25 = *(uint *)(lVar28 + 0x294);
      *(uint *)(lVar28 + 0x290) = uVar25;
      uVar30 = uVar30 >> 8 ^ uVar25 >> 0x13 ^ uVar30 ^ uVar25;
      *(uint *)(lVar28 + 0x294) = uVar30;
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x17b8) + 0xf0))(lVar31 + 0x17b8);
      iVar18 = (int)((ulong)uVar30 * (ulong)(iVar12 + 1) >> 0x20);
      iVar12 = -iVar18;
      if (-1 < *piVar13) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 0x42c) = iVar12;
      lVar28 = *(long *)(*(long *)(param_1 + 8) + 8);
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x17e8) + 0xf0))(lVar31 + 0x17e8);
      iVar18 = *piVar13;
      uVar30 = *(uint *)(lVar28 + 0x288);
      *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
      uVar30 = uVar30 ^ uVar30 << 0xb;
      iVar12 = -iVar18;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
      uVar25 = *(uint *)(lVar28 + 0x294);
      *(uint *)(lVar28 + 0x290) = uVar25;
      uVar30 = uVar30 >> 8 ^ uVar25 >> 0x13 ^ uVar30 ^ uVar25;
      *(uint *)(lVar28 + 0x294) = uVar30;
      piVar13 = (int *)(**(code **)(*(long *)(lVar31 + 0x17e8) + 0xf0))(lVar31 + 0x17e8);
      iVar18 = (int)((ulong)uVar30 * (ulong)(iVar12 + 1) >> 0x20);
      iVar12 = -iVar18;
      if (-1 < *piVar13) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 0x430) = iVar12;
      iVar12 = *(int *)(param_1 + 0xe4);
      goto joined_r0x0209b180;
    }
  }
  iVar12 = *(int *)(param_1 + 0xe4);
joined_r0x0209b180:
  if (((iVar12 == 0) &&
      (uVar30 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x508), uVar30 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar30 * 0xba0] != '\0')) {
    FUN_01e2ec3c(*(long *)PTR_DAT_04bb3968 + 0xda0,&DAT_053fe850 + (ulong)uVar30 * 0xba0);
  }
  return;
}

