
float FUN_019074d4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  float *pfVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(**(long **)(param_1 + 0x38) + 0x58) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = **(long **)(**(long **)(param_1 + 0x38) + 0x60);
  }
  pcVar3 = (char *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
  if (*pcVar3 == '\0') {
LAB_019075b0:
    lVar6 = (**(code **)(*(long *)(lVar6 + 0x90) + 0xf0))((long *)(lVar6 + 0x90));
    pfVar5 = (float *)(lVar6 + 4);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x60);
    puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    puVar2 = PTR_DAT_04bb5ce0;
    if ((0x3f < *puVar4 || *(long *)PTR_DAT_04bb5ce0 == 0) ||
       (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar4 * 0x14 + 0xc) == '\0'))
    goto LAB_019075b0;
    puVar4 = (uint *)(**(code **)(*plVar7 + 0xf0))(plVar7);
    uVar1 = *puVar4;
    fVar9 = 0.0;
    if (((0x3f < uVar1) || (*(long *)puVar2 == 0)) ||
       (lVar6 = *(long *)puVar2 + 0xc, *(char *)(lVar6 + (ulong)uVar1 * 0x14) == '\0'))
    goto LAB_019075c8;
    pfVar5 = (float *)(lVar6 + (ulong)uVar1 * 0x14 + 8);
  }
  fVar9 = *pfVar5;
LAB_019075c8:
  fVar8 = (float)FUN_01907820(param_1);
  return fVar9 + fVar8;
}

