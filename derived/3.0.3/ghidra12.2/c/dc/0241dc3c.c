
void FUN_0241dc3c(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  float *pfVar12;
  ulong uVar13;
  long *plVar14;
  byte bVar15;
  int iVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined4 uVar19;
  float fVar20;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_54 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_50 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar10 = FUN_0251e98c(1);
  puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  puVar17 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar11,0x41200000,0x3e4ccccc,puVar17 + 0x4f,&local_54);
  uVar5 = *(ushort *)(param_1 + 0x190a);
  lVar10 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar20 = *pfVar12;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_48 = 10;
    local_44 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0241dd78;
  }
  else {
LAB_0241dd78:
    iVar9 = (uint)uVar5 * 0x10000;
    plVar18 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar18 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar18 + 0x148))();
    iVar16 = iVar9 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar16 + 0x5b05afU) {
      iVar6 = 0x15555560;
      iVar9 = -0x15555560;
      iVar16 = (int)(fVar20 * (float)iVar16);
      if (iVar16 < 1) {
        iVar6 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar1 = iVar16;
      if (iVar6 <= iVar16) {
        iVar1 = iVar6;
      }
      if (iVar9 <= iVar16) {
        iVar9 = iVar1;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar9;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar10 + 0x278) * 999.99994);
    iVar9 = (int)(*(float *)(lVar10 + 0x27c) * 4.0);
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar9;
    fVar20 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar20 * 999.99994);
    uVar8 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar8;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar17 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar17 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar19 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar17 + 0x2ec) = uVar19;
    *(undefined1 *)((long)puVar17 + 0x2e5) = 1;
  }
  iVar9 = *(int *)(param_1 + 0xdd0);
  if (0 < iVar9) {
    *(int *)(param_1 + 0xdd0) = iVar9 + -1;
    return;
  }
  if (iVar9 == 0) {
    cVar4 = *(char *)(param_1 + 0x190c);
    *(undefined4 *)(param_1 + 0xdd0) = 0xffffffff;
    puVar17 = *(undefined8 **)(param_1 + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    puVar3 = &DAT_054bf8a0;
    if (cVar4 != '\x01') {
      puVar3 = &DAT_054bf8f0;
    }
    FUN_01707d90(puVar17,puVar3,0,0,0);
    puVar17 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar17 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 6.16571e-44;
  if ((puVar17[0x227] == 0) || (uVar13 = FUN_03850a90(puVar17[0x227],0x2c,0,0), (uVar13 & 1) == 0))
  {
    uVar8 = FUN_0241b874(param_1);
    puVar7 = PTR_DAT_04bb27c0;
    lVar10 = *(long *)PTR_DAT_04bb27c0;
    if (lVar10 == 0) goto LAB_0241e1c0;
    if ((((uVar8 == 0) ||
         (plVar18 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar8 >> 0x14) * 8
                              ), plVar18 == (long *)0x0)) ||
        ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar18 + 0x46) != uVar8)) {
      plVar18 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar7;
      iVar9 = (**(code **)(*plVar14 + 0x60))();
      if (iVar9 < 0x11) {
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0241e0d8;
        uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0241e0d8:
      uVar8 = 0;
    }
    if (plVar18 != (long *)0x0) {
      lVar10 = plVar18[0x2a];
      if (((*PTR_DAT_04bb4160 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4160);
      }
      uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb4158);
      uVar2 = 0;
      if ((int)lVar10 == 1) {
        uVar2 = uVar8;
      }
      if (((uVar13 & 1) != 0) && (uVar2 != 0)) {
        *(uint *)(plVar18 + 0x83) = *(uint *)(plVar18 + 0x83) | 2;
      }
    }
    goto LAB_0241e1c0;
  }
  uVar8 = FUN_0241b874(param_1);
  puVar7 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) goto LAB_0241e1c0;
  if ((((uVar8 == 0) ||
       (plVar18 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (ulong)(uVar8 >> 0x14) * 8),
       plVar18 == (long *)0x0)) || ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar18 + 0x46) != uVar8)) {
    plVar18 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar14 + 0x60))();
    if (iVar9 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0241e13c;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0241e13c:
    uVar8 = 0;
  }
  if (plVar18 != (long *)0x0) {
    lVar10 = plVar18[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar13 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb4158);
    uVar2 = 0;
    if ((int)lVar10 == 1) {
      uVar2 = uVar8;
    }
    if (((uVar13 & 1) != 0) && (uVar2 != 0)) {
      uVar8 = (uint)*(byte *)(param_1 + 0x190c);
      if (1 < uVar8) {
        uVar8 = 0;
      }
      *(uint *)(plVar18 + 0x83) = *(uint *)(plVar18 + 0x83) | 1;
      *(uint *)(plVar18 + 0x8e) = uVar8;
      bVar15 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      *(byte *)((long)plVar18 + 0x474) = bVar15;
    }
  }
LAB_0241e1c0:
  puVar17 = *(undefined8 **)(param_1 + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar9 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  uVar13 = FUN_0170a6d0(puVar17,0);
  if ((uVar13 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_0237432c(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

