
void FUN_03821310(long param_1,undefined1 *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  byte bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  ulong uVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined *local_60;
  uint local_58;
  uint uStack_54;
  short local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  
  local_58 = *param_3;
  if (((local_58 & 0x80000001) == 1) || (uStack_54 = param_3[1], (uStack_54 & 0x80000001) == 1)) {
LAB_038214fc:
    *param_2 = 0;
    return;
  }
  local_60 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_78 = &PTR_LAB_049ffa38;
  if (DAT_05aed670 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar16 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  if (DAT_0519d040 == 0) goto LAB_038214fc;
  psVar10 = (short *)FUN_01a5010c(&local_78,0,&local_60);
  lVar13 = DAT_05150358;
  local_36 = (undefined1)psVar10[1];
  local_38 = *psVar10;
  local_35 = *(undefined1 *)((long)psVar10 + 3);
  local_34 = *(undefined4 *)(psVar10 + 2);
  if ((((((ushort)(local_38 + 3U) < 2) || (DAT_05150358 == 0)) ||
       (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
      ((*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0 || (*(long *)(DAT_05150358 + 0x488) == 0)
       ))) || ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0 ||
               ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
                (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))))) goto LAB_038214fc;
  uVar9 = FUN_0277d6c4(&local_38);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar9) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_038214fc;
  iVar8 = FUN_0277d6c4(&local_38);
  FUN_0124c030(auStack_90,&local_38);
  uVar11 = FUN_0123d890(local_80,4);
  if (iVar8 == 0xed08) {
    bVar5 = true;
  }
  else {
    iVar8 = FUN_0123db50(auStack_88,local_80);
    bVar5 = iVar8 - 0xbU < 7;
  }
  iVar8 = FUN_0123db50(auStack_88,local_80);
  if (((iVar8 - 0x23U < 9) || (iVar8 = FUN_0123db50(auStack_88,local_80), iVar8 - 0x12U < 6)) ||
     ((iVar8 = FUN_0123db50(auStack_88,local_80), iVar8 == 0x1f &&
      (bVar6 = FUN_0124dff0(auStack_90), 1 < bVar6)))) {
    bVar18 = true;
  }
  else {
    iVar8 = FUN_0123db50(auStack_88,local_80);
    if (iVar8 - 0x18U < 7) {
      bVar6 = FUN_0124dff0(auStack_90);
      bVar18 = 1 < bVar6;
    }
    else {
      bVar18 = false;
    }
  }
  iVar8 = FUN_0123db50(auStack_88,local_80);
  if ((uVar11 & 1) == 0) {
    if (!(bool)(bVar5 | bVar18)) goto LAB_038216c8;
  }
  else if ((((iVar8 != DAT_05adde70) && (iVar8 != DAT_05adde74)) && (iVar8 != DAT_05adde78)) &&
          (((iVar8 != DAT_05adde7c && (iVar8 != DAT_05adde80)) &&
           ((iVar8 != DAT_05adde84 && (iVar8 != DAT_05adde88)))))) goto LAB_038216c8;
  lVar13 = *(long *)(param_1 + 0x10);
  if (((*(char *)(lVar13 + 8) != '\0') &&
      (uVar9 = param_3[1] - *(int *)(lVar13 + 0x10), -1 < (int)uVar9)) &&
     (iVar3 = *(int *)(lVar13 + 0x60), (int)uVar9 < iVar3)) {
    lVar17 = *(long *)(param_2 + 8);
    plVar14 = *(long **)(lVar13 + 0x58);
    if (uVar9 < *(uint *)(lVar13 + 0x68)) {
      iVar1 = *(int *)(lVar13 + 100) + uVar9;
      iVar2 = 0;
      if (iVar3 <= iVar1) {
        iVar2 = iVar3;
      }
      plVar14 = plVar14 + (iVar1 - iVar2);
    }
    lVar13 = *plVar14;
    plVar14 = (long *)(lVar13 + -8);
    do {
      lVar13 = *(long *)(lVar13 + 8);
      if ((long *)(lVar13 + -8) == plVar14) break;
      lVar15 = *(long *)(lVar13 + -8);
      sVar4 = *(short *)(lVar15 + 8);
      if (*param_3 == (int)sVar4) {
        fVar19 = (float)(int)sVar4 * 5.0 + 2.5;
        fVar21 = (float)(int)*(short *)(lVar15 + 10) * 5.0 + 2.5;
        *(float *)(lVar17 + 0x18) = fVar19;
        *(float *)(lVar17 + 0x20) = fVar21;
        fVar20 = *(float *)(lVar15 + 0xc);
        *(float *)(lVar17 + 0x20) = fVar21 + 2.5;
        *(float *)(lVar17 + 0x18) = fVar19 + 2.5;
        *(float *)(lVar17 + 0x1c) = fVar20;
        if ((uVar11 & 1) == 0) {
          uVar7 = 4;
          if (!bVar5) {
            uVar7 = 5;
          }
          if ((bool)(bVar5 | bVar18)) goto switchD_0382177c_caseD_1;
        }
        else {
          *(float *)(lVar17 + 0x1c) = fVar20 + *(float *)(param_1 + 8);
          uVar7 = 0;
          switch(iVar8) {
          case 1:
          case 9:
          case 10:
          case 0x20:
            break;
          default:
            goto switchD_0382177c_caseD_2;
          case 3:
            uVar7 = 1;
            break;
          case 5:
            uVar7 = 2;
            break;
          case 7:
            uVar7 = 3;
          }
switchD_0382177c_caseD_1:
          *(undefined1 *)(lVar17 + 0xc) = uVar7;
        }
switchD_0382177c_caseD_2:
        uVar7 = FUN_01240210(&local_38);
        uVar12 = 1;
        *(undefined1 *)(lVar17 + 0xd) = uVar7;
        goto LAB_038216cc;
      }
    } while ((int)sVar4 <= (int)*param_3);
  }
LAB_038216c8:
  uVar12 = 0;
LAB_038216cc:
  *param_2 = uVar12;
  return;
}

