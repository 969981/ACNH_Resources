
void FUN_03bc17d0(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  
  lVar7 = *param_1;
  if ((lVar7 != 0) && (lVar5 = *(long *)(param_2 + 0x1e0), lVar5 != 0)) {
    uVar9 = *(uint *)(lVar7 + 0x80);
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar7 + 0x120) = uVar8;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        if (uVar9 <= uVar10) {
          uVar1 = 0;
        }
        uVar10 = uVar10 + 1;
        *(undefined8 *)(*(long *)(lVar7 + 0x88) + (ulong)uVar1 * 0x28 + 0x10) = uVar8;
        uVar9 = *(uint *)(lVar7 + 0x80);
      } while ((int)uVar10 < (int)uVar9);
    }
    *(undefined2 *)(*param_1 + 0x128) = *(undefined2 *)(lVar5 + 0x4a);
    lVar7 = *param_1;
    uVar4 = *(ushort *)(param_2 + 0xe8);
    uVar9 = *(uint *)(lVar7 + 0x80);
    *(uint *)(lVar7 + 300) = (uint)uVar4;
    if (0 < (int)uVar9) {
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        if (uVar9 <= uVar10) {
          uVar1 = 0;
        }
        uVar10 = uVar10 + 1;
        *(uint *)(*(long *)(lVar7 + 0x88) + (ulong)uVar1 * 0x28 + 0x1c) = (uint)uVar4;
        uVar9 = *(uint *)(lVar7 + 0x80);
      } while ((int)uVar10 < (int)uVar9);
    }
    lVar7 = *param_1;
    uVar9 = *(uint *)(lVar7 + 0x80);
    if (0 < (int)uVar9) {
      bVar3 = *(byte *)(lVar5 + 0x48);
      uVar10 = 0;
      do {
        uVar1 = uVar10;
        if (uVar9 <= uVar10) {
          uVar1 = 0;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(*(long *)(lVar7 + 0x88) + (ulong)uVar1 * 0x28 + 0x24) = bVar3 >> 5 & 1;
        uVar9 = *(uint *)(lVar7 + 0x80);
      } while ((int)uVar10 < (int)uVar9);
    }
  }
  fVar11 = *(float *)(param_2 + 0x30);
  if (2 < *(int *)(param_2 + 0xc)) {
    fVar11 = -1.0;
  }
  if ((((0.0 <= fVar11) && (lVar7 = param_1[1], lVar7 != 0)) &&
      ((int)param_1[2] == *(int *)(lVar7 + 0x10))) && (*(int *)(lVar7 + 0xc) < 3)) {
    *(float *)(lVar7 + 0x30) = fVar11;
  }
  lVar7 = param_1[1];
  if (lVar7 == 0) goto LAB_03bc19c8;
  if ((int)param_1[2] == *(int *)(lVar7 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x28);
    if ((-1 < iVar2) && (*(int *)(lVar7 + 0xc) < 3)) {
      *(int *)(lVar7 + 0x28) = iVar2;
      lVar7 = *(long *)(*(long *)(lVar7 + 0x120) + 8);
      if (DAT_05aebc00 == '\0') {
        piVar6 = (int *)(lVar7 + 0x18);
      }
      else {
        if (*(char *)(lVar7 + 0x58) == '\0') goto LAB_03bc1954;
        piVar6 = (int *)(lVar7 + 0x60);
      }
      *piVar6 = iVar2;
    }
  }
LAB_03bc1954:
  lVar7 = param_1[1];
  if (lVar7 != 0) {
    if ((int)param_1[2] == *(int *)(lVar7 + 0x10)) {
      *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(param_2 + 0x34);
      lVar7 = param_1[1];
      if (lVar7 == 0) goto LAB_03bc19c8;
    }
    if ((((int)param_1[2] == *(int *)(lVar7 + 0x10)) &&
        (iVar2 = *(int *)(*(long *)(param_2 + 0x120) + 0x14), *(int *)(lVar7 + 0xc) < 3)) &&
       (((*(ushort *)(lVar7 + 0x14) & 1) != 0 || ((iVar2 == 1 || (iVar2 == 0)))))) {
      *(int *)(*(long *)(lVar7 + 0x120) + 0x14) = iVar2;
    }
  }
LAB_03bc19c8:
  FUN_03bc1460();
  return;
}

