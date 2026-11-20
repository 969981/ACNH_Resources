
uint FUN_03d7d500(long *param_1,ushort *param_2,int param_3)

{
  undefined *puVar1;
  ushort *puVar2;
  uint uVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  undefined *local_70;
  ushort *local_68;
  
  uVar5 = *param_2;
  if (uVar5 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    iVar9 = 0;
    puVar1 = PTR_DAT_04bb8610 + 0x10;
    do {
      if (param_3 < iVar9) {
        while ((uVar5 & 0xfffe) == 0xe) {
          if (uVar5 == 0xe) {
            param_2 = (ushort *)((long)param_2 + (ulong)param_2[3] + 8);
          }
          else {
            if (uVar5 != 0xf) goto LAB_03d7d830;
            param_2 = param_2 + 3;
          }
          uVar5 = *param_2;
          if (uVar5 == 0) {
            return uVar12;
          }
        }
      }
      else {
        while ((uVar5 & 0xfffe) == 0xe) {
          if (uVar5 == 0xf) {
            puVar2 = param_2 + 3;
            uVar5 = param_2[1];
          }
          else {
            if (uVar5 != 0xe) goto LAB_03d7d830;
            puVar2 = (ushort *)((long)param_2 + (ulong)param_2[3] + 8);
            uVar5 = param_2[1];
          }
          if ((uVar5 == 0) && (param_2[2] - 1 < 3)) {
            lVar8 = param_1[1];
            local_70 = PTR_DAT_04bb8610 + 0x10;
            uVar7 = uVar12;
            local_68 = param_2;
            if ((int)uVar12 < 0) {
              (**(code **)(*param_1 + 0x18))(param_1);
              lVar6 = 0;
              do {
                if (*(short *)(param_1[1] + lVar6 * 2) == 0) goto LAB_03d7d66c;
                lVar4 = param_1[1] + lVar6 * 2;
                if (*(short *)(lVar4 + 2) == 0) {
                  lVar6 = lVar6 + 1;
                  goto LAB_03d7d66c;
                }
                if (*(short *)(lVar4 + 4) == 0) {
                  lVar6 = lVar6 + 2;
                  goto LAB_03d7d66c;
                }
                lVar6 = lVar6 + 3;
              } while (lVar6 != 0x80001);
              lVar6 = 0;
LAB_03d7d66c:
              iVar10 = (int)lVar6 + uVar12;
              if (iVar10 < 0 != SCARRY4((int)lVar6,uVar12)) {
                iVar10 = -1;
              }
              uVar7 = iVar10 + 1;
            }
            uVar11 = (ulong)((long)puVar2 - (long)param_2) >> 1;
            iVar10 = (int)uVar11;
            uVar11 = uVar11 & 0xffffffff;
            if (iVar10 < 0) {
              (**(code **)(local_70 + 0x18))(&local_70);
              uVar11 = 0;
              do {
                if (local_68[uVar11] == 0) goto LAB_03d7d688;
                if (local_68[uVar11 + 1] == 0) {
                  uVar11 = uVar11 + 1;
                  goto LAB_03d7d688;
                }
                if (local_68[uVar11 + 2] == 0) {
                  uVar11 = uVar11 + 2;
                  goto LAB_03d7d688;
                }
                uVar11 = uVar11 + 3;
              } while (uVar11 != 0x80001);
              uVar11 = 0;
            }
LAB_03d7d688:
            uVar3 = (uint)uVar11;
            if ((int)((int)param_1[2] - uVar7) <= (int)(uint)uVar11) {
              uVar3 = (int)param_1[2] + ~uVar7;
            }
            if (0 < (int)uVar3) {
              (**(code **)(local_70 + 0x18))(&local_70);
              memcpy((void *)(lVar8 + (long)(int)uVar7 * 2),local_68,(ulong)uVar3 << 1);
              *(undefined2 *)(lVar8 + (long)(int)(uVar3 + uVar7) * 2) = 0;
            }
            uVar12 = uVar12 + iVar10;
          }
          uVar5 = *puVar2;
          param_2 = puVar2;
          if (uVar5 == 0) {
            return uVar12;
          }
        }
      }
      if (uVar5 == 10) {
        iVar9 = iVar9 + 1;
LAB_03d7d7b0:
        if (param_3 < iVar9) {
          return uVar12;
        }
      }
      else {
        if (iVar9 != param_3) goto LAB_03d7d7b0;
        lVar8 = param_1[1];
        uVar7 = uVar12;
        local_70 = puVar1;
        local_68 = param_2;
        if ((int)uVar12 < 0) {
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar6 = 0;
          do {
            if (*(short *)(param_1[1] + lVar6 * 2) == 0) goto LAB_03d7d7cc;
            lVar4 = param_1[1] + lVar6 * 2;
            if (*(short *)(lVar4 + 2) == 0) {
              lVar6 = lVar6 + 1;
              goto LAB_03d7d7cc;
            }
            if (*(short *)(lVar4 + 4) == 0) {
              lVar6 = lVar6 + 2;
              goto LAB_03d7d7cc;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_03d7d7cc:
          iVar9 = (int)lVar6 + uVar12;
          if (iVar9 < 0 != SCARRY4((int)lVar6,uVar12)) {
            iVar9 = -1;
          }
          uVar7 = iVar9 + 1;
        }
        uVar3 = (int)param_1[2] + ~uVar7;
        if (1 < (int)((int)param_1[2] - uVar7)) {
          uVar3 = 1;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_70 + 0x18))(&local_70);
          memcpy((void *)(lVar8 + (ulong)uVar7 * 2),local_68,(ulong)uVar3 << 1);
          *(undefined2 *)(lVar8 + (ulong)(uVar3 + uVar7) * 2) = 0;
        }
        uVar12 = uVar12 + 1;
        iVar9 = param_3;
      }
      param_2 = param_2 + 1;
      uVar5 = *param_2;
LAB_03d7d830:
    } while (uVar5 != 0);
  }
  return uVar12;
}

