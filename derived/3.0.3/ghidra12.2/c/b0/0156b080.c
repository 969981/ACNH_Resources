
void FUN_0156b080(long param_1,long *param_2,long param_3,long param_4,long *param_5)

{
  uint *puVar1;
  long *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  
  lVar14 = *(long *)(param_4 + 0x4a0);
  bVar7 = *(byte *)(*param_2 + 0x21);
  uVar15 = (uint)*(ushort *)(param_2[1] + 0x16);
  if (*(uint *)(param_4 + 0x498) <= (uint)*(ushort *)(param_2[1] + 0x16)) {
    uVar15 = 0;
  }
  puVar1 = (uint *)(lVar14 + (ulong)uVar15 * 0x108 + 8);
  puVar4 = puVar1 + (ulong)bVar7 * 4;
  if (0xf < bVar7) {
    puVar4 = puVar1;
  }
  if (*(long *)(param_3 + 8) != param_3) {
    lVar17 = (long)*(int *)(param_3 + 0x14);
    plVar2 = (long *)(param_1 + 0x560);
    lVar16 = *(long *)(puVar4 + 2);
    piVar18 = (int *)(*(long *)(param_3 + 8) - lVar17);
    do {
      if ((((9 < bVar7) || ((0x207U >> (ulong)(bVar7 & 0x1f) & 1) == 0)) ||
          ((piVar18[6] & *(uint *)(&DAT_04175b7c + (long)(char)bVar7 * 4)) != 0)) &&
         ((*(char *)(lVar14 + (ulong)uVar15 * 0x108 + 4) == '\0' || ((char)piVar18[0xb] != '\0'))))
      {
        if ((lVar16 != 0) && (lVar19 = *(long *)(piVar18 + 0xc), *param_5 != lVar19)) {
          *param_5 = lVar19;
          uVar13 = *puVar4;
          if (uVar13 != 0) {
            uVar22 = 0;
            lVar20 = *(long *)(puVar4 + 2);
            do {
              piVar3 = (int *)(lVar20 + ((long)((ulong)uVar22 << 0x20) >> 0x1e));
              if (*piVar3 != -1) {
                FUN_0390d290(lVar19,*(undefined8 *)(*param_2 + 0x18),piVar3,0xffffffff,0);
              }
              uVar22 = uVar22 + 1;
            } while (uVar13 != uVar22);
          }
        }
        lVar23 = *(long *)(param_2[2] + 8);
        iVar10 = *piVar18;
        bVar8 = *(byte *)(param_1 + 0x599);
        uVar9 = *(ushort *)(param_1 + 0x59a);
        iVar5 = *(int *)(param_1 + 0x590);
        lVar19 = *(long *)(*param_2 + 0x18);
        lVar20 = *(long *)(param_1 + 0x5d0);
        iVar11 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(plVar2);
        iVar12 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(plVar2);
        uVar13 = *(uint *)(lVar23 + 0xa0);
        if (uVar13 != 0xffffffff) {
          lVar20 = lVar20 + (ulong)((iVar5 + iVar11) - 1U & -iVar12) *
                            ((long)iVar10 + (ulong)uVar9 * (ulong)bVar8);
          uVar6 = *(undefined4 *)(param_1 + 0x590);
          uVar21 = *(undefined8 *)(lVar19 + 0xb8);
          if (((uVar13 ^ 0xffffffff) & 0xff) == 0) {
            uVar13 = uVar13 >> 8;
          }
          else {
            (**(code **)(*plVar2 + 0x40))(plVar2,uVar21,0,(int)(char)uVar13,lVar20,uVar6);
            uVar13 = (uint)*(byte *)(lVar23 + 0xa1);
          }
          if (((uVar13 ^ 0xffffffff) & 0xff) != 0) {
            (**(code **)(*plVar2 + 0x40))(plVar2,uVar21,1,(int)(char)uVar13,lVar20,uVar6);
          }
          if (*(char *)(lVar23 + 0xa2) != -1) {
            (**(code **)(*plVar2 + 0x40))
                      (plVar2,uVar21,2,(long)*(char *)(lVar23 + 0xa2),lVar20,uVar6);
          }
          if (*(char *)(lVar23 + 0xa3) != -1) {
            (**(code **)(*plVar2 + 0x40))
                      (plVar2,uVar21,5,(long)*(char *)(lVar23 + 0xa3),lVar20,uVar6);
          }
        }
        lVar19 = *param_2;
        iVar5 = (int)param_2[3];
        if (((*(ushort *)(lVar19 + 0x36) >> 5 & 1) == 0) ||
           (lVar20 = *(long *)(*(long *)(param_2[1] + 0x20) + 0xe10),
           (*(byte *)(lVar20 + (long)iVar5 * 0x260 + 600) & 1) == 0)) {
          lVar20 = *(long *)(*(long *)(*(long *)(param_2[1] + 0x20) + 8) + 0x18) +
                   (long)iVar5 * 0x38;
          FUN_003a127c(lVar20,*(long *)(lVar19 + 0x18) + 8,0,*(undefined2 *)(lVar20 + 0x34),1);
        }
        else {
          (*DAT_04c62828)(*(undefined8 *)(*(long *)(lVar19 + 0x18) + 0xb8),1,
                          lVar20 + (long)iVar5 * 0x260 + 0x250);
        }
      }
      piVar18 = (int *)(*(long *)((long)piVar18 + lVar17 + 8) - lVar17);
    } while (piVar18 != (int *)(param_3 - lVar17));
  }
  return;
}

