
void FUN_01de6b30(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  byte bVar6;
  undefined4 uVar7;
  byte bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined1 *puVar22;
  
  uVar16 = *(uint *)(param_1 + 0x18);
  if (uVar16 == 0) {
    *(undefined1 *)(param_1 + 0x31) = 0;
LAB_01de6e14:
    uVar18 = *(uint *)(param_1 + 0x38);
    lVar20 = *(long *)(param_1 + 0x40);
  }
  else {
    if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0x2078) != '\0' && *(char *)(param_1 + 0x83) == '\0')
    {
      uVar17 = *(ulong *)(param_1 + 0x60);
      uVar18 = (uint)(uVar17 >> 0x20);
      uVar12 = (int)uVar17 - ((uint)(uVar17 >> 1) & 0x55555555);
      uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      iVar3 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + (uVar12 + (uVar12 >> 0x10) & 0x3f);
      if (iVar3 != 0) {
        lVar20 = *(long *)(*(long *)PTR_DAT_04bb21d0 + 0xf88);
        iVar10 = 2;
        iVar11 = 1;
        plVar1 = (long *)(lVar20 + 0x18);
        plVar2 = (long *)(lVar20 + 0x120);
        uVar21 = uVar17;
        do {
          if (uVar17 != 0) {
            uVar14 = uVar17;
            iVar15 = iVar10;
            do {
              iVar15 = iVar15 + -1;
              if (iVar15 < 2) {
                uVar14 = uVar14 - 1 & (uVar14 ^ 0xffffffffffffffff);
                uVar12 = (uint)uVar14;
                uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                uVar18 = (uint)(uVar14 >> 0x20);
                uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
                uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
                uVar12 = uVar12 + (uVar12 >> 8);
                uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                uVar18 = uVar18 + (uVar18 >> 8);
                uVar12 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + (uVar12 + (uVar12 >> 0x10) & 0x3f);
                pbVar13 = PTR_DAT_04bb5038 + uVar12;
                if (7 < uVar12) {
                  pbVar13 = PTR_DAT_04bb32e0;
                }
                goto LAB_01de6cd4;
              }
              uVar14 = uVar14 - 1 & uVar14;
            } while (uVar14 != 0);
          }
          pbVar13 = PTR_DAT_04bb32e0;
LAB_01de6cd4:
          bVar8 = *pbVar13;
          bVar6 = bVar8;
          if (7 < (ulong)bVar8) {
            bVar6 = 0xff;
          }
          uVar14 = (long)(char)bVar6 & 0xffffffff;
          plVar4 = plVar1;
          if (bVar8 < 8) {
            plVar4 = plVar1 + uVar14 * 4;
          }
          if ((*plVar4 == 0) || ((char)plVar4[2] == -1)) {
            if (bVar8 < 8) goto LAB_01de6d58;
LAB_01de6c20:
            uVar21 = uVar21 & (1L << ((long)(char)bVar6 & 0x3fU) ^ 0xffffffffffffffffU);
          }
          else {
            plVar5 = plVar2;
            if (bVar8 < 8) {
              plVar5 = plVar2 + uVar14 * 4;
            }
            if ((((*plVar5 == 0) || ((char)plVar5[2] == -1)) || (7 < bVar8)) ||
               (*plVar5 != *plVar4 || (char)plVar5[1] != (char)plVar4[1])) goto LAB_01de6c20;
LAB_01de6d58:
            if ((plVar1[(ulong)bVar8 * 4] == 0) || ((char)(plVar1 + (ulong)bVar8 * 4)[2] == -1))
            goto LAB_01de6c20;
          }
          bVar9 = iVar11 != iVar3;
          iVar11 = iVar11 + 1;
          iVar10 = iVar10 + 1;
        } while (bVar9);
        if (uVar21 != uVar17) {
          *(undefined1 *)(param_1 + 0x82) = 1;
          *(ulong *)(param_1 + 0x60) = uVar21;
          *(ulong *)(param_1 + 0x68) = *(ulong *)(param_1 + 0x68) & uVar21;
        }
      }
    }
    if ((uVar16 != 0xffffffff) || (*(char *)(param_1 + 0x30) == '\0')) {
LAB_01de6e04:
      *(undefined1 *)(param_1 + 0x31) = 0;
      if (uVar16 == 0xffffffff) goto LAB_01de6e4c;
      goto LAB_01de6e14;
    }
    puVar22 = (undefined1 *)(param_1 + 0x31);
    *puVar22 = 1;
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x24) = uVar7;
    uVar16 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x18) = uVar16;
    if (uVar16 == 0xffffffff) {
      *puVar22 = 0;
      goto LAB_01de6e4c;
    }
    uVar18 = *(uint *)(param_1 + 0x38);
    lVar20 = *(long *)(param_1 + 0x40);
    uVar12 = uVar16;
    if (uVar18 <= uVar16) {
      uVar12 = 0;
    }
    puVar19 = *(undefined8 **)(lVar20 + (long)(int)uVar12 * 0x40);
    if (puVar19 != (undefined8 *)0x0) {
      (*(code *)*puVar19)();
      uVar16 = *(uint *)(param_1 + 0x18);
      goto LAB_01de6e04;
    }
    *puVar22 = 0;
  }
  if (uVar18 <= uVar16) {
    uVar16 = 0;
  }
  lVar20 = *(long *)(lVar20 + (long)(int)uVar16 * 0x40);
  if ((lVar20 != 0) && ((**(code **)(lVar20 + 8))(), *(char *)(param_1 + 0x31) != '\0')) {
    return;
  }
LAB_01de6e4c:
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

