
void FUN_017e5788(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  
  *(undefined8 *)(param_1 + 300) = 0;
  if (*(int *)(param_1 + 0xa8) == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 2:
  case 3:
  case 6:
  case 7:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x14:
    uVar10 = 0x100000001;
    goto LAB_017e57e8;
  case 4:
  case 0xd:
    *(undefined4 *)(param_1 + 0x130) = 1;
    break;
  case 5:
  case 0xe:
    *(undefined4 *)(param_1 + 300) = 1;
    break;
  case 8:
    uVar10 = 0x200000001;
    goto LAB_017e57e8;
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar10 = 0x200000002;
LAB_017e57e8:
    *(undefined8 *)(param_1 + 300) = uVar10;
  }
  puVar5 = PTR_DAT_04bb46d0;
  if ((*(ushort *)(param_1 + 0x1cc) >> 1 & 1) == 0) {
    lVar12 = *(long *)PTR_DAT_04bb46d0;
    uVar6 = FUN_017f1590(param_1,3);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x400);
    if (((((uVar6 < *(uint *)(lVar12 + 0x3e0)) &&
          (lVar9 = *(long *)(*(long *)(lVar12 + 1000) + (long)(int)uVar6 * 8), lVar9 != 0)) &&
         (*(long *)(lVar12 + 0x2b8) != 0)) &&
        ((puVar11 = *(uint **)(*(long *)(lVar12 + 0x2b8) + 8), puVar11 != (uint *)0x0 &&
         (*puVar11 != 0)))) &&
       ((uVar6 = puVar11[1], uVar6 != 0 && ((ulong)(ushort)puVar11[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar1 == 0) goto LAB_017e58ac;
      uVar2 = 0;
      if ((ulong)uVar6 != 0) {
        uVar2 = (uint)((ulong)(lVar9 - lVar1) / (ulong)uVar6);
      }
      if (*puVar11 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      uVar8 = (ulong)uVar2;
      if ((0 < *(int *)(lVar12 + 0x3c8)) && (uVar2 < *(uint *)(lVar12 + 0x3d0))) {
        uVar8 = (ulong)*(short *)(*(long *)(lVar12 + 0x3d8) + (long)(int)uVar2 * 2);
      }
    }
    else {
LAB_017e58ac:
      uVar8 = 0xffffffff;
    }
    iVar7 = FUN_017c0c70(*(undefined8 *)puVar5,uVar8,1);
    if (iVar7 == 0) goto LAB_017e58cc;
    uVar3 = *(ushort *)(param_1 + 0x1cc);
    plVar4 = (long *)PTR_DAT_04bb46d0;
  }
  else {
LAB_017e58cc:
    *(undefined4 *)(param_1 + 0x130) = 0;
    uVar3 = *(ushort *)(param_1 + 0x1cc);
    plVar4 = (long *)PTR_DAT_04bb46d0;
  }
  PTR_DAT_04bb46d0 = (undefined *)plVar4;
  if ((uVar3 >> 1 & 1) != 0) goto LAB_017e59a4;
  lVar12 = *plVar4;
  uVar6 = FUN_017f1590(param_1,1);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x400);
  if ((((uVar6 < *(uint *)(lVar12 + 0x3e0)) &&
       (lVar9 = *(long *)(*(long *)(lVar12 + 1000) + (long)(int)uVar6 * 8), lVar9 != 0)) &&
      (*(long *)(lVar12 + 0x2b8) != 0)) &&
     (((puVar11 = *(uint **)(*(long *)(lVar12 + 0x2b8) + 8), puVar11 != (uint *)0x0 &&
       (*puVar11 != 0)) && ((uVar6 = puVar11[1], uVar6 != 0 && ((ulong)(ushort)puVar11[2] != 0))))))
  {
    lVar1 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
    if (lVar1 == 0) goto LAB_017e5990;
    uVar2 = 0;
    if ((ulong)uVar6 != 0) {
      uVar2 = (uint)((ulong)(lVar9 - lVar1) / (ulong)uVar6);
    }
    if (*puVar11 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    uVar8 = (ulong)uVar2;
    if ((0 < *(int *)(lVar12 + 0x3c8)) && (uVar2 < *(uint *)(lVar12 + 0x3d0))) {
      uVar8 = (ulong)*(short *)(*(long *)(lVar12 + 0x3d8) + (long)(int)uVar2 * 2);
    }
  }
  else {
LAB_017e5990:
    uVar8 = 0xffffffff;
  }
  iVar7 = FUN_017c0c70(*plVar4,uVar8,1);
  if (iVar7 != 0) {
    return;
  }
LAB_017e59a4:
  *(undefined4 *)(param_1 + 300) = 0;
  return;
}

