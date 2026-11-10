
void FUN_0034f070(undefined1 *param_1,undefined8 param_2,ushort *param_3,long param_4)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong local_80 [4];
  
  *(uint *)(param_1 + 4) = (uint)param_3[1];
  *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 0x10) + (ulong)param_3[1] * 8;
  puVar5 = PTR_DAT_04bcfc98;
  puVar4 = PTR_DAT_04bcfc90;
  puVar3 = PTR_DAT_04bcfc88;
  if (param_3[1] != 0) {
    lVar9 = 0;
    lVar11 = 0;
    uVar12 = 0;
    do {
      lVar8 = *(long *)(param_3 + 8);
      lVar1 = *(long *)(param_1 + 0x10) + lVar11;
      (**(code **)puVar3)(lVar1);
      (**(code **)puVar4)(lVar1,(long)*(int *)(lVar8 + lVar9));
      (**(code **)puVar5)(lVar1,((int *)(lVar8 + lVar9))[1]);
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 8;
      lVar9 = lVar9 + 0x10;
    } while (uVar12 < param_3[1]);
  }
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[0] = 0;
  local_80[1] = 0;
  nn::util::BitArray::reset();
  uVar12 = (ulong)*param_3;
  if (*param_3 == 0) {
    iVar10 = 0;
    uVar13 = 0xffffffff;
    uVar14 = 0;
LAB_0034f278:
    *(undefined4 *)(param_1 + 8) = 0;
    if ((int)uVar13 < iVar10) goto LAB_0034f2dc;
  }
  else {
    if (param_4 == 0) {
      lVar11 = 0;
      uVar14 = 0;
      iVar10 = 0;
      uVar13 = 0xffffffff;
      do {
        lVar9 = *(long *)(param_3 + 4) + lVar11;
        uVar2 = *(ushort *)(lVar9 + 2);
        if (-1 < (short)uVar2) {
          lVar1 = *(long *)(param_1 + 0x18) + (ulong)uVar2 * 4;
          (**(code **)PTR_DAT_04bcfc60)(lVar1);
          uVar6 = FUN_0034ccc0(*(undefined4 *)(lVar9 + 0xc));
          (**(code **)PTR_DAT_04bcfc68)(lVar1,uVar6,*(undefined4 *)(lVar9 + 8));
          (**(code **)PTR_DAT_04bcfc70)(lVar1,*(undefined2 *)(lVar9 + 4));
          uVar12 = (ulong)(uVar2 >> 3) & 0x1ff8;
          if ((int)uVar13 <= (int)(uint)uVar2) {
            uVar13 = (uint)uVar2;
          }
          iVar10 = iVar10 + 1;
          *(ulong *)((long)local_80 + uVar12) =
               *(ulong *)((long)local_80 + uVar12) | 1L << ((ulong)uVar2 & 0x3f);
          uVar12 = (ulong)*param_3;
        }
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar14 < uVar12);
    }
    else {
      lVar11 = 0;
      uVar14 = 0;
      iVar10 = 0;
      uVar13 = 0xffffffff;
      do {
        lVar9 = *(long *)(param_3 + 4) + lVar11;
        if (*(long *)(lVar9 + 0x10) == 0) {
          uVar12 = (ulong)*(short *)(lVar9 + 2);
          if (-1 < *(short *)(lVar9 + 2)) goto LAB_0034f1c8;
        }
        else {
          uVar7 = FUN_0034e3c0(param_4,0,0);
          uVar12 = uVar7 & 0xffffffff;
          if (-1 < (int)uVar7) {
LAB_0034f1c8:
            lVar1 = *(long *)(param_1 + 0x18) + (uVar12 & 0xffffffff) * 4;
            (**(code **)PTR_DAT_04bcfc60)(lVar1);
            uVar6 = FUN_0034ccc0(*(undefined4 *)(lVar9 + 0xc));
            (**(code **)PTR_DAT_04bcfc68)(lVar1,uVar6,*(undefined4 *)(lVar9 + 8));
            (**(code **)PTR_DAT_04bcfc70)(lVar1,*(undefined2 *)(lVar9 + 4));
            uVar7 = uVar12 >> 6 & 0x3ffffff;
            if ((int)uVar13 <= (int)(uint)uVar12) {
              uVar13 = (uint)uVar12;
            }
            iVar10 = iVar10 + 1;
            local_80[uVar7] = local_80[uVar7] | 1L << (uVar12 & 0x3f);
          }
        }
        uVar12 = (ulong)*param_3;
        uVar14 = uVar14 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar14 < uVar12);
    }
    uVar14 = (ulong)(uVar13 + 1);
    if ((int)uVar12 == 0) goto LAB_0034f278;
    *(uint *)(param_1 + 8) = uVar13 + 1;
    if ((int)uVar13 < iVar10) goto LAB_0034f2dc;
  }
  puVar3 = PTR_DAT_04bcfc60;
  if (-1 < (int)uVar13) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      if ((local_80[uVar12 >> 6 & 0x3ffffff] >> (uVar12 & 0x3f) & 1) == 0) {
        (**(code **)puVar3)(*(long *)(param_1 + 0x18) + lVar11);
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 4;
    } while (uVar14 != uVar12);
  }
LAB_0034f2dc:
  *param_1 = 1;
  return;
}

