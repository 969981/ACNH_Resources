
void FUN_031fcae0(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  short *psVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *local_40;
  undefined4 local_38;
  
  puVar8 = PTR_DAT_04bbe4c0;
  puVar1 = PTR_DAT_04bbe4b8;
  if (param_2 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x358);
  if ((int)uVar4 <= (int)param_3) {
    return;
  }
  plVar17 = (long *)**(undefined8 **)(param_2 + 0x2f0);
  if (plVar17 == (long *)0x0) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x360);
  fVar20 = 0.0;
  if ((*(char *)(lVar15 + (ulong)param_3 * 4) != '\0') &&
     (lVar14 = *(long *)PTR_DAT_04bb46d0, lVar14 != 0)) {
    uVar6 = *(ushort *)(lVar14 + 0xe00);
    uVar7 = (uint)*(ushort *)(lVar15 + (ulong)param_3 * 4 + 2) - (uint)uVar6;
    uVar5 = *(uint *)(lVar14 + 0xde0);
    if (uVar7 < uVar5) {
      lVar14 = *(long *)(lVar14 + 0xde8);
      puVar16 = *(uint **)(lVar14 + (long)(int)uVar7 * 8);
      if ((puVar16 != (uint *)0x0) && (*puVar16 != 0)) {
        cVar9 = *PTR_DAT_04bbe4b8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar8 + 4);
            if (-1 < (int)uVar7) {
              fVar20 = 0.0;
              if (((short *)((ulong)uVar7 + (long)puVar16) != (short *)0x0) &&
                 (*(short *)((ulong)uVar7 + (long)puVar16) != -1)) {
                fVar20 = -1.0;
                if (uVar4 <= param_3) {
                  param_3 = 0;
                }
                uVar4 = (uint)*(ushort *)(lVar15 + (ulong)param_3 * 4 + 2) - (uint)uVar6;
                if (((uVar4 < uVar5) &&
                    (lVar15 = *(long *)(lVar14 + (long)(int)uVar4 * 8), lVar15 != 0)) &&
                   (psVar10 = (short *)FUN_017c3c50(lVar15,1,0x981286fd,0), psVar10 != (short *)0x0)
                   ) {
                  fVar20 = (float)(int)*psVar10;
                }
              }
              break;
            }
            if (uVar7 != 0xffffffff) goto LAB_031fcc34;
          }
          puVar11 = (uint *)(ulong)*puVar16;
          if ((*puVar16 == 0) || (puVar16 == puVar11)) goto LAB_031fcc34;
          lVar3 = 0xc;
          if (*(char *)((long)puVar16 + (10 - (long)puVar11)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar16 + (lVar3 - (long)puVar11);
          if (lVar3 == 0) goto LAB_031fcc34;
          uVar12 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar11));
          *(undefined4 *)(puVar8 + 4) = 0xfffffffe;
          if (uVar12 == 0) goto LAB_031fcc34;
          piVar13 = (int *)(lVar3 + 4);
          while (piVar13[-1] != -0x67ed7903) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_031fcc34;
          }
          iVar2 = 0;
          if (*piVar13 != -1) {
            iVar2 = *piVar13;
          }
          *(int *)(puVar8 + 4) = iVar2;
          if (*puVar16 == 0) goto LAB_031fcc34;
        } while( true );
      }
    }
  }
LAB_031fcc38:
  puVar1 = PTR_DAT_04bc4f00 + 0x10;
  local_38 = 9;
  local_40 = puVar1;
  (**(code **)(*plVar17 + 0x20))(plVar17,&local_40);
  fVar18 = (float)(**(code **)(plVar17[3] + 0xb0))(plVar17[1]);
  local_38 = 0x14;
  fVar19 = 0.0;
  if (fVar20 <= fVar18) {
    fVar19 = fVar20;
  }
  local_40 = puVar1;
  (**(code **)(*plVar17 + 0x18))(plVar17,&local_40);
  (**(code **)(plVar17[3] + 0x158))(fVar19,plVar17[1]);
  return;
LAB_031fcc34:
  fVar20 = 0.0;
  goto LAB_031fcc38;
}

