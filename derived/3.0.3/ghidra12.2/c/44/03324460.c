
void FUN_03324460(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_58;
  
  param_1[0x2fa] = param_2;
  puVar3 = PTR_DAT_04bc1118;
  if (((param_1[0x67] == param_2) && (plVar7 = param_1 + 0x47, (long *)param_1[5] != plVar7)) &&
     ((long *)param_1[6] != plVar7)) {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bc1118 + 0x20);
    if (((*(char *)(lVar8 + 0x16406) == '\0') ||
        (*(int *)(lVar8 + 0xcf4) == *(int *)(lVar8 + 0xcf8))) &&
       ((lVar8 = param_1[1], lVar8 == 0 || (*(int *)(lVar8 + 0x648) <= *(int *)(lVar8 + 0x644))))) {
      lVar8 = param_1[100];
      if ((lVar8 != 0) && (*(char *)(lVar8 + 2000) == '\0')) {
        lVar12 = lVar8 + 0x230;
        if ((*(long *)(lVar8 + 0x20) != lVar12) && (*(long *)(lVar8 + 0x20) != lVar8 + 0x2d8)) {
          FUN_03292228(*(undefined8 *)(lVar8 + 0x4f8));
          lVar9 = *(long *)(lVar8 + 0x20);
          if (((lVar9 != lVar12) && (lVar9 != lVar8 + 0x2d8)) && (lVar9 != lVar8 + 0x38)) {
            if (((lVar9 != 0) && (-1 < *(int *)(lVar8 + 0x30))) &&
               (*(long **)(lVar9 + 0x80) != (long *)0x0)) {
              (**(code **)(**(long **)(lVar9 + 0x80) + 0x20))();
            }
            *(long *)(lVar8 + 0x28) = lVar12;
            *(undefined4 *)(lVar8 + 0x30) = 0xffffffff;
          }
          plVar13 = (long *)param_1[0x72];
          *(undefined1 *)(param_1 + 0x2f9) = 0;
          lVar8 = DAT_0572ba48;
          if (*plVar13 == 0) {
            puVar11 = (undefined8 *)(DAT_0572ba48 + 8);
            puVar4 = (undefined8 *)*puVar11;
            if ((undefined8 *)*puVar11 == (undefined8 *)0x0) {
              *puVar11 = plVar13;
            }
            else {
              do {
                puVar11 = puVar4;
                puVar4 = (undefined8 *)puVar11[2];
              } while ((undefined8 *)puVar11[2] != (undefined8 *)0x0);
              puVar11[2] = plVar13;
              plVar13[1] = (long)puVar11;
              puVar11 = (undefined8 *)*puVar11;
            }
            *plVar13 = (long)puVar11;
            FUN_0328fad0(lVar8);
            uVar10 = local_58 >> 0x20;
            local_58 = local_58 & 0xffffffff00000000;
            if ((*(uint *)((long)plVar13 + 0x2c) & 1) == 0) {
              *(undefined8 *)(lVar8 + 0xa8) = 0;
              local_58 = CONCAT44((int)uVar10,1);
              *(byte *)(lVar8 + 0xd4) = *(byte *)(lVar8 + 0xd4) & 0xfd;
            }
          }
          FUN_032924d0(param_1[0x72],param_1[0x73]);
          (**(code **)(*param_1 + 0x118))(param_1);
        }
      }
      lVar8 = *(long *)(DAT_05734b90 + 8);
      if (lVar8 != 0) {
        local_58 = 0;
        lVar12 = 0;
        if (*(char *)(lVar8 + 0x38) != '\0') {
          lVar12 = lVar8 + 8;
        }
        FUN_03366350(DAT_05734b90,lVar12,s_Decide_OK_04b207cb,0,&local_58,0);
      }
      lVar8 = DAT_0572b7f0;
      lVar12 = *(long *)puVar3;
      if ((*(int *)(lVar12 + 0x494) <= *(int *)(lVar12 + 0x474)) && ((long *)param_1[5] != plVar7))
      {
        cVar2 = *(char *)(lVar12 + 0xbe8);
        if (cVar2 != '\0') {
          lVar9 = param_1[100];
          if ((*(long *)(lVar9 + 0x20) == lVar9 + 0xe0) || (*(long *)(lVar9 + 0x28) == lVar9 + 0xe0)
             ) goto LAB_03324498;
        }
        if (0 < *(int *)(DAT_0572b7f0 + 4)) {
          plVar7 = (long *)(DAT_0572b7f0 + 8);
          uVar10 = 0;
          plVar13 = plVar7;
          do {
            bVar5 = 0xf < uVar10;
            uVar10 = uVar10 + 1;
            plVar1 = plVar13;
            if (bVar5) {
              plVar1 = plVar7;
            }
            plVar13 = plVar13 + 1;
            *(undefined8 *)(*plVar1 + 0x30) = 0;
          } while ((long)uVar10 < (long)*(int *)(lVar8 + 4));
          cVar2 = *(char *)(lVar12 + 0xbe8);
        }
        if (cVar2 == '\0') {
          FUN_032fc524(lVar12,0);
        }
        else {
          FUN_03302efc(*(undefined8 *)(lVar12 + 0x20),param_1 + 0x74);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x50))(param_1);
    }
  }
LAB_03324498:
  if ((param_1[0x68] == param_2) &&
     (((**(code **)(*param_1 + 0x30))(param_1,0), param_3 == 0 || ((param_3 & 1) != 0)))) {
    *(undefined4 *)((long)param_1 + 0x15ec) =
         *(undefined4 *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e8);
  }
  if ((param_1[0x6a] != 0) && (param_1[0x6a] == param_2)) {
    (**(code **)(*param_1 + 0x48))(param_1,0,0);
  }
  if ((param_1[0x69] != 0) && (param_1[0x69] == param_2)) {
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  if ((param_1[0x6c] != 0) && (param_1[0x6c] == param_2)) {
    lVar12 = *(long *)PTR_DAT_04bb4fb0;
    uVar6 = FUN_03368ef0(DAT_05734ea0,0);
    lVar8 = *(long *)(lVar12 + 8);
    if (lVar8 != 0) {
      lVar9 = 0;
      if (*(char *)(lVar8 + 0x38) != '\0') {
        lVar9 = lVar8 + 8;
      }
      FUN_03366350(lVar12,lVar9,s_Decide_ChangeKeyTop_04b207b6,1,uVar6,0);
    }
    if ((long *)param_1[5] != param_1 + 0x47) {
      lVar8 = *(long *)PTR_DAT_04bc1118;
      lVar12 = *(long *)(lVar8 + 0x20);
      *(undefined1 *)(lVar12 + 0x16405) = 1;
      lVar12 = *(long *)(lVar12 + 0x518);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x710) = 0;
      }
      lVar12 = DAT_0572b7f0;
      if (0 < *(int *)(DAT_0572b7f0 + 4)) {
        plVar7 = (long *)(DAT_0572b7f0 + 8);
        uVar10 = 0;
        plVar13 = plVar7;
        do {
          bVar5 = 0xf < uVar10;
          uVar10 = uVar10 + 1;
          plVar1 = plVar13;
          if (bVar5) {
            plVar1 = plVar7;
          }
          plVar13 = plVar13 + 1;
          *(undefined8 *)(*plVar1 + 0x30) = 0;
        } while ((long)uVar10 < (long)*(int *)(lVar12 + 4));
      }
      FUN_032fc0c8(lVar8,0);
      if (((param_1[5] != 0) && (-1 < (int)param_1[7])) &&
         (plVar7 = *(long **)(param_1[5] + 0x80), plVar7 != (long *)0x0)) {
        (**(code **)(*plVar7 + 0x20))();
      }
      param_1[6] = (long)(param_1 + 0x47);
      *(undefined4 *)(param_1 + 7) = 0xffffffff;
    }
  }
  if (param_1[0x60] != param_2) {
    return;
  }
  local_58 = local_58 & 0xffffffff00000000;
  bVar5 = (*(ushort *)(param_2 + 0x578) & 1) == 0;
  uVar6 = 0x15;
  if (bVar5) {
    uVar6 = 0x16;
  }
  FUN_032e4b30(param_1[1],uVar6,0);
                    /* WARNING: Could not recover jumptable at 0x03324744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))(param_1,bVar5);
  return;
}

