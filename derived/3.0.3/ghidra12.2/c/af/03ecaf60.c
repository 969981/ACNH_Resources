
void FUN_03ecaf60(long param_1,int param_2,long *param_3,long *param_4)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  void *pvVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (0 < *(int *)(*(long *)(param_1 + 8) + 0x10)) {
    uVar17 = 0;
    do {
      uVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + uVar17 * 8) + 0x80))();
      uVar15 = (ulong)uVar5;
      iVar4 = *(int *)(param_1 + 0x38) + -1;
      iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
      if ((iVar1 < iVar4 && uVar17 == iVar1 + 1U) ||
         (*(short *)(*(long *)(param_1 + 0x18) + uVar17 * 0x24 + 0xe) == 0)) {
        if ((-1 < (int)uVar5) &&
           ((iVar4 <= iVar1 || iVar1 + 1U != uVar5 &&
            (*(short *)(*(long *)(param_1 + 0x18) + uVar15 * 0x24 + 0xe) != 0)))) goto LAB_03ecb040;
      }
      else {
LAB_03ecb040:
        uVar3 = param_2 << 0x10 | (uint)uVar17;
        if ((int)param_3[3] < *(int *)((long)param_3 + 0x1c)) {
          plVar9 = (long *)param_3[1];
          if (plVar9 != (long *)0x0) {
            param_3[1] = *plVar9;
          }
          puVar14 = (uint *)(plVar9 + 5);
          *puVar14 = 0;
          plVar9[2] = 0;
          plVar9[3] = 0;
          *plVar9 = (long)&PTR_LAB_04ba54c0;
          plVar9[1] = 0;
          plVar9[6] = 0;
          *(undefined4 *)(plVar9 + 7) = 0;
          *(undefined4 *)(plVar9 + 8) = 0;
          plVar9[9] = 0;
          *(undefined4 *)(plVar9 + 10) = 0;
          plVar9[0xb] = (long)param_3;
          *(uint *)(plVar9 + 4) = uVar3;
          *(int *)(param_3 + 3) = (int)param_3[3] + 1;
          lVar6 = FUN_028c13b8(param_3,*param_3);
          *param_3 = lVar6;
          *(undefined8 *)(lVar6 + 0x18) = 1;
        }
        else {
          for (lVar6 = *param_3; lVar6 != 0; lVar6 = *(long *)(lVar6 + 8)) {
            while (*(uint *)(lVar6 + 0x20) <= uVar3) {
              if (uVar3 <= *(uint *)(lVar6 + 0x20)) {
                pvVar16 = *(void **)(lVar6 + 0x30);
                if (pvVar16 != (void *)0x0) {
                  if (DAT_05ae7600 == 0) {
                    free(pvVar16);
                  }
                  else {
                    plVar9 = (long *)FUN_038cb610(DAT_05ae7600,pvVar16);
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x38))(plVar9,pvVar16);
                    }
                  }
                  *(undefined8 *)(lVar6 + 0x30) = 0;
                  *(undefined4 *)(lVar6 + 0x28) = 0;
                }
                pvVar16 = *(void **)(lVar6 + 0x48);
                if (pvVar16 != (void *)0x0) {
                  if (DAT_05ae7600 == 0) {
                    free(pvVar16);
                  }
                  else {
                    plVar9 = (long *)FUN_038cb610(DAT_05ae7600,pvVar16);
                    if (plVar9 != (long *)0x0) {
                      (**(code **)(*plVar9 + 0x38))(plVar9,pvVar16);
                    }
                  }
                }
                puVar14 = (uint *)(lVar6 + 0x28);
                *(undefined4 *)(lVar6 + 0x28) = 0;
                *(undefined8 *)(lVar6 + 0x30) = 0;
                *(undefined4 *)(lVar6 + 0x38) = 0;
                *(undefined4 *)(lVar6 + 0x40) = 0;
                *(undefined8 *)(lVar6 + 0x48) = 0;
                *(undefined4 *)(lVar6 + 0x50) = 0;
                goto LAB_03ecb1b0;
              }
              lVar6 = *(long *)(lVar6 + 0x10);
              if (lVar6 == 0) goto LAB_03ecb0fc;
            }
          }
LAB_03ecb0fc:
          puVar14 = (uint *)0x0;
        }
LAB_03ecb1b0:
        iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
        if ((*(int *)(param_1 + 0x38) + -1 <= iVar1 || uVar17 != iVar1 + 1) &&
           (*(short *)(*(long *)(param_1 + 0x18) + uVar17 * 0x24 + 0xe) != 0)) {
          *(undefined2 *)(puVar14 + 4) =
               *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar17 * 0x24 + 0xc);
          iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
          if ((iVar1 < *(int *)(param_1 + 0x38) + -1) && (uVar17 == iVar1 + 1)) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar17 * 0x24 + 0xe);
          }
          *(undefined2 *)((long)puVar14 + 0x12) = uVar10;
          iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
          if ((*(int *)(param_1 + 0x38) + -1 <= iVar1) || (uVar17 != iVar1 + 1)) {
            uVar2 = *(ushort *)(*(long *)(param_1 + 0x18) + uVar17 * 0x24 + 0xe);
            uVar18 = (ulong)uVar2;
            if (uVar2 != 0) {
              lVar6 = *(long *)PTR_DAT_04bb2698;
              if (lVar6 == 0) {
                puVar8 = malloc(uVar18 << 2);
              }
              else {
                plVar9 = param_4;
                if (param_4 == (long *)0x0) {
                  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar9 = (long *)(lVar6 + 8);
                  if (lVar7 != 0) {
                    plVar9 = (long *)(lVar7 + 0xa8);
                  }
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) goto LAB_03ecb320;
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar18 << 2,8);
              }
              if (puVar8 != (undefined8 *)0x0) {
                uVar13 = uVar18 & 7;
                puVar12 = puVar8;
                if ((uVar2 & 7) != 0) {
                  puVar11 = puVar8;
                  do {
                    uVar13 = uVar13 - 1;
                    puVar12 = (undefined8 *)((long)puVar11 + 4);
                    *(undefined4 *)puVar11 = 0x7f800000;
                    puVar11 = puVar12;
                  } while (uVar13 != 0);
                }
                if (6 < (uVar18 - 1 & 0x3fffffffffffffff)) {
                  do {
                    *puVar12 = 0x7f8000007f800000;
                    puVar12[1] = 0x7f8000007f800000;
                    puVar12[2] = 0x7f8000007f800000;
                    puVar12[3] = 0x7f8000007f800000;
                    puVar12 = puVar12 + 4;
                  } while (puVar12 != (undefined8 *)((long)puVar8 + uVar18 * 4));
                }
                *puVar14 = (uint)uVar2;
                *(undefined8 **)(puVar14 + 2) = puVar8;
              }
            }
          }
        }
LAB_03ecb320:
        if (((-1 < (int)uVar5) &&
            (iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10),
            *(int *)(param_1 + 0x38) + -1 <= iVar1 || iVar1 + 1U != uVar5)) &&
           (*(short *)(*(long *)(param_1 + 0x18) + uVar15 * 0x24 + 0xe) != 0)) {
          *(undefined2 *)(puVar14 + 10) =
               *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar15 * 0x24 + 0xc);
          iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
          if ((iVar1 < *(int *)(param_1 + 0x38) + -1) && (iVar1 + 1U == uVar5)) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined2 *)(*(long *)(param_1 + 0x18) + uVar15 * 0x24 + 0xe);
          }
          *(undefined2 *)((long)puVar14 + 0x2a) = uVar10;
          iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x10);
          if ((*(int *)(param_1 + 0x38) + -1 <= iVar1) || (iVar1 + 1U != uVar5)) {
            uVar2 = *(ushort *)(*(long *)(param_1 + 0x18) + uVar15 * 0x24 + 0xe);
            uVar15 = (ulong)uVar2;
            if (uVar2 != 0) {
              lVar6 = *(long *)PTR_DAT_04bb2698;
              if (lVar6 == 0) {
                puVar8 = malloc(uVar15 << 2);
              }
              else {
                plVar9 = param_4;
                if (param_4 == (long *)0x0) {
                  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar9 = (long *)(lVar6 + 8);
                  if (lVar7 != 0) {
                    plVar9 = (long *)(lVar7 + 0xa8);
                  }
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) goto LAB_03ecafc0;
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar15 << 2,8);
              }
              if (puVar8 != (undefined8 *)0x0) {
                uVar18 = uVar15 & 7;
                puVar12 = puVar8;
                if ((uVar2 & 7) != 0) {
                  puVar11 = puVar8;
                  do {
                    uVar18 = uVar18 - 1;
                    puVar12 = (undefined8 *)((long)puVar11 + 4);
                    *(undefined4 *)puVar11 = 0x7f800000;
                    puVar11 = puVar12;
                  } while (uVar18 != 0);
                }
                if (6 < (uVar15 - 1 & 0x3fffffffffffffff)) {
                  do {
                    *puVar12 = 0x7f8000007f800000;
                    puVar12[1] = 0x7f8000007f800000;
                    puVar12[2] = 0x7f8000007f800000;
                    puVar12[3] = 0x7f8000007f800000;
                    puVar12 = puVar12 + 4;
                  } while (puVar12 != (undefined8 *)((long)puVar8 + uVar15 * 4));
                }
                puVar14[6] = (uint)uVar2;
                *(undefined8 **)(puVar14 + 8) = puVar8;
              }
            }
          }
        }
      }
LAB_03ecafc0:
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)*(int *)(*(long *)(param_1 + 8) + 0x10));
  }
  return;
}

