
/* WARNING: Removing unreachable block (ram,0x0236f32c) */

void FUN_0236f2b0(long param_1)

{
  uint *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  char *__dest;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  byte bVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  float fVar18;
  undefined8 local_150;
  ulong local_148;
  float local_140;
  undefined4 uStack_13c;
  int local_138;
  char *local_e8;
  int local_e0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  local_50 = 0;
  local_48 = (long *)0x0;
  local_60 = 0;
  uStack_58 = 0;
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  if (puVar16[0x227] == 0) {
    local_150 = (ulong)local_150._4_4_ << 0x20;
  }
  else {
    local_150 = CONCAT44(local_150._4_4_,*(uint *)(puVar16 + 0x2d3) >> 1) & 0xffffffff00000001;
    local_148 = CONCAT44(local_148._4_4_,5);
    uVar8 = FUN_03850a90(puVar16[0x227],5,&local_60,*(uint *)(puVar16 + 0x2d3) >> 1 & 1);
    if ((uVar8 & 1) != 0) {
      if ((local_48 == (long *)0x0) || (lVar12 = *local_48, lVar12 == 0)) {
        uVar11 = 1;
      }
      else {
        fVar18 = *(float *)(lVar12 + 0x18);
        if (fVar18 < 0.0) {
          fVar18 = *(float *)(local_48[1] + 0xc);
        }
        uVar11 = (uint)(fVar18 - *(float *)(lVar12 + 0x14));
        if (uVar11 < 2) {
          uVar11 = 1;
        }
      }
      uVar11 = uVar11 + 1;
      uVar2 = *(uint *)(param_1 + 0xc18);
      lVar12 = (**(code **)(**(long **)(param_1 + 0x68) + 0x148))();
      if (uVar2 < 0x80000001) {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = (0x80000000 - uVar2) / uVar11;
        }
      }
      else {
        uVar4 = 0;
        if (uVar11 != 0) {
          uVar4 = (uVar2 ^ 0x80000000) / uVar11;
        }
        uVar4 = -uVar4;
      }
      *(uint *)(lVar12 + 4) = *(int *)(lVar12 + 4) + uVar4;
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_150 = local_150 & 0xffffffff00000000;
  local_148 = CONCAT44(local_148._4_4_,1);
  if ((puVar16[0x227] != 0) && (uVar8 = FUN_03850890(puVar16[0x227],1,0,0), (uVar8 & 1) != 0)) {
    FUN_019578d0(1);
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_150 = local_150 & 0xffffffff00000000;
  local_148 = CONCAT44(local_148._4_4_,0x4b);
  if (((puVar16[0x227] != 0) && (uVar8 = FUN_03850890(puVar16[0x227],0x4b,0,0), (uVar8 & 1) != 0))
     && (uVar8 = FUN_016d7a94(param_1), (uVar8 & 1) != 0)) {
    FUN_02326130(param_1 + 0x1ee8,PTR_DAT_04bb37e0,1);
    puVar5 = PTR_DAT_04bb27c0;
    if (*(long *)(param_1 + 0x298) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb27c0;
      if (lVar12 != 0) {
        lVar15 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
        uVar11 = *(uint *)(lVar15 + ((ulong)*(uint *)(lVar15 + 0x10) & 1) * 0x20 + 0x28);
        if (((uVar11 == 0) ||
            (plVar17 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                 ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
           (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != uVar11)))) {
          plVar17 = (long *)0x0;
        }
        if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar12 = *(long *)puVar5;
          iVar7 = (**(code **)(*plVar9 + 0x60))();
          if (iVar7 < 0x11) {
            uVar11 = 1;
          }
          else {
            if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0236f550;
            uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0236f550:
          uVar11 = 0;
        }
        if (plVar17 != (long *)0x0) {
          lVar12 = plVar17[0x2a];
          if (((*PTR_DAT_04bbe050 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbe050);
          }
          uVar8 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bbe048);
          uVar2 = 0;
          if ((int)lVar12 == 1) {
            uVar2 = uVar11;
          }
          if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
            (**(code **)(*plVar17 + 0x108))(plVar17);
          }
        }
      }
      if (*(long *)(param_1 + 0x298) != 0) {
        plVar17 = *(long **)(*(long *)(param_1 + 0x298) + 0x1480);
        local_148 = CONCAT44(local_148._4_4_,*(undefined4 *)(param_1 + 0x230));
        (**(code **)(*plVar17 + 0x20))(plVar17,&local_148);
      }
    }
  }
  if (*(char *)(param_1 + 0xc1c) != '\0') {
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    local_150 = local_150 & 0xffffffff00000000;
    local_148 = CONCAT44(local_148._4_4_,0x23);
    if (puVar16[0x227] != 0) {
      uVar8 = FUN_03850890(puVar16[0x227],0x23,0,0);
      puVar5 = PTR_DAT_04bb39b0;
      if ((uVar8 & 1) != 0) {
        if (((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0))
           && ((lVar12 = *(long *)PTR_DAT_04bb27d0, lVar12 == 0 ||
               ((*(long *)(lVar12 + 0x28) == 0 || (*(int *)(lVar12 + 0x80) != 1)))))) {
          sVar3 = *(short *)PTR_DAT_04bb6298;
          if (sVar3 != -1) {
            local_148 = CONCAT44(local_148._4_4_,0x11);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
            if (0xff < (uint)(int)sVar3) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar1 >> 0x11 & 1) != 0) {
              iVar7 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
              if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562) {
                iVar7 = 0x565b4aba;
              }
              puVar16 = DAT_055c1b60;
              if (DAT_055c1b60 == &DAT_055c1b58) {
                puVar10 = &DAT_055c1098;
              }
              else {
                do {
                  puVar10 = puVar16 + -8;
                  if (*(int *)(puVar16 + -1) == iVar7) goto LAB_0236fbc4;
                  puVar10 = puVar16 + 1;
                  puVar16 = (undefined8 *)*puVar10;
                } while ((undefined8 *)*puVar10 != &DAT_055c1b58);
                puVar10 = &DAT_055c1098;
              }
LAB_0236fbc4:
              local_140 = *(float *)(PTR_DAT_04bb76e8 + 8);
              local_148 = *(ulong *)PTR_DAT_04bb76e8;
              if (((*PTR_DAT_04bb3998 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar7 != 0)) {
                FUN_00773950(PTR_DAT_04bb3990);
                __cxa_guard_release(PTR_DAT_04bb3998);
              }
              if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
                uVar8 = 0;
                do {
                  if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar8 * 4) == -0x1a927402)
                  goto LAB_0236fc2c;
                  uVar8 = uVar8 + 1;
                } while (*(uint *)PTR_DAT_04bb3990 != uVar8);
              }
              uVar8 = 0;
LAB_0236fc2c:
              local_28 = (undefined4)uVar8;
              FUN_02917ecc(puVar10,&local_148,PTR_DAT_04bb2ce8,&local_28,param_1 + 0x1ee8,
                           PTR_DAT_04bb7ab0);
              puVar16 = *(undefined8 **)(param_1 + 0x60);
              goto joined_r0x0236f96c;
            }
          }
          if (((*PTR_DAT_04bb3998 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar7 != 0)) {
            FUN_00773950(PTR_DAT_04bb3990);
            __cxa_guard_release(PTR_DAT_04bb3998);
          }
          if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
            uVar8 = 0;
            do {
              if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar8 * 4) == -0x1a927402)
              goto LAB_0236f7fc;
              uVar8 = uVar8 + 1;
            } while (*(uint *)PTR_DAT_04bb3990 != uVar8);
          }
          uVar8 = 0;
LAB_0236f7fc:
          local_64 = (undefined4)uVar8;
          FUN_02919a00(&local_64);
          puVar16 = *(undefined8 **)(param_1 + 0x60);
          goto joined_r0x0236f96c;
        }
        local_140 = (float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x84) * 5.0 + 5.0;
        local_148 = (ulong)(uint)((float)(*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x80) + 3) * 5.0 +
                                 5.0);
        puVar16 = DAT_055c1b60;
        if (DAT_055c1b60 == &DAT_055c1b58) {
          puVar10 = &DAT_055c1098;
        }
        else {
          do {
            puVar10 = puVar16 + -8;
            if (*(int *)(puVar16 + -1) == 0x6622bd46) goto LAB_0236f81c;
            puVar10 = puVar16 + 1;
            puVar16 = (undefined8 *)*puVar10;
          } while ((undefined8 *)*puVar10 != &DAT_055c1b58);
          puVar10 = &DAT_055c1098;
        }
LAB_0236f81c:
        if (((*PTR_DAT_04bb3998 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar7 != 0)) {
          FUN_00773950(PTR_DAT_04bb3990);
          __cxa_guard_release(PTR_DAT_04bb3998);
        }
        if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
          uVar8 = 0;
          do {
            if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar8 * 4) == -0x1a927402)
            goto LAB_0236f86c;
            uVar8 = uVar8 + 1;
          } while (*(uint *)PTR_DAT_04bb3990 != uVar8);
        }
        uVar8 = 0;
LAB_0236f86c:
        local_24 = (undefined4)uVar8;
        lVar12 = *(long *)puVar5;
        pbVar13 = PTR_DAT_04bb32e0;
        if (lVar12 == 0) {
LAB_0236f8bc:
          if (*pbVar13 < 8) goto LAB_0236f934;
LAB_0236f8c8:
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0236f92c:
            pbVar13 = PTR_DAT_04bb5038;
            goto LAB_0236f934;
          }
          lVar12 = **(long **)PTR_DAT_04bb27d0;
          bVar14 = *(byte *)(lVar12 + 0x473);
          pbVar13 = PTR_DAT_04bb5038;
          if ((long)(char)bVar14 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
            if (7 < bVar14) {
              puVar1 = (uint *)(lVar12 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar13 = (byte *)(lVar12 + 0x471);
            }
          }
          bVar14 = *pbVar13;
          bVar6 = 7 < bVar14;
          if (bVar6) {
            bVar14 = 0xff;
          }
          local_150 = CONCAT71(local_150._1_7_,bVar14);
          if (bVar6) goto LAB_0236f92c;
        }
        else {
          if (*(int *)(lVar12 + 0x15c) != 0) {
            pbVar13 = (byte *)(lVar12 + 0x158);
          }
          if (7 < *pbVar13) {
            if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_0236f8bc;
            }
            goto LAB_0236f8c8;
          }
LAB_0236f934:
          bVar14 = *pbVar13;
          if (7 < bVar14) {
            bVar14 = 0xff;
          }
          local_150 = CONCAT71(local_150._1_7_,bVar14);
        }
        FUN_02917ecc(puVar10,&local_148,PTR_DAT_04bb2ce8,&local_24,&local_150,PTR_DAT_04bb7ab0);
      }
    }
  }
  puVar16 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0236f96c:
  if (puVar16 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_052461c0);
      puVar16 = &DAT_05240280;
      if (iVar7 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar16 = &DAT_05240280;
    }
  }
  local_150 = local_150 & 0xffffffff00000000;
  local_148._0_4_ = 0x47;
  if ((puVar16[0x227] != 0) && (uVar8 = FUN_03850890(puVar16[0x227],0x47,0,0), (uVar8 & 1) != 0)) {
    plVar17 = *(long **)(param_1 + 0x60);
    if (plVar17 != (long *)0x0) {
      if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37a0);
      }
      uVar8 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb3798);
      if ((uVar8 & 1) != 0) {
        *(undefined1 *)(plVar17 + 0x17f0) = 0;
      }
    }
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 4;
  }
  if ((*(int *)(param_1 + 0x178) == 0) &&
     (FUN_02332b04(param_1,1,0), *(int *)(param_1 + 0x178) == 0)) {
    uVar8 = FUN_024bc518(param_1);
    if ((uVar8 & 1) != 0) {
      FUN_0230e2b0(&local_148);
      __dest = (char *)CONCAT44(uStack_13c,local_140);
      if (__dest != "Player_InsectDemo") {
        iVar7 = 0x11;
        if (local_138 < 0x12) {
          iVar7 = local_138 + -1;
        }
        memcpy(__dest,"Player_InsectDemo",(long)iVar7);
        __dest[iVar7] = '\0';
      }
      if (local_e8 != "BeeSting") {
        iVar7 = 8;
        if (local_e0 < 9) {
          iVar7 = local_e0 + -1;
        }
        memcpy(local_e8,"BeeSting",(long)iVar7);
        local_e8[iVar7] = '\0';
      }
      local_90 = 0xc;
      local_150 = 600;
      FUN_0277d4ac(&local_150);
      local_80 = 1;
      local_7c = 1;
      local_98 = (undefined4)local_150;
      uStack_94 = local_150._4_4_;
      local_70 = 0x3c;
      FUN_02328d9c(param_1,&local_148);
      FUN_0232e4c4(param_1);
      FUN_0232ed60(param_1);
    }
    puVar16 = *(undefined8 **)(param_1 + 0x60);
    if (puVar16 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar16 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar16 = &DAT_05240280;
      }
    }
    if (puVar16[0x227] == 0) {
      uVar11 = 0;
    }
    else {
      local_148._0_4_ = 1;
      uVar11 = *(uint *)(puVar16 + 0x2d3) >> 1 & 1;
    }
    uVar8 = FUN_0170a6d0(puVar16,uVar11);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_0231eddc(param_1,0), (uVar8 & 1) != 0)) &&
       (uVar8 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230)), (uVar8 & 1) == 0))
    {
      local_140 = 0.0;
      local_148 = CONCAT35(local_148._5_3_,0x100000006);
      FUN_02374e74(param_1,&local_148);
    }
  }
  return;
}

