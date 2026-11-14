
undefined8 FUN_0186865c(float *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined *local_30;
  int local_28;
  int iStack_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_40 = 0;
  local_48 = PTR_DAT_04bbfe68 + 0x10;
  local_28 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_24 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar5 = *(long *)PTR_DAT_04bb2720;
  if (lVar5 == 0) {
    puVar7 = &DAT_055c04a0;
  }
  else {
    puVar7 = &DAT_055c04a0;
    if (*(long *)(lVar5 + 0x330) != 0) {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar5 + 0x338));
      iVar1 = FUN_006bd550(*puVar7,0);
      puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar1 != 0x758f7eaf) {
        puVar7 = &DAT_055c04a0;
      }
    }
  }
  local_3c = *(undefined4 *)(puVar7 + 7);
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  puVar3 = (undefined4 *)FUN_01a5190c(&local_48,0,&local_30,0);
  local_8 = *puVar3;
  uStack_4 = puVar3[1];
  lVar5 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar5 != 0) && (*(long *)(lVar5 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar5 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar5 + 0x488) != 0 && (*(long *)(*(long *)(lVar5 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar5 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar5 + 0x2b0) + 8) != 0)))) {
    uVar2 = FUN_0277d6c4(&local_8);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      return 0;
    }
  }
  iVar1 = FUN_0277d6c4(&local_8);
  if ((iVar1 != 0xea79) && (uVar4 = FUN_009765e0(&local_30), (uVar4 & 1) == 0)) {
    lVar5 = *(long *)PTR_DAT_04bb5008;
    if (*(long *)(lVar5 + 0x22c0) != 0) {
      fVar8 = (float)iStack_24 * 0.5;
      uVar2 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar2 = (uint)(fVar8 < 0.0);
      }
      fVar9 = (float)local_28 * 0.5;
      uVar6 = 0;
      if (fVar9 != (float)(int)fVar9) {
        uVar6 = (uint)(fVar9 < 0.0);
      }
      uVar2 = ((int)fVar9 - uVar6) + ((int)fVar8 - uVar2) * *(int *)(lVar5 + 0x22b8);
      if (uVar2 < *(uint *)(lVar5 + 0x22c8)) {
        iVar1 = *(int *)(lVar5 + 0x22cc);
        *(int *)(lVar5 + 0x22cc) = iVar1 + 1;
        if (((int)uVar2 < 0) || ((int)*(uint *)(lVar5 + 0x22c8) <= (int)uVar2)) {
          *(int *)(lVar5 + 0x22cc) = iVar1;
        }
        else {
          uVar6 = *(uint *)(*(long *)(lVar5 + 0x22c0) + (ulong)(uVar2 >> 5) * 4);
          *(int *)(lVar5 + 0x22cc) = iVar1;
          if ((uVar6 >> (ulong)(uVar2 & 0x1f) & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

