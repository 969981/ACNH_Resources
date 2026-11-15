
/* WARNING: Removing unreachable block (ram,0x023d0e18) */

void FUN_023d0c00(long param_1)

{
  uint uVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulong local_40;
  float local_38;
  undefined4 local_34;
  
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  local_34 = 0;
  local_40._0_4_ = 0x4b;
  if (((puVar11[0x227] != 0) && (uVar6 = FUN_03850890(puVar11[0x227],0x4b,0,0), (uVar6 & 1) != 0))
     && (uVar6 = FUN_016d7a94(param_1), (uVar6 & 1) != 0)) {
    FUN_02326130(param_1 + 0x1ee8,PTR_DAT_04bb37e0,1);
    puVar4 = PTR_DAT_04bb27c0;
    if (*(long *)(param_1 + 0x298) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb27c0;
      if (lVar9 != 0) {
        lVar10 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
        uVar14 = *(uint *)(lVar10 + ((ulong)*(uint *)(lVar10 + 0x10) & 1) * 0x20 + 0x28);
        if (((uVar14 == 0) ||
            (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                                 ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
          plVar12 = (long *)0x0;
        }
        if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
          plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar9 = *(long *)puVar4;
          iVar5 = (**(code **)(*plVar7 + 0x60))();
          if (iVar5 < 0x11) {
            uVar14 = 1;
          }
          else {
            if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_023d0d40;
            uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_023d0d40:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar9 = plVar12[0x2a];
          if (((*PTR_DAT_04bbe050 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbe050);
          }
          uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe048);
          uVar1 = 0;
          if ((int)lVar9 == 1) {
            uVar1 = uVar14;
          }
          if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
            (**(code **)(*plVar12 + 0x108))(plVar12);
          }
        }
      }
      if (*(long *)(param_1 + 0x298) != 0) {
        plVar12 = *(long **)(*(long *)(param_1 + 0x298) + 0x1480);
        local_40._0_4_ = *(undefined4 *)(param_1 + 0x230);
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_40);
      }
    }
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar11 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  uVar14 = 0;
  if (puVar11[0x227] != 0) {
    local_40._0_4_ = 1;
    uVar14 = *(uint *)(puVar11 + 0x2d3) >> 1 & 1;
  }
  uVar6 = FUN_0170a6d0(puVar11,uVar14);
  if ((uVar6 & 1) == 0) {
    return;
  }
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_40._0_4_ = 0x11;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      iVar5 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562) {
        iVar5 = 0x565b4aba;
      }
      puVar11 = DAT_055c1b60;
      if (DAT_055c1b60 == &DAT_055c1b58) {
        puVar13 = &DAT_055c1098;
      }
      else {
        do {
          puVar13 = puVar11 + -8;
          if (*(int *)(puVar11 + -1) == iVar5) goto LAB_023d1004;
          puVar13 = puVar11 + 1;
          puVar11 = (undefined8 *)*puVar13;
        } while ((undefined8 *)*puVar13 != &DAT_055c1b58);
        puVar13 = &DAT_055c1098;
      }
LAB_023d1004:
      local_38 = *(float *)(PTR_DAT_04bb76e8 + 8);
      local_40 = *(ulong *)PTR_DAT_04bb76e8;
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar6 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar6 * 4) == -0x1a927402)
          goto LAB_023d106c;
          uVar6 = uVar6 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar6);
      }
      uVar6 = 0;
LAB_023d106c:
      local_44 = (undefined4)uVar6;
      puVar8 = &local_44;
      goto LAB_023d1110;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x28) == 0)) || (*(int *)(lVar9 + 0x80) != 1)) {
    if (((*PTR_DAT_04bb3998 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0)) {
      FUN_00773950(PTR_DAT_04bb3990);
      __cxa_guard_release(PTR_DAT_04bb3998);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
      uVar6 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar6 * 4) == -0x1a927402) goto LAB_023d0fec;
        uVar6 = uVar6 + 1;
      } while (*(uint *)PTR_DAT_04bb3990 != uVar6);
    }
    uVar6 = 0;
LAB_023d0fec:
    local_4c = (undefined4)uVar6;
    FUN_02919a00(&local_4c);
    return;
  }
  local_38 = (float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x84) * 5.0 + 5.0;
  local_40 = (ulong)(uint)((float)(*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x80) + 3) * 5.0 + 5.0);
  puVar11 = DAT_055c1b60;
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar13 = &DAT_055c1098;
  }
  else {
    do {
      puVar13 = puVar11 + -8;
      if (*(int *)(puVar11 + -1) == 0x6622bd46) goto LAB_023d109c;
      puVar13 = puVar11 + 1;
      puVar11 = (undefined8 *)*puVar13;
    } while ((undefined8 *)*puVar13 != &DAT_055c1b58);
    puVar13 = &DAT_055c1098;
  }
LAB_023d109c:
  if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar5 != 0))
  {
    FUN_00773950(PTR_DAT_04bb3990);
    __cxa_guard_release(PTR_DAT_04bb3998);
  }
  if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar6 * 4) == -0x1a927402) goto LAB_023d10ec;
      uVar6 = uVar6 + 1;
    } while (*(uint *)PTR_DAT_04bb3990 != uVar6);
  }
  uVar6 = 0;
LAB_023d10ec:
  local_48 = (undefined4)uVar6;
  puVar8 = &local_48;
LAB_023d1110:
  FUN_02917ecc(puVar13,&local_40,PTR_DAT_04bb2ce8,puVar8,param_1 + 0x1ee8,PTR_DAT_04bb7ab0);
  return;
}

