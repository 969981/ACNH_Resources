
void FUN_01df83c0(long *param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  wchar16 wVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int local_8c;
  undefined **local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 local_74 [15];
  undefined2 local_56;
  
  if (**(char **)(*(long *)PTR_DAT_04bb21d0 + 0x2070) == '\0') {
LAB_01df8424:
    local_8c = 0;
  }
  else {
    iVar4 = *(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4);
    if (iVar4 == 2) {
      plVar8 = *(long **)(DAT_05ae6a60 + 0x40);
    }
    else if (iVar4 == 1) {
      plVar8 = *(long **)(DAT_05ae6a60 + 0x48);
    }
    else {
      if (iVar4 != 0) goto LAB_01df8424;
      plVar8 = *(long **)(DAT_05ae6a60 + 0x38);
    }
    local_8c = (**(code **)(*plVar8 + 0x68))();
  }
  if (param_1 != (long *)0x0) {
    uVar14 = (uint)(local_8c * 0xaf985) >> 1 & 0x55555 | local_8c * 0x5f30a & 0xaaaaaU;
    uVar14 = (uVar14 & 0x33333333) << 2 | uVar14 >> 2 & 0x33333333;
    uVar7 = uVar14 >> 8 & 0xf0f0f0f | uVar14 & 0xf0f0f0f0;
    nn::crypto::GenerateSha1Hash(&local_88,0x14,&local_8c,4);
    local_56 = 0;
    local_80 = local_74;
    uVar14 = (int)(CONCAT44(uVar14,(uVar7 >> 8 | (uVar7 & 0xff00ff) << 8) << 0x10) >> 0x10) *
             0x8174d & 0xfffffU | ((uint)local_88 >> 0x1c) << 0x14;
    uVar11 = (ulong)uVar14;
    local_78 = 0x10;
    local_74[0] = 0;
    local_88 = &PTR_LAB_049ae4f8;
    uVar12 = uVar11;
    if (0x1d < uVar14) {
      do {
        uVar11 = uVar12 / 0x1e;
        uVar14 = (uint)uVar12;
        wVar6 = L"0123456789BCDFGHJKLMNPQRSTVWXY"[uVar14 + (int)(uVar12 / 0x1e) * -0x1e];
        (*(code *)local_88[3])(&local_88);
        lVar10 = 0;
        do {
          if (local_80[lVar10] == 0) goto LAB_01df85c4;
          if (local_80[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_01df85c4;
          }
          if (local_80[lVar10 + 2] == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_01df85c4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_01df85c4:
        if ((int)lVar10 < local_78 + -1) {
          local_80[(int)lVar10] = wVar6;
          (local_80 + (int)lVar10)[1] = L'\0';
        }
        uVar12 = uVar11;
      } while (899 < uVar14);
    }
    wVar6 = L"0123456789BCDFGHJKLMNPQRSTVWXY"[uVar11];
    (*(code *)local_88[3])(&local_88);
    lVar10 = 0;
    do {
      if (local_80[lVar10] == 0) goto LAB_01df863c;
      if (local_80[lVar10 + 1] == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_01df863c;
      }
      if (local_80[lVar10 + 2] == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_01df863c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01df863c:
    if ((int)lVar10 < local_78 + -1) {
      local_80[(int)lVar10] = wVar6;
      (local_80 + (int)lVar10)[1] = L'\0';
    }
    lVar9 = param_1[2];
    uVar14 = (int)lVar9 - 1;
    (*(code *)local_88[3])(&local_88);
    lVar10 = 0;
    do {
      if (local_80[lVar10] == 0) goto LAB_01df86bc;
      if (local_80[lVar10 + 1] == 0) {
        lVar10 = lVar10 + 1;
        goto LAB_01df86bc;
      }
      if (local_80[lVar10 + 2] == 0) {
        lVar10 = lVar10 + 2;
        goto LAB_01df86bc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01df86bc:
    uVar7 = (uint)lVar10;
    if ((int)lVar9 <= (int)(uint)lVar10) {
      uVar7 = uVar14;
    }
    uVar12 = (ulong)uVar7;
    *(undefined2 *)param_1[1] = 0;
    if ((int)uVar7 < (int)uVar14) {
      uVar13 = uVar7;
      do {
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar10 = param_1[1];
        uVar11 = 0;
        do {
          if (*(short *)(lVar10 + uVar11 * 2) == 0) goto LAB_01df8744;
          lVar9 = lVar10 + uVar11 * 2;
          if (*(short *)(lVar9 + 2) == 0) {
            uVar11 = uVar11 + 1;
            goto LAB_01df8744;
          }
          if (*(short *)(lVar9 + 4) == 0) {
            uVar11 = uVar11 + 2;
            goto LAB_01df8744;
          }
          uVar11 = uVar11 + 3;
        } while (uVar11 != 0x80001);
        uVar11 = 0;
LAB_01df8744:
        if ((int)uVar11 < (int)param_1[2] + -1) {
          *(undefined4 *)
           (lVar10 + (-(uVar11 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar11 & 0xffffffff) << 1)) =
               0x30;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
    }
    if (0 < (int)uVar7) {
      do {
        uVar11 = uVar12 - 1;
        (*(code *)local_88[3])(&local_88);
        lVar10 = 0;
        do {
          if (local_80[lVar10] == 0) goto LAB_01df87e4;
          if (local_80[lVar10 + 1] == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_01df87e4;
          }
          if (local_80[lVar10 + 2] == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_01df87e4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_01df87e4:
        puVar2 = &DAT_0419b686;
        if ((int)uVar11 <= (int)lVar10) {
          puVar2 = local_80 + (uVar11 & 0xffffffff);
        }
        uVar5 = *puVar2;
        (**(code **)(*param_1 + 0x18))(param_1);
        lVar9 = param_1[1];
        lVar10 = 0;
        do {
          if (*(short *)(lVar9 + lVar10 * 2) == 0) goto LAB_01df8854;
          lVar3 = lVar9 + lVar10 * 2;
          if (*(short *)(lVar3 + 2) == 0) {
            lVar10 = lVar10 + 1;
            goto LAB_01df8854;
          }
          if (*(short *)(lVar3 + 4) == 0) {
            lVar10 = lVar10 + 2;
            goto LAB_01df8854;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_01df8854:
        if ((int)lVar10 < (int)param_1[2] + -1) {
          puVar2 = (undefined2 *)(lVar9 + (long)(int)lVar10 * 2);
          *puVar2 = uVar5;
          puVar2[1] = 0;
        }
        bVar1 = 1 < (long)uVar12;
        uVar12 = uVar11;
      } while (bVar1);
    }
  }
  return;
}

