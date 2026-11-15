
void FUN_0244ff70(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  undefined *puVar5;
  char *__src;
  char *__dest;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  void *__src_00;
  undefined1 *__src_01;
  undefined *local_1c8;
  undefined1 *puStack_1c0;
  byte local_1b8;
  undefined8 local_1b0;
  float local_1a4;
  undefined8 local_1a0;
  char *local_198;
  int local_190;
  undefined1 local_18c [7];
  undefined1 local_185;
  char *local_140;
  int local_138;
  void *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    puVar12 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar12 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_1a0 = (undefined *)
                CONCAT44((float)(int)*(short *)(param_1 + 0x18e9) * 0.25,
                         (float)*(int *)(param_1 + 0x18e5) * 0.001);
    local_198 = (char *)CONCAT44(local_198._4_4_,(float)*(int *)(param_1 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar12 + 0x4f,&local_1a0);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,10);
      local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02450108;
    }
    iVar7 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar8 = (**(code **)(*plVar3 + 0x148))();
    iVar4 = iVar7 - *(int *)(lVar8 + 4);
    if (0xb60b5e < iVar4 + 0x5b05afU) {
      iVar11 = (int)((float)iVar4 * 0.1666667);
      iVar4 = 0x10000000;
      if (iVar11 < 1) {
        iVar4 = -0x5b05b0;
      }
      iVar7 = -0x10000000;
      if (0 < iVar11) {
        iVar7 = 0x5b05b0;
      }
      iVar2 = iVar11;
      if (iVar4 <= iVar11) {
        iVar2 = iVar4;
      }
      if (iVar7 <= iVar11) {
        iVar7 = iVar2;
      }
      iVar7 = iVar7 + *(int *)(lVar8 + 4);
    }
    *(int *)(lVar8 + 4) = iVar7;
  }
LAB_02450108:
  if (*(char *)(param_1 + 0x1900) != '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x230);
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar7 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    lVar8 = FUN_017067d4(puVar12,uVar6,0);
    if (lVar8 != 0) {
      local_1a0 = PTR_DAT_04bb2020 + 0x10;
      local_198 = "ToolMegaphoneSpeak";
      FUN_01751d60(lVar8,&local_1a0,10,0,0);
    }
  }
  puVar5 = PTR_PTR_04bb2238;
  if (*(int *)(param_1 + 0x178) == 0) {
    if (*(char *)(param_1 + 0x1900) == '\0') {
      if (0x13 < *(uint *)(param_1 + 0x1c04)) {
        FUN_0257a010(&local_1a0);
        puVar5 = PTR_PTR_04bb2238;
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        __src_00 = *(void **)(puVar5 + 8);
        if (local_e8 != __src_00) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          lVar8 = 0;
          do {
            if (*(char *)(*(long *)(puVar5 + 8) + lVar8) == '\0') goto LAB_024504ec;
            lVar10 = *(long *)(puVar5 + 8) + lVar8;
            if (*(char *)(lVar10 + 1) == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_024504ec;
            }
            if (*(char *)(lVar10 + 2) == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_024504ec;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_024504ec:
          iVar7 = (int)lVar8;
          if (local_e0 <= (int)lVar8) {
            iVar7 = local_e0 + -1;
          }
          memcpy(local_e8,__src_00,(long)iVar7);
          *(undefined1 *)((long)local_e8 + (long)iVar7) = 0;
        }
        __dest = local_198;
        (**(code **)(DAT_054cc328 + 0x18))(&DAT_054cc328);
        __src = DAT_054cc330;
        if (__dest != DAT_054cc330) {
          (**(code **)(DAT_054cc328 + 0x18))(&DAT_054cc328);
          lVar8 = 0;
          do {
            if (DAT_054cc330[lVar8] == '\0') goto LAB_02450590;
            if (DAT_054cc330[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_02450590;
            }
            if (DAT_054cc330[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_02450590;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_02450590:
          iVar7 = (int)lVar8;
          if (local_190 <= (int)lVar8) {
            iVar7 = local_190 + -1;
          }
          memcpy(__dest,__src,(long)iVar7);
          __dest[iVar7] = '\0';
        }
        if (local_140 != "Megaphone_Prohibited") {
          iVar7 = 0x14;
          if (local_138 < 0x15) {
            iVar7 = local_138 + -1;
          }
          memcpy(local_140,"Megaphone_Prohibited",(long)iVar7);
          local_140[iVar7] = '\0';
        }
        local_98 = 0;
        local_8c = 0xc;
        local_90 = 1;
        FUN_024480f0(param_1,&local_1a0);
      }
    }
    else {
      lVar8 = *(long *)PTR_DAT_04bb4988;
      if (lVar8 == 0) {
        uVar9 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar9 & 1) == 0) {
          local_198 = (char *)((ulong)local_198 & 0xffffffff00000000);
          local_1a0 = (undefined *)CONCAT35(local_1a0._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_1a0);
        }
      }
      else {
        local_185 = 0;
        local_190 = 8;
        local_1a0 = PTR_DAT_04bb6a30 + 0x10;
        local_198 = local_18c;
        (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
        __src_01 = *(undefined1 **)(puVar5 + 8);
        if (local_18c != __src_01) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
          lVar10 = 0;
          do {
            if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_02450324;
            lVar1 = *(long *)(puVar5 + 8) + lVar10;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_02450324;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_02450324;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_02450324:
          iVar7 = (int)lVar10;
          if (local_190 <= (int)lVar10) {
            iVar7 = local_190 + -1;
          }
          memcpy(local_18c,__src_01,(long)iVar7);
          local_18c[iVar7] = 0;
        }
        local_1a0 = PTR_DAT_04bb3768 + 0x10;
        *local_198 = 0;
        local_1b0 = 0x7fc0000000000000;
        local_1c8 = PTR_DAT_04bb2020 + 0x10;
        puStack_1c0 = local_198;
        local_1b8 = *(byte *)(param_1 + 0x1ee8);
        if (7 < local_1b8) {
          local_1b8 = 0xff;
        }
        FUN_0216fc10(lVar8,&local_1b0,&local_1c8);
        iVar7 = 0;
        if (*(char *)(param_1 + 0x1900) != '\0') {
          iVar7 = (int)local_1b0;
        }
        *(int *)(param_1 + 0x22a0) = iVar7;
        if ((!NAN(local_1b0._4_4_)) && ((int)local_1b0 != 0)) {
          uVar6 = FUN_006f0400(local_1b0._4_4_ - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                               local_1a4 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
          if (*(char *)(param_1 + 0x22a8) == '\0') {
            *(undefined1 *)(param_1 + 0x22a8) = 1;
          }
          *(undefined4 *)(param_1 + 0x22a4) = uVar6;
        }
        local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,0x144);
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
        *(undefined8 *)(param_1 + 0x18c0) = 0;
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
        *(undefined8 *)(param_1 + 0x18c8) = 0;
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
        *(undefined8 *)(param_1 + 0x18d0) = 0;
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18a0) = 0;
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
        *(undefined8 *)(param_1 + 0x18a8) = 0;
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
        *(undefined8 *)(param_1 + 0x18b0) = 0;
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
        *(undefined8 *)(param_1 + 0x18b8) = 0;
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1880) = 0;
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1888) = 0;
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1890) = 0;
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x1898) = 0;
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
        lVar8 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar8 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar8,0x144);
      }
    }
  }
  return;
}

