
bool FUN_01fb0064(undefined8 param_1,float *param_2,undefined4 *param_3,long param_4,
                 undefined4 *param_5)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_94 [3];
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = *param_3;
  uStack_7c = param_3[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar1 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_3);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
        local_78 = lVar7;
      }
    }
  }
  iVar4 = FUN_01b10e00(&local_88);
  if (iVar4 == 6) {
    fVar10 = *param_2;
    fVar9 = (float)*(int *)(param_4 + 0x20) * 5.0 + 5.0;
    bVar2 = false;
    if (((float)*(int *)(param_4 + 0x10) * 5.0 <= fVar10) &&
       (bVar2 = false, !NAN(fVar10) && !NAN(fVar9))) {
      bVar2 = fVar10 < fVar9;
    }
    if ((bVar2) && ((float)*(int *)(param_4 + 0x14) * 5.0 <= param_2[2])) {
      return param_2[2] < (float)*(int *)(param_4 + 0x24) * 5.0 + 5.0;
    }
switchD_01fb02e0_default:
    bVar2 = false;
  }
  else {
    fVar9 = *param_2;
    fVar10 = param_2[2];
    fVar11 = (float)*(int *)(param_4 + 0x10) * 5.0;
    fVar12 = (float)*(int *)(param_4 + 0x14) * 5.0;
    fVar13 = (float)*(int *)(param_4 + 0x20) * 5.0 + 5.0;
    bVar2 = false;
    if ((fVar11 < fVar9) && (bVar2 = false, !NAN(fVar9) && !NAN(fVar13))) {
      bVar2 = fVar9 < fVar13;
    }
    fVar8 = (float)*(int *)(param_4 + 0x24) * 5.0 + 5.0;
    if (!bVar2) {
      bVar2 = false;
      if ((fVar12 < fVar10) && (bVar2 = false, !NAN(fVar10) && !NAN(fVar8))) {
        bVar2 = fVar10 < fVar8;
      }
      if (!bVar2) goto switchD_01fb02e0_default;
    }
    local_94[1] = 0.0;
    local_94[0] = (fVar11 + fVar13) * 0.5;
    local_94[2] = (fVar12 + fVar8) * 0.5;
    local_64 = FUN_01ae98d0(&local_88);
    uVar5 = FUN_021fa5f0(param_5,local_94,&local_64,param_2);
    if ((uVar5 & 1) == 0) {
      return false;
    }
    iVar4 = FUN_01ae98d0(&local_88);
    if (fVar9 <= fVar11) {
      uVar3 = 0xc0000000;
    }
    else if (fVar13 <= fVar9) {
      uVar3 = 0x40000000;
    }
    else if (fVar10 <= fVar12) {
      uVar3 = 0x80000000;
    }
    else {
      uVar3 = 0;
    }
    bVar2 = true;
    uVar6 = (uint)(long)((float)iVar4 * 90.0 * 11930465.0);
    switch(*param_5) {
    case 0:
    case 3:
    case 4:
    case 8:
      break;
    case 2:
      uVar3 = uVar3 ^ 0x80000000;
    case 1:
    case 5:
    case 6:
      bVar2 = uVar3 == uVar6;
      break;
    case 7:
      bVar2 = (uVar3 ^ 0x80000000) != uVar6;
      break;
    default:
      goto switchD_01fb02e0_default;
    }
  }
  return bVar2;
}

