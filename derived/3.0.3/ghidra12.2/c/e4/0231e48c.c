
void FUN_0231e48c(long param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(uint *)(param_1 + 0x17d8) & 1) == 0) {
    *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 1;
    if ((*(uint *)(param_1 + 0x17cc) >> 0x13 & 1) != 0) {
      fVar13 = *(float *)(param_1 + 0x1848);
      if (fVar13 != 0.0) {
        fVar11 = *(float *)(param_1 + 0x1844);
        fVar14 = *(float *)(param_1 + 0x1820);
        if (fVar11 <= fVar14) {
          if (fVar11 < fVar14) {
            fVar13 = fVar14 - fVar13;
            fVar12 = fVar11;
            if (fVar13 <= fVar14 && fVar11 < fVar13) {
              fVar12 = fVar13;
            }
            *(float *)(param_1 + 0x1820) = fVar12;
            if (fVar13 <= fVar14 && fVar11 < fVar13) goto LAB_0231e4cc;
          }
        }
        else {
          fVar13 = fVar13 + fVar14;
          fVar12 = fVar11;
          if (fVar14 <= fVar13 && fVar13 < fVar11) {
            fVar12 = fVar13;
          }
          *(float *)(param_1 + 0x1820) = fVar12;
          if (fVar14 <= fVar13 && fVar13 < fVar11) goto LAB_0231e4cc;
        }
      }
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfff7ffff;
    }
  }
LAB_0231e4cc:
  FUN_0231d728(param_1);
  if ((*(uint *)(param_1 + 0x17d8) >> 2 & 1) != 0) goto LAB_0231e644;
  *(uint *)(param_1 + 0x17d8) = *(uint *)(param_1 + 0x17d8) | 4;
  uVar8 = *(uint *)(param_1 + 0x17cc);
  if ((uVar8 >> 0x15 & 1) == 0) goto LAB_0231e644;
  if (*(int *)(param_1 + 0x1858) != 0) {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar5 = (**(code **)(*plVar2 + 0x148))();
    uVar8 = *(uint *)(param_1 + 0x1854);
    uVar3 = *(uint *)(lVar5 + 4);
    if (uVar3 == uVar8) {
      lVar9 = 0;
    }
    else {
      uVar1 = uVar3 - uVar8;
      if (uVar3 < uVar8 || uVar3 - uVar8 == 0) {
        uVar1 = uVar8 - uVar3;
      }
      if (uVar1 < 0x80000001) {
        lVar10 = -1;
      }
      else {
        lVar10 = 1;
      }
      lVar9 = -lVar10;
      if (uVar8 < uVar3) {
        lVar9 = lVar10;
      }
    }
    lVar9 = lVar9 * (ulong)*(uint *)(param_1 + 0x1858);
    uVar1 = uVar3 + (int)lVar9;
    if (lVar9 < 1) {
      if (lVar9 < 0) {
        if (uVar1 < uVar3) {
          if (uVar3 < uVar8) goto LAB_0231e62c;
        }
        else if (uVar8 <= uVar3) goto LAB_0231e634;
        if (uVar8 < uVar1) goto LAB_0231e62c;
        goto LAB_0231e634;
      }
      if ((int)lVar9 != 0) goto LAB_0231e644;
    }
    else {
      if (uVar3 < uVar1) {
        if (uVar8 < uVar3 || uVar1 < uVar8) goto LAB_0231e62c;
      }
      else if (uVar8 < uVar3 && uVar1 < uVar8) {
LAB_0231e62c:
        *(uint *)(lVar5 + 4) = uVar1;
        goto LAB_0231e644;
      }
LAB_0231e634:
      *(uint *)(lVar5 + 4) = uVar8;
    }
    uVar8 = *(uint *)(param_1 + 0x17cc);
  }
  *(uint *)(param_1 + 0x17cc) = uVar8 & 0xffdfffff;
LAB_0231e644:
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  local_28 = 0;
  local_30 = 0;
  if (puVar6 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar6 = &DAT_05240280;
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  uVar7 = FUN_016ff8c0(puVar6,10,&local_30);
  if ((uVar7 & 1) != 0) {
    puVar6 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined4 *)(puVar6 + 0x62) = (undefined4)local_30;
    *(undefined1 *)((long)puVar6 + 0x334) = 1;
    *(undefined4 *)(puVar6 + 99) = local_28;
    *(undefined4 *)((long)puVar6 + 0x314) = *(undefined4 *)((long)puVar6 + 0x27c);
  }
  return;
}

