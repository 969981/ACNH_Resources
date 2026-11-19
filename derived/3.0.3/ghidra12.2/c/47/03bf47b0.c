
void FUN_03bf47b0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 extraout_w1;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  
  lVar4 = (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
  if ((*(char *)(lVar4 + 0x78) != '\0') && ((*(byte *)(param_1 + 0x1b) >> 3 & 1) == 0)) {
    if ((uint *)param_2[1] == (uint *)0x0) {
      puVar10 = &DAT_0407ebb1;
    }
    else {
      uVar11 = (ulong)*(uint *)param_2[1];
      puVar13 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | uVar11);
      puVar10 = puVar13 + 0x20000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar11) {
        puVar10 = puVar13;
      }
    }
    uVar11 = FUN_03bf46a8(param_1,"emit(%s)",puVar10);
    if (((((uVar11 & 1) != 0) && ((*(byte *)(param_1 + 0x1b) >> 1 & 1) == 0)) && (param_2[1] != 0))
       && (uVar11 = (**(code **)(*param_1 + 0x60))(param_1,param_2), (uVar11 & 1) == 0)) {
      plVar5 = (long *)(**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
      plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
      (**(code **)(*plVar5 + 0x10))();
      plVar6 = (long *)(**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
      if (*(int *)((long)plVar6 + 0x2c) != 0) {
        iVar12 = (int)plVar6[6];
        uVar16 = 0;
LAB_03bf48d4:
        plVar7 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,iVar12);
        iVar12 = 0;
        if ((int)plVar6[6] + 1U < *(uint *)((long)plVar6 + 0x2c)) {
          iVar12 = (int)plVar6[6] + 1;
        }
        *(int *)(plVar6 + 6) = iVar12;
        if ((int)plVar7[4] != 0) goto code_r0x03bf4900;
        iVar1 = *(int *)((long)plVar6 + 0x34);
        iVar12 = 1;
        if (1 < iVar1 + 1U) {
          iVar12 = iVar1 + 1;
        }
        *(int *)((long)plVar6 + 0x34) = iVar12;
        *(int *)(plVar7 + 4) = iVar1;
        plVar7[0xb] = 0;
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[8] = 0;
        plVar7[9] = 0;
        *(undefined4 *)(plVar7 + 1) = 2;
        *(undefined4 *)(plVar7 + 7) = 0xffffffff;
        *(undefined4 *)(plVar7 + 0x12) = 0x3f800000;
        (**(code **)(*plVar7 + 0x10))();
        lVar4 = param_2[1];
        if ((char)param_2[2] != '\0') {
          *(uint *)(plVar7 + 1) = *(uint *)(plVar7 + 1) | 1;
        }
        uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
        lVar8 = (**(code **)(*param_2 + 0x18))(param_2);
        lVar9 = (**(code **)(*param_2 + 0x20))(param_2);
        *(undefined4 *)(plVar7 + 7) = uVar3;
        plVar7[8] = lVar8;
        plVar7[9] = lVar9;
        *(undefined1 *)(plVar7 + 10) = extraout_w1;
        if ((long *)plVar7[0xd] != plVar7 + 0xc) {
          lVar8 = (long)*(int *)((long)plVar7 + 0x74);
          plVar6 = (long *)(plVar7[0xd] - lVar8);
          do {
            lVar9 = plVar7[9];
            lVar14 = plVar7[10];
            plVar6[7] = plVar7[8];
            plVar6[8] = lVar9;
            *(char *)(plVar6 + 9) = (char)lVar14;
            (**(code **)(*plVar6 + 0x68))(plVar6);
            plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
          } while (plVar6 != (long *)((long)(plVar7 + 0xc) - lVar8));
        }
        if ((long *)plVar7[0x10] != plVar7 + 0xf) {
          lVar8 = (long)*(int *)((long)plVar7 + 0x8c);
          plVar6 = (long *)(plVar7[0x10] - lVar8);
          do {
            lVar9 = plVar7[9];
            lVar14 = plVar7[10];
            plVar6[7] = plVar7[8];
            plVar6[8] = lVar9;
            *(char *)(plVar6 + 9) = (char)lVar14;
            (**(code **)(*plVar6 + 0x68))(plVar6);
            plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
          } while (plVar6 != (long *)((long)(plVar7 + 0xf) - lVar8));
        }
        plVar7[5] = (long)param_1;
        plVar7[6] = lVar4;
        uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
        *(undefined1 *)((long)plVar7 + 0x94) = uVar2;
        plVar6 = (long *)FUN_03be5c64(plVar7,lVar4);
        if (plVar6 == (long *)0x0) {
LAB_03bf4b2c:
          (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
          FUN_03be68a0(plVar7);
          goto LAB_03bf4b48;
        }
        (**(code **)(*plVar7 + 0x20))(plVar7);
        uVar11 = (**(code **)(*plVar6 + 0x20))(plVar6);
        if ((uVar11 & 1) == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6);
          plVar7[0xb] = 0;
          goto LAB_03bf4b2c;
        }
        plVar7[0xb] = (long)plVar6;
        plVar15 = param_1 + 1;
        lVar4 = *plVar15;
        plVar6 = (long *)((long)*(int *)((long)param_1 + 0x1c) + (long)plVar7);
        *plVar15 = (long)plVar6;
        *plVar6 = lVar4;
        plVar6[1] = (long)plVar15;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 8) = plVar6;
        }
        *(int *)(param_1 + 3) = (int)param_1[3] + 1;
        if (param_3 != (long *)0x0) {
          *param_3 = (long)plVar7;
          *(int *)(param_3 + 1) = (int)plVar7[4];
        }
        *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) | 4;
        goto LAB_03bf4b4c;
      }
LAB_03bf490c:
      (**(code **)(**(long **)(param_1[6] + 0x18) + 0x20))();
LAB_03bf4b48:
      plVar7 = (long *)0x0;
LAB_03bf4b4c:
      (**(code **)(*plVar5 + 0x18))(plVar5);
      if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bf4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x68))(param_1,param_2,plVar7);
        return;
      }
    }
  }
  return;
code_r0x03bf4900:
  uVar16 = uVar16 + 1;
  if (*(uint *)((long)plVar6 + 0x2c) <= uVar16) goto LAB_03bf490c;
  goto LAB_03bf48d4;
}

