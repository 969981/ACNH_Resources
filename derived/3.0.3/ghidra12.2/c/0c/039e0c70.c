
void FUN_039e0c70(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  long lVar24;
  
  iVar14 = *(int *)(param_1 + 0x1d0);
  if (iVar14 != 0) {
    lVar10 = *(long *)(param_1 + 0x1d8);
    iVar16 = 0;
    lVar8 = lVar10;
    iVar19 = iVar14;
    if (iVar14 == 0) goto LAB_039e0cf0;
    do {
      lVar7 = lVar10 + (long)iVar16 * 0x910;
      iVar23 = 0;
      plVar1 = (long *)(lVar7 + 0x868);
      do {
        lVar21 = lVar8 + (long)iVar23 * 0x910;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        (**(code **)(*plVar1 + 0x18))(plVar1);
        plVar22 = (long *)(lVar21 + 0xa0);
        lVar24 = *(long *)(lVar7 + 0x870);
        (**(code **)(*plVar22 + 0x18))(plVar22);
        lVar21 = *(long *)(lVar21 + 0xa8);
        if (lVar24 == lVar21) {
LAB_039e0df4:
          iVar19 = *(int *)(param_1 + 0x1d0);
          goto joined_r0x039e0df8;
        }
        uVar9 = 0;
        bVar6 = true;
        lVar24 = *(long *)(lVar7 + 0x870) + 2;
        do {
          lVar3 = lVar24 + uVar9;
          cVar5 = *(char *)(lVar3 + -2);
          if (cVar5 != *(char *)(lVar21 + uVar9)) break;
          if (cVar5 == '\0') {
            if (bVar6) goto LAB_039e0df4;
            break;
          }
          cVar5 = *(char *)(lVar3 + -1);
          if (cVar5 != *(char *)(lVar21 + uVar9 + 1)) break;
          if (cVar5 == '\0') goto LAB_039e0df4;
          cVar5 = *(char *)(lVar24 + uVar9);
          if (cVar5 != *(char *)(lVar21 + uVar9 + 2)) break;
          if (cVar5 == '\0') goto LAB_039e0df4;
          bVar6 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
        iVar23 = iVar23 + 1;
      } while (iVar19 != iVar23);
      iVar23 = -1;
      iVar19 = *(int *)(param_1 + 0x1d0);
joined_r0x039e0df8:
      if (iVar19 != 0) {
        lVar8 = *(long *)(param_1 + 0x1d8);
        iVar20 = 0;
        do {
          lVar21 = lVar8 + (long)iVar20 * 0x910;
          (**(code **)(*plVar1 + 0x18))(plVar1);
          (**(code **)(*plVar1 + 0x18))(plVar1);
          plVar22 = (long *)(lVar21 + 0xa0);
          lVar24 = *(long *)(lVar7 + 0x870);
          (**(code **)(*plVar22 + 0x18))(plVar22);
          lVar21 = *(long *)(lVar21 + 0xa8);
          if (lVar24 == lVar21) goto LAB_039e0f08;
          uVar9 = 0;
          bVar6 = true;
          lVar24 = *(long *)(lVar7 + 0x870) + 2;
          do {
            lVar3 = lVar24 + uVar9;
            cVar5 = *(char *)(lVar3 + -2);
            if (cVar5 != *(char *)(lVar21 + uVar9)) break;
            if (cVar5 == '\0') {
              if (bVar6) goto LAB_039e0f08;
              break;
            }
            cVar5 = *(char *)(lVar3 + -1);
            if (cVar5 != *(char *)(lVar21 + uVar9 + 1)) break;
            if (cVar5 == '\0') goto LAB_039e0f08;
            cVar5 = *(char *)(lVar24 + uVar9);
            if (cVar5 != *(char *)(lVar21 + uVar9 + 2)) break;
            if (cVar5 == '\0') goto LAB_039e0f08;
            bVar6 = uVar9 < 0x7fffe;
            uVar9 = uVar9 + 3;
          } while (uVar9 != 0x80001);
          iVar20 = iVar20 + 1;
        } while (iVar19 != iVar20);
      }
      iVar20 = -1;
LAB_039e0f08:
      lVar8 = lVar10 + (long)iVar16 * 0x910;
      *(undefined4 *)(lVar8 + 0x6a8) = 0;
      *(char *)(lVar8 + 0x30c) = (char)iVar23;
      if (iVar23 * 0x1000000 == -0x1000000) {
        lVar8 = 0;
      }
      else {
        uVar4 = iVar23 * 0x1000000 >> 0x18;
        if (*(uint *)(param_1 + 0x1d0) <= uVar4) {
          uVar4 = 0;
        }
        lVar8 = *(long *)(param_1 + 0x1d8) + (long)(int)uVar4 * 0x910;
      }
      while( true ) {
        lVar7 = lVar10 + (long)iVar16 * 0x910;
        *(long *)(lVar7 + 0x170) = lVar8;
        *(char *)(lVar7 + 0x30d) = (char)iVar20;
        *(undefined1 *)(lVar7 + 0x30a) = 0;
        iVar16 = iVar16 + 1;
        if (iVar14 == iVar16) goto LAB_039e0f94;
        iVar19 = *(int *)(param_1 + 0x1d0);
        lVar8 = *(long *)(param_1 + 0x1d8);
        if (iVar19 != 0) break;
LAB_039e0cf0:
        lVar7 = lVar10 + (long)iVar16 * 0x910;
        lVar8 = 0;
        *(undefined4 *)(lVar7 + 0x6a8) = 0;
        *(undefined1 *)(lVar7 + 0x30c) = 0xff;
        iVar20 = -1;
      }
    } while( true );
  }
LAB_039e0f94:
  puVar2 = (undefined8 *)(param_1 + 0x1f0);
  iVar14 = *(int *)(param_1 + 0x204);
  if ((1 < *(int *)(param_1 + 0x200)) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x1f8) + 8), puVar11 != puVar2)) {
    lVar8 = -(long)iVar14;
    do {
      puVar13 = (undefined8 *)*puVar11;
      iVar14 = *(int *)((long)puVar11 + lVar8 + 0x908);
      iVar16 = *(int *)((long)puVar13 + lVar8 + 0x908) - iVar14;
      if (iVar16 == 0) {
        iVar16 = (uint)*(byte *)((long)puVar13 + lVar8 + 0x309) -
                 (uint)*(byte *)((long)puVar11 + lVar8 + 0x309);
      }
      puVar12 = (undefined8 *)puVar11[1];
      if (0 < iVar16) {
        puVar17 = puVar13;
        do {
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 == puVar2) {
            puVar17 = puVar2;
            break;
          }
          iVar16 = *(int *)((long)puVar17 + lVar8 + 0x908) - iVar14;
          if (iVar16 == 0) {
            iVar16 = (uint)*(byte *)((long)puVar17 + lVar8 + 0x309) -
                     (uint)*(byte *)((long)puVar11 + lVar8 + 0x309);
          }
        } while (0 < iVar16);
        puVar15 = puVar12;
        if (puVar13 != (undefined8 *)0x0) {
          puVar13[1] = puVar12;
          puVar15 = (undefined8 *)puVar11[1];
        }
        if (puVar15 != (undefined8 *)0x0) {
          *puVar15 = *puVar11;
        }
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar13 = (undefined8 *)puVar17[1];
        puVar17[1] = puVar11;
        *puVar11 = puVar17;
        puVar11[1] = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = puVar11;
        }
      }
      puVar11 = puVar12;
    } while (puVar12 != puVar2);
    iVar14 = *(int *)(param_1 + 0x204);
  }
  if (*(undefined8 **)(param_1 + 0x1f8) != puVar2) {
    iVar16 = 0;
    lVar10 = (long)-iVar14;
    lVar8 = lVar10 + (long)*(undefined8 **)(param_1 + 0x1f8);
    do {
      if (*(long *)(lVar8 + 0x170) == 0) {
        iVar19 = iVar16 << 9;
        iVar16 = iVar16 + 1;
        *(int *)(lVar8 + 0x908) = iVar19;
      }
      lVar8 = *(long *)(lVar8 + iVar14 + 8) + lVar10;
    } while (lVar8 != lVar10 + (long)puVar2);
    if (*(undefined8 **)(param_1 + 0x1f8) != puVar2) {
      lVar10 = (long)*(int *)(param_1 + 0x204);
      lVar8 = (long)*(undefined8 **)(param_1 + 0x1f8) - lVar10;
      do {
        lVar7 = *(long *)(lVar8 + 0x170);
        if (lVar7 != 0) {
          *(int *)(lVar8 + 0x908) = *(int *)(lVar7 + 0x908) + iVar16 * 2;
          *(undefined1 *)(lVar7 + 0x30a) = 0;
          lVar7 = *(long *)(lVar8 + 0x170);
          if (*(int *)(lVar7 + 0x6a8) < *(int *)(lVar7 + 0x6ac)) {
            *(long *)(*(long *)(lVar7 + 0x6b0) + (long)*(int *)(lVar7 + 0x6a8) * 8) = lVar8;
            *(int *)(lVar7 + 0x6a8) = *(int *)(lVar7 + 0x6a8) + 1;
          }
          if ((*(ushort *)(param_1 + 0x2a70) >> 2 & 1) == 0) {
            uVar18 = (undefined1)*(undefined4 *)(*(long *)(lVar8 + 0x170) + 0x6a8);
          }
          else {
            uVar18 = 0;
          }
          iVar16 = iVar16 + 1;
          *(undefined1 *)(lVar8 + 0x30a) = uVar18;
        }
        lVar8 = *(long *)(lVar8 + lVar10 + 8) - lVar10;
      } while ((long)puVar2 - lVar10 != lVar8);
      if (*(undefined8 **)(param_1 + 0x1f8) != puVar2) {
        lVar7 = (long)*(int *)(param_1 + 0x204);
        lVar10 = (long)*(undefined8 **)(param_1 + 0x1f8) - lVar7;
        lVar8 = lVar10;
        do {
          lVar8 = -lVar7 + *(long *)(lVar8 + lVar7 + 8);
        } while ((long)puVar2 - lVar7 != lVar8);
        do {
          lVar10 = -lVar7 + *(long *)(lVar10 + lVar7 + 8);
        } while ((long)puVar2 - lVar7 != lVar10);
      }
    }
  }
  *(ushort *)(param_1 + 0x2a70) = *(ushort *)(param_1 + 0x2a70) | 0x40;
  return;
}

