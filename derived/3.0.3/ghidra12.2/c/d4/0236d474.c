
void FUN_0236d474(long param_1)

{
  undefined8 *puVar1;
  float fVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  float *pfVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined *local_60;
  char *pcStack_58;
  long local_50;
  uint local_44;
  
  puVar10 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar6 = FUN_016d7524(puVar10 + 0x4f);
  puVar3 = PTR_DAT_04bb2020;
  if ((uVar6 & 1) == 0) {
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar7 = FUN_016e1014(puVar10 + 0x4f,0,0);
    lVar11 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar11 != 0) && (*(long *)(lVar11 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar11 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar11 + 0x488) != 0 && (*(long *)(*(long *)(lVar11 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar11 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar11 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4();
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(&local_60,uVar7);
        iVar5 = FUN_0123db50(&pcStack_58,local_50);
        if (((iVar5 - 2U & 0xfffffff9) == 0) && (local_50 != 0)) {
          local_44 = 5;
          lVar11 = FUN_01246470(local_50,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
          if (lVar11 != 0) {
            uVar4 = local_44 + 7;
            if (-1 < (int)local_44) {
              uVar4 = local_44;
            }
            if ((*(byte *)(lVar11 + (ulong)(uint)((int)uVar4 >> 3)) >> (ulong)(local_44 & 7) & 1) !=
                0) goto LAB_0236d4bc;
          }
        }
      }
    }
    puVar10 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar6 = FUN_016d77dc(puVar10 + 0x4f);
    if ((uVar6 & 1) == 0) {
      puVar10 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar10 = *(undefined8 **)(param_1 + 0x4c8);
      }
      uVar6 = FUN_0245bbd8(puVar10 + 0x4f);
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          puVar10 = &DAT_05240280;
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      if ((uVar6 & 1) != 0) {
        local_60 = puVar3 + 0x10;
        pcStack_58 = "CommonCharaEditLandSideWalk";
        FUN_017081d0(puVar10,&local_60,6,1,0);
        lVar11 = FUN_0251e98c(1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
        fVar12 = 0.5 / *pfVar8;
        *(float *)(param_1 + 0x1bf4) = fVar12;
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
        fVar2 = 0.1;
        if (0.1 <= fVar12) {
          fVar2 = fVar13;
        }
        lVar11 = FUN_0251e98c(1);
        pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x2a0) + 0xf0))(lVar11 + 0x2a0);
        fVar13 = *pfVar8;
        *(undefined4 *)(param_1 + 0x1bf4) = 0x3f800000;
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 0x400;
        *(float *)(param_1 + 0x1bf0) = fVar2 * fVar13;
        puVar10 = *(undefined8 **)(param_1 + 0x60);
        goto joined_r0x0236d774;
      }
      pcStack_58 = "CommonCharaEditLand";
    }
    else {
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      if (puVar10 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_052461c0);
          puVar10 = &DAT_05240280;
          if (iVar5 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar10 = &DAT_05240280;
        }
      }
      pcStack_58 = "CommonCharaEditLandBed";
    }
  }
  else {
LAB_0236d4bc:
    puVar10 = *(undefined8 **)(param_1 + 0x60);
    if (puVar10 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar10 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar10 = &DAT_05240280;
      }
    }
    pcStack_58 = "CommonCharaEditLandChair";
  }
  local_60 = puVar3 + 0x10;
  FUN_017081d0(puVar10,&local_60,6,1,0);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
joined_r0x0236d774:
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  local_60 = puVar3 + 0x10;
  pcStack_58 = &DAT_040b1007;
  puVar1 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_01733c60(puVar10 + 0xb8f,&local_60,puVar1 + 0x4f,puVar1 + 0x56,0);
  plVar9 = *(long **)(param_1 + 0x60);
  if (plVar9 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_052461c0);
      plVar9 = &DAT_05240280;
      if (iVar5 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar9 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar9 + 0x4e8))(plVar9,1);
  return;
}

