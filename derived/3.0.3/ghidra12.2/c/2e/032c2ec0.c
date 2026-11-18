
void FUN_032c2ec0(long param_1,float *param_2)

{
  int iVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  float local_d4;
  float fStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined1 auStack_94 [64];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  
  if (param_1 == 0) {
    return;
  }
  FUN_0037d078(&local_e0);
  puVar6 = PTR_DAT_04bc8e90;
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  auVar3 = *(undefined1 (*) [12])(param_1 + 0x70);
  fVar15 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  auVar2 = *(undefined1 (*) [12])(param_1 + 0x80);
  fVar10 = auVar2._0_4_;
  fVar12 = auVar2._4_4_;
  fVar14 = SUB124(*(undefined1 (*) [12])(param_1 + 0x80),8);
  fVar11 = auVar3._0_4_;
  fVar13 = auVar3._4_4_;
  fVar16 = SUB124(*(undefined1 (*) [12])(param_1 + 0x70),8);
  fVar17 = (float)CONCAT22(uStack_d6,CONCAT11(uStack_d7,uStack_d8));
  *(ulong *)param_2 =
       CONCAT44(fVar15 + fVar10 * fVar17 + fVar12 * local_e0._4_4_ + fVar14 * 0.0,
                fVar18 + fVar11 * (float)local_e0 + fVar13 * local_d4 + fVar16 * 0.0);
  *(ulong *)(param_2 + 2) =
       CONCAT44(fVar15 + fVar10 * (float)local_e0 + fVar12 * local_d4 + fVar14 * 0.0,
                fVar18 + fVar11 * fVar17 + fVar13 * local_e0._4_4_ + fVar16 * 0.0);
  if (*(char *)(*(long *)puVar6 + 0x4c8) != '\0') {
    puVar9 = (undefined8 *)(*(long *)puVar6 + 0x4cc);
    goto LAB_032c30c4;
  }
  lVar4 = *(long *)PTR_DAT_04bb2908;
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x78) == '\0')) {
    puVar7 = (undefined8 *)0x0;
    if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) != 0) {
      iVar1 = 3;
      if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) < 4) {
        iVar1 = 0;
      }
      lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)iVar1 * 8);
      puVar7 = (undefined8 *)0x0;
      if (lVar5 != 0) {
        if (((*(ushort *)(lVar5 + 0x8a) & 0x21) == 0 || (*(ushort *)(lVar5 + 0x8a) & 2) == 0) ||
           (*(long *)(lVar5 + 0x1f8) == 0)) {
          puVar6 = PTR_DAT_04bd13c0;
          if (*(undefined **)(lVar5 + 0x78) != (undefined *)0x0) {
            puVar6 = *(undefined **)(lVar5 + 0x78);
          }
        }
        else {
          puVar6 = (undefined *)(*(long *)(lVar5 + 0x1f8) + 8);
        }
        puVar7 = (undefined8 *)(puVar6 + 8);
      }
    }
    puVar9 = &DAT_0572b6a8;
    if (puVar7 != (undefined8 *)0x0) {
      puVar9 = puVar7;
    }
    if (lVar4 != 0) goto LAB_032c3028;
  }
  else {
    puVar9 = (undefined8 *)(lVar4 + 0x48);
LAB_032c3028:
    if (*(char *)(lVar4 + 0x78) != '\0') goto LAB_032c30c4;
  }
  local_e0._0_4_ = 4.2039e-45;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) != 0) {
    iVar1 = 3;
    if (*(uint *)(*(long *)PTR_DAT_04bbdb78 + 0x20) < 4) {
      iVar1 = 0;
    }
    lVar4 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdb78 + 0x28) + (long)iVar1 * 8);
    if ((lVar4 != 0) && (plVar8 = *(long **)(lVar4 + 0x80), plVar8 != (long *)0x0)) {
      if ((char)plVar8[1] == '\0') {
        if (*(char *)((long)plVar8 + 9) == '\0') goto LAB_032c30c4;
      }
      else {
        (**(code **)(*plVar8 + 0x58))(plVar8,(long)plVar8 + 0xc);
        *(undefined2 *)(plVar8 + 1) = 0x100;
      }
      (**(code **)(*plVar8 + 0x60))
                (plVar8,(long)plVar8 + 0x4c,(long)plVar8 + 0xc,*(undefined4 *)((long)plVar8 + 0x8c))
      ;
      *(undefined1 *)((long)plVar8 + 9) = 0;
    }
  }
LAB_032c30c4:
  local_48 = 0x43960000c3960000;
  local_e0 = PTR_DAT_04bd0ec0 + 0x10;
  local_54 = *(undefined4 *)PTR_DAT_04bd0ea8;
  local_50 = *(undefined4 *)PTR_DAT_04bd0eb0;
  uStack_4c = *(undefined4 *)PTR_DAT_04bd0eb8;
  uStack_d8 = 1;
  uStack_d7 = 1;
  fStack_34 = ((float)DAT_0572df98 - (float)DAT_0572df90) * 0.5;
  local_40 = (DAT_0572df98._4_4_ - DAT_0572df90._4_4_) * 0.5;
  fStack_3c = -((DAT_0572df98._4_4_ - DAT_0572df90._4_4_) * 0.5);
  local_38 = -(((float)DAT_0572df98 - (float)DAT_0572df90) * 0.5);
  FUN_038e5b6c(&local_e0,&local_d4);
  uStack_d8 = 0;
  uStack_d7 = 1;
  (**(code **)(local_e0 + 0x60))(&local_e0,auStack_94,&local_d4,local_54);
  fVar17 = (float)uStack_cc;
  fVar12 = (float)uStack_bc;
  fVar10 = (float)local_c4;
  fVar11 = (float)((ulong)local_c4 >> 0x20);
  fVar28 = (float)puVar9[5];
  fVar29 = (float)((ulong)puVar9[5] >> 0x20);
  fVar26 = (float)puVar9[4];
  fVar27 = (float)((ulong)puVar9[4] >> 0x20);
  fVar15 = (float)puVar9[1];
  fVar20 = (float)((ulong)puVar9[1] >> 0x20);
  fVar13 = (float)*puVar9;
  fVar14 = (float)((ulong)*puVar9 >> 0x20);
  fVar24 = (float)puVar9[3];
  fVar25 = (float)((ulong)puVar9[3] >> 0x20);
  fVar22 = (float)puVar9[2];
  fVar23 = (float)((ulong)puVar9[2] >> 0x20);
  fVar16 = fVar13 * fVar10 + fVar22 * fVar11 + fVar26 * fVar12 + 0.0;
  fVar18 = fVar14 * fVar10 + fVar23 * fVar11 + fVar27 * fVar12 + 0.0;
  fVar19 = fVar15 * fVar10 + fVar24 * fVar11 + fVar28 * fVar12 + 0.0;
  fVar21 = (float)((ulong)uStack_bc >> 0x20) + fVar20 * fVar10 + fVar25 * fVar11 + fVar29 * fVar12;
  fVar10 = fVar13 * local_d4 + fVar22 * fStack_d0 + fVar26 * fVar17 + 0.0;
  fVar11 = fVar14 * local_d4 + fVar23 * fStack_d0 + fVar27 * fVar17 + 0.0;
  fVar12 = fVar15 * local_d4 + fVar24 * fStack_d0 + fVar28 * fVar17 + 0.0;
  fVar13 = (float)((ulong)uStack_cc >> 0x20) +
           fVar20 * local_d4 + fVar25 * fStack_d0 + fVar29 * fVar17;
  fVar14 = param_2[3] * fVar18 + *param_2 * fVar16 + fVar19 * 0.0 + fVar21 * 0.0;
  fVar16 = param_2[1] * fVar18 + param_2[2] * fVar16 + fVar19 * 0.0 + fVar21 * 0.0;
  fVar17 = fVar16 * 0.0 +
           (param_2[3] * fVar11 + *param_2 * fVar10 + fVar12 * 0.0 + fVar13 * 0.0) * 640.0 + 640.0;
  fVar12 = fVar14 * 0.0 +
           (param_2[1] * fVar11 + param_2[2] * fVar10 + fVar12 * 0.0 + fVar13 * 0.0) * 640.0 + 640.0
  ;
  fVar13 = fVar16 * -360.0 + fVar17 * 0.0 + 360.0;
  fVar10 = fVar14 * -360.0 + fVar12 * 0.0 + 360.0;
  fVar11 = fVar12;
  if (fVar12 - fVar17 < 0.0) {
    fVar11 = fVar17;
    fVar17 = fVar12;
  }
  fVar12 = fVar13;
  if (fVar13 - fVar10 < 0.0) {
    fVar12 = fVar10;
    fVar10 = fVar13;
  }
  *param_2 = fVar17;
  param_2[1] = fVar10;
  param_2[2] = fVar11;
  param_2[3] = fVar12;
  return;
}

