
float FUN_013dd230(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  
  fVar9 = 0.0;
  if ((int)param_2 < 0) {
    return 0.0;
  }
  if ((int)param_2 < *(int *)(param_1 + 0x1f8)) {
    pcVar3 = (char *)(**(code **)(*(long *)(param_1 + 0xb8) + 0xf0))(0,0,0);
    if (*pcVar3 != '\0') {
      plVar8 = (long *)(param_1 + 0xe8);
      puVar4 = (uint *)(**(code **)(*plVar8 + 0xf0))(plVar8);
      puVar2 = PTR_DAT_04bb5ce0;
      if ((*puVar4 < 0x40 && *(long *)PTR_DAT_04bb5ce0 != 0) &&
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar4 * 0x14 + 0xc) != '\0')) {
        puVar4 = (uint *)(**(code **)(*(long *)(param_1 + 0xe8) + 0xf0))(plVar8);
        uVar1 = *puVar4;
        puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x118) + 0xf0))(param_1 + 0x118);
        if ((uVar1 < 0x40) &&
           ((*(long *)puVar2 != 0 &&
            (lVar7 = *(long *)puVar2 + 0xc, *(char *)(lVar7 + (ulong)uVar1 * 0x14) != '\0')))) {
          lVar7 = lVar7 + (ulong)uVar1 * 0x14;
          *puVar5 = *(undefined4 *)(lVar7 + 4);
          puVar5[1] = *(undefined4 *)(lVar7 + 8);
          puVar5[2] = *(undefined4 *)(lVar7 + 0xc);
        }
      }
    }
    pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x118) + 0xf0))(param_1 + 0x118);
    fVar9 = *pfVar6;
    if (param_2 < *(uint *)(param_1 + 0x1d8)) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x1e0) + (ulong)param_2 * 8);
    }
    else {
      lVar7 = 0;
    }
    pfVar6 = (float *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
    fVar9 = fVar9 + *pfVar6;
  }
  return fVar9;
}

