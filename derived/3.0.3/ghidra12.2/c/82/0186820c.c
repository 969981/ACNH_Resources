
undefined8 FUN_0186820c(float *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined *local_40;
  int local_38;
  int iStack_34;
  undefined *local_30;
  int local_28;
  int iStack_24;
  undefined8 local_8;
  
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  local_58 = PTR_DAT_04bbfe68 + 0x10;
  local_38 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_34 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar6 = *(long *)PTR_DAT_04bb2720;
  if (lVar6 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar6 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
      iVar2 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar2 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar7 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  puVar4 = (undefined4 *)FUN_01a5190c(&local_58,0,&local_40,0);
  local_60 = *puVar4;
  uStack_5c = puVar4[1];
  lVar6 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar6 != 0) && (*(long *)(lVar6 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar6 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar6 + 0x488) != 0 && (*(long *)(*(long *)(lVar6 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar6 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) != 0)))) {
    uVar3 = FUN_0277d6c4(&local_60);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      return 0;
    }
  }
  iVar2 = FUN_0277d6c4(&local_60);
  if ((iVar2 != 0xea79) && (uVar5 = FUN_009765e0(&local_40), (uVar5 & 1) == 0)) {
    local_30 = PTR_DAT_04bb2018 + 0x10;
    fVar9 = (float)iStack_34 * 0.5;
    fVar8 = (float)local_38 * 0.5;
    uVar3 = 0;
    if (fVar8 != (float)(int)fVar8) {
      uVar3 = (uint)(fVar8 < 0.0);
    }
    local_28 = (int)fVar8 - uVar3;
    uVar3 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar3 = (uint)(fVar9 < 0.0);
    }
    iStack_24 = (int)fVar9 - uVar3;
    lVar6 = *(long *)PTR_DAT_04bb5008;
    if (*(long *)(lVar6 + 0x22c0) != 0) {
      uVar3 = local_28 + *(int *)(lVar6 + 0x22b8) * iStack_24;
      if (uVar3 < *(uint *)(lVar6 + 0x22c8)) {
        iVar2 = *(int *)(lVar6 + 0x22cc);
        *(int *)(lVar6 + 0x22cc) = iVar2 + 1;
        if (((int)uVar3 < 0) || ((int)*(uint *)(lVar6 + 0x22c8) <= (int)uVar3)) {
          *(int *)(lVar6 + 0x22cc) = iVar2;
        }
        else {
          uVar1 = *(uint *)(*(long *)(lVar6 + 0x22c0) + (ulong)(uVar3 >> 5) * 4);
          *(int *)(lVar6 + 0x22cc) = iVar2;
          if ((uVar1 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
            local_8 = 0x700000007;
            uVar5 = FUN_0189fe80(&local_30,&local_8,0x12,1);
            if ((uVar5 & 1) == 0) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

