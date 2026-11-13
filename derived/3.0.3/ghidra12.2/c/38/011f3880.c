
uint FUN_011f3880(undefined8 param_1,int param_2,undefined4 *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  int *piVar15;
  float fVar16;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar7 = PTR_DAT_04bb4910;
  if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
    local_58 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    local_48 = 0;
    local_50 = puStack_60;
    FUN_0277f02c(param_3,&local_68);
    local_58._0_4_ = (int)local_58 + *(int *)(param_4 + 8);
    local_58._4_4_ = local_58._4_4_ + *(int *)(param_4 + 0xc);
    local_48._4_4_ = local_48._4_4_ + *(int *)(param_4 + 0xc);
    local_48._0_4_ = (int)local_48 + *(int *)(param_4 + 8);
    plVar13 = *(long **)puVar7;
    fVar16 = (float)(int)local_58 * 0.5;
    uVar8 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar8 = (uint)(fVar16 < 0.0);
    }
    iVar3 = (int)fVar16 - uVar8;
    fVar16 = (float)local_58._4_4_ * 0.5;
    uVar8 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar8 = (uint)(fVar16 < 0.0);
    }
    iVar4 = (int)fVar16 - uVar8;
    fVar16 = (float)(int)local_48 * 0.5;
    uVar8 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar8 = (uint)(fVar16 < 0.0);
    }
    iVar5 = (int)fVar16 - uVar8;
    fVar16 = (float)local_48._4_4_ * 0.5;
    uVar8 = 0;
    if (fVar16 != (float)(int)fVar16) {
      uVar8 = (uint)(fVar16 < 0.0);
    }
    iVar6 = (int)fVar16 - uVar8;
    iVar1 = iVar3;
    if (iVar5 <= iVar3) {
      iVar1 = iVar5;
    }
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    iVar5 = iVar4;
    if (iVar6 <= iVar4) {
      iVar5 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if (*(char *)((long)plVar13 + 0x89) != '\0') {
      piVar15 = (int *)*plVar13;
      uVar8 = piVar15[2];
      if ((0 < (int)uVar8) && (uVar2 = piVar15[3], 0 < (int)uVar2)) {
        iVar6 = *piVar15;
        uVar14 = 0;
        do {
          iVar9 = 0;
          uVar10 = 0;
          do {
            if ((((int)(uVar14 * iVar6) <= iVar3 && iVar1 <= (int)(uVar14 * iVar6 + iVar6 + -1)) &&
                (iVar9 <= iVar4)) && (iVar5 <= iVar6 + -1 + iVar9)) {
              lVar11 = *plVar13;
              *(undefined1 *)((long)plVar13 + 0x8a) = 1;
              lVar12 = (long)(int)(uVar14 + *(uint *)(lVar11 + 8) * uVar10);
              if (*(uint *)(lVar11 + 0xc) <= uVar10 || *(uint *)(lVar11 + 8) <= uVar14) {
                lVar12 = 0;
              }
              lVar12 = *(long *)(lVar11 + 0x10) + lVar12 * 0x23c;
              *(ushort *)(lVar12 + 0x238) = *(ushort *)(lVar12 + 0x238) | 2;
            }
            uVar10 = uVar10 + 1;
            iVar9 = iVar9 + iVar6;
          } while (uVar2 != uVar10);
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar8);
      }
    }
  }
  if (param_2 == 0) {
    local_70 = *(undefined4 *)(param_4 + 8);
    uStack_6c = *(undefined4 *)(param_4 + 0xc);
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_28 = *param_3;
    uStack_24 = param_3[1];
    FUN_011ddc58(&local_78,&local_28);
  }
  uVar8 = FUN_01a50970(param_1,param_2,param_3,param_4);
  return uVar8 & 1;
}

