
void FUN_03455560(long param_1,int param_2,undefined8 param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined *local_48;
  uint local_40;
  uint uStack_3c;
  undefined4 local_34;
  
  if (param_2 == 2) {
    if (DAT_04c487d4 == -1) {
      uVar8 = 2;
    }
    else {
      local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar8 = 2;
      if ((*puVar1 & 2) != 0) {
        uVar8 = 3;
      }
    }
    *(undefined4 *)(param_1 + 0x84) = uVar8;
    *(undefined4 *)(param_1 + 0x48) = 3;
    goto LAB_034558d4;
  }
  if (*param_4 == 2) {
    if (param_2 == 7) {
      uVar8 = 0x83;
    }
    else {
      uVar8 = 0x18;
    }
  }
  else {
    if (*param_4 != 1) {
      if (DAT_04c487d4 != -1) {
        local_48 = (undefined *)CONCAT44(local_48._4_4_,3);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 3 & 1) != 0) &&
           (pfVar5 = (float *)FUN_0251b3b0(param_3,0), pfVar5 != (float *)0x0)) {
          fVar10 = *pfVar5;
          fVar9 = (float)*(int *)(DAT_050d57c8 + 0x38) * 5.0 + 5.0;
          bVar3 = false;
          if (((float)*(int *)(DAT_050d57c8 + 0x28) * 5.0 <= fVar10) &&
             (bVar3 = false, !NAN(fVar10) && !NAN(fVar9))) {
            bVar3 = fVar10 < fVar9;
          }
          if (bVar3) {
            fVar9 = (float)*(int *)(DAT_050d57c8 + 0x3c) * 5.0 + 5.0;
            fVar10 = pfVar5[2];
            bVar3 = false;
            if (((float)*(int *)(DAT_050d57c8 + 0x2c) * 5.0 <= fVar10) &&
               (bVar3 = false, !NAN(fVar10) && !NAN(fVar9))) {
              bVar3 = fVar10 < fVar9;
            }
            if (bVar3) {
              uVar8 = 5;
              goto LAB_034558c8;
            }
          }
        }
        if (DAT_04c487d4 != -1) {
          local_48 = (undefined *)CONCAT44(local_48._4_4_,3);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((((*puVar1 >> 3 & 1) != 0) && (lVar6 = FUN_0251b3b0(param_3,0), lVar6 != 0)) &&
             (uVar7 = FUN_02b60610(), (uVar7 & 1) != 0)) {
            uVar8 = 6;
            goto LAB_034558c8;
          }
          if (DAT_04c487d4 != -1) {
            local_48 = (undefined *)CONCAT44(local_48._4_4_,3);
            puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
            if (0xff < (uint)(int)DAT_04c487d4) {
              puVar1 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar1 >> 3 & 1) != 0) &&
               (pfVar5 = (float *)FUN_0251b3b0(param_3,0), pfVar5 != (float *)0x0)) {
              local_48 = PTR_DAT_04bb2010 + 0x10;
              uStack_3c = (int)((float)(int)pfVar5[2] / 5.0) - (uint)(pfVar5[2] < 0.0);
              local_40 = (int)((float)(int)*pfVar5 / 5.0) - (uint)(*pfVar5 < 0.0);
              if ((((*(long *)PTR_DAT_04bb27c8 == 0) ||
                   ((lVar6 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar6 == 0 ||
                    ((int)local_40 < 0)))) || ((int)uStack_3c < 0)) ||
                 (*(uint *)(lVar6 + 0x38) <= local_40 || *(uint *)(lVar6 + 0x3c) <= uStack_3c)) {
LAB_03455890:
                uVar7 = FUN_00975c00(&local_48);
                if ((uVar7 & 1) == 0) goto LAB_034558a4;
              }
              else {
                uVar2 = local_40 + *(uint *)(lVar6 + 0x38) * uStack_3c;
                if ((*(uint *)(lVar6 + 0x68) <= uVar2 || *(long *)(lVar6 + 0x70) == 0) ||
                   (local_34 = 3,
                   (*(uint *)(*(long *)(lVar6 + 0x70) + (long)(int)uVar2 * 4) >> 3 & 1) == 0))
                goto LAB_03455890;
              }
              uVar8 = 7;
              goto LAB_03455904;
            }
          }
        }
      }
LAB_034558a4:
      if (param_2 == 4) {
        uVar8 = 0x14;
      }
      else if (param_2 == 8) {
        uVar8 = 0x84;
      }
      else if (param_2 == 5) {
        uVar8 = 0x13;
      }
      else {
        uVar8 = 1;
      }
LAB_03455904:
      *(undefined4 *)(param_1 + 0x84) = uVar8;
      *(undefined4 *)(param_1 + 0x48) = 3;
      FUN_03ebb160(param_1,8);
      return;
    }
    iVar4 = FUN_0266c940(param_3);
    if (iVar4 == 1) {
      uVar8 = 9;
    }
    else if (param_2 == 6) {
      uVar8 = 0x82;
    }
    else {
      uVar8 = 8;
    }
  }
LAB_034558c8:
  *(undefined4 *)(param_1 + 0x84) = uVar8;
  *(undefined4 *)(param_1 + 0x48) = 3;
LAB_034558d4:
  FUN_03ebb160(param_1,8);
  return;
}

