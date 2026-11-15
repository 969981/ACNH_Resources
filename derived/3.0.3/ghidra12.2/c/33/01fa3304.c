
bool FUN_01fa3304(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar6 = *(long *)PTR_DAT_04bb2720, lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
    iVar3 = FUN_006bd550(*puVar4,0);
    if (((iVar3 == 0x758f7eaf) && (*(long *)puVar1 != 0)) &&
       ((lVar6 = *(long *)(*(long *)puVar1 + 0x330), lVar6 != 0 && (*(int *)(lVar6 + 0x244) != 0))))
    {
      local_38 = 0;
      local_48 = PTR_DAT_04bbc1a0 + 0x10;
      local_40 = PTR_DAT_04bb2010 + 0x10;
      local_28 = 0;
      local_30 = local_40;
      FUN_01811430(&local_48);
      if (*(float *)(lVar7 + 0x278) < (float)(int)local_38 * 5.0) {
        return false;
      }
      if (*(float *)(lVar7 + 0x278) < (float)(int)local_28 * 5.0 + 5.0) {
        if (*(float *)(lVar7 + 0x280) < (float)local_38._4_4_ * 5.0) {
          return false;
        }
        return *(float *)(lVar7 + 0x280) < (float)local_28._4_4_ * 5.0 + 5.0;
      }
      return false;
    }
  }
  local_40 = (undefined *)((ulong)local_40._4_4_ << 0x20);
  local_48 = (undefined *)0x0;
  uVar5 = FUN_021d9820(&local_48,1);
  if ((uVar5 & 1) == 0) {
    fVar8 = *(float *)(lVar7 + 0x278);
  }
  else {
    iVar3 = (int)((float)(int)(local_48._0_4_ + -10.0) / 5.0) - (uint)(local_48._0_4_ + -10.0 < 0.0)
    ;
    fVar9 = (float)(iVar3 + 3) * 5.0 + 5.0;
    fVar8 = *(float *)(lVar7 + 0x278);
    bVar2 = false;
    if (((float)iVar3 * 5.0 <= fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar9))) {
      bVar2 = fVar8 < fVar9;
    }
    if (bVar2) {
      iVar3 = (int)((float)(int)((float)local_40 + -5.0) / 5.0) -
              (uint)((float)local_40 + -5.0 < 0.0);
      fVar9 = (float)(iVar3 + 2) * 5.0 + 5.0;
      fVar10 = *(float *)(lVar7 + 0x280);
      bVar2 = false;
      if (((float)iVar3 * 5.0 <= fVar10) && (bVar2 = false, !NAN(fVar10) && !NAN(fVar9))) {
        bVar2 = fVar10 < fVar9;
      }
      if (bVar2) {
        return true;
      }
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb59d8;
  fVar9 = (float)*(int *)(lVar6 + 0x60) * 5.0 + 5.0;
  bVar2 = false;
  if (((float)*(int *)(lVar6 + 0x50) * 5.0 <= fVar8) && (bVar2 = false, !NAN(fVar8) && !NAN(fVar9)))
  {
    bVar2 = fVar8 < fVar9;
  }
  if ((bVar2) && ((float)*(int *)(lVar6 + 0x54) * 5.0 <= *(float *)(lVar7 + 0x280))) {
    return *(float *)(lVar7 + 0x280) < (float)*(int *)(lVar6 + 100) * 5.0 + 5.0;
  }
  return false;
}

