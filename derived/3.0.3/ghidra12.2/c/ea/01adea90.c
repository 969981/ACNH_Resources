
void FUN_01adea90(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  int iVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  undefined *puVar13;
  
  puVar4 = PTR_DAT_04bbff30;
  puVar8 = PTR_DAT_04bbff28;
  puVar7 = *(uint **)(param_2 + 0x10);
  uVar6 = 0;
  if (puVar7 != (uint *)0x0) {
    uVar6 = *puVar7;
    if (uVar6 != 0 && puVar7 != (uint *)(ulong)uVar6) {
      puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar6);
      if (((*puVar10 != 0) && (uVar6 = puVar10[1], uVar6 != 0)) && ((ulong)(ushort)puVar10[2] != 0))
      {
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + lVar1 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar6);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0150) &&
             (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc0150 + 8) + (long)(int)uVar2 * 2),
             uVar6 = (uint)uVar3, uVar3 < 0x6b)) goto LAB_01adeb20;
        }
      }
    }
    uVar6 = 0;
  }
LAB_01adeb20:
  if ((int)*(uint *)(DAT_0532a7c0 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a7c0 + 0xb0) != 0) &&
         (puVar7 = *(uint **)(*(long *)(DAT_0532a7c0 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a7c0 + 200) <= uVar6 ||
         (*(char *)(*(long *)(DAT_0532a7c0 + 0xd0) + (long)(int)uVar6) != '\0')))) &&
       (((uVar6 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
      iVar9 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar6 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                       (long)puVar7);
      goto joined_r0x01adecb4;
    }
  }
  else if (uVar6 < *(uint *)(DAT_0532a7c0 + 0x1c0)) {
    if (*(uint *)(DAT_0532a7c0 + 0x1b0) <= uVar6) {
      uVar6 = 0;
    }
    puVar7 = *(uint **)(*(long *)(DAT_0532a7c0 + 0x1b8) + (ulong)uVar6 * 8);
joined_r0x01adecb4:
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar11 = *PTR_DAT_04bbff28;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar8 = 1;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar6 = *(uint *)(puVar4 + 0x20);
            if (-1 < (int)uVar6) {
              puVar13 = (undefined *)((ulong)uVar6 + (long)puVar7);
              goto LAB_01adec38;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar7;
          puVar13 = (undefined *)0x0;
          if ((*puVar7 == 0) || (puVar7 == puVar10)) goto LAB_01adec38;
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + (lVar1 - (long)puVar10);
          if (lVar1 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
          puVar13 = (undefined *)0x0;
          if (uVar12 == 0) goto LAB_01adec38;
          piVar5 = (int *)(lVar1 + 4);
          while (piVar5[-1] != -0x20854b3d) {
            piVar5 = piVar5 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              puVar13 = (undefined *)0x0;
              goto LAB_01adec38;
            }
          }
          iVar9 = 0;
          if (*piVar5 != -1) {
            iVar9 = *piVar5;
          }
          *(int *)(puVar4 + 0x20) = iVar9;
        } while (*puVar7 != 0);
      }
      puVar13 = (undefined *)0x0;
LAB_01adec38:
      puVar8 = PTR_DAT_04c48528;
      if (puVar13 != (undefined *)0x0) {
        puVar8 = puVar13;
      }
      goto LAB_01adecc4;
    }
  }
  puVar8 = *(undefined **)(PTR_PTR_04bb2238 + 8);
LAB_01adecc4:
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar8;
  return;
}

