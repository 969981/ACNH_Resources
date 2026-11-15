
void FUN_024e2648(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar6 = *(long *)(param_1 + 0x68);
    *(undefined2 *)(param_1 + 0x190e) = *(undefined2 *)(lVar6 + 0x2b6);
    *(int *)(param_1 + 0x1904) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
    iVar4 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
    if (0x7ffe < iVar4) {
      iVar4 = 0x7fff;
    }
    if (iVar4 < -0x7fff) {
      iVar4 = -0x8000;
    }
    *(short *)(param_1 + 0x1908) = (short)iVar4;
    *(int *)(param_1 + 0x190a) = (int)(*(float *)(lVar6 + 0x280) * 999.99994);
    fVar10 = *(float *)(lVar6 + 0x2dc);
    lVar6 = FUN_0251e98c(1);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x7e0) + 0xf0))(lVar6 + 0x7e0);
    fVar12 = 0.0;
    fVar11 = 0.0;
    if (*pfVar5 <= fVar10) {
      fVar10 = *pfVar5;
    }
    fVar9 = 0.0;
    *(int *)(param_1 + 0x1900) = (int)(fVar10 * 999.99994);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    fVar12 = (float)*(int *)(param_1 + 0x1904) * 0.001 - *(float *)(lVar6 + 0x278);
    fVar9 = (float)(int)*(short *)(param_1 + 0x1908) * 0.25 - *(float *)(lVar6 + 0x27c);
    fVar11 = (float)*(int *)(param_1 + 0x190a) * 0.001 - *(float *)(lVar6 + 0x280);
  }
  uVar2 = *(uint *)(param_1 + 0x17cc);
  *(float *)(param_1 + 0xcc8) = fVar12;
  *(float *)(param_1 + 0xccc) = fVar9;
  *(float *)(param_1 + 0xcd0) = fVar11;
  puVar7 = *(undefined8 **)(param_1 + 0x60);
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xffdfffff;
  puVar8 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_1 + 0x4c8);
  }
  uVar3 = *(undefined4 *)((long)puVar8 + 0x2b4);
  *(undefined4 *)(param_1 + 0x1858) = 0;
  *(undefined4 *)(param_1 + 0x1844) = *(undefined4 *)(param_1 + 0x1820);
  *(undefined4 *)(param_1 + 0x1848) = 0;
  *(uint *)(param_1 + 0x17cc) = uVar2 & 0xffd7ffff;
  *(undefined4 *)(param_1 + 0x1854) = uVar3;
  if (puVar7 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar7 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar7 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "PlayerTumble";
  local_50 = puVar1;
  FUN_017081d0(puVar7,&local_50,6,0,0);
  puVar8 = *(undefined8 **)(param_1 + 0x60);
  if (puVar8 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar8 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar8 = &DAT_05240280;
    }
  }
  pcStack_48 = "PlayerTumbleUpper";
  local_50 = puVar1;
  FUN_01707310(puVar8,&local_50,6,1,0);
  FUN_01707750(puVar8,&local_50);
  fVar10 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  if (*(int *)(param_1 + 0x178) == 0) {
    *(float *)(param_1 + 0x1820) = fVar10;
  }
  else {
    *(float *)(param_1 + 0xcd4) = fVar10;
  }
  FUN_0231e48c(param_1);
  FUN_025563d4(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
  return;
}

