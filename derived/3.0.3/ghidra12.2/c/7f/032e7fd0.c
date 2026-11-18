
void FUN_032e7fd0(long param_1,undefined2 *param_2)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  iVar7 = *(int *)(param_1 + 0x610) - *(int *)(param_1 + 0x60c);
  if (iVar7 != 0 && *(int *)(param_1 + 0x60c) <= *(int *)(param_1 + 0x610)) {
    if (*(int *)(param_1 + 0x18) == 4) {
      (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(param_1 + 0x698);
      puVar5 = PTR_DAT_04bb2da0;
      uVar10 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x6a0) + uVar10 * 2) == 0) {
LAB_032e810c:
          iVar7 = (int)uVar10;
joined_r0x032e8110:
          if (0 < iVar7) {
            uVar8 = 0;
            do {
              (**(code **)(*(long *)(param_1 + 0x698) + 0x18))(param_1 + 0x698);
              lVar6 = *(long *)(param_1 + 0x6a0);
              uVar9 = 0;
              do {
                if (*(short *)(lVar6 + uVar9 * 2) == 0) goto LAB_032e8144;
                lVar3 = lVar6 + uVar9 * 2;
                if (*(short *)(lVar3 + 2) == 0) {
                  uVar9 = uVar9 + 1;
                  goto LAB_032e8144;
                }
                if (*(short *)(lVar3 + 4) == 0) {
                  uVar9 = uVar9 + 2;
                  goto LAB_032e8144;
                }
                uVar9 = uVar9 + 3;
              } while (uVar9 != 0x80001);
              uVar9 = 0;
LAB_032e8144:
              uVar1 = uVar8 + 1;
              puVar4 = (undefined2 *)puVar5;
              if (uVar8 <= (uVar9 & 0xffffffff)) {
                puVar4 = (undefined2 *)(lVar6 + uVar8 * 2);
              }
              param_2[uVar8] = *puVar4;
              uVar8 = uVar1;
            } while (uVar1 != (uVar10 & 0xffffffff));
          }
          goto LAB_032e81b8;
        }
        lVar6 = *(long *)(param_1 + 0x6a0) + uVar10 * 2;
        if (*(short *)(lVar6 + 2) == 0) {
          uVar10 = uVar10 + 1;
          goto LAB_032e810c;
        }
        if (*(short *)(lVar6 + 4) == 0) {
          uVar10 = uVar10 + 2;
          iVar7 = (int)uVar10;
          goto joined_r0x032e8110;
        }
        uVar10 = uVar10 + 3;
      } while (uVar10 != 0x80001);
      uVar10 = 0;
LAB_032e81b8:
      param_2 = (undefined2 *)((long)param_2 + ((long)(uVar10 << 0x20) >> 0x1f));
    }
    else {
      uVar2 = (*(int *)(param_1 + 0x644) - *(int *)(param_1 + 0x648)) + iVar7;
      uVar10 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        uVar10 = (ulong)(int)uVar2;
      }
      else {
        if (uVar2 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          do {
            iVar7 = (int)uVar8;
            puVar4 = param_2 + uVar8;
            *puVar4 = *(undefined2 *)
                       (**(long **)(param_1 + 0x20) + (long)(iVar7 + *(int *)(param_1 + 0x60c)) * 2)
            ;
            uVar8 = uVar8 + 2;
            puVar4[1] = *(undefined2 *)
                         (**(long **)(param_1 + 0x20) +
                         (long)(iVar7 + *(int *)(param_1 + 0x60c) + 1) * 2);
          } while ((uVar10 & 0xfffffffe) != uVar8);
        }
        if ((uVar2 & 1) != 0) {
          param_2[uVar8] =
               *(undefined2 *)
                (**(long **)(param_1 + 0x20) + (long)(*(int *)(param_1 + 0x60c) + (int)uVar8) * 2);
        }
      }
      param_2 = param_2 + uVar10;
    }
  }
  *param_2 = 0;
  return;
}

