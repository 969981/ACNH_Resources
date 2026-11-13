
void FUN_01225ba0(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  undefined **local_20;
  uint local_18;
  uint local_14;
  
  plVar4 = DAT_05aae5b0;
  if ((char)DAT_05aae5b0[0x11] == '\0') {
    fVar14 = (float)*(int *)(param_2 + 0xc) * 0.5;
    fVar13 = (float)*(int *)(param_2 + 8) * 0.5;
    uVar8 = 0;
    if (fVar13 != (float)(int)fVar13) {
      uVar8 = (uint)(fVar13 < 0.0);
    }
    uVar9 = 0;
    if (fVar14 != (float)(int)fVar14) {
      uVar9 = (uint)(fVar14 < 0.0);
    }
    if (*(char *)((long)DAT_05aae5b0 + 0x89) != '\0') {
      piVar11 = (int *)*DAT_05aae5b0;
      uVar1 = piVar11[2];
      uVar2 = piVar11[3];
      if (0 < (int)uVar1 && 0 < (int)uVar2) {
        uVar10 = 0;
        iVar3 = *piVar11;
        do {
          iVar12 = 0;
          uVar5 = 0;
          do {
            if ((((int)(uVar10 * iVar3) <= (int)((int)fVar13 - uVar8) &&
                  (int)((int)fVar13 - uVar8) <= (int)(uVar10 * iVar3 + iVar3 + -1)) &&
                (iVar12 <= (int)((int)fVar14 - uVar9))) &&
               ((int)((int)fVar14 - uVar9) <= iVar3 + -1 + iVar12)) {
              lVar6 = *plVar4;
              *(undefined1 *)((long)plVar4 + 0x8a) = 1;
              lVar7 = (long)(int)(uVar10 + *(uint *)(lVar6 + 8) * uVar5);
              if (*(uint *)(lVar6 + 0xc) <= uVar5 || *(uint *)(lVar6 + 8) <= uVar10) {
                lVar7 = 0;
              }
              lVar7 = *(long *)(lVar6 + 0x10) + lVar7 * 0x23c;
              *(ushort *)(lVar7 + 0x238) = *(ushort *)(lVar7 + 0x238) | 2;
            }
            uVar5 = uVar5 + 1;
            iVar12 = iVar12 + iVar3;
          } while (uVar2 != uVar5);
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar1);
      }
    }
  }
  if (param_3 - 1U < 2) {
LAB_01225bdc:
    local_20 = &PTR_FUN_04986b58;
    local_18 = *(uint *)(param_2 + 8);
    local_14 = *(uint *)(param_2 + 0xc);
    if ((local_18 & 1) != 0) {
      local_18 = local_18 - 1;
    }
    if ((local_14 & 1) != 0) {
      local_14 = local_14 - 1;
    }
    FUN_011dbc54(&local_20,param_3);
    return;
  }
  if (param_3 == 8) {
    uVar8 = *(uint *)(param_2 + 8);
    if (((DAT_05233970 <= (int)uVar8) && ((int)uVar8 <= DAT_05233980)) &&
       ((uVar9 = *(uint *)(param_2 + 0xc), DAT_05233974 <= (int)uVar9 &&
        (((int)uVar9 <= DAT_05233984 &&
         (uVar9 = (uVar9 & 0x1fffffe) * 0x80 + ((int)uVar8 >> 1), uVar9 >> 0xf == 0)))))) {
      lVar7 = (ulong)(uVar9 >> 5) * 4;
      *(uint *)(&DAT_0514e4e8 + lVar7) =
           *(uint *)(&DAT_0514e4e8 + lVar7) & (1 << (ulong)(uVar8 >> 1 & 0x1f) ^ 0xffffffffU);
    }
  }
  else if (param_3 == 6) goto LAB_01225bdc;
  FUN_011dbc54(param_2,param_3);
  return;
}

