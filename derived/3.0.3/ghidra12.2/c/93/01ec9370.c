
void FUN_01ec9370(long *param_1,long *param_2)

{
  float *pfVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  float local_58;
  undefined4 local_54;
  
  pfVar1 = (float *)(param_1 + 0x15eb);
  param_1[0x15ed] = 0;
  *(undefined4 *)(param_1 + 0x15ee) = 0;
  puVar4 = PTR_DAT_04bb2720;
  if ((*(byte *)((long)param_1 + 0xaf64) >> 3 & 1) == 0) {
    lVar9 = *param_2;
    local_60 = *(undefined8 *)(lVar9 + 8);
    local_58 = *(float *)(lVar9 + 0x10);
    if (*(int *)((long)param_1 + 0xaf34) != 3) {
      fVar12 = *(float *)(lVar9 + 8) + -2.5;
      fVar14 = *(float *)(lVar9 + 0x10) + -2.5;
      iVar5 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar6 = *(int *)(lVar9 + 0x18);
      fVar14 = 0.5;
      fVar12 = ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5;
      uVar3 = (ulong)local_60 >> 0x20;
      local_60 = CONCAT44((int)uVar3,((float)iVar5 * 5.0 + (float)(iVar5 + 1) * 5.0 + 5.0) * 0.5);
      local_58 = fVar12;
      if (iVar6 - 2U < 4) {
        lVar9 = *(long *)PTR_DAT_04bb2720;
        if (lVar9 == 0) {
          puVar11 = &DAT_055c04a0;
        }
        else {
          puVar11 = &DAT_055c04a0;
          if (*(long *)(lVar9 + 0x330) != 0) {
            puVar11 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
            iVar5 = FUN_006bd550(*puVar11,0);
            puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar11 = &DAT_055c04a0;
            }
          }
        }
        uVar13 = FUN_0153e6b0(&local_60,iVar6,*(undefined4 *)(puVar11 + 7));
        local_60 = CONCAT44(fVar12,uVar13);
        local_58 = fVar14;
      }
      if (((DAT_05292338 == 0) || (lVar9 = *(long *)puVar4, lVar9 == 0)) ||
         (*(long *)(lVar9 + 0x330) == 0)) {
LAB_01ec95dc:
        uVar13 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_60,0);
      }
      else {
        puVar11 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar11,0);
        if (((iVar6 != 0x758f7eaf) || (lVar9 = *(long *)puVar4, lVar9 == 0)) ||
           ((lVar9 = *(long *)(lVar9 + 0x330), lVar9 == 0 ||
            (uVar13 = 0, *(int *)(lVar9 + 0x244) == 0)))) goto LAB_01ec95dc;
      }
      local_60 = CONCAT44(uVar13,(undefined4)local_60);
    }
    *(undefined4 *)(param_1[1] + 0x750) = 0;
    lVar9 = param_1[1];
    if (*(int *)(*param_2 + 0x18) != 0) {
      local_68 = *(undefined4 *)(*param_2 + 0x14);
      FUN_01e39778(lVar9,&local_60,&local_68,0);
      goto LAB_01ec966c;
    }
    puVar11 = &local_60;
    puVar7 = &local_64;
    uVar8 = 0;
    *(uint *)(lVar9 + 0x69c) = *(uint *)(lVar9 + 0x69c) & 0xfffffbff;
    lVar9 = param_1[1];
    local_64 = *(undefined4 *)(*param_2 + 0x14);
  }
  else {
    if ((int)param_2[1] == 0) {
      *(undefined4 *)(param_1[1] + 0x750) = 0;
    }
    puVar7 = &local_54;
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
    lVar9 = param_1[1];
    uVar8 = (undefined1)param_2[2];
    puVar11 = (undefined8 *)(*param_2 + 8);
    local_54 = *(undefined4 *)(*param_2 + 0x14);
  }
  FUN_01e39778(lVar9,puVar11,puVar7,uVar8);
  *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x400;
LAB_01ec966c:
  lVar9 = param_1[1];
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  lVar10 = *(long *)(lVar9 + 0x68);
  if ((lVar10 != 0) && (*(int *)(lVar9 + 0x750) != 0)) {
    fVar12 = *(float *)(lVar10 + 0x278);
    fVar14 = *(float *)(lVar10 + 0x280);
    *(undefined4 *)((long)param_1 + 0xaf5c) = 0;
    fVar16 = fVar12 + -2.5;
    fVar15 = fVar14 + -2.5;
    iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    *pfVar1 = fVar12 - ((float)iVar6 * 5.0 + (float)(iVar6 + 1) * 5.0 + 5.0) * 0.5;
    *(float *)(param_1 + 0x15ec) =
         fVar14 - ((float)iVar5 * 5.0 + (float)(iVar5 + 1) * 5.0 + 5.0) * 0.5;
  }
  param_1[0x15ab] = param_1[0x15ab] & 0xffffffffffffefff;
  *(bool *)(param_1[2] + 0x5a0) = *(int *)(lVar9 + 0x750) == 0;
  *(undefined4 *)((long)param_1 + 0xaf34) = 0;
  if ((int)param_1[0xef6] != *(int *)((long)param_2 + 0xc)) {
    (**(code **)(*param_1 + 0x38))(param_1,*(int *)((long)param_2 + 0xc),0,0);
  }
  (**(code **)(*param_1 + 0x4d8))(param_1);
  return;
}

