
float FUN_03d7d280(undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
                  long param_5,uint param_6)

{
  undefined *puVar1;
  float *pfVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_70;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bc0cb8;
  plVar9 = *(long **)(param_5 + 0x250);
  local_68 = 0xb;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  lVar6 = (**(code **)(plVar9[3] + 0xd0))(plVar9[1]);
  plVar9 = *(long **)(param_5 + 600);
  fVar12 = *(float *)(lVar6 + 4);
  local_68 = 0x3f;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  (**(code **)(plVar9[3] + 0x410))(plVar9[1]);
  plVar9 = *(long **)(param_5 + 0x250);
  local_68 = 0x34;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  fVar10 = (float)(**(code **)(plVar9[3] + 0x360))(plVar9[1]);
  plVar9 = *(long **)(param_5 + 0x250);
  local_68 = 0x37;
  local_70 = puVar1;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  iVar5 = (**(code **)(plVar9[3] + 0x390))(plVar9[1]);
  if (iVar5 == 0) {
    fVar11 = *(float *)(param_5 + 0xb50) + *(float *)(param_5 + 0xb3c) * 0.5;
  }
  else if (iVar5 == 2) {
    fVar11 = *(float *)(param_5 + 0xb50) + fVar12 * -0.5 + *(float *)(param_5 + 0xb3c);
  }
  else {
    fVar11 = 0.0;
    if (iVar5 == 1) {
      fVar11 = *(float *)(param_5 + 0xb50) + fVar12 * 0.5;
    }
  }
  plVar9 = *(long **)(param_5 + 0x250);
  local_70 = PTR_DAT_04bc0878 + 0x10;
  local_68 = 6;
  fVar11 = fVar11 + (param_4 - param_2) * -0.5;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  iVar5 = (**(code **)(plVar9[3] + 0x5c8))(plVar9[1]);
  plVar9 = *(long **)(param_5 + 0x250);
  local_70 = puVar3 + 0x10;
  local_68 = 0x41;
  (**(code **)(*plVar9 + 0x20))(plVar9,&local_70);
  fVar12 = (float)(**(code **)(plVar9[3] + 0x430))(plVar9[1]);
  if (0 < (int)param_6) {
    uVar8 = 0;
    pfVar7 = (float *)(param_5 + 0xbb0);
    do {
      bVar4 = 0x1e < uVar8;
      uVar8 = uVar8 + 1;
      pfVar2 = pfVar7;
      if (bVar4) {
        pfVar2 = (float *)(param_5 + 0xbac);
      }
      pfVar7 = pfVar7 + 1;
      fVar11 = (fVar11 + ((*pfVar2 + -1.0) * 0.6 + 1.0) * -(fVar12 * (float)iVar5)) - fVar10;
    } while (param_6 != uVar8);
  }
  return fVar11;
}

