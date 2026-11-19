
uint FUN_03b27580(size_t param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  lVar9 = *(long *)(param_1 + 0x30);
  lVar2 = param_1 + 0x28;
  if (lVar9 != lVar2) {
    if (param_4 == (char *)0x0) {
      do {
        lVar10 = *(long *)(lVar9 + 0x48);
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x38);
          uVar5 = (ulong)*(ushort *)(lVar11 + 0xc);
          piVar7 = (int *)(lVar11 + 8) + uVar5 * 4;
          iVar8 = *piVar7;
          if (*(int *)(lVar11 + 8) < *piVar7) {
            do {
              uVar5 = (ulong)*(ushort *)(lVar11 + 8 + uVar5 * 0x10 + 4);
              piVar7 = (int *)(lVar11 + 8 + uVar5 * 0x10);
              bVar1 = iVar8 < *piVar7;
              iVar8 = *piVar7;
            } while (bVar1);
          }
          if ((**(short **)(piVar7 + 2) == 0) &&
             (uVar5 = (long)piVar7 + (-0x18 - lVar11),
             ((uVar5 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) goto LAB_03b27714;
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar2);
    }
    else {
      do {
        lVar10 = *(long *)(lVar9 + 0x48);
        if (lVar10 != 0) {
          lVar11 = *(long *)(lVar10 + 0x38);
          param_1 = strlen(param_4);
          uVar5 = (ulong)*(ushort *)(lVar11 + 0xc);
          puVar12 = (uint *)((int *)(lVar11 + 8) + uVar5 * 4);
          uVar3 = *puVar12;
          if (*(int *)(lVar11 + 8) < (int)*puVar12) {
            do {
              uVar6 = (long)((ulong)uVar3 << 0x20) >> 0x23;
              if (uVar6 < param_1) {
                uVar6 = (ulong)((byte)param_4[param_1 + ~uVar6] >> ((ulong)uVar3 & 7)) & 1;
              }
              else {
                uVar6 = 0;
              }
              uVar5 = (ulong)*(ushort *)(lVar11 + 8 + uVar5 * 0x10 + uVar6 * 2 + 4);
              puVar12 = (uint *)(lVar11 + 8 + uVar5 * 0x10);
              bVar1 = (int)uVar3 < (int)*puVar12;
              uVar3 = *puVar12;
            } while (bVar1);
          }
          if (param_1 == **(ushort **)(puVar12 + 2)) {
            uVar3 = memcmp(*(ushort **)(puVar12 + 2) + 1,param_4,param_1);
            param_1 = (size_t)uVar3;
            if ((uVar3 == 0) &&
               (uVar5 = (long)puVar12 + (-0x18 - lVar11),
               ((uVar5 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) goto LAB_03b27714;
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != lVar2);
    }
  }
  uVar3 = (uint)param_1;
  uVar4 = 0;
LAB_03b27738:
  return uVar4 & uVar3;
LAB_03b27714:
  uVar3 = FUN_0038bf50(param_2,param_3,
                       *(undefined8 *)(*(long *)(lVar10 + 0x28) + (long)(int)(uVar5 >> 4) * 8));
  uVar4 = 1;
  goto LAB_03b27738;
}

