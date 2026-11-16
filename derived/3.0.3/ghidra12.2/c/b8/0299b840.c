
void FUN_0299b840(long param_1)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  int *piVar4;
  short sVar5;
  int *piVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 local_1918 [4];
  uint local_1914 [2];
  byte local_190c [4];
  int local_1908 [4];
  int local_18f8;
  int local_18f4;
  int iStack_18f0;
  int local_18ec;
  int aiStack_18e8 [1561];
  undefined1 uStack_81;
  undefined1 local_80 [16];
  undefined1 *local_70 [2];
  
  puVar13 = local_1918;
  lVar15 = 0x79;
  do {
    *puVar13 = 0;
    lVar15 = lVar15 + -1;
    *(undefined8 *)(puVar13 + 4) = 0xffffffff00000000;
    puVar13[0xc] = 0;
    *(undefined4 *)(puVar13 + 0x20) = 0xffffffff;
    *(undefined8 *)(puVar13 + 0x24) = 0;
    *(undefined8 *)(puVar13 + 0x2c) = 0;
    *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
    puVar13 = puVar13 + 0x34;
  } while (lVar15 != 0);
  auVar21 = FUN_02642bc0();
  uVar14 = auVar21._8_8_ & 0xffffffff;
  if (uVar14 != 0xffffffff) {
    local_70[0] = &uStack_81;
    local_80 = auVar21;
    lVar8 = (*(code *)(&PTR_LAB_04a88310)[uVar14])(local_70,local_80);
    uVar14 = 0;
    lVar15 = 0;
    if (lVar8 != 0) {
      lVar15 = lVar8 + 0x98390;
    }
    iVar16 = 0;
    uVar17 = 0;
    do {
      puVar13 = local_1918 + uVar17 * 0x34;
      if (0x78 < (uint)uVar14) {
        puVar13 = local_1918;
      }
      lVar8 = lVar15 + 0x38 + (long)(int)uVar17 * 0x38;
      if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28);
        uVar10 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          uVar10 = (**(code **)*puVar9)();
        }
      }
      bVar7 = 0x78 < (uint)uVar14;
      sVar5 = *(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      *puVar13 = 0;
      uVar11 = (uint)sVar5;
      puVar2 = local_1914 + uVar17 * 0xd;
      if (bVar7) {
        puVar2 = local_1914;
      }
      *puVar2 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      puVar2 = local_1914 + uVar17 * 0xd + 1;
      if (bVar7) {
        puVar2 = local_1914 + 1;
      }
      *puVar2 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 2);
      pbVar3 = local_190c + uVar17 * 0x34;
      if (bVar7) {
        pbVar3 = local_190c;
      }
      *pbVar3 = *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 3) & 1;
      lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
      iVar18 = *(int *)(lVar1 + 8);
      iVar19 = *(int *)(lVar1 + 0xc);
      piVar4 = local_1908 + uVar17 * 0xd + 5;
      if (bVar7) {
        piVar4 = local_1908 + 5;
      }
      *piVar4 = *(int *)(lVar1 + 4);
      piVar4 = local_1908 + uVar17 * 0xd + 6;
      if (bVar7) {
        piVar4 = local_1908 + 6;
      }
      *piVar4 = iVar18;
      piVar4 = local_1908 + uVar17 * 0xd + 7;
      if (bVar7) {
        piVar4 = local_1908 + 7;
      }
      *piVar4 = iVar19;
      piVar4 = local_1908 + uVar17 * 0xd;
      if (bVar7) {
        piVar4 = local_1908;
      }
      *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10);
      piVar4 = local_1908 + uVar17 * 0xd + 1;
      if (bVar7) {
        piVar4 = local_1908 + 1;
      }
      *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x12);
      piVar4 = local_1908 + uVar17 * 0xd + 2;
      if (bVar7) {
        piVar4 = local_1908 + 2;
      }
      *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x14);
      piVar4 = local_1908 + uVar17 * 0xd + 3;
      if (bVar7) {
        piVar4 = local_1908 + 3;
      }
      *piVar4 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x16);
      piVar4 = local_1908 + uVar17 * 0xd + 8;
      piVar6 = local_1908 + uVar17 * 0xd + 4;
      if (bVar7) {
        piVar4 = local_1908 + 8;
        piVar6 = local_1908 + 4;
      }
      *piVar6 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x17);
      *piVar4 = *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x18);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
        (**(code **)*puVar9)();
      }
      uVar14 = uVar17 + 1;
      iVar16 = iVar16 + 1;
    } while (((int)uVar14 != 0x3c) && (uVar17 = uVar14 & 0xffffffff, (int)uVar14 < 0x79));
    auVar21 = FUN_02642bc0();
    uVar14 = auVar21._8_8_ & 0xffffffff;
    if (uVar14 != 0xffffffff) {
      local_70[0] = &uStack_81;
      local_80 = auVar21;
      lVar8 = (*(code *)(&PTR_LAB_04a88310)[uVar14])(local_70,local_80);
      iVar18 = 0;
      lVar15 = 0;
      if (lVar8 != 0) {
        lVar15 = lVar8 + 0x990e8;
      }
      do {
        uVar11 = iVar16 + iVar18;
        if (0x78 < (int)uVar11) break;
        puVar13 = local_1918 + (ulong)uVar11 * 0x34;
        if (0x78 < uVar11) {
          puVar13 = local_1918;
        }
        lVar8 = lVar15 + 0x38 + (long)iVar18 * 0x38;
        if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
          uVar14 = 0;
        }
        else {
          puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28);
          uVar14 = 0;
          if (puVar9 != (undefined8 *)0x0) {
            uVar14 = (**(code **)*puVar9)();
          }
        }
        bVar7 = 0x78 < uVar11;
        sVar5 = *(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
        *puVar13 = 0;
        uVar12 = (uint)sVar5;
        uVar17 = (ulong)uVar11;
        puVar2 = local_1914 + uVar17 * 0xd;
        if (bVar7) {
          puVar2 = local_1914;
        }
        *puVar2 = uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU);
        puVar2 = local_1914 + uVar17 * 0xd + 1;
        if (bVar7) {
          puVar2 = local_1914 + 1;
        }
        *puVar2 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 2);
        pbVar3 = local_190c + uVar17 * 0x34;
        if (bVar7) {
          pbVar3 = local_190c;
        }
        *pbVar3 = *(byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 3) & 1;
        lVar1 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8);
        iVar19 = *(int *)(lVar1 + 8);
        iVar20 = *(int *)(lVar1 + 0xc);
        piVar4 = local_1908 + uVar17 * 0xd + 5;
        if (bVar7) {
          piVar4 = local_1908 + 5;
        }
        *piVar4 = *(int *)(lVar1 + 4);
        piVar4 = local_1908 + uVar17 * 0xd + 6;
        if (bVar7) {
          piVar4 = local_1908 + 6;
        }
        *piVar4 = iVar19;
        piVar4 = local_1908 + uVar17 * 0xd + 7;
        if (bVar7) {
          piVar4 = local_1908 + 7;
        }
        *piVar4 = iVar20;
        piVar4 = local_1908 + uVar17 * 0xd;
        if (bVar7) {
          piVar4 = local_1908;
        }
        *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x10);
        piVar4 = local_1908 + uVar17 * 0xd + 1;
        if (bVar7) {
          piVar4 = local_1908 + 1;
        }
        *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x12);
        piVar4 = local_1908 + uVar17 * 0xd + 2;
        if (bVar7) {
          piVar4 = local_1908 + 2;
        }
        *piVar4 = (int)*(short *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x14);
        piVar4 = local_1908 + uVar17 * 0xd + 3;
        if (bVar7) {
          piVar4 = local_1908 + 3;
        }
        *piVar4 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x16);
        piVar4 = local_1908 + uVar17 * 0xd + 8;
        piVar6 = local_1908 + uVar17 * 0xd + 4;
        if (bVar7) {
          piVar4 = local_1908 + 8;
          piVar6 = local_1908 + 4;
        }
        *piVar6 = (int)*(char *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x17);
        *piVar4 = *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x18);
        if ((((uVar14 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 0x45);
      iVar16 = 0;
      do {
        if ((0 < (int)local_1914[(long)iVar16 * 0xd]) || (local_190c[(long)iVar16 * 0x34] != 0)) {
          if (iVar16 == 0x3b) {
            FUN_02999f48(param_1,0);
          }
          else {
            FUN_02999800(param_1,local_1918 + (long)iVar16 * 0x34);
          }
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 != 0x79);
      *(undefined1 *)(param_1 + 0xf0) = 1;
      return;
    }
  }
  local_80 = auVar21;
                    /* WARNING: Subroutine does not return */
  FUN_00d72dc0();
}

