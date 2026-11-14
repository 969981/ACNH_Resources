
void FUN_0171ea90(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04bbde90;
  puVar3 = PTR_DAT_04bbde88;
  if (DAT_0524a598 != 0) {
    uVar2 = (uint)param_2 & 0xffff;
    if ((int)*(uint *)(DAT_0524a598 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0524a598 + 0xb0) == 0) ||
           (puVar7 = *(uint **)(*(long *)(DAT_0524a598 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
          ((uVar2 < *(uint *)(DAT_0524a598 + 200) &&
           (*(char *)(*(long *)(DAT_0524a598 + 0xd0) + (param_2 & 0xffff)) == '\0')))) ||
         (((*puVar7 <= uVar2 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_0171ec40;
      iVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar2 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                       (long)puVar7);
    }
    else {
      if (*(uint *)(DAT_0524a598 + 0x1c0) <= uVar2) goto LAB_0171ec40;
      if (*(uint *)(DAT_0524a598 + 0x1b0) <= uVar2) {
        uVar2 = 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_0524a598 + 0x1b8) + (ulong)uVar2 * 8);
    }
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar9 = *PTR_DAT_04bbde88;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x18);
            if (-1 < (int)uVar2) {
              lVar11 = (ulong)uVar2 + (long)puVar7;
              goto LAB_0171eba8;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)*puVar7;
          lVar11 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar5)) goto LAB_0171eba8;
          lVar11 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar1 = (long)puVar7 + (lVar11 - (long)puVar5);
          if (lVar1 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
          *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
          lVar11 = 0;
          if (uVar10 == 0) goto LAB_0171eba8;
          piVar6 = (int *)(lVar1 + 4);
          while (piVar6[-1] != 0x2c447591) {
            piVar6 = piVar6 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              lVar11 = 0;
              goto LAB_0171eba8;
            }
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x18) = iVar8;
        } while (*puVar7 != 0);
      }
      lVar11 = 0;
LAB_0171eba8:
      lVar1 = *(long *)PTR_PTR_04bbe1d0;
      if (lVar11 != 0) {
        lVar1 = lVar11;
      }
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      param_1[1] = lVar1;
      return;
    }
  }
LAB_0171ec40:
  lVar11 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar11;
  return;
}

