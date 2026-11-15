
void FUN_0241c83c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  ulong uVar14;
  long *plVar15;
  ushort uVar16;
  byte bVar17;
  int iVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  float fVar22;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_54 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_50 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar11 = FUN_0251e98c(1);
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0x1380) + 0xf0))(lVar11 + 0x1380);
  puVar20 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar20 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar12,0x41200000,0x3e4ccccc,puVar20 + 0x4f,&local_54);
  uVar16 = *(ushort *)(param_1 + 0x190a);
  lVar11 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar11 + 0x13b0) + 0xf0))(lVar11 + 0x13b0);
  fVar22 = *pfVar13;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_48 = 10;
    local_44 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0241c978;
  }
  else {
LAB_0241c978:
    iVar10 = (uint)uVar16 * 0x10000;
    plVar19 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar19 = *(long **)(param_1 + 0x4c8);
    }
    lVar11 = (**(code **)(*plVar19 + 0x148))();
    iVar18 = iVar10 - *(int *)(lVar11 + 4);
    if (0xb60b5e < iVar18 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar10 = -0x15555560;
      iVar18 = (int)(fVar22 * (float)iVar18);
      if (iVar18 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar10 = 0x5b05b0;
      }
      iVar1 = iVar18;
      if (iVar6 <= iVar18) {
        iVar1 = iVar6;
      }
      if (iVar10 <= iVar18) {
        iVar10 = iVar1;
      }
      iVar10 = iVar10 + *(int *)(lVar11 + 4);
    }
    *(int *)(lVar11 + 4) = iVar10;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar11 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar11 + 0x278) * 999.99994);
    iVar10 = (int)(*(float *)(lVar11 + 0x27c) * 4.0);
    if (0x7ffe < iVar10) {
      iVar10 = 0x7fff;
    }
    if (iVar10 < -0x7fff) {
      iVar10 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar10;
    fVar22 = *(float *)(lVar11 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar22 * 999.99994);
    uVar9 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar9;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar20 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar21 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar20 + 0x2ec) = uVar21;
    *(undefined1 *)((long)puVar20 + 0x2e5) = 1;
  }
  iVar10 = *(int *)(param_1 + 0xdd0);
  if (0 < iVar10) {
    *(int *)(param_1 + 0xdd0) = iVar10 + -1;
    return;
  }
  if (iVar10 == 0) {
    *(undefined4 *)(param_1 + 0xdd0) = 0xffffffff;
    if ((*(byte *)(*(long *)PTR_DAT_04bb4128 + 0x269) < 8) &&
       ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0 ||
        (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))))) {
      uVar16 = *(ushort *)(*(long *)PTR_DAT_04bb4128 + 0x26e) >>
               (ulong)(*(byte *)(param_1 + 0x1ee8) & 0x1f) & 1;
    }
    else {
      uVar16 = 1;
    }
    cVar5 = *(char *)(param_1 + 0x190c);
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    if (puVar20 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        puVar20 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    bVar8 = cVar5 != '\x01';
    puVar3 = &DAT_054bf860;
    if (bVar8) {
      puVar3 = &DAT_054bf8b0;
    }
    puVar4 = &DAT_054bf870;
    if (bVar8) {
      puVar4 = &DAT_054bf8c0;
    }
    if (uVar16 == 0) {
      puVar3 = puVar4;
    }
    FUN_01707d90(puVar20,puVar3,6,0,0);
    uVar9 = FUN_0241b874(param_1);
    puVar7 = PTR_DAT_04bb27c0;
    lVar11 = *(long *)PTR_DAT_04bb27c0;
    if (lVar11 != 0) {
      if ((((uVar9 == 0) ||
           (plVar19 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                (ulong)(uVar9 >> 0x14) * 8), plVar19 == (long *)0x0)) ||
          ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar9)) {
        plVar19 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar7;
        iVar10 = (**(code **)(*plVar15 + 0x60))();
        if (iVar10 < 0x11) {
          uVar9 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0241cd6c;
          uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0241cd6c:
        uVar9 = 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar11 = plVar19[0x2a];
        if (((*PTR_DAT_04bb4160 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4160);
        }
        uVar14 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb4158);
        uVar2 = 0;
        if ((int)lVar11 == 1) {
          uVar2 = uVar9;
        }
        if (((uVar14 & 1) != 0) && (uVar2 != 0)) {
          cVar5 = *(char *)(param_1 + 0x190c);
          *(uint *)(plVar19 + 0x83) = *(uint *)(plVar19 + 0x83) | 0x2000;
          *(uint *)((long)plVar19 + 0x41c) =
               *(uint *)((long)plVar19 + 0x41c) & 0xfffffff8 |
               *(uint *)((long)plVar19 + 0x41c) & 3 | (uint)(cVar5 != '\x01') << 2;
        }
      }
    }
  }
  puVar20 = *(undefined8 **)(param_1 + 0x60);
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar10 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 6.16571e-44;
  if (puVar20[0x227] == 0) {
    return;
  }
  uVar14 = FUN_03850a90(puVar20[0x227],0x2c,0,0);
  if ((uVar14 & 1) == 0) {
    return;
  }
  uVar9 = FUN_0241b874(param_1);
  puVar7 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  if ((((uVar9 == 0) ||
       (plVar19 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) + (ulong)(uVar9 >> 0x14) * 8),
       plVar19 == (long *)0x0)) || ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar19 + 0x46) != uVar9)) {
    plVar19 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar7;
    iVar10 = (**(code **)(*plVar15 + 0x60))();
    if (iVar10 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0241cdec;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0241cdec;
    }
  }
  uVar9 = 0;
joined_r0x0241cdec:
  if (plVar19 != (long *)0x0) {
    lVar11 = plVar19[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar14 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb4158);
    uVar2 = 0;
    if ((int)lVar11 == 1) {
      uVar2 = uVar9;
    }
    if (((uVar14 & 1) != 0) && (uVar2 != 0)) {
      uVar9 = (uint)*(byte *)(param_1 + 0x190c);
      if (1 < uVar9) {
        uVar9 = 0;
      }
      *(uint *)(plVar19 + 0x83) = *(uint *)(plVar19 + 0x83) | 1;
      *(uint *)(plVar19 + 0x8e) = uVar9;
      bVar17 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
      *(byte *)((long)plVar19 + 0x474) = bVar17;
    }
  }
  return;
}

