
bool FUN_02328b10(long param_1,int *param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  float fVar13;
  
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x13e0) + 0xf0))(lVar7 + 0x13e0);
  fVar13 = *pfVar8;
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((param_3 & 1) == 0) {
LAB_02328c10:
      if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
        return true;
      }
    }
    else {
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
      if ((puVar12[0x227] == 0) || (uVar9 = FUN_03850a90(puVar12[0x227],0x17,0,0), (uVar9 & 1) == 0)
         ) {
        puVar12 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar12 = *(undefined8 **)(param_1 + 0x4c8);
        }
        return *(int *)((long)puVar12 + 0x2b4) == *param_2;
      }
      if (*(int *)(param_1 + 0x178) == 0) goto LAB_02328c10;
    }
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar6 = *param_2;
    iVar10 = *(int *)(lVar7 + 4);
    if ((iVar6 - iVar10) + 0x5b05afU < 0xb60b5f) goto LAB_02328cb4;
    fVar13 = fVar13 * (float)(iVar6 - iVar10);
  }
  else {
    plVar2 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar2 + 0x148))();
    iVar6 = *param_2;
    iVar10 = *(int *)(lVar7 + 4);
    if ((iVar6 - iVar10) + 0x5b05afU < 0xb60b5f) {
LAB_02328cb4:
      bVar5 = true;
      goto LAB_02328d34;
    }
    fVar13 = fVar13 * 1.5 * (float)(iVar6 - iVar10);
  }
  iVar11 = (int)fVar13;
  iVar3 = 0x15555560;
  iVar4 = -0x15555560;
  if (iVar11 < 1) {
    iVar3 = -0x5b05b0;
  }
  else {
    iVar4 = 0x5b05b0;
  }
  iVar1 = iVar11;
  if (iVar3 <= iVar11) {
    iVar1 = iVar3;
  }
  if (iVar4 <= iVar11) {
    iVar4 = iVar1;
  }
  bVar5 = iVar4 + iVar10 == iVar6;
  iVar6 = iVar4 + iVar10;
LAB_02328d34:
  *(int *)(lVar7 + 4) = iVar6;
  return bVar5;
}

