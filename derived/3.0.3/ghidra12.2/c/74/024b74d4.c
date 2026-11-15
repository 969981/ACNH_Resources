
void FUN_024b74d4(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined4 *puVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  float fVar13;
  int iVar14;
  undefined8 local_60;
  char *local_58;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    puVar11 = *(undefined8 **)(param_1 + 0x60);
    if (puVar11 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar11 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar11 = &DAT_05240280;
      }
    }
    uVar4 = FUN_016ff8c0(puVar11,8,&local_60);
    if ((uVar4 & 1) != 0) {
      iVar6 = (int)(local_60._4_4_ * 4.0);
      if (0x7ffe < iVar6) {
        iVar6 = 0x7fff;
      }
      if (iVar6 < -0x7fff) {
        iVar6 = -0x8000;
      }
      *(short *)(param_1 + 0x190c) = (short)iVar6;
      *(int *)(param_1 + 0x1908) = (int)((float)local_60 * 999.99994);
      *(int *)(param_1 + 0x190e) = (int)(local_58._0_4_ * 999.99994);
    }
  }
  uVar12 = *(undefined8 *)PTR_DAT_04bb3d80;
  local_60 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_60);
  local_60 = *(undefined **)(param_1 + 0x1900);
  uVar3 = FUN_0277d6c4(&local_60);
  uVar4 = FUN_013eec20(uVar12,uVar3);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar4 & 1) == 0) {
    local_58 = "CommonRodCatch";
  }
  else {
    local_58 = "CommonRodCatchSideways";
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  FUN_017081d0(puVar11,&local_60,6,1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x230);
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  if (puVar11 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0,uVar3);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar11 = &DAT_05240280;
    }
    else {
      puVar11 = &DAT_05240280;
    }
  }
  lVar5 = FUN_017067d4(puVar11,uVar3,0);
  if (lVar5 != 0) {
    local_60 = puVar2 + 0x10;
    local_58 = "ToolRodCatch";
    FUN_01751d60(lVar5,&local_60,6,0,0);
  }
  bVar9 = *(byte *)(param_1 + 0x1ee8);
  lVar5 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  bVar10 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  if (bVar9 == bVar10) {
    lVar8 = 0;
LAB_024b7770:
    lVar5 = lVar5 + 0x40 + lVar8 * 0x20;
  }
  else {
    bVar10 = *(byte *)(lVar5 + 100);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 1;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0x84);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 2;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0xa4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 3;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0xc4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 4;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0xe4);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 5;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0x104);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 6;
      goto LAB_024b7770;
    }
    bVar10 = *(byte *)(lVar5 + 0x124);
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (bVar9 == bVar10) {
      lVar8 = 7;
      goto LAB_024b7770;
    }
    lVar5 = lVar5 + 0x140;
  }
  *(undefined4 *)(param_1 + 0xac8) = *(undefined4 *)(lVar5 + 0x10);
  iVar6 = *(int *)(param_1 + 0x1908);
  iVar14 = *(int *)(param_1 + 0x190e);
  *(undefined4 *)(param_1 + 0xacc) = *(undefined4 *)(lVar5 + 0x14);
  *(undefined4 *)(param_1 + 0xad0) = *(undefined4 *)(lVar5 + 0x18);
  *(float *)(lVar5 + 0x14) = (float)(int)*(short *)(param_1 + 0x190c) * 0.25;
  *(float *)(lVar5 + 0x10) = (float)iVar6 * 0.001;
  *(float *)(lVar5 + 0x18) = (float)iVar14 * 0.001;
  uVar3 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar3,9);
  fVar13 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c) -
           (float)(int)*(short *)(param_1 + 0x1916) * 0.25;
  if (8.0 <= fVar13) {
    puVar1 = (undefined4 *)0x4c48330;
    if (25.0 <= fVar13) {
      puVar1 = &DAT_04c48344;
    }
    puVar7 = (undefined4 *)0x4c4831c;
    if (15.0 <= fVar13) {
      puVar7 = puVar1;
    }
    if ((uVar4 & 1) != 0) {
      if (15.0 <= fVar13) {
        puVar7 = &DAT_04c48380;
        if (25.0 <= fVar13) {
          puVar7 = &DAT_04c48394;
        }
      }
      else {
        puVar7 = &DAT_04c4836c;
      }
    }
  }
  else {
    if ((uVar4 & 1) == 0) {
      uVar3 = DAT_04c48308;
      goto LAB_024b7888;
    }
    puVar7 = &DAT_04c48358;
  }
  uVar3 = *puVar7;
LAB_024b7888:
  *(undefined4 *)(param_1 + 0xad4) = uVar3;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  FUN_023333a4(param_1);
  return;
}

