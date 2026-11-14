
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0185b190(undefined8 param_1,float *param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int local_64;
  
  puVar6 = PTR_DAT_04bb2010;
  local_88 = PTR_DAT_04bbc1a0 + 0x10;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  fVar14 = (float)*(int *)(param_3 + 0xc) * 10.0;
  fVar12 = (float)*(int *)(param_3 + 8) * 10.0;
  fVar15 = fVar14 + 2.5;
  fVar13 = fVar12 + 2.5;
  fVar14 = fVar14 + 10.0 + -2.5;
  fVar12 = fVar12 + 10.0 + -2.5;
  local_68 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar2 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  local_64 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  iVar3 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  local_78 = local_68;
  if (iVar2 <= local_68) {
    local_78 = iVar2;
  }
  if (local_68 <= iVar2) {
    local_68 = iVar2;
  }
  iStack_74 = local_64;
  if (iVar3 <= local_64) {
    iStack_74 = iVar3;
  }
  if (local_64 <= iVar3) {
    local_64 = iVar3;
  }
  local_80 = puVar1;
  local_70 = puVar1;
  uVar9 = FUN_01a1d370(&local_88);
  iVar2 = local_78;
  if ((uVar9 & 1) == 0) {
    iVar3 = local_64 + 1;
    local_90 = local_78;
    local_8c = iStack_74;
    local_98 = puVar1;
    if (iVar3 != iStack_74) {
      do {
        uVar9 = FUN_01a1aa10(&local_98);
        if ((uVar9 & 1) != 0) goto LAB_0185b494;
        uVar10 = FUN_01a5190c(param_1,0,&local_98,0);
        iVar7 = FUN_0277ebd0();
        if ((iVar7 != 0) && (uVar9 = FUN_0277e294(uVar10), (uVar9 & 1) != 0)) goto LAB_0185b494;
        if (local_90 < local_68) {
          local_90 = local_90 + 1;
        }
        else {
          local_8c = local_8c + 1;
          local_90 = local_78;
        }
      } while ((iVar2 != local_90) || (iVar3 != local_8c));
    }
    local_88 = puVar6 + 0x10;
    local_80 = (undefined *)
               CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                        (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
    uVar10 = FUN_01a5190c(param_1,0,&local_88,0);
    uVar9 = FUN_0185b4e0(uVar10,param_3);
    if (((uVar9 & 1) != 0) && (*(long *)(PTR_DAT_04bbec30 + 8) != 0)) {
      uVar8 = 0;
      iVar2 = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
      uVar4 = iVar2 - *(int *)(PTR_DAT_04bbec38 + 0x10);
      if ((iVar2 < *(int *)(PTR_DAT_04bbec38 + 0x10)) || (*(int *)(PTR_DAT_04bbec38 + 0x20) < iVar2)
         ) goto LAB_0185b498;
      iVar2 = (int)((float)(int)param_2[2] / 10.0) - (uint)(param_2[2] < 0.0);
      uVar5 = iVar2 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      if ((iVar2 < *(int *)(PTR_DAT_04bbec38 + 0x14)) || (*(int *)(PTR_DAT_04bbec38 + 0x24) < iVar2)
         ) goto LAB_0185b498;
      lVar11 = (long)(int)(uVar4 + *(uint *)PTR_DAT_04bbec30 * uVar5);
      if (*(uint *)(PTR_DAT_04bbec30 + 4) <= uVar5 || *(uint *)PTR_DAT_04bbec30 <= uVar4) {
        lVar11 = 0;
      }
      if (*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar11 * 8 + 4) == '\0') {
        local_88 = (undefined *)0x700000007;
        uVar8 = FUN_0189fe80(param_3,&local_88,0x15,1);
        uVar8 = uVar8 ^ 1;
        goto LAB_0185b498;
      }
    }
  }
LAB_0185b494:
  uVar8 = 0;
LAB_0185b498:
  return uVar8 & 1;
}

