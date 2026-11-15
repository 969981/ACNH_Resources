
void FUN_02063d90(long *param_1,long param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long *plVar19;
  undefined4 *puVar20;
  float *pfVar21;
  char cVar22;
  ulong uVar23;
  undefined1 uVar24;
  uint *puVar25;
  uint *puVar26;
  uint uVar27;
  ulong uVar28;
  uint *puVar29;
  bool bVar30;
  int iVar31;
  long lVar32;
  undefined8 *puVar33;
  uint uVar34;
  long lVar35;
  undefined4 uVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  undefined8 local_1ba8;
  char *local_1ba0;
  undefined4 local_78;
  
  lVar35 = *(long *)PTR_DAT_04bb3968;
  if (*(int *)((long)param_1 + 0xdc) == 0) {
    if (((char)param_1[0x84] != '\0') && (param_1[0x83] != 0)) {
      lVar17 = param_1[2];
      piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1b48) + 0xf0))(lVar35 + 0x1b48);
      iVar37 = 0x14;
      if ((int)lVar17 <= *piVar18) {
        iVar37 = 100;
      }
      piVar18 = (int *)param_1[0x83];
      if ((param_2 != 0) &&
         ((((*(int *)(param_2 + 0xc) == *piVar18 && (*(int *)(param_2 + 0x4c) == piVar18[1])) &&
           (*(int *)(param_2 + 0x50) == piVar18[2])) || (param_3 <= piVar18[3] + iVar37)))) {
        lVar17 = param_1[2];
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1698) + 0xf0))(lVar35 + 0x1698);
        fVar39 = *pfVar21;
        iVar37 = *(int *)(param_1[0x83] + 0x10);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x16c8) + 0xf0))(lVar35 + 0x16c8);
        if ((float)(int)lVar17 < *pfVar21 + (float)iVar37 * fVar39) goto LAB_02063f98;
        piVar18 = (int *)param_1[0x83];
      }
      uVar34 = piVar18[5];
      *(undefined1 *)(param_1 + 0x84) = 0;
      param_1[0x83] = 0;
      if (99 < (int)uVar34) {
        uVar34 = 100;
      }
      uVar34 = (uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)) + (int)param_1[2];
      if (99 < (int)uVar34) {
        uVar34 = 100;
      }
      *(uint *)(param_1 + 2) = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
      lVar17 = param_1[1];
      if (0 < *(int *)(lVar17 + 0x1b30)) {
        lVar32 = 0;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        do {
          puVar33 = *(undefined8 **)(*(long *)(lVar17 + 0x1b38) + lVar32 * 8);
          lVar32 = lVar32 + 1;
          puVar33[0xf] = puVar1;
          *puVar33 = *(undefined8 *)(lVar17 + 0x1b40);
          *(undefined8 **)(lVar17 + 0x1b40) = puVar33;
        } while (lVar32 < *(int *)(lVar17 + 0x1b30));
        *(undefined4 *)(lVar17 + 0x1b30) = 0;
        *(undefined4 *)(lVar17 + 0x365c) = 0;
        *(undefined4 *)(lVar17 + 0x3664) = 0;
        lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
        local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,0xc);
        *(uint *)(lVar17 + 0xaf3c) = *(uint *)(lVar17 + 0xaf3c) | 0x1000;
      }
    }
LAB_02063f98:
    cVar22 = (char)param_1[0x84];
    if ((param_2 != 0) && (cVar22 == '\0')) {
      if (*(int *)(param_2 + 0xc) != 2) {
        lVar17 = param_1[2];
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1638) + 0xf0))(lVar35 + 0x1638);
        fVar39 = *pfVar21;
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1668) + 0xf0))(lVar35 + 0x1668);
        if ((float)(int)lVar17 < *pfVar21 + (float)param_3 * fVar39) {
          *(undefined1 *)(param_1 + 0x84) = 1;
          iVar37 = *(int *)(param_2 + 0x4c);
          if (iVar37 == -1) {
            iVar37 = 0;
            if (*(int *)(param_2 + 0x50) != -1) {
              iVar37 = *(int *)(param_2 + 0x50) + 10;
            }
          }
          plVar19 = param_1 + 0x2f + (ulong)*(uint *)(param_2 + 0xc) * 4;
          if (0x14 < *(uint *)(param_2 + 0xc)) {
            plVar19 = param_1 + 0x2f;
          }
          lVar17 = *(long *)(plVar19[1] + (long)iVar37 * 8);
          param_1[0x83] = lVar17;
          *(undefined4 *)(lVar17 + 0xc) = *(undefined4 *)(lVar17 + 0x10);
          *(undefined4 *)(param_1[0x83] + 0x14) = 0;
        }
      }
      cVar22 = (char)param_1[0x84];
    }
    if (cVar22 == '\0') goto LAB_02063de4;
LAB_0206405c:
    uVar24 = 0;
LAB_02064060:
    *(undefined1 *)((long)param_1 + 0x42c) = uVar24;
  }
  else {
    *(undefined1 *)(param_1 + 0x84) = 0;
    param_1[0x83] = 0;
LAB_02063de4:
    if ((int)param_1[2] == 100) {
      cVar22 = '\0';
      goto LAB_0206405c;
    }
    cVar22 = '\0';
    if ((int)param_1[2] == 0) {
      cVar22 = '\0';
      uVar24 = 1;
      goto LAB_02064060;
    }
  }
  if (*(int *)((long)param_1 + 0xdc) == 1) {
LAB_02064070:
    bVar30 = false;
  }
  else if ((param_2 == 0) || (cVar22 == '\0')) {
LAB_020640e4:
    if (*(long *)PTR_DAT_04bb3968 == 0) {
LAB_02064108:
      puVar25 = (uint *)PTR_DAT_04bc2828;
    }
    else {
      puVar25 = (uint *)FUN_01e32888(*(long *)PTR_DAT_04bb3968 + 0x16908,(int)param_1[0x10]);
      if (puVar25 == (uint *)0x0) goto LAB_02064108;
    }
    puVar3 = PTR_DAT_04bc1568;
    puVar1 = PTR_DAT_04bc1560;
    if (*puVar25 != 0) {
      cVar22 = *PTR_DAT_04bc1560;
      do {
        if (cVar22 == '\0') {
          cVar22 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
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
          uVar34 = *(uint *)(puVar3 + 0x40);
          if (-1 < (int)uVar34) {
            if (((byte *)((ulong)uVar34 + (long)puVar25) != (byte *)0x0) &&
               (*(byte *)((ulong)uVar34 + (long)puVar25) < 7)) goto LAB_02064070;
            break;
          }
          if (uVar34 != 0xffffffff) break;
        }
        lVar17 = (long)puVar25 - (ulong)*puVar25;
        if ((*puVar25 == 0) || (lVar17 == 0)) break;
        lVar32 = 0xc;
        if (*(char *)(lVar17 + 10) != '\0') {
          lVar32 = 0x1c;
        }
        if (lVar32 + lVar17 == 0) break;
        uVar23 = (ulong)*(ushort *)(lVar17 + 8);
        *(undefined4 *)(puVar3 + 0x40) = 0xfffffffe;
        if (uVar23 == 0) break;
        piVar18 = (int *)(lVar32 + lVar17 + 4);
        while (piVar18[-1] != 0x35c78d62) {
          piVar18 = piVar18 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_02064284;
        }
        iVar37 = 0;
        if (*piVar18 != -1) {
          iVar37 = *piVar18;
        }
        *(int *)(puVar3 + 0x40) = iVar37;
        if (*puVar25 == 0) break;
      } while( true );
    }
LAB_02064284:
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x3c0);
    piVar18 = (int *)(lVar17 + 0x10);
    piVar9 = piVar18 + (ulong)*(uint *)(lVar17 + 0x294) * 0x20;
    if (4 < *(uint *)(lVar17 + 0x294)) {
      piVar9 = piVar18;
    }
    local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,*piVar9);
    if ((*piVar9 != 1) && (uVar23 = FUN_02085a50(lVar17,1,0), (uVar23 & 1) != 0)) {
      *(undefined1 *)(lVar17 + 0x801) = 1;
      piVar9 = piVar18 + (ulong)*(uint *)(lVar17 + 0x294) * 0x20;
      if (4 < *(uint *)(lVar17 + 0x294)) {
        piVar9 = piVar18;
      }
      piVar9[3] = 0;
      piVar9[4] = 0;
      piVar9[5] = 0;
    }
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    bVar30 = false;
    lVar32 = *(long *)(*(long *)(lVar17 + 8) + 0x3c0);
    lVar17 = lVar32 + 0x10;
    uVar34 = *(uint *)(lVar32 + 0x294);
    lVar32 = lVar17 + (ulong)uVar34 * 0x80;
    if (4 < uVar34) {
      lVar32 = lVar17;
    }
    *(undefined8 *)(lVar32 + 0xc) = 0;
    *(undefined4 *)(lVar32 + 0x14) = 0;
  }
  else if (*(int *)(param_2 + 0x48) == 0) {
    if (((*(float *)(param_2 + 0x14) == 0.0) && (*(float *)(param_2 + 0x18) == 0.0)) &&
       (*(float *)(param_2 + 0x1c) == 0.0)) goto LAB_020640e4;
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar17 = *(long *)(*(long *)(lVar17 + 8) + 0x3c0);
    uVar23 = FUN_02085a50(lVar17,3,0);
    bVar30 = true;
    if ((uVar23 & 1) != 0) {
      *(undefined1 *)(lVar17 + 0x801) = 1;
      lVar32 = lVar17 + 0x10;
      lVar16 = lVar32 + (ulong)*(uint *)(lVar17 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar17 + 0x294)) {
        lVar16 = lVar32;
      }
      *(undefined4 *)(lVar16 + 0xc) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(lVar16 + 0x10) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(lVar16 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
      lVar16 = lVar32 + (ulong)*(uint *)(lVar17 + 0x294) * 0x80;
      if (4 < *(uint *)(lVar17 + 0x294)) {
        lVar16 = lVar32;
      }
      *(undefined1 *)(lVar16 + 0x7e) = 0;
    }
  }
  else {
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    FUN_02085e20(*(undefined8 *)(*(long *)(lVar17 + 8) + 0x3c0),0,*(undefined4 *)(param_2 + 0x48),
                 PTR_DAT_04bb6928,0);
    bVar30 = true;
  }
  lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar33 = *(undefined8 **)(*(long *)(lVar17 + 8) + 0x60);
  if (puVar33 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar37 = __cxa_guard_acquire(&DAT_052461c0);
      puVar33 = &DAT_05240280;
      if (iVar37 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar33 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_1ba8 = PTR_DAT_04bb2020 + 0x10;
  local_1ba0 = "NpcConcentrationType";
  lVar17 = param_1[2];
  lVar32 = *(long *)PTR_DAT_04bb3968;
  piVar18 = (int *)(**(code **)(*(long *)(lVar32 + 0x1608) + 0xf0))(lVar32 + 0x1608);
  if ((int)lVar17 < *piVar18) {
    uVar24 = 2;
  }
  else {
    lVar17 = param_1[2];
    piVar18 = (int *)(**(code **)(*(long *)(lVar32 + 0x15d8) + 0xf0))(lVar32 + 0x15d8);
    uVar24 = (int)lVar17 < *piVar18;
  }
  if (((puVar33[0x227] != 0) && (lVar17 = *(long *)(puVar33[0x227] + 0x78), lVar17 != 0)) &&
     (plVar19 = *(long **)(lVar17 + 0x48), plVar19 != (long *)0x0)) {
    (**(code **)(*plVar19 + 0x28))(plVar19,&local_1ba8,uVar24);
  }
  local_78 = 5;
  if (((char)param_1[0x84] == '\0') || (param_1[0x83] == 0)) {
LAB_020646e0:
    lVar17 = param_1[1];
    if (0 < *(int *)(lVar17 + 0x1b30)) {
      lVar32 = 0;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      do {
        puVar33 = *(undefined8 **)(*(long *)(lVar17 + 0x1b38) + lVar32 * 8);
        lVar32 = lVar32 + 1;
        puVar33[0xf] = puVar3;
        *puVar33 = *(undefined8 *)(lVar17 + 0x1b40);
        *(undefined8 **)(lVar17 + 0x1b40) = puVar33;
      } while (lVar32 < *(int *)(lVar17 + 0x1b30));
      *(undefined4 *)(lVar17 + 0x1b30) = 0;
      *(undefined4 *)(lVar17 + 0x365c) = 0;
      *(undefined4 *)(lVar17 + 0x3664) = 0;
      lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
      local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,0xc);
      *(uint *)(lVar17 + 0xaf3c) = *(uint *)(lVar17 + 0xaf3c) | 0x1000;
    }
  }
  else {
    lVar17 = param_1[2];
    piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1b78) + 0xf0))(lVar35 + 0x1b78);
    if ((*piVar18 <= (int)lVar17) ||
       (iVar37 = *(int *)(param_1[0x83] + 0x10),
       piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1c38) + 0xf0))(lVar35 + 0x1c38),
       iVar37 <= *piVar18)) {
      lVar17 = param_1[2];
      piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1b48) + 0xf0))(lVar35 + 0x1b48);
      if (((int)lVar17 < *piVar18) &&
         (iVar37 = *(int *)(param_1[0x83] + 0x10),
         piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1c08) + 0xf0))(lVar35 + 0x1c08),
         *piVar18 < iVar37)) {
        local_78 = 3;
      }
      else {
        lVar17 = param_1[2];
        piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1b18) + 0xf0))(lVar35 + 0x1b18);
        if (((int)lVar17 < *piVar18) &&
           (iVar37 = *(int *)(param_1[0x83] + 0x10),
           piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1bd8) + 0xf0))(lVar35 + 0x1bd8),
           *piVar18 < iVar37)) {
          local_78 = 2;
        }
        else {
          lVar17 = param_1[2];
          piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1ae8) + 0xf0))(lVar35 + 0x1ae8);
          if (((int)lVar17 < *piVar18) &&
             (iVar37 = *(int *)(param_1[0x83] + 0x10),
             piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1ba8) + 0xf0))(lVar35 + 0x1ba8),
             *piVar18 < iVar37)) {
            local_78 = 1;
          }
          else {
            local_78 = 0;
          }
        }
      }
      goto LAB_020646e0;
    }
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    if (*(int *)(*(long *)(lVar17 + 8) + 0x750) != 0) goto LAB_020646e0;
    local_78 = 4;
    if ((param_2 != 0) &&
       ((((*(float *)(param_2 + 0x14) != 0.0 || (*(float *)(param_2 + 0x18) != 0.0)) ||
         (*(float *)(param_2 + 0x1c) != 0.0)) && (*(int *)(param_1[1] + 0x1b30) < 1)))) {
      FUN_02065aa0(&local_1ba8);
      puVar20 = (undefined4 *)FUN_02065b58(&local_1ba8);
      if (puVar20 != (undefined4 *)0x0) {
        *puVar20 = 1;
        puVar20[0xe] = *(undefined4 *)(param_2 + 0x14);
        puVar20[0xf] = *(undefined4 *)(param_2 + 0x18);
        uVar36 = *(undefined4 *)(param_2 + 0x1c);
        puVar20[0x18] = 1;
        *(undefined2 *)((long)puVar20 + 0x69) = 0x101;
        puVar20[0x10] = uVar36;
        FUN_021949c0(param_1[1],&local_1ba8,1);
        lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
        *(uint *)(lVar17 + 0xaf3c) = *(uint *)(lVar17 + 0xaf3c) | 0x1000;
      }
      puVar3 = PTR_DAT_04bbc1a0;
      if (0 < (int)(uint)local_1ba8) {
        uVar23 = (ulong)local_1ba8 & 3;
        lVar17 = 0;
        if (3 < (uint)local_1ba8) {
          plVar19 = (long *)(local_1ba0 + 0x10);
          puVar2 = PTR_DAT_04bbc1a0 + 0x10;
          do {
            lVar17 = lVar17 + -4;
            *(undefined **)(plVar19[-2] + 0x78) = puVar2;
            *(undefined **)(plVar19[-1] + 0x78) = puVar2;
            *(undefined **)(*plVar19 + 0x78) = puVar2;
            plVar4 = plVar19 + 1;
            plVar19 = plVar19 + 4;
            *(undefined **)(*plVar4 + 0x78) = puVar2;
          } while (-lVar17 != ((ulong)local_1ba8 & 0xfffffffc));
          lVar17 = -lVar17;
        }
        if (((ulong)local_1ba8 & 3) != 0) {
          plVar19 = (long *)(local_1ba0 + lVar17 * 8);
          do {
            uVar23 = uVar23 - 1;
            *(undefined **)(*plVar19 + 0x78) = puVar3 + 0x10;
            plVar19 = plVar19 + 1;
          } while (uVar23 != 0);
        }
      }
    }
  }
  lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar33 = *(undefined8 **)(*(long *)(lVar17 + 8) + 0x60);
  if (puVar33 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar37 = __cxa_guard_acquire(&DAT_052461c0);
      puVar33 = &DAT_05240280;
      if (iVar37 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar33 = &DAT_05240280;
    }
  }
  local_1ba8 = puVar1 + 0x10;
  local_1ba0 = "NpcConcentrationInterestType";
  if (((puVar33[0x227] != 0) && (lVar17 = *(long *)(puVar33[0x227] + 0x78), lVar17 != 0)) &&
     (plVar19 = *(long **)(lVar17 + 0x48), plVar19 != (long *)0x0)) {
    (**(code **)(*plVar19 + 0x28))(plVar19,&local_1ba8,local_78);
  }
  if (*(int *)((long)param_1 + 0xdc) == 1) {
    bVar30 = false;
    *(undefined4 *)(param_1 + 2) = 100;
  }
  else {
    if (((char)param_1[0x84] == '\0') || (param_1[0x83] == 0)) {
      if (*(char *)((long)param_1 + 0x42c) == '\0') {
        if (bVar30) {
          puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x14b8) + 0xf0))(lVar35 + 0x14b8);
          uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
          if ((uVar23 & 1) != 0) {
            lVar17 = lVar35 + 0x1488;
            lVar32 = *(long *)(lVar35 + 0x1488);
            goto LAB_02064ca4;
          }
        }
        else {
          puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1458) + 0xf0))(lVar35 + 0x1458);
          uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
          if ((uVar23 & 1) != 0) {
            lVar17 = lVar35 + 0x1428;
            lVar32 = *(long *)(lVar35 + 0x1428);
LAB_02064ca4:
            piVar18 = (int *)(**(code **)(lVar32 + 0xf0))(lVar17);
            bVar30 = false;
            *(int *)(param_1 + 2) = (int)param_1[2] + *piVar18;
            goto LAB_02064cc8;
          }
        }
      }
      else {
        puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x15a8) + 0xf0))(lVar35 + 0x15a8);
        uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
        if ((uVar23 & 1) != 0) {
          lVar17 = lVar35 + 0x1578;
          lVar32 = *(long *)(lVar35 + 0x1578);
          goto LAB_02064ca4;
        }
      }
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1788) + 0xf0))(lVar35 + 0x1788);
      uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
      if ((uVar23 & 1) != 0) {
        iVar31 = *(int *)(param_1[0x83] + 0x10);
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x16f8) + 0xf0))(lVar35 + 0x16f8);
        iVar37 = (int)param_1[2] +
                 (int)((float)*(int *)((long)param_1 + 0x424) +
                      (float)*(int *)(param_1[0x83] + 0x10) * *pfVar21);
        *(int *)(param_1 + 2) = iVar37;
        piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1878) + 0xf0))(lVar35 + 0x1878);
        if (iVar37 < *piVar18) {
          iVar37 = *(int *)(param_1[0x83] + 0x10);
          piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x18a8) + 0xf0))(lVar35 + 0x18a8);
          if (iVar37 < *piVar18) {
            lVar17 = param_1[2];
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1878) + 0xf0))(lVar35 + 0x1878);
            iVar37 = *piVar18;
            pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1848) + 0xf0))(lVar35 + 0x1848);
            fVar39 = *pfVar21;
            iVar40 = *(int *)(param_1[0x83] + 0x10);
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x18a8) + 0xf0))(lVar35 + 0x18a8);
            iVar38 = *piVar18;
            pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1848) + 0xf0))(lVar35 + 0x1848);
            if ((((float)iVar37 - fVar39) * (float)iVar40) / (float)iVar38 + *pfVar21 <=
                (float)(int)lVar17) goto LAB_02064950;
          }
        }
        else {
LAB_02064950:
          lVar16 = param_1[2];
          iVar37 = *(int *)(param_1[0x83] + 0x10);
          piVar18 = (int *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x1608) + 0xf0))
                                     (*(long *)PTR_DAT_04bb3968 + 0x1608);
          lVar17 = 0x1758;
          lVar32 = lVar35 + 0x1758;
          if (*piVar18 <= (int)lVar16) {
            lVar17 = 0x1728;
            lVar32 = lVar35 + 0x1728;
          }
          piVar18 = (int *)(**(code **)(*(long *)(lVar35 + lVar17) + 0xf0))(lVar32);
          uVar34 = *piVar18 + iVar37 + (int)param_1[0x85];
          if (99 < (int)uVar34) {
            uVar34 = 100;
          }
          *(uint *)(param_1[0x83] + 0x10) = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
        }
        lVar17 = param_1[0x83];
        *(int *)(lVar17 + 0x14) = (iVar31 - *(int *)(lVar17 + 0x10)) + *(int *)(lVar17 + 0x14);
      }
      puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1ab8) + 0xf0))(lVar35 + 0x1ab8);
      uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
      if ((uVar23 & 1) != 0) {
        pfVar21 = (float *)(**(code **)(*(long *)(lVar35 + 0x1a88) + 0xf0))(lVar35 + 0x1a88);
        *(int *)(param_1[0x83] + 0x14) = (int)(*pfVar21 * (float)*(int *)(param_1[0x83] + 0x14));
      }
      if ((int)param_1[2] < 1) {
        iVar37 = *(int *)(param_1[0x83] + 0x10);
        piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x18d8) + 0xf0))(lVar35 + 0x18d8);
        if (*piVar18 <= iVar37) {
          iVar37 = *(int *)(param_1[0x83] + 0x10);
          lVar17 = lVar35 + 0x1908;
          piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1908) + 0xf0))(lVar17);
          if (iVar37 <= *piVar18) {
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1938) + 0xf0))(lVar35 + 0x1938);
            iVar37 = *piVar18;
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1968) + 0xf0))(lVar35 + 0x1968);
            iVar31 = *piVar18;
            iVar38 = *(int *)(param_1[0x83] + 0x10);
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1908) + 0xf0))(lVar17);
            iVar40 = *piVar18;
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x18d8) + 0xf0))(lVar35 + 0x18d8);
            iVar10 = *piVar18;
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1908) + 0xf0))(lVar17);
            iVar14 = 0;
            if (iVar10 - *piVar18 != 0) {
              iVar14 = ((iVar38 - iVar40) * (iVar37 - iVar31)) / (iVar10 - *piVar18);
            }
            piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1968) + 0xf0))(lVar35 + 0x1968);
            iVar37 = *piVar18;
            lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
            lVar17 = *(long *)(lVar17 + 8);
            uVar34 = *(uint *)(lVar17 + 0x288);
            *(undefined4 *)(lVar17 + 0x288) = *(undefined4 *)(lVar17 + 0x28c);
            uVar34 = uVar34 ^ uVar34 << 0xb;
            *(undefined4 *)(lVar17 + 0x28c) = *(undefined4 *)(lVar17 + 0x290);
            uVar27 = *(uint *)(lVar17 + 0x294);
            *(uint *)(lVar17 + 0x290) = uVar27;
            uVar34 = uVar34 >> 8 ^ uVar27 >> 0x13 ^ uVar34 ^ uVar27;
            *(uint *)(lVar17 + 0x294) = uVar34;
            if ((float)((ulong)uVar34 * 100 >> 0x20) < (float)(iVar37 + iVar14)) {
              *(undefined4 *)(param_1 + 2) = 100;
              iVar37 = *(int *)(param_1[0x83] + 0x10);
              piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1998) + 0xf0))(lVar35 + 0x1998);
              if (*piVar18 <= iVar37) {
                iVar37 = *piVar18;
              }
              bVar30 = true;
              *(int *)(param_1[0x83] + 0x10) = iVar37;
              *(undefined1 *)(param_1 + 0x84) = 0;
              param_1[0x83] = 0;
              goto LAB_02064cc8;
            }
          }
        }
      }
    }
    bVar30 = false;
  }
LAB_02064cc8:
  uVar34 = *(uint *)(param_1 + 2);
  if (99 < (int)uVar34) {
    uVar34 = 100;
  }
  *(uint *)(param_1 + 2) = uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU);
  plVar19 = param_1 + 3;
  plVar4 = (long *)(lVar35 + 0x1d58);
  plVar5 = (long *)(lVar35 + 0x1d28);
  puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1d58) + 0xf0))(plVar4);
  uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
  if (bVar30) {
    plVar6 = (long *)(lVar35 + 0x1998);
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
      puVar25 = (uint *)param_1[0x83];
      if (puVar25 != (uint *)0x0) goto LAB_02064d78;
LAB_0206504c:
      FUN_020e944c(plVar19,*(undefined4 *)((long)param_1 + 0x15c),uVar36);
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
      puVar25 = (uint *)param_1[0x83];
      if (puVar25 == (uint *)0x0) goto LAB_0206504c;
LAB_02064d78:
      puVar3 = PTR_DAT_04bc1578;
      puVar1 = PTR_DAT_04bc1570;
      uVar34 = *(uint *)(param_1 + 4);
      lVar17 = *(long *)PTR_DAT_04bb3968;
      if (lVar17 == 0) {
LAB_02064ef4:
        puVar25 = (uint *)PTR_DAT_04bc2820;
        if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_02064ff4;
LAB_02064f04:
        cVar22 = *PTR_DAT_04bc1570;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
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
          }
          else {
            uVar27 = *(uint *)(puVar3 + 0x2c);
            if (-1 < (int)uVar27) {
              if (((byte *)((ulong)uVar27 + (long)puVar25) == (byte *)0x0) ||
                 (bVar13 = *(byte *)((ulong)uVar27 + (long)puVar25), uVar27 = (uint)bVar13,
                 3 < bVar13)) goto LAB_02064ff4;
              goto LAB_02064ff8;
            }
            if (uVar27 != 0xffffffff) goto LAB_02064ff4;
          }
          puVar26 = (uint *)(ulong)*puVar25;
          uVar27 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar26)) goto LAB_02064ff8;
          lVar17 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar26)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar25 + (lVar17 - (long)puVar26);
          if (lVar17 == 0) goto LAB_02064ff4;
          uVar23 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar26));
          *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
          uVar27 = 0;
          if (uVar23 == 0) goto LAB_02064ff8;
          piVar18 = (int *)(lVar17 + 4);
          while (piVar18[-1] != -0x2947dcfb) {
            piVar18 = piVar18 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) {
              uVar27 = 0;
              goto LAB_02064ff8;
            }
          }
          iVar37 = 0;
          if (*piVar18 != -1) {
            iVar37 = *piVar18;
          }
          *(int *)(puVar3 + 0x2c) = iVar37;
        } while (*puVar25 != 0);
        uVar27 = 0;
      }
      else {
        uVar27 = *puVar25;
        if ((int)*(uint *)(lVar17 + 0x16ca0) < 1) {
          if (((*(long *)(lVar17 + 0x16b90) != 0) &&
              (puVar25 = *(uint **)(*(long *)(lVar17 + 0x16b90) + 8), puVar25 != (uint *)0x0)) &&
             (((*(uint *)(lVar17 + 0x16ba8) <= uVar27 ||
               (*(char *)(*(long *)(lVar17 + 0x16bb0) + (long)(int)uVar27) != '\0')) &&
              (((uVar27 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))))) {
            iVar37 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              iVar37 = 0x1c;
            }
            puVar25 = (uint *)((ulong)(puVar25[1] * uVar27 + (uint)(ushort)puVar25[2] * 8 + iVar37)
                              + (long)puVar25);
            if (puVar25 != (uint *)0x0) goto LAB_02064dc4;
          }
          goto LAB_02064ef4;
        }
        if (*(uint *)(lVar17 + 0x16ca0) <= uVar27) goto LAB_02064ef4;
        if (*(uint *)(lVar17 + 0x16c90) <= uVar27) {
          uVar27 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar17 + 0x16c98) + (ulong)uVar27 * 8);
        if (puVar25 == (uint *)0x0) goto LAB_02064ef4;
LAB_02064dc4:
        if (*puVar25 != 0) goto LAB_02064f04;
LAB_02064ff4:
        uVar27 = 0;
      }
LAB_02064ff8:
      local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar27);
      if ((uVar34 != uVar27) ||
         (fVar39 = *(float *)((long)param_1 + 0x24),
         piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6), (int)fVar39 <= *piVar18))
      goto LAB_0206504c;
      piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
      *(float *)((long)param_1 + 0x24) = (float)*piVar18;
    }
    puVar20 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
      puVar25 = (uint *)param_1[0x83];
      if (puVar25 != (uint *)0x0) goto LAB_020650b4;
LAB_020652d8:
      FUN_020e944c(param_1 + 7,*(undefined4 *)((long)param_1 + 0x15c),uVar36);
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
      puVar25 = (uint *)param_1[0x83];
      if (puVar25 == (uint *)0x0) goto LAB_020652d8;
LAB_020650b4:
      puVar3 = PTR_DAT_04bc1578;
      puVar1 = PTR_DAT_04bc1570;
      uVar34 = *(uint *)(param_1 + 8);
      lVar17 = *(long *)PTR_DAT_04bb3968;
      if (lVar17 == 0) {
LAB_02065178:
        puVar25 = (uint *)PTR_DAT_04bc2820;
        if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_02065280;
LAB_02065188:
        cVar22 = *PTR_DAT_04bc1570;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
            *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
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
          }
          else {
            uVar27 = *(uint *)(puVar3 + 0x2c);
            if (-1 < (int)uVar27) {
              if (((byte *)((ulong)uVar27 + (long)puVar25) == (byte *)0x0) ||
                 (bVar13 = *(byte *)((ulong)uVar27 + (long)puVar25), uVar27 = (uint)bVar13,
                 3 < bVar13)) goto LAB_02065280;
              goto LAB_02065284;
            }
            if (uVar27 != 0xffffffff) goto LAB_02065280;
          }
          puVar26 = (uint *)(ulong)*puVar25;
          uVar27 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar26)) goto LAB_02065284;
          lVar17 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar26)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar25 + (lVar17 - (long)puVar26);
          if (lVar17 == 0) goto LAB_02065280;
          uVar23 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar26));
          *(undefined4 *)(puVar3 + 0x2c) = 0xfffffffe;
          uVar27 = 0;
          if (uVar23 == 0) goto LAB_02065284;
          piVar18 = (int *)(lVar17 + 4);
          while (piVar18[-1] != -0x2947dcfb) {
            piVar18 = piVar18 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) {
              uVar27 = 0;
              goto LAB_02065284;
            }
          }
          iVar37 = 0;
          if (*piVar18 != -1) {
            iVar37 = *piVar18;
          }
          *(int *)(puVar3 + 0x2c) = iVar37;
        } while (*puVar25 != 0);
        uVar27 = 0;
      }
      else {
        uVar27 = *puVar25;
        if ((int)*(uint *)(lVar17 + 0x16ca0) < 1) {
          if ((((*(long *)(lVar17 + 0x16b90) != 0) &&
               (puVar25 = *(uint **)(*(long *)(lVar17 + 0x16b90) + 8), puVar25 != (uint *)0x0)) &&
              ((*(uint *)(lVar17 + 0x16ba8) <= uVar27 ||
               (*(char *)(*(long *)(lVar17 + 0x16bb0) + (long)(int)uVar27) != '\0')))) &&
             (((uVar27 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
            iVar37 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              iVar37 = 0x1c;
            }
            puVar25 = (uint *)((ulong)(puVar25[1] * uVar27 + (uint)(ushort)puVar25[2] * 8 + iVar37)
                              + (long)puVar25);
            if (puVar25 != (uint *)0x0) goto LAB_02065100;
          }
          goto LAB_02065178;
        }
        if (*(uint *)(lVar17 + 0x16ca0) <= uVar27) goto LAB_02065178;
        if (*(uint *)(lVar17 + 0x16c90) <= uVar27) {
          uVar27 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar17 + 0x16c98) + (ulong)uVar27 * 8);
        if (puVar25 == (uint *)0x0) goto LAB_02065178;
LAB_02065100:
        if (*puVar25 != 0) goto LAB_02065188;
LAB_02065280:
        uVar27 = 0;
      }
LAB_02065284:
      local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar27);
      if ((uVar34 != uVar27) ||
         (fVar39 = *(float *)((long)param_1 + 0x44),
         piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6), (int)fVar39 <= *piVar18))
      goto LAB_020652d8;
      piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
      *(float *)((long)param_1 + 0x44) = (float)*piVar18;
    }
    puVar20 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
      puVar25 = (uint *)param_1[0x83];
      pcVar15 = PTR_DAT_04bc1570;
      puVar33 = (undefined8 *)PTR_DAT_04bc1578;
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
      puVar25 = (uint *)param_1[0x83];
      pcVar15 = PTR_DAT_04bc1570;
      puVar33 = (undefined8 *)PTR_DAT_04bc1578;
    }
    PTR_DAT_04bc1570 = pcVar15;
    PTR_DAT_04bc1578 = (undefined *)puVar33;
    if (puVar25 != (uint *)0x0) {
      uVar34 = *(uint *)(param_1 + 0xc);
      lVar17 = *(long *)PTR_DAT_04bb3968;
      if (lVar17 == 0) {
LAB_02065404:
        puVar25 = (uint *)PTR_DAT_04bc2820;
        if (*(uint *)PTR_DAT_04bc2820 == 0) goto LAB_02065504;
LAB_02065414:
        cVar22 = *pcVar15;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *puVar33 = 0xffffffffffffffff;
            puVar33[1] = 0xffffffffffffffff;
            *pcVar15 = '\x01';
            puVar33[0xc] = 0xffffffffffffffff;
            *(undefined4 *)(puVar33 + 0xd) = 0xffffffff;
            puVar33[2] = 0xffffffffffffffff;
            puVar33[3] = 0xffffffffffffffff;
            puVar33[4] = 0xffffffffffffffff;
            puVar33[5] = 0xffffffffffffffff;
            puVar33[6] = 0xffffffffffffffff;
            puVar33[7] = 0xffffffffffffffff;
            puVar33[8] = 0xffffffffffffffff;
            puVar33[9] = 0xffffffffffffffff;
            puVar33[10] = 0xffffffffffffffff;
            puVar33[0xb] = 0xffffffffffffffff;
          }
          else {
            uVar27 = *(uint *)((long)puVar33 + 0x2c);
            if (-1 < (int)uVar27) {
              if ((byte *)((ulong)uVar27 + (long)puVar25) == (byte *)0x0) goto LAB_02065504;
              bVar13 = *(byte *)((ulong)uVar27 + (long)puVar25);
              uVar27 = (uint)bVar13;
              if (bVar13 < 4) goto LAB_02065508;
              goto LAB_02065504;
            }
            if (uVar27 != 0xffffffff) goto LAB_02065504;
          }
          puVar26 = (uint *)(ulong)*puVar25;
          uVar27 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar26)) goto LAB_02065508;
          lVar17 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar26)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar25 + (lVar17 - (long)puVar26);
          if (lVar17 == 0) goto LAB_02065504;
          uVar23 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar26));
          *(undefined4 *)((long)puVar33 + 0x2c) = 0xfffffffe;
          uVar27 = 0;
          if (uVar23 == 0) goto LAB_02065508;
          piVar18 = (int *)(lVar17 + 4);
          while (piVar18[-1] != -0x2947dcfb) {
            piVar18 = piVar18 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) {
              uVar27 = 0;
              goto LAB_02065508;
            }
          }
          iVar37 = 0;
          if (*piVar18 != -1) {
            iVar37 = *piVar18;
          }
          *(int *)((long)puVar33 + 0x2c) = iVar37;
        } while (*puVar25 != 0);
        uVar27 = 0;
      }
      else {
        uVar27 = *puVar25;
        if ((int)*(uint *)(lVar17 + 0x16ca0) < 1) {
          if ((((*(long *)(lVar17 + 0x16b90) != 0) &&
               (puVar25 = *(uint **)(*(long *)(lVar17 + 0x16b90) + 8), puVar25 != (uint *)0x0)) &&
              ((*(uint *)(lVar17 + 0x16ba8) <= uVar27 ||
               (*(char *)(*(long *)(lVar17 + 0x16bb0) + (long)(int)uVar27) != '\0')))) &&
             (((uVar27 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
            iVar37 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              iVar37 = 0x1c;
            }
            puVar25 = (uint *)((ulong)(puVar25[1] * uVar27 + (uint)(ushort)puVar25[2] * 8 + iVar37)
                              + (long)puVar25);
            if (puVar25 != (uint *)0x0) goto LAB_0206538c;
          }
          goto LAB_02065404;
        }
        if (*(uint *)(lVar17 + 0x16ca0) <= uVar27) goto LAB_02065404;
        if (*(uint *)(lVar17 + 0x16c90) <= uVar27) {
          uVar27 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar17 + 0x16c98) + (ulong)uVar27 * 8);
        if (puVar25 == (uint *)0x0) goto LAB_02065404;
LAB_0206538c:
        if (*puVar25 != 0) goto LAB_02065414;
LAB_02065504:
        uVar27 = 0;
      }
LAB_02065508:
      local_1ba8._4_4_ = (undefined4)((ulong)local_1ba8 >> 0x20);
      local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar27);
      if (uVar34 == uVar27) {
        fVar39 = *(float *)((long)param_1 + 100);
        piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
        if (*piVar18 < (int)fVar39) {
          piVar18 = (int *)(**(code **)(*plVar6 + 0xf0))(plVar6);
          *(float *)((long)param_1 + 100) = (float)*piVar18;
          goto LAB_0206556c;
        }
      }
    }
    uVar11 = *(undefined4 *)((long)param_1 + 0x15c);
  }
  else {
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
    }
    FUN_020e944c(plVar19,*(undefined4 *)((long)param_1 + 0x15c),uVar36);
    puVar20 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
    }
    FUN_020e944c(param_1 + 7,*(undefined4 *)((long)param_1 + 0x15c),uVar36);
    puVar20 = (undefined4 *)(**(code **)(*plVar4 + 0xf0))(plVar4);
    uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
    if ((uVar23 & 1) == 0) {
      uVar36 = 0;
    }
    else {
      puVar20 = (undefined4 *)(**(code **)(*plVar5 + 0xf0))(plVar5);
      uVar36 = *puVar20;
    }
    uVar11 = *(undefined4 *)((long)param_1 + 0x15c);
  }
  FUN_020e944c(param_1 + 0xb,uVar11,uVar36);
LAB_0206556c:
  puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1a58) + 0xf0))(lVar35 + 0x1a58);
  uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
  puVar1 = PTR_DAT_04bc1578;
  if (((uVar23 & 1) != 0) && ((char)param_1[0x84] == '\0')) {
    uVar34 = 0;
    do {
      piVar18 = (int *)((long)param_1 + ((long)((ulong)uVar34 << 0x20) >> 0x1b) + 0x178);
      iVar37 = *piVar18;
      if (iVar37 != 0) {
        puVar33 = *(undefined8 **)(piVar18 + 2);
        puVar7 = puVar33 + iVar37;
        do {
          puVar25 = (uint *)*puVar33;
          lVar17 = *(long *)PTR_DAT_04bb3968;
          if (lVar17 == 0) {
LAB_02065760:
            puVar26 = (uint *)PTR_DAT_04bc2820;
            if (*(int *)PTR_DAT_04bc2820 == 0) goto LAB_02065864;
LAB_02065770:
            cVar22 = *PTR_DAT_04bc1570;
            do {
              puVar3 = PTR_DAT_04bc1570;
              if (cVar22 == '\0') {
                cVar22 = '\x01';
                *(undefined8 *)puVar1 = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                *(undefined4 *)(puVar1 + 0x68) = 0xffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar27 = *(uint *)(puVar1 + 0x2c);
                if (-1 < (int)uVar27) {
                  if (((byte *)((ulong)uVar27 + (long)puVar26) == (byte *)0x0) ||
                     (bVar13 = *(byte *)((ulong)uVar27 + (long)puVar26), uVar23 = (ulong)bVar13,
                     3 < bVar13)) goto LAB_02065864;
                  goto LAB_02065868;
                }
                if (uVar27 != 0xffffffff) goto LAB_02065864;
              }
              puVar29 = (uint *)(ulong)*puVar26;
              uVar23 = 0;
              if ((*puVar26 == 0) || (puVar26 == puVar29)) goto LAB_02065868;
              lVar32 = 0xc;
              if (*(char *)((long)puVar26 + (10 - (long)puVar29)) != '\0') {
                lVar32 = 0x1c;
              }
              lVar32 = (long)puVar26 + (lVar32 - (long)puVar29);
              if (lVar32 == 0) goto LAB_02065864;
              uVar28 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar29));
              *(undefined4 *)(puVar1 + 0x2c) = 0xfffffffe;
              uVar23 = 0;
              if (uVar28 == 0) goto LAB_02065868;
              piVar18 = (int *)(lVar32 + 4);
              while (piVar18[-1] != -0x2947dcfb) {
                piVar18 = piVar18 + 2;
                uVar28 = uVar28 - 1;
                if (uVar28 == 0) {
                  uVar23 = 0;
                  goto LAB_02065868;
                }
              }
              iVar37 = 0;
              if (*piVar18 != -1) {
                iVar37 = *piVar18;
              }
              *(int *)(puVar1 + 0x2c) = iVar37;
            } while (*puVar26 != 0);
            uVar23 = 0;
          }
          else {
            uVar27 = *puVar25;
            if ((int)*(uint *)(lVar17 + 0x16ca0) < 1) {
              if ((((*(long *)(lVar17 + 0x16b90) != 0) &&
                   (puVar26 = *(uint **)(*(long *)(lVar17 + 0x16b90) + 8), puVar26 != (uint *)0x0))
                  && ((*(uint *)(lVar17 + 0x16ba8) <= uVar27 ||
                      (*(char *)(*(long *)(lVar17 + 0x16bb0) + (long)(int)uVar27) != '\0')))) &&
                 (((uVar27 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
                iVar37 = 0xc;
                if (*(char *)((long)puVar26 + 10) != '\0') {
                  iVar37 = 0x1c;
                }
                puVar26 = (uint *)((ulong)(puVar26[1] * uVar27 + (uint)(ushort)puVar26[2] * 8 +
                                          iVar37) + (long)puVar26);
                if (puVar26 != (uint *)0x0) goto LAB_020656e0;
              }
              goto LAB_02065760;
            }
            if (*(uint *)(lVar17 + 0x16ca0) <= uVar27) goto LAB_02065760;
            if (*(uint *)(lVar17 + 0x16c90) <= uVar27) {
              uVar27 = 0;
            }
            puVar26 = *(uint **)(*(long *)(lVar17 + 0x16c98) + (ulong)uVar27 * 8);
            if (puVar26 == (uint *)0x0) goto LAB_02065760;
LAB_020656e0:
            if (*puVar26 != 0) goto LAB_02065770;
LAB_02065864:
            uVar23 = 0;
          }
LAB_02065868:
          uVar27 = (uint)uVar23;
          local_1ba8 = (undefined *)CONCAT44(local_1ba8._4_4_,uVar27);
          if (uVar27 == 3) {
            uVar27 = 0;
          }
          else {
            plVar4 = plVar19 + uVar23 * 4;
            if (2 < uVar27) {
              plVar4 = plVar19;
            }
            fVar39 = *(float *)((long)plVar4 + 0xc);
            piVar18 = (int *)(**(code **)(*(long *)(lVar17 + 0x1cc8) + 0xf0))(lVar17 + 0x1cc8);
            uVar27 = (int)fVar39 - *piVar18;
            uVar27 = uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU);
          }
          uVar12 = puVar25[4];
          piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x1a28) + 0xf0))
                                     ((long *)(lVar35 + 0x1a28));
          puVar33 = puVar33 + 1;
          uVar12 = *piVar18 + uVar12;
          uVar8 = uVar12;
          if ((int)uVar27 <= (int)uVar12) {
            uVar8 = uVar27;
          }
          uVar27 = 0;
          if (-1 < (int)uVar12) {
            uVar27 = uVar8;
          }
          puVar25[4] = uVar27;
        } while (puVar33 != puVar7);
      }
      uVar34 = uVar34 + 1;
    } while (uVar34 != 0x15);
  }
  puVar20 = (undefined4 *)(**(code **)(*(long *)(lVar35 + 0x1818) + 0xf0))(lVar35 + 0x1818);
  uVar23 = (**(code **)(*param_1 + 0x30))(param_1,*puVar20);
  if ((uVar23 & 1) != 0) {
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar17 = *(long *)(lVar17 + 8);
    piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x17b8) + 0xf0))(lVar35 + 0x17b8);
    iVar31 = *piVar18;
    uVar34 = *(uint *)(lVar17 + 0x288);
    *(undefined4 *)(lVar17 + 0x288) = *(undefined4 *)(lVar17 + 0x28c);
    uVar34 = uVar34 ^ uVar34 << 0xb;
    iVar37 = -iVar31;
    if (-1 < iVar31) {
      iVar37 = iVar31;
    }
    *(undefined4 *)(lVar17 + 0x28c) = *(undefined4 *)(lVar17 + 0x290);
    uVar27 = *(uint *)(lVar17 + 0x294);
    *(uint *)(lVar17 + 0x290) = uVar27;
    uVar34 = uVar34 >> 8 ^ uVar27 >> 0x13 ^ uVar34 ^ uVar27;
    *(uint *)(lVar17 + 0x294) = uVar34;
    piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x17b8) + 0xf0))(lVar35 + 0x17b8);
    iVar31 = (int)((ulong)uVar34 * (ulong)(iVar37 + 1) >> 0x20);
    iVar37 = -iVar31;
    if (-1 < *piVar18) {
      iVar37 = iVar31;
    }
    *(int *)((long)param_1 + 0x424) = iVar37;
    lVar17 = (**(code **)(*param_1 + 0x20))(param_1);
    lVar17 = *(long *)(lVar17 + 8);
    piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x17e8) + 0xf0))(lVar35 + 0x17e8);
    iVar31 = *piVar18;
    uVar34 = *(uint *)(lVar17 + 0x288);
    *(undefined4 *)(lVar17 + 0x288) = *(undefined4 *)(lVar17 + 0x28c);
    uVar34 = uVar34 ^ uVar34 << 0xb;
    iVar37 = -iVar31;
    if (-1 < iVar31) {
      iVar37 = iVar31;
    }
    *(undefined4 *)(lVar17 + 0x28c) = *(undefined4 *)(lVar17 + 0x290);
    uVar27 = *(uint *)(lVar17 + 0x294);
    *(uint *)(lVar17 + 0x290) = uVar27;
    uVar34 = uVar34 >> 8 ^ uVar27 >> 0x13 ^ uVar34 ^ uVar27;
    *(uint *)(lVar17 + 0x294) = uVar34;
    piVar18 = (int *)(**(code **)(*(long *)(lVar35 + 0x17e8) + 0xf0))(lVar35 + 0x17e8);
    iVar31 = (int)((ulong)uVar34 * (ulong)(iVar37 + 1) >> 0x20);
    iVar37 = -iVar31;
    if (-1 < *piVar18) {
      iVar37 = iVar31;
    }
    *(int *)(param_1 + 0x85) = iVar37;
  }
  return;
}

