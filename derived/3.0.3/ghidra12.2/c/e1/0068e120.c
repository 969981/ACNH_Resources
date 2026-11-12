
long FUN_0068e120(long param_1,int param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  long lVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [12];
  undefined1 auStack_50 [24];
  long *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  long local_8;
  
  if (param_2 == -1) {
    return 0;
  }
  FUN_0068a9e8(auStack_50,param_1,
               *(undefined2 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 0x20 + 0x16));
  auVar16 = FUN_0068adb0(auStack_50,&local_8,auStack_28,auStack_30,&local_38,param_3);
  uVar9 = auVar16._8_4_;
  pcVar14 = auVar16._0_8_;
  if (((uVar9 != 0) && (local_8 != 0)) && (local_38 != (long *)0x0)) {
    lVar6 = *(long *)(local_8 + 8);
    uVar12 = (ulong)*(ushort *)(lVar6 + 0xc);
    puVar10 = (uint *)((int *)(lVar6 + 8) + uVar12 * 4);
    uVar8 = *puVar10;
    if (*(int *)(lVar6 + 8) < (int)*puVar10) {
      do {
        if ((uint)((int)uVar8 >> 3) < uVar9) {
          uVar11 = (ulong)((byte)pcVar14[(int)(~((int)uVar8 >> 3) + uVar9)] >> ((ulong)uVar8 & 7)) &
                   1;
        }
        else {
          uVar11 = 0;
        }
        uVar12 = (ulong)*(ushort *)(lVar6 + 8 + uVar12 * 0x10 + uVar11 * 2 + 4);
        puVar10 = (uint *)(lVar6 + 8 + uVar12 * 0x10);
        bVar1 = (int)uVar8 < (int)*puVar10;
        uVar8 = *puVar10;
      } while (bVar1);
    }
    if (uVar9 == **(ushort **)(puVar10 + 2)) {
      if (0 < (int)uVar9) {
        puVar7 = *(ushort **)(puVar10 + 2) + 1;
        iVar13 = uVar9 + 1;
        do {
          cVar2 = *pcVar14;
          if (cVar2 == '\0' || cVar2 != (char)*puVar7) {
            if (cVar2 != (char)*puVar7) {
              return 0;
            }
            break;
          }
          iVar13 = iVar13 + -1;
          pcVar14 = pcVar14 + 1;
          puVar7 = (ushort *)((long)puVar7 + 1);
        } while (1 < iVar13);
      }
      uVar12 = (long)puVar10 + (-0x18 - lVar6);
      if ((((uVar12 ^ 0xffffffffffffffff) & 0xffffffff0) != 0) &&
         (pcVar14 = *(char **)(local_8 + (long)(int)(uVar12 >> 4) * 8 + 0x10), *pcVar14 == '\f')) {
        uVar9 = (uint)*(ushort *)(*local_38 + 0x10);
        if (uVar9 != 0) {
          uVar8 = 0;
          puVar15 = *(undefined8 **)(*local_38 + 0x28);
          uVar3 = **(ushort **)(pcVar14 + 0x10);
          uVar4 = **(ushort **)(pcVar14 + 0x18);
          do {
            if ((uint)*(ushort *)*puVar15 == (uint)uVar3) {
              if (uVar3 != 0) {
                puVar7 = (ushort *)*puVar15 + 1;
                puVar5 = *(ushort **)(pcVar14 + 0x10) + 1;
                iVar13 = uVar3 + 1;
                do {
                  cVar2 = (char)*puVar7;
                  if (cVar2 == '\0' || cVar2 != (char)*puVar5) {
                    if (cVar2 != (char)*puVar5) goto LAB_0068e2d8;
                    break;
                  }
                  iVar13 = iVar13 + -1;
                  puVar7 = (ushort *)((long)puVar7 + 1);
                  puVar5 = (ushort *)((long)puVar5 + 1);
                } while (1 < iVar13);
              }
              if ((uint)*(ushort *)puVar15[1] == (uint)uVar4) {
                if (uVar4 == 0) {
LAB_0068e38c:
                  if (*(short *)puVar15[2] == 0) {
                    return local_38[3] + (ulong)uVar8 * 0x48;
                  }
                  return 0;
                }
                puVar7 = (ushort *)puVar15[1] + 1;
                puVar5 = *(ushort **)(pcVar14 + 0x18) + 1;
                iVar13 = uVar4 + 1;
                while( true ) {
                  cVar2 = (char)*puVar7;
                  if (cVar2 == '\0' || cVar2 != (char)*puVar5) break;
                  iVar13 = iVar13 + -1;
                  puVar7 = (ushort *)((long)puVar7 + 1);
                  puVar5 = (ushort *)((long)puVar5 + 1);
                  if (iVar13 < 2) goto LAB_0068e38c;
                }
                if (cVar2 == (char)*puVar5) goto LAB_0068e38c;
              }
            }
LAB_0068e2d8:
            uVar8 = uVar8 + 1;
            puVar15 = puVar15 + 7;
            if (uVar8 == uVar9) {
              return 0;
            }
          } while( true );
        }
      }
      return 0;
    }
  }
  return 0;
}

