
bool FUN_01500fac(long param_1,float param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  int iVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float local_a0 [3];
  int iStack_94;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  
  local_80 = (undefined *)CONCAT44(local_80._4_4_,param_2);
  if (3 < (int)param_2 - 2U) {
    return true;
  }
  lVar11 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar11 == 0) {
    fVar15 = 0.0;
    iVar9 = 0;
    iVar8 = 0x10;
    iVar12 = 0x10;
  }
  else {
    fVar15 = *(float *)(lVar11 + 0xd88);
    iVar9 = *(int *)(lVar11 + 0xd8c);
    iVar12 = *(int *)(lVar11 + 0xd98);
    iVar8 = *(int *)(lVar11 + 0xd9c);
  }
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  fVar14 = fVar15;
  if (iVar12 <= (int)fVar15) {
    fVar14 = (float)iVar12;
  }
  if ((int)fVar15 <= iVar12) {
    fVar15 = (float)iVar12;
  }
  iVar12 = iVar9;
  if (iVar8 <= iVar9) {
    iVar12 = iVar8;
  }
  if (iVar9 <= iVar8) {
    iVar9 = iVar8;
  }
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar8 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  puVar6 = PTR_DAT_04bb5ce0;
  puVar5 = PTR_DAT_04bb2720;
  if (param_4 - 2 < 4) {
    if (((((int)param_2 - 2U < 4) && (param_4 - 2 < 4)) && (param_4 - (int)param_2 != 0)) &&
       (uVar1 = (param_4 - (int)param_2) + 3, uVar1 < 7)) {
      uVar10 = *(undefined4 *)(&DAT_04175850 + (long)(int)uVar1 * 4);
    }
    else {
      uVar10 = 3;
    }
    bVar7 = false;
    local_a0[0] = param_2;
    switch(uVar10) {
    case 0:
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_78 = 0;
      local_80 = puVar2;
      FUN_0153ee48(&local_80,param_2,*(undefined4 *)(puVar13 + 7));
      local_88 = 0;
      local_90 = puVar2;
      if (((int)param_2 - 2U < 4) && (*(long *)puVar6 != 0)) {
        fVar15 = 2.5;
        lVar11 = *(long *)puVar5;
        local_a0[1] = 0.0;
        local_a0[0] = (float)(int)local_78 * 5.0 + 2.5;
        stack0xffffffffffffff68 = CONCAT44(iStack_94,(float)local_78._4_4_ * 5.0 + 2.5);
        if (lVar11 == 0) {
          puVar13 = &DAT_055c04a0;
        }
        else {
          puVar13 = &DAT_055c04a0;
          if (*(long *)(lVar11 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
            iVar9 = FUN_006bd550(*puVar13,0);
            puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar13 = &DAT_055c04a0;
            }
          }
        }
        fVar14 = (float)FUN_0153e6b0(local_a0,param_2,*(undefined4 *)(puVar13 + 7));
        local_88 = CONCAT44((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0),
                            (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
      }
      stack0xffffffffffffff68 = 0;
      FUN_01500c60(local_a0,&local_90,param_4);
      iVar3 = (int)local_a0[2] + iVar3;
      iVar12 = iStack_94 + -7;
      fVar14 = local_a0[2];
      if (iVar3 <= (int)local_a0[2]) {
        fVar14 = (float)iVar3;
      }
      fVar15 = local_a0[2];
      if ((int)local_a0[2] <= iVar3) {
        fVar15 = (float)iVar3;
      }
      iVar9 = iStack_94;
      break;
    case 1:
    case 3:
      goto switchD_015011c0_caseD_1;
    case 2:
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_78 = 0;
      local_80 = puVar2;
      FUN_0153ee48(&local_80,param_2,*(undefined4 *)(puVar13 + 7));
      local_88 = 0;
      local_90 = puVar2;
      if (((int)param_2 - 2U < 4) && (*(long *)puVar6 != 0)) {
        fVar15 = 2.5;
        lVar11 = *(long *)puVar5;
        local_a0[1] = 0.0;
        local_a0[0] = (float)(int)local_78 * 5.0 + 2.5;
        stack0xffffffffffffff68 = CONCAT44(iStack_94,(float)local_78._4_4_ * 5.0 + 2.5);
        if (lVar11 == 0) {
          puVar13 = &DAT_055c04a0;
        }
        else {
          puVar13 = &DAT_055c04a0;
          if (*(long *)(lVar11 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
            iVar9 = FUN_006bd550(*puVar13,0);
            puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar13 = &DAT_055c04a0;
            }
          }
        }
        fVar14 = (float)FUN_0153e6b0(local_a0,param_2,*(undefined4 *)(puVar13 + 7));
        local_88 = CONCAT44((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0),
                            (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
      }
      stack0xffffffffffffff68 = 0;
      FUN_01500c60(local_a0,&local_90,param_4);
      fVar15 = (float)((int)local_a0[2] - iVar3);
      iVar12 = iStack_94 + -7;
      fVar14 = fVar15;
      if ((int)local_a0[2] <= (int)fVar15) {
        fVar14 = local_a0[2];
      }
      if ((int)fVar15 <= (int)local_a0[2]) {
        fVar15 = local_a0[2];
      }
      iVar9 = iStack_94;
      break;
    default:
      goto switchD_015011c0_default;
    }
  }
  else if ((param_4 < 2) || ((param_4 & 0xfffffffe) == 6)) {
    switch(param_2) {
    case 2.8026e-45:
      iVar4 = iVar4 + iVar12;
      iVar9 = iVar12;
      if (iVar12 <= iVar4) {
        iVar9 = iVar4;
      }
      if (iVar4 <= iVar12) {
        iVar12 = iVar4;
      }
      break;
    case 4.2039e-45:
      iVar4 = iVar4 + (int)fVar14;
      fVar15 = fVar14;
      if ((int)fVar14 <= iVar4) {
        fVar15 = (float)iVar4;
      }
      if (iVar4 <= (int)fVar14) {
        fVar14 = (float)iVar4;
      }
      break;
    case 5.60519e-45:
      iVar4 = iVar9 - iVar4;
      iVar12 = iVar4;
      if (iVar9 <= iVar4) {
        iVar12 = iVar9;
      }
      if (iVar4 <= iVar9) {
        iVar4 = iVar9;
      }
      iVar9 = iVar4;
      break;
    case 7.00649e-45:
      iVar4 = (int)fVar15 - iVar4;
      fVar14 = fVar15;
      if (iVar4 <= (int)fVar15) {
        fVar14 = (float)iVar4;
      }
      if ((int)fVar15 <= iVar4) {
        fVar15 = (float)iVar4;
      }
      break;
    default:
      return false;
    }
  }
  else {
switchD_015011c0_default:
    fVar15 = 0.0;
    iVar12 = 0;
    fVar14 = 0.0;
    iVar9 = 0;
  }
  bVar7 = (*(int *)(param_3 + 0x14) <= iVar9 && iVar12 <= *(int *)(param_3 + 0x24)) &&
          (*(int *)(param_3 + 0x10) <= (int)fVar15 && (int)fVar14 <= *(int *)(param_3 + 0x20));
switchD_015011c0_caseD_1:
  return bVar7;
}

