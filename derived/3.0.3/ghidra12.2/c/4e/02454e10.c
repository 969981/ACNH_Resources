
/* WARNING: Removing unreachable block (ram,0x02454eb4) */
/* WARNING: Removing unreachable block (ram,0x02455024) */

void FUN_02454e10(long param_1)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long *plVar10;
  float fVar11;
  float local_3c;
  undefined1 local_38;
  float local_34;
  
  FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x110))();
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  lVar4 = puVar9[0x227];
  if (lVar4 == 0) {
    local_3c = 0.0;
    uVar8 = 0;
    plVar10 = *(long **)(param_1 + 0x60);
  }
  else {
    local_3c = (float)(*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    fVar11 = 0.0;
    if (*(long *)(lVar4 + 0x78) != 0) {
      fVar11 = *(float *)(*(long *)(lVar4 + 0x78) + 0x18);
    }
    fVar1 = local_3c;
    if ((uint)fVar11 <= (uint)local_3c) {
      fVar1 = 0.0;
    }
    if ((uint)*(float *)(lVar4 + 0x80) <= (uint)fVar1) {
      fVar1 = 0.0;
    }
    lVar4 = *(long *)(lVar4 + 0x88) + (long)(int)fVar1 * 0xe8;
    plVar10 = (long *)(lVar4 + 0x60);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    pcVar5 = *(char **)(lVar4 + 0x68);
    if (pcVar5 == "CommonStairsIn") {
      uVar8 = 1;
      plVar10 = *(long **)(param_1 + 0x60);
    }
    else if (*pcVar5 == 'C') {
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar7 = uVar6;
        if (uVar6 == 0x80000) goto LAB_02454f88;
        if (pcVar5[uVar6 + 1] != "CommonStairsIn"[uVar6 + 1]) {
          uVar7 = 0;
          goto LAB_02454f88;
        }
        uVar7 = uVar6 + 1;
      } while (pcVar5[uVar6 + 1] != '\0');
      uVar7 = 1;
LAB_02454f88:
      uVar8 = (uint)(uVar6 < 0x80000) & (uint)uVar7;
      plVar10 = *(long **)(param_1 + 0x60);
    }
    else {
      uVar8 = 0;
      plVar10 = *(long **)(param_1 + 0x60);
    }
  }
  if (plVar10 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052461c0), iVar3 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar10 = &DAT_05240280;
    }
    else {
      plVar10 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar10 + 0x4e8))(plVar10,uVar8);
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      puVar9 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  if (puVar9[0x227] == 0) {
    local_3c = 0.0;
  }
  else {
    fVar11 = (float)(*(uint *)(puVar9 + 0x2d3) >> 1 & 1);
    local_3c = fVar11;
    uVar7 = FUN_03850368(puVar9[0x227],fVar11);
    if (((((uVar7 & 1) == 0) && (puVar9[0x227] != 0)) &&
        (uVar7 = FUN_03850368(puVar9[0x227],fVar11), (uVar7 & 1) == 0)) &&
       (uVar7 = FUN_0384fca4(puVar9[0x227],fVar11), (uVar7 & 1) == 0)) {
      if (*(int *)(param_1 + 0x178) != 1) goto LAB_02455090;
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar3 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      local_3c = 0.0;
      if (puVar9[0x227] == 0) goto LAB_02455090;
      lVar4 = *(long *)(puVar9[0x227] + 0x88);
      plVar10 = (long *)(lVar4 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      pcVar5 = *(char **)(lVar4 + 0x68);
      if (pcVar5 != "PlayerWait") {
        if (*pcVar5 != 'P') goto LAB_02455090;
        uVar7 = 0;
        do {
          uVar6 = uVar7;
          if ((uVar6 == 0x80000) || (pcVar5[uVar6 + 1] != "PlayerWait"[uVar6 + 1]))
          goto LAB_02455090;
          uVar7 = uVar6 + 1;
        } while (pcVar5[uVar6 + 1] != '\0');
        if (uVar6 >> 0x13 != 0) goto LAB_02455090;
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar7 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar7 & 1) == 0) {
      local_34 = 0.0;
      local_3c = 8.40779e-45;
      local_38 = 1;
      FUN_02374e74(param_1,&local_3c);
      return;
    }
    return;
  }
  uVar7 = FUN_0235b810(param_1,0,0,0);
  if ((uVar7 & 1) != 0) {
    return;
  }
  FUN_023164ec(param_1,6);
LAB_02455090:
  if ((*(byte *)(param_1 + 0x17d4) >> 1 & 1) == 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar3 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    FUN_016ff8c0(puVar9,2,&local_3c);
    fVar11 = local_3c - *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    local_34 = local_34 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    if (SQRT(local_34 * local_34 + fVar11 * fVar11) < 10.0) {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 2;
    }
  }
  puVar2 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = &DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = &DAT_054f0958;
      }
    }
    else {
      puVar9 = &DAT_054f0958;
    }
  }
  else {
    uVar7 = (ulong)*(byte *)(param_1 + 0x1ee8);
    puVar9 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if (uVar7 < 8) {
      puVar9 = puVar9 + uVar7;
    }
  }
  local_3c = 4.62428e-44;
  if ((*(uint *)((long)puVar9 + 4) >> 1 & 1) != 0) {
    if (*(long *)puVar2 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        puVar9 = &DAT_054f0958;
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar9 = &DAT_054f0958;
      }
    }
    else {
      uVar7 = (ulong)*(byte *)(param_1 + 0x1ee8);
      puVar9 = (undefined8 *)(*(long *)puVar2 + 0x204);
      if (uVar7 < 8) {
        puVar9 = puVar9 + uVar7;
      }
    }
    *(uint *)((long)puVar9 + 4) = *(uint *)((long)puVar9 + 4) & 0xfffffffd;
  }
  return;
}

