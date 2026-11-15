
/* WARNING: Removing unreachable block (ram,0x0241d600) */

void FUN_0241d1d8(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  float *pfVar15;
  ulong uVar16;
  long *plVar17;
  byte bVar18;
  int iVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  uint local_44;
  
  local_58 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_50 = (char *)CONCAT44(local_50._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  lVar13 = FUN_0251e98c(1);
  puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar13 + 0x1380) + 0xf0))(lVar13 + 0x1380);
  puVar20 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar20 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar14,0x41200000,0x3e4ccccc,puVar20 + 0x4f,&local_58);
  uVar7 = *(ushort *)(param_1 + 0x190a);
  lVar13 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar13 + 0x13b0) + 0xf0))(lVar13 + 0x13b0);
  fVar23 = *pfVar15;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_48 = 10;
    local_44 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0241d314;
  }
  else {
LAB_0241d314:
    iVar12 = (uint)uVar7 * 0x10000;
    plVar21 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar21 = *(long **)(param_1 + 0x4c8);
    }
    lVar13 = (**(code **)(*plVar21 + 0x148))();
    iVar19 = iVar12 - *(int *)(lVar13 + 4);
    if (0xb60b5e < iVar19 + 0x5b05afU) {
      iVar8 = 0x15555560;
      iVar12 = -0x15555560;
      iVar19 = (int)(fVar23 * (float)iVar19);
      if (iVar19 < 1) {
        iVar8 = -0x5b05b0;
      }
      else {
        iVar12 = 0x5b05b0;
      }
      iVar1 = iVar19;
      if (iVar8 <= iVar19) {
        iVar1 = iVar8;
      }
      if (iVar12 <= iVar19) {
        iVar12 = iVar1;
      }
      iVar12 = iVar12 + *(int *)(lVar13 + 4);
    }
    *(int *)(lVar13 + 4) = iVar12;
  }
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar11 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar13 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar13 + 0x278) * 999.99994);
    iVar12 = (int)(*(float *)(lVar13 + 0x27c) * 4.0);
    if (0x7ffe < iVar12) {
      iVar12 = 0x7fff;
    }
    if (iVar12 < -0x7fff) {
      iVar12 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar12;
    fVar23 = *(float *)(lVar13 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar23 * 999.99994);
    uVar11 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar11;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar20 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar20 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar22 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar20 + 0x2ec) = uVar22;
    *(undefined1 *)((long)puVar20 + 0x2e5) = 1;
  }
  iVar12 = *(int *)(param_1 + 0xdd0);
  if (0 < iVar12) {
    *(int *)(param_1 + 0xdd0) = iVar12 + -1;
    return;
  }
  if (iVar12 == 0) {
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0xdd0) = 0xffffffff;
    if (puVar20 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar20 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    puVar9 = PTR_DAT_04bb2020;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "CommonSitWait";
    FUN_017081d0(puVar20,&local_58,6,1,0);
    cVar5 = *(char *)(param_1 + 0x1915);
    cVar6 = *(char *)(param_1 + 0x190c);
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    if (puVar20 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar20 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    bVar10 = cVar6 != '\x01';
    puVar3 = &DAT_054bf890;
    if (bVar10) {
      puVar3 = &DAT_054bf8e0;
    }
    puVar4 = &DAT_054bf880;
    if (bVar10) {
      puVar4 = &DAT_054bf8d0;
    }
    if (cVar5 != '\0') {
      puVar4 = puVar3;
    }
    FUN_01707d90(puVar20,puVar4,6,1,0);
    bVar18 = *(byte *)(param_1 + 0x1914);
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    if (puVar20 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar20 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    uVar11 = (uint)bVar18;
    if (7 < uVar11) {
      uVar11 = 0;
    }
    local_58 = puVar9 + 0x10;
    local_50 = (&PTR_s_PlayerFacePgeGeneral_04a81470)[uVar11];
    FUN_01707d90(puVar20,&local_58,6,6,0);
    puVar20 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar20 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar20 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_052461c0);
      puVar20 = &DAT_05240280;
      if (iVar12 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar20 = &DAT_05240280;
    }
  }
  if (puVar20[0x227] == 0) {
    local_44 = 0;
    goto LAB_0241d750;
  }
  local_44 = *(uint *)(puVar20 + 0x2d3) >> 1 & 1;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x2c);
  uVar16 = FUN_03850a90(puVar20[0x227],0x2c,0,local_44);
  if ((uVar16 & 1) == 0) goto LAB_0241d750;
  uVar11 = FUN_0241b874(param_1);
  puVar9 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) goto LAB_0241d750;
  if ((((uVar11 == 0) ||
       (plVar21 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + (ulong)(uVar11 >> 0x14) * 8)
       , plVar21 == (long *)0x0)) || ((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar21 + 0x46) != uVar11)) {
    plVar21 = (long *)0x0;
  }
  if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
    plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar9;
    iVar12 = (**(code **)(*plVar17 + 0x60))();
    if (iVar12 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0241d6cc;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0241d6cc:
    uVar11 = 0;
  }
  if (plVar21 != (long *)0x0) {
    lVar13 = plVar21[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar12 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar16 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb4158);
    uVar2 = 0;
    if ((int)lVar13 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar16 & 1) != 0) && (uVar2 != 0)) {
      uVar11 = (uint)*(byte *)(param_1 + 0x190c);
      if (1 < uVar11) {
        uVar11 = 0;
      }
      *(uint *)(plVar21 + 0x83) = *(uint *)(plVar21 + 0x83) | 1;
      *(uint *)(plVar21 + 0x8e) = uVar11;
      bVar18 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      *(byte *)((long)plVar21 + 0x474) = bVar18;
    }
  }
LAB_0241d750:
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar20 = *(undefined8 **)(param_1 + 0x60);
    if (puVar20 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(&DAT_052461c0);
        puVar20 = &DAT_05240280;
        if (iVar12 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar20 = &DAT_05240280;
      }
    }
    if (puVar20[0x227] == 0) {
      uVar11 = 0;
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,1);
      uVar11 = *(uint *)(puVar20 + 0x2d3) >> 1 & 1;
    }
    uVar16 = FUN_0170a6d0(puVar20,uVar11);
    if ((uVar16 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1915) = 1;
    }
  }
  return;
}

