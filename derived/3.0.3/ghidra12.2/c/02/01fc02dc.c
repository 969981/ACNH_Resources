
void FUN_01fc02dc(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  float fVar17;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long local_70;
  uint local_64;
  
  uVar6 = (**(code **)(*param_1 + 0x608))();
  lVar7 = DAT_05150358;
  if ((uVar6 & 1) != 0) {
    return;
  }
  if (((int)param_1[0x2406] == *(int *)(param_2 + 3) &&
       *(int *)((long)param_1 + 0x12034) == *(int *)((long)param_2 + 0x1c)) &&
     ((int)param_1[0x2407] == *(int *)(param_2 + 10))) {
    return;
  }
  if (((((short)param_1[0x23f9] != -2) && ((int)param_1[0x23ff] == *(int *)(param_2 + 10))) &&
      ((int)param_1[0x23fc] == *(int *)(param_2 + 3))) &&
     (*(int *)((long)param_1 + 0x11fe4) == *(int *)((long)param_2 + 0x1c))) {
    return;
  }
  if (DAT_05150358 == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0xb0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x488) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0) {
    return;
  }
  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
    return;
  }
  if (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0) {
    return;
  }
  uVar15 = *param_2;
  uVar3 = FUN_0277d6c4(uVar15);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  FUN_0124c030(auStack_80,uVar15);
  if (local_70 == 0) {
LAB_01fc0450:
    iVar4 = FUN_0123db50(auStack_78,local_70);
    if (((8 < iVar4 - 0x23U) &&
        (iVar4 = FUN_0123db50(auStack_78,local_70), (iVar4 - 2U & 0xfffffff9) != 0)) &&
       ((iVar4 = FUN_0123db50(auStack_78,local_70), iVar4 != 0x1f &&
        (iVar4 = FUN_0123db50(auStack_78,local_70), 5 < iVar4 - 0x12U)))) {
      return;
    }
  }
  else {
    local_64 = 4;
    lVar7 = FUN_01246470(local_70,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
    if (lVar7 == 0) goto LAB_01fc0450;
    uVar3 = local_64 + 7;
    if (-1 < (int)local_64) {
      uVar3 = local_64;
    }
    if ((*(byte *)(lVar7 + (ulong)(uint)((int)uVar3 >> 3)) >> (ulong)(local_64 & 7) & 1) == 0)
    goto LAB_01fc0450;
  }
  puVar2 = PTR_DAT_04bb5ce0;
  iVar16 = *(int *)((long)param_2 + 0x2c);
  iVar4 = *(int *)((long)param_2 + 0x1c);
  fVar17 = ((float)*(int *)(param_2 + 3) * 5.0 + (float)*(int *)(param_2 + 5) * 5.0 + 5.0) * 0.5;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar8 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar5 = FUN_006bd550(*puVar8,0);
    if ((((iVar5 == 0x758f7eaf) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0))
       && (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) {
      lVar7 = *(long *)puVar2;
      if (lVar7 == 0) {
        iVar12 = 0;
        iVar10 = 0;
        iVar14 = 0x10;
        iVar13 = 0x10;
      }
      else {
        iVar12 = *(int *)(lVar7 + 0xd88);
        iVar10 = *(int *)(lVar7 + 0xd8c);
        iVar13 = *(int *)(lVar7 + 0xd98);
        iVar14 = *(int *)(lVar7 + 0xd9c);
      }
      iVar5 = iVar12;
      if (iVar13 <= iVar12) {
        iVar5 = iVar13;
      }
      if (iVar12 <= iVar13) {
        iVar12 = iVar13;
      }
      iVar13 = iVar10;
      if (iVar14 <= iVar10) {
        iVar13 = iVar14;
      }
      if (iVar10 <= iVar14) {
        iVar10 = iVar14;
      }
      goto LAB_01fc0598;
    }
  }
  if (DAT_05abff60 == 0) {
    iVar12 = 0;
    iVar13 = 0;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    iVar5 = *(int *)(DAT_05abff60 + 0x28);
    iVar13 = *(int *)(DAT_05abff60 + 0x2c);
    iVar12 = *(int *)(DAT_05abff60 + 0x38);
    iVar10 = *(int *)(DAT_05abff60 + 0x3c);
  }
LAB_01fc0598:
  if ((((float)iVar5 * 5.0 < fVar17) && (fVar17 < (float)iVar12 * 5.0 + 5.0)) &&
     ((fVar17 = ((float)iVar4 * 5.0 + (float)iVar16 * 5.0 + 5.0) * 0.5, (float)iVar13 * 5.0 < fVar17
      && (fVar17 < (float)iVar10 * 5.0 + 5.0)))) {
    psVar11 = (short *)*param_2;
    *(short *)(param_1 + 0x23f9) = *psVar11;
    *(char *)((long)param_1 + 0x11fca) = (char)psVar11[1];
    *(undefined1 *)((long)param_1 + 0x11fcb) = *(undefined1 *)((long)psVar11 + 3);
    *(undefined4 *)((long)param_1 + 0x11fcc) = *(undefined4 *)(psVar11 + 2);
    *(undefined4 *)(param_1 + 0x23fc) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((long)param_1 + 0x11fe4) = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x23fe) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((long)param_1 + 0x11ff4) = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined4 *)(param_1 + 0x23ff) = *(undefined4 *)(param_2 + 10);
    lVar7 = param_1[1];
    *(undefined4 *)((long)param_1 + 0x11ffc) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x2400) = *(undefined4 *)((long)param_2 + 0x34);
    *(undefined4 *)((long)param_1 + 0x12004) = *(undefined4 *)(param_2 + 7);
    uVar3 = *(uint *)(lVar7 + 0x288);
    *(undefined4 *)(lVar7 + 0x288) = *(undefined4 *)(lVar7 + 0x28c);
    uVar3 = uVar3 ^ uVar3 << 0xb;
    *(undefined4 *)(lVar7 + 0x28c) = *(undefined4 *)(lVar7 + 0x290);
    uVar1 = *(uint *)(lVar7 + 0x294);
    *(uint *)(lVar7 + 0x290) = uVar1;
    uVar3 = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
    *(uint *)(lVar7 + 0x294) = uVar3;
    puVar9 = (uint *)(**(code **)(*(long *)(DAT_053e0208 + 96000) + 0xf0))();
    if ((uint)((ulong)uVar3 * 100 >> 0x20) < *puVar9) {
      FUN_01fb63c4(param_1,*param_2,param_2 + 1,1);
      *(undefined1 *)(param_1 + 0xf0f) = 1;
    }
  }
  return;
}

