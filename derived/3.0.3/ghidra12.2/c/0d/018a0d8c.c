
undefined8 FUN_018a0d8c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  
  uVar7 = (**(code **)(*param_1 + 0xf8))();
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*param_1 + 0x120))(param_1);
    if ((uVar7 & 1) == 0) goto LAB_018a0f94;
    lVar10 = 0x25;
LAB_018a0e24:
    (**(code **)(*param_1 + lVar10 * 8))(param_1);
LAB_018a0e34:
    uVar8 = 1;
  }
  else {
    if ((*(char *)((long)param_1 + 0x38d) != '\0') &&
       (iVar9 = *(int *)((long)param_1 + 0x27c) + 1, (int)param_1[0x54] != iVar9)) {
      if (param_1[0x77] == 0) {
LAB_018a0e3c:
        iVar5 = 0;
      }
      else {
        uVar7 = param_1[0x79] & 1;
        pcVar11 = (code *)param_1[0x78];
        if (uVar7 == 0 && pcVar11 == (code *)0x0) goto LAB_018a0e3c;
        plVar1 = (long *)(param_1[0x77] + (param_1[0x79] >> 1));
        if (uVar7 != 0) {
          pcVar11 = *(code **)(pcVar11 + *plVar1);
        }
        iVar5 = (*pcVar11)(plVar1,param_1 + 0x72);
        iVar9 = *(int *)((long)param_1 + 0x27c) + 1;
      }
      *(int *)((long)param_1 + 0x29c) = iVar5;
      if (iVar5 != iVar9) {
        uVar2 = *(uint *)(param_1 + 0x54);
        if (*(uint *)(param_1 + 0x51) <= uVar2) {
          uVar2 = 0;
        }
        if (*(int *)(param_1[0x52] + (long)(int)uVar2 * 0x30 + 8) <= iVar5) goto LAB_018a0e34;
        uVar7 = (**(code **)(*param_1 + 0x100))(param_1);
        if ((uVar7 & 1) != 0) {
          uVar7 = (**(code **)(*param_1 + 0x170))(param_1);
          if ((uVar7 & 1) == 0) {
            if (0 < (int)param_1[0x7a]) {
              iVar9 = 0;
              do {
                uVar7 = (**(code **)(*param_1 + 0x178))(param_1);
                if ((uVar7 & 1) == 0) goto LAB_018a0f94;
                uVar7 = (**(code **)(*param_1 + 0x108))(param_1);
                if ((uVar7 & 1) != 0) break;
                if (iVar9 == (int)param_1[0x7a] + -1) goto LAB_018a0f94;
                iVar9 = iVar9 + 1;
              } while (iVar9 < (int)param_1[0x7a]);
            }
          }
          else {
            uVar7 = (**(code **)(*param_1 + 0x108))(param_1);
            if ((uVar7 & 1) == 0) goto LAB_018a0f94;
          }
          uVar6 = FUN_0098e920(param_1);
          uVar7 = FUN_018a7b64(uVar6);
          if ((uVar7 & 1) != 0) {
            uVar2 = *(uint *)(param_1 + 0x54);
            uVar3 = *(uint *)((long)param_1 + 0x29c);
            if (*(uint *)(param_1 + 0x51) <= uVar2) {
              uVar2 = 0;
            }
            lVar10 = param_1[0x52] + (long)(int)uVar2 * 0x30;
            if (*(uint *)(lVar10 + 0x10) <= uVar3) {
              uVar3 = 0;
            }
            *(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar3 * 4) = uVar6;
            uVar4 = FUN_0098f0d0(param_1);
            uVar2 = *(uint *)(param_1 + 0x54);
            uVar3 = *(uint *)((long)param_1 + 0x29c);
            if (*(uint *)(param_1 + 0x51) <= uVar2) {
              uVar2 = 0;
            }
            lVar10 = param_1[0x52] + (long)(int)uVar2 * 0x30;
            if (*(uint *)(lVar10 + 0x20) <= uVar3) {
              uVar3 = 0;
            }
            *(undefined1 *)(*(long *)(lVar10 + 0x28) + (long)(int)uVar3) = uVar4;
            lVar10 = 0x22;
            goto LAB_018a0e24;
          }
        }
      }
    }
LAB_018a0f94:
    uVar8 = 0;
  }
  return uVar8;
}

