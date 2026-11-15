
void FUN_020b4a90(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  puVar4 = PTR_DAT_04bb39d8;
  lVar14 = *(long *)(param_1 + 0x2f50);
  if (lVar14 != param_1 + 0x2f48) {
    lVar11 = lVar14 + -0xe0;
    do {
      lVar13 = *(long *)(lVar11 + 8);
      lVar12 = lVar14 + -0xf0;
      lVar10 = lVar13 + -0x10;
      if (lVar10 != lVar12) {
        lVar8 = lVar10;
        lVar9 = lVar13;
        do {
          if (*(int *)(lVar9 + -0x10) == *param_2) {
            if (*(int *)(lVar8 + 4) == 2) {
              if (*(char *)(lVar11 + 0xdc) == '\0') {
                if (0 < *(int *)(*(long *)(lVar11 + 0xd0) + 8)) {
                  *(undefined4 *)(lVar8 + 4) = 5;
                }
              }
              else {
                FUN_020b4d78(param_1,lVar11);
              }
            }
            else if (*(int *)(lVar8 + 4) == 0) {
              do {
                if (*(long *)(lVar11 + 0xd0) != lVar10) {
                  piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1ed8) + 0xf0))
                                            ((long *)(param_1 + 0x1ed8));
                  iVar2 = *piVar5;
                  piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1f08) + 0xf0))
                                            ((long *)(param_1 + 0x1f08));
                  iVar3 = *piVar5;
                  puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
                  uVar1 = puVar6[3];
                  uVar7 = *puVar6 ^ *puVar6 << 0xb;
                  *puVar6 = puVar6[1];
                  puVar6[1] = puVar6[2];
                  uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
                  puVar6[2] = uVar1;
                  puVar6[3] = uVar7;
                  *(int *)(lVar10 + 8) =
                       iVar2 + (int)((ulong)uVar7 * (ulong)((iVar3 - iVar2) + 1) >> 0x20) + 1;
                }
                lVar13 = *(long *)(lVar13 + 8);
                lVar10 = lVar13 + -0x10;
              } while (lVar10 != lVar12);
              iVar2 = *(int *)(lVar11 + 0xd8) + 1;
              *(int *)(lVar11 + 0xd8) = iVar2;
              piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1ff8) + 0xf0))();
              if (iVar2 < *piVar5) {
                puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
                uVar7 = *puVar6 ^ *puVar6 << 0xb;
                uVar1 = puVar6[3];
                *puVar6 = puVar6[1];
                puVar6[1] = puVar6[2];
                uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
                puVar6[2] = uVar1;
                puVar6[3] = uVar7;
                piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1fc8) + 0xf0))();
                uVar7 = (uint)((int)((ulong)uVar7 * 100 >> 0x20) < *piVar5);
              }
              else {
                uVar7 = 1;
              }
              *(uint *)(*(long *)(lVar11 + 0xd0) + 4) = uVar7;
              piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1e78) + 0xf0))();
              iVar2 = *piVar5;
              piVar5 = (int *)(**(code **)(*(long *)(param_1 + 0x1ea8) + 0xf0))();
              iVar3 = *piVar5;
              puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
              uVar1 = puVar6[3];
              uVar7 = *puVar6 ^ *puVar6 << 0xb;
              *puVar6 = puVar6[1];
              puVar6[1] = puVar6[2];
              uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
              puVar6[2] = uVar1;
              puVar6[3] = uVar7;
              *(int *)(*(long *)(lVar11 + 0xd0) + 8) =
                   iVar2 + (int)((ulong)uVar7 * (ulong)((iVar3 - iVar2) + 1) >> 0x20);
            }
            break;
          }
          lVar9 = *(long *)(lVar9 + 8);
          lVar8 = lVar9 + -0x10;
        } while (lVar8 != lVar12);
      }
      lVar14 = *(long *)(lVar14 + 8);
      lVar11 = lVar14 + -0xe0;
    } while (lVar11 != param_1 + 0x2e68);
  }
  return;
}

