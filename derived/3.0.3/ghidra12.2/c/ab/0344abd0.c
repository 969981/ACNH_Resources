
bool FUN_0344abd0(int *param_1,long param_2,uint param_3)

{
  bool bVar1;
  float *pfVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  
  bVar1 = param_1 != (int *)0x0 && param_3 < 4;
  if ((bVar1) && (*param_1 != 0)) {
    lVar6 = (long)*param_1 << 3;
    pfVar2 = (float *)(param_2 + (ulong)param_3 * 0x10);
    puVar3 = PTR_DAT_04bc0cb8 + 0x10;
    puVar5 = *(undefined8 **)(param_1 + 2);
    do {
      fVar8 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar7 = 255.0;
      if (fVar8 <= 1.0) {
        fVar7 = fVar8 * 255.0;
      }
      plVar4 = (long *)*puVar5;
      local_68 = 0x1a;
      fVar11 = 0.0;
      if (0.0 <= fVar8) {
        fVar11 = fVar7;
      }
      fVar7 = 255.0;
      if (fVar9 <= 1.0) {
        fVar7 = fVar9 * 255.0;
      }
      fVar10 = pfVar2[2];
      fVar12 = pfVar2[3];
      fVar8 = 0.0;
      if (0.0 <= fVar9) {
        fVar8 = fVar7;
      }
      fVar7 = 255.0;
      if (fVar10 <= 1.0) {
        fVar7 = fVar10 * 255.0;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar7;
      }
      fVar7 = 255.0;
      if (fVar12 <= 1.0) {
        fVar7 = fVar12 * 255.0;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar7;
      }
      local_74 = (int)fVar11 << 0x18 | (int)fVar8 << 0x10 | (int)fVar9 << 8 | (int)fVar10;
      local_70 = puVar3;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
      (**(code **)(plVar4[3] + 0x1b8))(plVar4[1],0,1,0,&local_74);
      lVar6 = lVar6 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar6 != 0);
  }
  return bVar1;
}

