
undefined8 FUN_03729240(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  uVar6 = FUN_037242d0();
  if (((uVar6 & 1) == 0) || ((*(uint *)(&DAT_00001230 + param_1) >> 0xf & 1) == 0)) {
    uVar4 = FUN_03722560(param_1,param_2);
    if (uVar4 != 0xffffffff) {
      lVar8 = *(long *)PTR_DAT_04bb2720;
      if (lVar8 == 0) {
        puVar12 = &DAT_055c04a0;
      }
      else {
        puVar12 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar12 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar8 + 0x338))
          ;
          iVar5 = FUN_006bd550(*puVar12,0);
          puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar12 = &DAT_055c04a0;
          }
        }
      }
      iVar5 = *(int *)(puVar12 + 7);
      if ((((iVar5 == -0x7975b8e8) || (iVar5 == -0x17df00c3)) || (iVar5 == -0x3e092032)) &&
         ((uVar4 < *(uint *)(param_1 + 0xe0) &&
          (lVar8 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar4 * 8),
          (*(ushort *)(lVar8 + 0x114) >> 7 & 1) != 0)))) {
        iVar5 = *(int *)(lVar8 + 0xd0);
        lVar8 = (long)(int)uVar4;
        if (iVar5 != -1) {
          iVar2 = *(int *)(param_1 + 0x10);
          if (iVar2 < *(int *)(param_1 + 0x14)) {
            if (iVar2 != 0) {
              puVar12 = *(undefined8 **)(param_1 + 0x18);
              lVar10 = (long)iVar2 << 3;
              do {
                if (*(int *)*puVar12 == iVar5) goto LAB_037293e8;
                puVar12 = puVar12 + 1;
                lVar10 = lVar10 + -8;
              } while (lVar10 != 0);
            }
            piVar9 = *(int **)(param_1 + 0x20);
            if (piVar9 != (int *)0x0) {
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)piVar9;
            }
            *piVar9 = iVar5;
            if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
              *(int **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = piVar9;
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            }
          }
        }
LAB_037293e8:
        if ((int)uVar4 < *(int *)(param_1 + 0xe0)) {
          lVar10 = lVar8;
          do {
            puVar12 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar10 * 8);
            (**(code **)*puVar12)(puVar12);
            lVar10 = lVar10 + 1;
            *puVar12 = *(undefined8 *)(param_1 + 0xf0);
            *(undefined8 **)(param_1 + 0xf0) = puVar12;
          } while (lVar10 < (int)(uVar4 + 1));
        }
        if ((-1 < (int)uVar4) && (iVar5 = *(int *)(param_1 + 0xe0), (int)uVar4 < iVar5)) {
          uVar1 = uVar4 + 1;
          uVar3 = iVar5 - uVar1;
          if (uVar3 != 0 && (int)uVar1 <= iVar5) {
            memmove((void *)(*(long *)(param_1 + 0xe8) + (ulong)uVar4 * 8),
                    (void *)(*(long *)(param_1 + 0xe8) + (ulong)uVar1 * 8),
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
            iVar5 = *(int *)(param_1 + 0xe0);
          }
          *(int *)(param_1 + 0xe0) = iVar5 + -1;
        }
        if ((int)uVar4 < *(int *)(param_1 + 0x1008)) {
          puVar12 = *(undefined8 **)(param_1 + 0x1018);
          do {
            puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x1010) + lVar8 * 8);
            lVar8 = lVar8 + 1;
            *puVar11 = puVar12;
            *(undefined8 **)(param_1 + 0x1018) = puVar11;
            puVar12 = puVar11;
          } while (lVar8 < (int)(uVar4 + 1));
        }
        if ((-1 < (int)uVar4) && (iVar5 = *(int *)(param_1 + 0x1008), (int)uVar4 < iVar5)) {
          uVar1 = uVar4 + 1;
          uVar3 = iVar5 - uVar1;
          if (uVar3 != 0 && (int)uVar1 <= iVar5) {
            memmove((void *)(*(long *)(param_1 + 0x1010) + (ulong)uVar4 * 8),
                    (void *)(*(long *)(param_1 + 0x1010) + (ulong)uVar1 * 8),
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
            iVar5 = *(int *)(param_1 + 0x1008);
          }
          *(int *)(param_1 + 0x1008) = iVar5 + -1;
        }
        goto LAB_037292f0;
      }
    }
    uVar7 = 0;
  }
  else {
    *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xffff7fff;
LAB_037292f0:
    uVar7 = 1;
  }
  return uVar7;
}

