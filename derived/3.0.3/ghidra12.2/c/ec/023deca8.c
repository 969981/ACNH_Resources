
void FUN_023deca8(long param_1,long param_2)

{
  float *pfVar1;
  uint *puVar2;
  short sVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  char *__src;
  byte bVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  char *local_128;
  int local_120;
  char *local_d0;
  int local_c8;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar12,param_2 + 0x58,6,0,0);
    return;
  }
  if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
    puVar12 = *(undefined8 **)(param_1 + 0x1dc0);
    *(undefined4 *)(param_1 + 0x1da8) = 0;
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffd;
    if (puVar12 != &DAT_0407ebb1) {
      iVar6 = 0;
      if (*(int *)(param_1 + 0x1dc8) < 1) {
        iVar6 = *(int *)(param_1 + 0x1dc8) + -1;
      }
      memset(puVar12,0,(long)iVar6);
      *(undefined1 *)((long)puVar12 + (long)iVar6) = 0;
    }
    puVar12 = *(undefined8 **)(param_1 + 0x1e18);
    if (puVar12 != &DAT_0407ebb1) {
      iVar6 = 0;
      if (*(int *)(param_1 + 0x1e20) < 1) {
        iVar6 = *(int *)(param_1 + 0x1e20) + -1;
      }
      memset(puVar12,0,(long)iVar6);
      *(undefined1 *)((long)puVar12 + (long)iVar6) = 0;
    }
    *(undefined8 *)(param_1 + 0x1e68) = 0;
    *(undefined8 *)(param_1 + 0x1e78) = 0;
    *(undefined2 *)(param_1 + 0x1e70) = 0xff;
  }
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffffb;
  FUN_0230e2b0(auStack_130);
  if (local_128 != "Player_FtrActionError") {
    iVar6 = 0x15;
    if (local_120 < 0x16) {
      iVar6 = local_120 + -1;
    }
    memcpy(local_128,"Player_FtrActionError",(long)iVar6);
    local_128[iVar6] = '\0';
  }
  pcVar11 = local_d0;
  if (local_d0 != "FtrIndoorOperateError_ExistsVisitor") {
    iVar6 = 0x23;
    if (local_c8 < 0x24) {
      iVar6 = local_c8 + -1;
    }
    memcpy(local_d0,"FtrIndoorOperateError_ExistsVisitor",(long)iVar6);
    pcVar11[iVar6] = '\0';
  }
  switch(*(undefined4 *)(param_1 + 0x20f0)) {
  case 2:
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_168 = 3;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 3 & 1) != 0) {
        lVar10 = *(long *)(param_1 + 0x68);
        pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar10 + 0x2b4) >> 0x14) & 0xff0));
        fVar13 = (float)(*(uint *)(lVar10 + 0x2b4) & 0xffffff) * 5.9604645e-08;
        fVar14 = *pfVar1 + fVar13 * pfVar1[1];
        fVar13 = pfVar1[2] + fVar13 * pfVar1[3];
        fVar15 = *(float *)(lVar10 + 0x278) +
                 fVar14 * 0.0 * 0.0 + fVar13 * 0.0 + (fVar14 + 0.0) * 7.5;
        fVar13 = *(float *)(lVar10 + 0x280) + (fVar13 * 0.0 * 0.0 - fVar14 * 0.0) + fVar13 * 7.5;
        iVar6 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
        lVar10 = *(long *)PTR_DAT_04bb5c90;
        if (((*(int *)(lVar10 + 0x28) <= iVar6) && (iVar6 <= *(int *)(lVar10 + 0x38))) &&
           ((iVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
            *(int *)(lVar10 + 0x2c) <= iVar6 && (iVar6 <= *(int *)(lVar10 + 0x3c))))) {
          puVar12 = *(undefined8 **)(param_1 + 0x60);
          if (puVar12 == (undefined8 *)0x0) {
            if (((DAT_052461c0 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
              puVar12 = &DAT_05240280;
            }
            else {
              puVar12 = &DAT_05240280;
            }
          }
LAB_023df2fc:
          FUN_017029bc(puVar12,param_2 + 0x58,6,0,0);
          *(undefined4 *)(param_1 + 0x20f0) = 0;
          return;
        }
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar12 = &DAT_05240280;
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar12,param_2 + 0x58,6,0,0);
    if (local_d0 == "FtrOperateError_ExistsVisitor") goto LAB_023df0a8;
    __src = "FtrOperateError_ExistsVisitor";
    bVar4 = SBORROW4(local_c8,0x1d);
    iVar6 = local_c8 + -0x1d;
    bVar5 = local_c8 == 0x1d;
    iVar9 = 0x1d;
    pcVar11 = local_d0;
    break;
  case 3:
  case 4:
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if (((DAT_052461c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
        puVar12 = &DAT_05240280;
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    FUN_017029bc(puVar12,param_2 + 0x58,6,0,0);
    if (local_d0 == "FtrIndoorOperateError_ExistsVisitor") goto LAB_023df0a8;
    __src = "FtrIndoorOperateError_ExistsVisitor";
    bVar4 = SBORROW4(local_c8,0x23);
    iVar6 = local_c8 + -0x23;
    bVar5 = local_c8 == 0x23;
    iVar9 = 0x23;
    pcVar11 = local_d0;
    break;
  default:
    local_158 = PTR_DAT_04bbc1a0 + 0x10;
    bVar8 = *(byte *)(param_1 + 0x1ee8);
    puStack_150 = PTR_DAT_04bb2010 + 0x10;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_168 = CONCAT31(local_168._1_3_,bVar8);
    local_148 = 0;
    local_138 = 0;
    local_164 = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_160 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    puStack_140 = puStack_150;
    uVar7 = FUN_0151307c(&local_168);
    if ((uVar7 & 1) != 0) {
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 3 & 1) != 0) {
          lVar10 = *(long *)(param_1 + 0x68);
          pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar10 + 0x2b4) >> 0x14) & 0xff0)
                            );
          fVar13 = (float)(*(uint *)(lVar10 + 0x2b4) & 0xffffff) * 5.9604645e-08;
          fVar14 = *pfVar1 + fVar13 * pfVar1[1];
          fVar13 = pfVar1[2] + fVar13 * pfVar1[3];
          fVar15 = *(float *)(lVar10 + 0x278) +
                   fVar14 * 0.0 * 0.0 + fVar13 * 0.0 + (fVar14 + 0.0) * 7.5;
          fVar13 = *(float *)(lVar10 + 0x280) + (fVar13 * 0.0 * 0.0 - fVar14 * 0.0) + fVar13 * 7.5;
          iVar6 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
          lVar10 = *(long *)PTR_DAT_04bb5c90;
          if ((((*(int *)(lVar10 + 0x28) <= iVar6) && (iVar6 <= *(int *)(lVar10 + 0x38))) &&
              (iVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0),
              *(int *)(lVar10 + 0x2c) <= iVar6)) && (iVar6 <= *(int *)(lVar10 + 0x3c))) {
            puVar12 = (undefined8 *)FUN_016e3954(param_1);
            goto LAB_023df2fc;
          }
        }
      }
      puVar12 = *(undefined8 **)(param_1 + 0x60);
      if (puVar12 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar12 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar12 = &DAT_05240280;
        }
      }
      goto LAB_023df2a4;
    }
  case 1:
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    param_2 = param_2 + 0x58;
LAB_023df2a4:
    FUN_017029bc(puVar12,param_2,6,0,0);
    return;
  }
  if (bVar5 || iVar6 < 0 != bVar4) {
    iVar9 = local_c8 + -1;
  }
  memcpy(pcVar11,__src,(long)iVar9);
  pcVar11[iVar9] = '\0';
LAB_023df0a8:
  FUN_02328d9c(param_1,auStack_130);
  return;
}

