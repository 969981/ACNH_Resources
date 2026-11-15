
/* WARNING: Type propagation algorithm not settling */

void FUN_01fb4174(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  plVar1 = param_1 + 0xef6;
  uVar5 = false;
  if (*(int *)((long)param_1 + 0xaf34) != 0) {
    if (*(int *)((long)param_1 + 0xaf34) == 1) {
      uVar5 = false;
    }
    else {
      uVar5 = *(int *)((long)param_1 + 0xaf34) != 3;
    }
  }
  if (*(int *)((long)param_1 + 0x77f4) == 0x3c) {
    bVar4 = true;
  }
  else {
    bVar4 = (*(int *)((long)param_1 + 0x77f4) == 0x10 || (int)*plVar1 == 0x3c) ||
            (int)*plVar1 == 0x10;
  }
  lVar8 = param_1[1];
  if ((*(int *)(lVar8 + 0x750) != 0) && (*(int *)(lVar8 + 0x750) != 2)) {
    uVar5 = true;
  }
  if ((bool)uVar5 || bVar4) {
    *(uint *)(*(long *)(lVar8 + 0x90) + 0x178) =
         *(uint *)(*(long *)(lVar8 + 0x90) + 0x178) & 0xfffffffe;
    lVar8 = *(long *)(param_1[1] + 0xa0);
    uVar7 = *(uint *)(lVar8 + 0x178) & 0xfffffffe;
  }
  else {
    *(uint *)(*(long *)(lVar8 + 0x90) + 0x178) = *(uint *)(*(long *)(lVar8 + 0x90) + 0x178) | 1;
    lVar8 = *(long *)(param_1[1] + 0xa0);
    uVar7 = *(uint *)(lVar8 + 0x178) | 1;
  }
  *(uint *)(lVar8 + 0x178) = uVar7;
  uVar6 = FUN_01fa5be4(param_1);
  if (((uVar6 & 1) != 0) && ((param_1[0x15ab] & 0x400002000000U) != 0x400000000000)) {
    iVar2 = *(int *)((long)param_1 + 0x77f4);
    iVar3 = (int)*plVar1;
    if (iVar2 == 0x10) {
      bVar4 = false;
    }
    else {
      bVar4 = iVar3 != 0x10 && (iVar2 != 0x4c && iVar3 != 0x4c);
      if (iVar2 == 0x4b) {
        return;
      }
    }
    if ((*(ushort *)((long)param_1 + 0xaf64) & 0x40) == 0) {
      bVar4 = true;
    }
    if (((((iVar3 != 0x4b) && (bVar4)) &&
         ((uVar6 = (**(code **)(*param_1 + 0x5b8))(param_1), (uVar6 & 1) == 0 ||
          (*(int *)((long)param_1 + 0xaf84) == 2)))) &&
        (((*(int *)((long)param_1 + 0x77f4) != 0xc && ((int)*plVar1 != 0xc)) &&
         (*(int *)((long)param_1 + 0x77f4) != 0x47)))) && ((int)*plVar1 != 0x47)) {
      if ((*(byte *)(param_1 + 0x15f6) & 1) != 0) {
        *(int *)(param_1 + 0x1613) = (int)param_1[0x1613] + -1;
      }
      if (DAT_04cee6a9 == '\0') {
        fVar9 = 0.0;
        *(undefined4 *)((long)param_1 + 0x1204c) = 0;
      }
      else {
        fVar9 = 15.0;
      }
      fVar10 = fVar9 + *(float *)((long)param_1 + 0x11b6c);
      *(float *)((long)param_1 + 0x11b74) = fVar9;
      *(float *)(param_1 + 0x236f) = fVar10 * fVar10;
      if ((int)param_1[0x15f1] == 1) {
        iVar2 = *(int *)((long)param_1 + 0x1203c) + -1;
        *(int *)((long)param_1 + 0x1203c) = iVar2;
        if (iVar2 == 0) {
          param_1[0x2406] = -1;
        }
        if (0 < (int)param_1[0x2408]) {
          *(int *)(param_1 + 0x2408) = (int)param_1[0x2408] + -1;
        }
        if (0 < *(int *)((long)param_1 + 0x12044)) {
          *(int *)((long)param_1 + 0x12044) = *(int *)((long)param_1 + 0x12044) + -1;
        }
      }
      *(int *)(param_1 + 0x2409) = (int)param_1[0x2409] + -1;
      *(int *)((long)param_1 + 0x1204c) = *(int *)((long)param_1 + 0x1204c) + -1;
    }
  }
  return;
}

