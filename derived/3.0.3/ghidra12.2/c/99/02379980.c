
/* WARNING: Removing unreachable block (ram,0x02379ca8) */
/* WARNING: Removing unreachable block (ram,0x02379dc0) */

void FUN_02379980(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((*(char *)(param_1 + 0x17ac) == '\0') &&
       (local_60 = local_60 & 0xffffffff00000000, (*(uint *)(param_1 + 0xed0) & 1) != 0)) {
      *(int *)(param_1 + 0xdb8) = *(int *)(param_1 + 0xdb8) + 1;
    }
    fVar11 = (float)*(int *)(param_1 + 0xdb8);
    fVar12 = 3.0;
    if (fVar11 <= 3.0) {
      fVar12 = fVar11;
    }
    fVar11 = 1.0;
    if (0 < *(int *)(param_1 + 0xdb8)) {
      fVar11 = fVar12;
    }
    *(float *)(param_1 + 0x1920) = fVar11;
    puVar8 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (puVar8[0x227] != 0) {
    FUN_03850760(*(undefined4 *)(param_1 + 0x1920));
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar8 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined4 *)(puVar8 + 0x5d) = *(undefined4 *)(param_1 + 0xdac);
    *(undefined1 *)((long)puVar8 + 0x2e4) = 1;
    uVar10 = *(undefined4 *)(param_1 + 0xdb0);
    *(undefined1 *)((long)puVar8 + 0x2e5) = 1;
    *(undefined4 *)((long)puVar8 + 0x2ec) = uVar10;
    uVar10 = *(undefined4 *)(param_1 + 0xdb4);
    *(undefined1 *)((long)puVar8 + 0x2e6) = 1;
    *(undefined4 *)(puVar8 + 0x5e) = uVar10;
    uVar6 = (uint)*(ushort *)(param_1 + 0x1900);
    if (*(int *)(param_1 + 0x178) == 0) {
      local_60 = CONCAT44(local_60._4_4_,10);
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_02379b78;
    }
  }
  else {
    uVar6 = (uint)*(ushort *)(param_1 + 0x1900);
  }
  iVar3 = uVar6 * 0x10000;
  plVar9 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar9 = *(long **)(param_1 + 0x4c8);
  }
  lVar4 = (**(code **)(*plVar9 + 0x148))();
  iVar7 = iVar3 - *(int *)(lVar4 + 4);
  if (0xb60b5e < iVar7 + 0x5b05afU) {
    iVar2 = 0x15555560;
    iVar3 = -0x15555560;
    iVar7 = (int)(float)iVar7;
    if (iVar7 < 1) {
      iVar2 = -0x5b05b0;
    }
    else {
      iVar3 = 0x5b05b0;
    }
    iVar1 = iVar7;
    if (iVar2 <= iVar7) {
      iVar1 = iVar2;
    }
    if (iVar3 <= iVar7) {
      iVar3 = iVar1;
    }
    iVar3 = iVar3 + *(int *)(lVar4 + 4);
  }
  *(int *)(lVar4 + 4) = iVar3;
LAB_02379b78:
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_60 = CONCAT44((float)(int)*(short *)(param_1 + 0x1906) * 0.25,
                      (float)*(int *)(param_1 + 0x1902) * 0.001);
  uStack_58 = CONCAT44(uStack_58._4_4_,(float)*(int *)(param_1 + 0x1908) * 0.001);
  FUN_03eb4b60(0x3f800000,0x41200000,0x3e4ccccc,puVar8 + 0x4f,&local_60);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  if (*(char *)(puVar8[0x290] + 0xee) != '\0') {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    if (*(char *)(puVar8[0x291] + 0xee) != '\0') {
      FUN_02472404(0x3f800000,param_1);
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      if (puVar8 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          puVar8 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar8 = &DAT_05240280;
        }
      }
      if ((puVar8[0x227] != 0) &&
         (uVar5 = FUN_03850a90(puVar8[0x227],0x1e,&local_60,*(uint *)(puVar8 + 0x2d3) >> 1 & 1),
         (uVar5 & 1) != 0)) {
        plVar9 = *(long **)(param_1 + 0x60);
        if (plVar9 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_052461c0);
            plVar9 = &DAT_05240280;
            if (iVar3 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar9 = &DAT_05240280;
          }
        }
        *(undefined4 *)((long)plVar9 + 0x160c) = 0x3a83126f;
        (**(code **)(*plVar9 + 0x4e0))((int)plVar9[0x2c1],plVar9);
        if (*(float *)((long)plVar9 + 0x160c) == 0.001) {
          uVar6 = *(uint *)((long)plVar9 + 0x15f4) | 0x10;
        }
        else {
          uVar6 = *(uint *)((long)plVar9 + 0x15f4) & 0xffffffef;
        }
        *(uint *)((long)plVar9 + 0x15f4) = uVar6;
      }
      puVar8 = *(undefined8 **)(param_1 + 0x60);
      if (puVar8 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          puVar8 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar8 = &DAT_05240280;
        }
      }
      if ((puVar8[0x227] != 0) &&
         (uVar5 = FUN_03850a90(puVar8[0x227],0x1d,&local_60,*(uint *)(puVar8 + 0x2d3) >> 1 & 1),
         (uVar5 & 1) != 0)) {
        plVar9 = *(long **)(param_1 + 0x60);
        if (plVar9 == (long *)0x0) {
          if ((DAT_052461c0 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_052461c0);
            plVar9 = &DAT_05240280;
            if (iVar3 != 0) {
              FUN_016fcf10(&DAT_05240280);
              FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
              __cxa_guard_release(&DAT_052461c0);
            }
          }
          else {
            plVar9 = &DAT_05240280;
          }
        }
        *(undefined4 *)(plVar9 + 0x2c2) = 0x3a83126f;
        (**(code **)(*plVar9 + 0x4e0))((int)plVar9[0x2c1],plVar9);
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    if (puVar8[0x227] == 0) {
      uVar6 = 0;
    }
    else {
      local_60 = CONCAT44(local_60._4_4_,1);
      uVar6 = *(uint *)(puVar8 + 0x2d3) >> 1 & 1;
    }
    uVar5 = FUN_0170a6d0(puVar8,uVar6);
    if ((uVar5 & 1) != 0) {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x100000;
    }
  }
  return;
}

