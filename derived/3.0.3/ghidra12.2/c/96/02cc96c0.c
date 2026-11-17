
void FUN_02cc96c0(long *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined8 local_48;
  
  puVar1 = (uint *)(param_1 + 0x3874);
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  iVar4 = *param_2;
  if (iVar4 == 2) {
    uVar8 = *puVar1;
    lVar7 = param_1[0x3875];
    uVar5 = uVar2;
    if (uVar8 <= uVar2) {
      uVar5 = 0;
    }
    uVar5 = *(uint *)(lVar7 + (long)(int)uVar5 * 0x20 + 8);
    if (uVar5 == 0xffffffff) goto LAB_02cc9868;
LAB_02cc9770:
    if (uVar5 < 0x10e) {
      if ((int)param_1[(ulong)uVar5 * 0x35 + 0x9c] != 0) {
        uVar6 = (ulong)uVar5;
        *(undefined1 *)param_1[uVar6 * 0x35 + 0x74] = 0;
        *(undefined1 *)(param_1 + uVar6 * 0x35 + 0x86) = 0;
        if ((((int)param_1[uVar6 * 0x35 + 0x88] != 1) &&
            ((*(byte *)(param_1 + uVar6 * 0x35 + 0x6b) >> 1 & 1) != 0)) &&
           ((int)param_1[uVar6 * 0x35 + 0x90] == -1)) {
          *(undefined4 *)(param_1 + uVar6 * 0x35 + 0x90) = 1;
        }
        *(undefined4 *)(param_1 + (ulong)uVar5 * 0x35 + 0x9c) = 0;
        uVar8 = *puVar1;
        lVar7 = param_1[0x3875];
      }
    }
    if (uVar8 <= uVar2) {
      uVar2 = 0;
    }
    lVar7 = lVar7 + (long)(int)uVar2 * 0x20;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 0) goto LAB_02cc9868;
      iVar4 = *(int *)(*(long *)(param_2 + 4) + 0xc) + uVar2;
      uVar6 = (**(code **)(*param_1 + 0x438))(param_1,iVar4);
      if ((uVar6 & 1) == 0) {
        local_48 = 0xfffe;
        FUN_0277d4ac(&local_48);
        (**(code **)(*param_1 + 0x3d0))(param_1,&local_48,iVar4);
        puVar3 = PTR_DAT_04bb43c0;
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            if ((*PTR_DAT_04c4b988 == '\0') && ((short)local_48 == -2)) {
              iVar10 = -1;
            }
            else {
              iVar10 = 0;
              iVar4 = 0;
              do {
                if (((int)param_1[(long)iVar4 * 0x35 + 0x9c] == 0) &&
                   ((*(byte *)(param_1 + (long)iVar4 * 0x35 + 0x68 + 3) >> 1 & 1) == 0)) {
                  FUN_03412d40(param_1 + (long)iVar4 * 0x35 + 0x68,PTR_PTR_04bb2238,&local_48,10);
                  goto LAB_02cc99a8;
                }
                iVar4 = iVar4 + 1;
                iVar10 = iVar10 + 1;
              } while (iVar4 != 0x10e);
              iVar10 = -1;
            }
LAB_02cc99a8:
            if (*puVar1 <= uVar2) {
              uVar2 = 0;
            }
            lVar7 = param_1[0x3875] + (long)(int)uVar2 * 0x20;
            piVar9 = (int *)(lVar7 + 8);
            if ((*piVar9 != iVar10) && (*piVar9 = iVar10, iVar10 != -1)) {
              *(undefined4 *)(lVar7 + 0x18) = 1;
            }
          }
        }
        goto LAB_02cc9868;
      }
      uVar8 = *puVar1;
      lVar7 = param_1[0x3875];
      uVar5 = uVar2;
      if (uVar8 <= uVar2) {
        uVar5 = 0;
      }
      uVar5 = *(uint *)(lVar7 + (long)(int)uVar5 * 0x20 + 8);
      if ((int)uVar5 < 0) goto LAB_02cc9868;
      goto LAB_02cc9770;
    }
    uVar8 = uVar5;
    if (*puVar1 <= uVar5) {
      uVar8 = 0;
    }
    if (*puVar1 <= uVar2) {
      uVar2 = 0;
    }
    lVar7 = param_1[0x3875] + (long)(int)uVar2 * 0x20;
    iVar4 = *(int *)(param_1[0x3875] + (long)(int)uVar8 * 0x20 + 8);
    piVar9 = (int *)(lVar7 + 8);
    if ((*piVar9 != iVar4) && (*piVar9 = iVar4, iVar4 != -1)) {
      *(undefined4 *)(lVar7 + 0x18) = 1;
    }
    if (*puVar1 <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = param_1[0x3875] + (long)(int)uVar5 * 0x20;
  }
  if (*(int *)(lVar7 + 8) != -1) {
    *(int *)(lVar7 + 8) = -1;
  }
LAB_02cc9868:
  iVar4 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if (-1 < iVar4) {
    FUN_0345b620(param_2,iVar4);
  }
  return;
}

