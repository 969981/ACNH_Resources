
/* WARNING: Removing unreachable block (ram,0x0241bfe0) */
/* WARNING: Removing unreachable block (ram,0x0241c190) */

void FUN_0241bda8(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  long *plVar16;
  float fVar17;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  local_54 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fStack_50 = (float)(int)*(short *)(param_1 + 0x1904) * 0.25;
  local_4c = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar7 = FUN_0251e98c(1);
  puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x1380) + 0xf0))(lVar7 + 0x1380);
  puVar15 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar15 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar8,0x41200000,0x3e4ccccc,puVar15 + 0x4f,&local_54);
  uVar3 = *(ushort *)(param_1 + 0x190a);
  lVar7 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar7 + 0x13b0) + 0xf0))(lVar7 + 0x13b0);
  fVar17 = *pfVar9;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_48 = 10;
    local_44 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_0241bee4;
  }
  else {
LAB_0241bee4:
    iVar6 = (uint)uVar3 * 0x10000;
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar16 + 0x148))();
    iVar14 = iVar6 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar14 + 0x5b05afU) {
      iVar4 = 0x15555560;
      iVar6 = -0x15555560;
      iVar14 = (int)(fVar17 * (float)iVar14);
      if (iVar14 < 1) {
        iVar4 = -0x5b05b0;
      }
      else {
        iVar6 = 0x5b05b0;
      }
      iVar1 = iVar14;
      if (iVar4 <= iVar14) {
        iVar1 = iVar4;
      }
      if (iVar6 <= iVar14) {
        iVar6 = iVar1;
      }
      iVar6 = iVar6 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar6;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 6.16571e-44;
  if ((puVar15[0x227] != 0) &&
     (uVar10 = FUN_03850a90(puVar15[0x227],0x2c,0,0), puVar5 = PTR_DAT_04bb27c0, (uVar10 & 1) != 0))
  {
    if (*(long *)(param_1 + 0xdc8) == 0) {
      uVar12 = *(uint *)PTR_DAT_04bb3238;
    }
    else {
      local_54 = 7.00649e-45;
      uVar12 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x370);
    }
    lVar7 = *(long *)PTR_DAT_04bb27c0;
    if (lVar7 != 0) {
      if ((((uVar12 == 0) ||
           (plVar16 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                                (ulong)(uVar12 >> 0x14) * 8), plVar16 == (long *)0x0)) ||
          ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar12)) {
        plVar16 = (long *)0x0;
      }
      if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
        plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar5;
        iVar6 = (**(code **)(*plVar11 + 0x60))();
        if (iVar6 < 0x11) {
          uVar12 = 1;
        }
        else {
          if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0241c098;
          uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0241c098:
        uVar12 = 0;
      }
      if (plVar16 != (long *)0x0) {
        lVar7 = plVar16[0x2a];
        if (((*PTR_DAT_04bb4160 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb4160);
        }
        uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb4158);
        uVar2 = 0;
        if ((int)lVar7 == 1) {
          uVar2 = uVar12;
        }
        if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
          uVar12 = (uint)*(byte *)(param_1 + 0x190c);
          if (1 < uVar12) {
            uVar12 = 0;
          }
          *(uint *)(plVar16 + 0x83) = *(uint *)(plVar16 + 0x83) | 1;
          *(uint *)(plVar16 + 0x8e) = uVar12;
          bVar13 = *(byte *)(param_1 + 0x1ee8);
          if (7 < bVar13) {
            bVar13 = 0xff;
          }
          *(byte *)((long)plVar16 + 0x474) = bVar13;
        }
      }
    }
  }
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  local_44 = 0;
  local_54 = 3.92364e-44;
  if ((puVar15[0x227] == 0) ||
     (uVar10 = FUN_03850890(puVar15[0x227],0x1c,0,0), puVar5 = PTR_DAT_04bb27c0, (uVar10 & 1) == 0))
  goto LAB_0241c2a8;
  if (*(long *)(param_1 + 0xdc8) == 0) {
    uVar12 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    local_54 = 7.00649e-45;
    uVar12 = *(uint *)(*(long *)PTR_DAT_04bb4128 + 0x370);
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_0241c2a8;
  if ((((uVar12 == 0) ||
       (plVar16 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar12 >> 0x14) * 8),
       plVar16 == (long *)0x0)) || ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar16 + 0x46) != uVar12)) {
    plVar16 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar11 + 0x60))();
    if (iVar6 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0241c248;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0241c248:
    uVar12 = 0;
  }
  if (plVar16 != (long *)0x0) {
    lVar7 = plVar16[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar10 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb4158);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
      *(uint *)(plVar16 + 0x83) = *(uint *)(plVar16 + 0x83) | 0x10;
    }
  }
LAB_0241c2a8:
  puVar15 = *(undefined8 **)(param_1 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  if (puVar15[0x227] == 0) {
    uVar12 = 0;
  }
  else {
    local_54 = 1.4013e-45;
    uVar12 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  }
  uVar10 = FUN_0170a6d0(puVar15,uVar12);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      FUN_0237432c(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
    }
  }
  return;
}

