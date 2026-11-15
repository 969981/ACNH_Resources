
void FUN_01f3334c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_74;
  int local_70 [2];
  int local_68;
  int local_64;
  
  plVar1 = param_1 + 0x26b2;
  pfVar3 = (float *)((long)param_1 + 0x56ec);
  if ((int)*plVar1 == 1) {
    iVar6 = *(int *)((long)param_1 + 0xae5c) + -1;
    if ((*(int *)((long)param_1 + 0xae5c) < 1) ||
       (*(int *)((long)param_1 + 0xae5c) = iVar6, iVar6 == 0)) {
      piVar2 = (int *)(param_1[3] + 0x10);
      uVar5 = *(uint *)(param_1[3] + 0x294);
      piVar4 = piVar2 + (ulong)uVar5 * 0x20;
      if (4 < uVar5) {
        piVar4 = piVar2;
      }
      local_70[0] = *piVar4;
      if ((local_70[0] != 5) || (piVar4[0x1e] == 0)) {
        iVar6 = *(int *)((long)param_1 + 0x77b4);
        if ((0 < *(int *)((long)param_1 + 0x787c)) && (*(int *)((long)param_1 + 0x787c) <= iVar6)) {
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
          return;
        }
        local_74 = (undefined4)param_1[0xf10];
        iVar9 = *(int *)((long)param_1 + 0x7884);
        local_88 = PTR_DAT_04bb2010 + 0x10;
        if (iVar9 < 1) {
          iVar9 = 0x19;
        }
        local_80 = (int)((float)(int)*(float *)(param_1 + 0xf06) / 5.0) -
                   (uint)(*(float *)(param_1 + 0xf06) < 0.0);
        iStack_7c = (int)((float)(int)*(float *)(param_1 + 0xf07) / 5.0) -
                    (uint)(*(float *)(param_1 + 0xf07) < 0.0);
        iVar8 = (int)param_1[0xf11];
        if (iVar8 < 1) {
          iVar8 = 0x15;
        }
        FUN_01edbd98(local_70,param_1,&local_74,&local_88,iVar9,iVar8);
        if (((local_68 != *(int *)(PTR_DAT_04bb5d40 + 8)) ||
            (local_64 != *(int *)(PTR_DAT_04bb5d40 + 0xc))) &&
           (uVar7 = FUN_01edc660(param_1,local_70), (uVar7 & 1) != 0)) {
          fVar13 = *pfVar3;
          fVar14 = *(float *)(param_1 + 0xade);
          *(int *)plVar1 = 0;
          fVar12 = *(float *)((long)param_1 + 0x56f4);
          if (((fVar13 != 0.0) || (fVar14 != 0.0)) || (fVar12 != 0.0)) {
            fVar10 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x278) - fVar13;
            fVar11 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280) - fVar12;
            if (5.0 <= SQRT(fVar11 * fVar11 + fVar10 * fVar10)) {
              FUN_02077fb0(param_1[0x1137]);
              *(float *)(param_1 + 0x153e) = fVar13;
              *(float *)((long)param_1 + 0xa9f4) = fVar14;
              *(undefined8 *)((long)param_1 + 0xa9fc) = 0x100000000;
              *(float *)(param_1 + 0x153f) = fVar12;
              *(undefined1 *)((long)param_1 + 0xaa44) = 0;
              param_1[0x1543] = param_1[0x1547];
              *(int *)(param_1 + 0x1544) = (int)param_1[0x1548];
              *(undefined8 *)((long)param_1 + 0xaa04) = *(undefined8 *)((long)param_1 + 0xaa24);
              *(undefined8 *)((long)param_1 + 0xaa0c) = *(undefined8 *)((long)param_1 + 0xaa2c);
              *(undefined4 *)((long)param_1 + 0xaa14) = *(undefined4 *)((long)param_1 + 0xaa34);
              return;
            }
            pfVar3[0] = 0.0;
            pfVar3[1] = 0.0;
            *(undefined4 *)((long)param_1 + 0x56f4) = 0;
          }
        }
        *(int *)plVar1 = 1;
        (**(code **)(*param_1 + 0x1e8))(param_1);
        *(int *)((long)param_1 + 0x77b4) = iVar6;
      }
    }
  }
  else {
    if ((int)*plVar1 != 0) {
      *(int *)plVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x01f334d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1e8))(param_1);
      return;
    }
    if (((*pfVar3 != 0.0) || (*(float *)(param_1 + 0xade) != 0.0)) ||
       (*(float *)((long)param_1 + 0x56f4) != 0.0)) {
      FUN_020d1018(param_1 + 0x1133);
      if ((*(byte *)((long)param_1 + 0xaa44) >> 2 & 1) == 0) {
        if ((*(byte *)((long)param_1 + 0xaa44) >> 5 & 1) == 0) {
          return;
        }
        pfVar3[0] = 0.0;
        pfVar3[1] = 0.0;
        *(undefined4 *)((long)param_1 + 0x56f4) = 0;
      }
    }
    (**(code **)(*param_1 + 0x1e8))(param_1);
    *(int *)plVar1 = 1;
  }
  return;
}

