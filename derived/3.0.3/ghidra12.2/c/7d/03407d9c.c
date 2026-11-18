
void FUN_03407d9c(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 long param_5)

{
  uint uVar1;
  undefined2 uVar2;
  int *piVar3;
  float fVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar14;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_34;
  
  if (*(int *)(param_5 + 0xc) == 0) {
    return;
  }
  if (((*(int *)(param_5 + 0xc) != 0) && (*(int *)(param_5 + 0xc) == 0x1b)) &&
     ((*(byte *)(param_5 + 8) & 1) == 0)) {
    iVar11 = *(int *)(param_5 + 0x20);
    iVar12 = *(int *)(param_5 + 0x18);
    iVar14 = *(int *)(param_5 + 0x1c);
    lVar5 = *(long *)(param_4 + 8);
    piVar3 = (int *)(lVar5 + 8);
    if (*(int *)(lVar5 + 0xc) <= *piVar3) {
      return;
    }
    pfVar7 = *(float **)(lVar5 + 0x18);
    if (pfVar7 != (float *)0x0) {
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)pfVar7;
    }
    *pfVar7 = (float)iVar12 * 5.0 + 2.5;
    pfVar7[1] = (float)iVar14 * 5.0 + 2.5;
    pfVar7[2] = (float)((int)(long)((float)iVar11 * 90.0 * 11930465.0) + 0x10000000U >> 0x1d);
    iVar11 = *(int *)(lVar5 + 8);
    if (*(int *)(lVar5 + 0xc) <= iVar11) {
      return;
    }
    plVar6 = (long *)(lVar5 + 0x10);
    goto LAB_0340802c;
  }
  if (*(int *)(param_5 + 0xc) == 0) {
    return;
  }
  if (*(int *)(param_5 + 0xc) != 0x1a) {
    return;
  }
  if ((*(byte *)(param_5 + 8) & 1) != 0) {
    return;
  }
  local_40 = *(undefined4 *)(param_5 + 0x18);
  uStack_3c = *(undefined4 *)(param_5 + 0x1c);
  local_48 = PTR_DAT_04bb2010 + 0x10;
  uVar2 = *(undefined2 *)(param_5 + 0x24);
  local_34 = *(int *)(param_5 + 0x20);
  if (*(int *)(param_5 + 0xc) != 0x1a) {
    uVar2 = 0;
  }
  local_4c = (undefined4)(long)((float)local_34 * 90.0 * 11930465.0);
  fVar13 = (float)FUN_02b61250(&local_48,uVar2,&local_4c);
  iVar11 = *(int *)(param_5 + 0x20);
  fVar4 = 0.0;
  lVar5 = *(long *)PTR_DAT_04bb5008;
  uVar10 = (uint)*(ushort *)(param_5 + 0x24);
  if (*(int *)(param_5 + 0xc) != 0x1a) {
    uVar10 = 0;
  }
  uVar10 = uVar10 - *(ushort *)(lVar5 + 0xff0);
  if (uVar10 < *(uint *)(lVar5 + 0xfd0)) {
    puVar8 = *(uint **)(*(long *)(lVar5 + 0xfd8) + (long)(int)uVar10 * 8);
    if (puVar8 == (uint *)0x0) {
LAB_03407fc8:
      fVar4 = 0.0;
    }
    else {
      uVar10 = *puVar8;
      fVar4 = 0.0;
      if ((uVar10 != 0) && (puVar8 != (uint *)(ulong)uVar10)) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar10);
        fVar4 = 0.0;
        if (*puVar9 != 0) {
          uVar10 = puVar9[1];
          if ((uVar10 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar9 + lVar5 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar5 != 0) {
              uVar1 = 0;
              if ((ulong)uVar10 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar10);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05604488) &&
                 (fVar4 = (float)(uint)*(ushort *)(DAT_05604490 + (long)(int)uVar1 * 2),
                 (uint)fVar4 < 6)) goto LAB_03407fcc;
            }
          }
          goto LAB_03407fc8;
        }
      }
    }
  }
LAB_03407fcc:
  lVar5 = *(long *)(param_4 + 8);
  if (*(int *)(lVar5 + 0x11c) <= *(int *)(lVar5 + 0x118)) {
    return;
  }
  pfVar7 = *(float **)(lVar5 + 0x128);
  if (pfVar7 != (float *)0x0) {
    *(undefined8 *)(lVar5 + 0x128) = *(undefined8 *)pfVar7;
  }
  *pfVar7 = fVar13;
  pfVar7[1] = param_3;
  pfVar7[2] = (float)((int)(long)((float)iVar11 * 90.0 * 11930465.0) + 0x10000000U >> 0x1d);
  pfVar7[3] = fVar4;
  iVar11 = *(int *)(lVar5 + 0x118);
  if (*(int *)(lVar5 + 0x11c) <= iVar11) {
    return;
  }
  piVar3 = (int *)(lVar5 + 0x118);
  plVar6 = (long *)(lVar5 + 0x120);
LAB_0340802c:
  *(float **)(*plVar6 + (long)iVar11 * 8) = pfVar7;
  *piVar3 = *piVar3 + 1;
  return;
}

