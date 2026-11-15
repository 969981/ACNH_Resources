
void FUN_01e64174(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  
  uVar5 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (0 < *(int *)(param_1 + 0x12714)) {
    *(int *)(param_1 + 0x12714) = *(int *)(param_1 + 0x12714) + -1;
  }
  if (DAT_04c487d4 == -1) {
LAB_01e64270:
    bVar4 = false;
    uVar2 = *(ushort *)(param_1 + 0x12570);
  }
  else {
    puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar7 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar7 >> 1 & 1) == 0) goto LAB_01e64270;
    if (((*(long *)(param_1 + 8) == 0) ||
        (uVar6 = *(uint *)(*(long *)(param_1 + 8) + 0x508), 9 < uVar6)) ||
       ((&DAT_053fee41)[(ulong)uVar6 * 0xba0] == '\0')) {
LAB_01e64454:
      puVar7 = &DAT_0538ea6c;
LAB_01e6445c:
      uVar6 = *puVar7;
    }
    else {
      if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
        if ((int)(&DAT_053fe898)[(ulong)uVar6 * 0x2e8] < 1) goto LAB_01e64454;
        uVar5 = (ulong)uVar6;
        iVar3 = (&DAT_053fe898)[(ulong)uVar6 * 0x2e8] + (&DAT_053fe894)[uVar5 * 0x2e8] + -1;
        iVar12 = 0;
        if ((int)(&DAT_053fe890)[uVar5 * 0x2e8] <= iVar3) {
          iVar12 = (&DAT_053fe890)[uVar5 * 0x2e8];
        }
        puVar7 = (uint *)((&DAT_053fe888)[uVar5 * 0x174] + (long)(iVar3 - iVar12) * 0x14 + 8);
        goto LAB_01e6445c;
      }
      uVar6 = *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar6 * 0x28 + 0xe23) & 3;
    }
    bVar4 = uVar6 == 1;
    uVar2 = *(ushort *)(param_1 + 0x12570);
  }
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar6 = (uint)uVar2;
  uVar5 = *(ulong *)(param_1 + 0xad58);
  if (bVar4 || (uVar5 >> 0x11 & 1) != 0) {
    return;
  }
  if ((uVar2 & 0x80) == 0 && *(int *)(param_1 + 0xb01c) == 0) {
    piVar11 = (int *)(param_1 + 0x10a30);
    iVar12 = *piVar11;
    if (iVar12 < 1) {
      uVar9 = *(uint *)(param_1 + 0x12558);
      puVar10 = &DAT_053fd568;
      if (-1 < (int)uVar9) {
        piVar11 = (int *)(param_1 + 0xef10);
        iVar12 = *piVar11;
        goto LAB_01e642e8;
      }
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x1255c);
      puVar10 = &DAT_053fd568;
      if (-1 < (int)uVar9) {
LAB_01e642e8:
        puVar10 = &DAT_053fd568;
        if ((int)uVar9 < iVar12) {
          puVar10 = *(undefined4 **)(*(long *)(piVar11 + 2) + (ulong)uVar9 * 8);
        }
      }
    }
    if (((puVar10[0x19] != 2) && ((*(byte *)(param_1 + 0x1256c) & 3) == 0)) &&
       ((*(byte *)(*(long *)(*(long *)(param_1 + 0xef08) + 0x3b8) + 0xad5a) >> 2 & 1) == 0)) {
      uVar6 = uVar6 | 0x80;
      *(short *)(param_1 + 0x12570) = (short)uVar6;
      if ((uVar2 >> 8 & 1) == 0) {
        *(ulong *)(param_1 + 0xad58) = uVar5 & 0xffffffdfffffffff;
      }
    }
  }
  if ((*(long *)(param_1 + 8) != 0) &&
     (uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar9 != 0xffffffff)) {
    puVar8 = &DAT_053fe348 + (ulong)uVar9 * 0xba0;
    if (9 < uVar9) {
      puVar8 = &DAT_053fe348;
    }
    if (*(int *)(puVar8 + 0x4e8) != 0) goto LAB_01e643d4;
  }
  if ((uVar6 >> 0xe & 1) != 0) {
    return;
  }
  if (((*(int *)(param_1 + 0xb0a8) == 0) && (*(int *)(param_1 + 0xb0b0) == 0)) &&
     (uVar5 = FUN_02194914(param_1 + 0xef00), (uVar5 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0xb0b0) = 1;
  }
  if ((uVar6 >> 6 & 1) != 0) {
    lVar1 = 0;
    if (*(int *)(param_1 + 0x125dc) != 3) {
      lVar1 = param_1 + 0x12578;
    }
    FUN_02099b90(param_1 + 0xaf38,lVar1,*(undefined4 *)(param_1 + 0x125e8));
  }
LAB_01e643d4:
  *(int *)(param_1 + 0xb098) = *(int *)(param_1 + 0xb098) + 1;
  *(int *)(param_1 + 0xb0a0) = *(int *)(param_1 + 0xb0a0) + 1;
  if (*(int *)(param_1 + 0xb0b0) == 1) {
    *(int *)(param_1 + 0xb09c) = *(int *)(param_1 + 0xb09c) + 1;
  }
  return;
}

