
bool FUN_0273f0a0(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  short *psVar14;
  char cVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  undefined4 local_44;
  
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 != 0) {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar9 + 0x70;
      }
      goto LAB_0273f118;
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar11 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
      goto LAB_0273f118;
    }
  }
  lVar11 = 0;
LAB_0273f118:
  if ((*(long **)(lVar11 + 0xe7610) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xe7610), puVar12 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar12)();
    uVar8 = uVar8 ^ 1;
  }
  lVar9 = *(long *)(lVar11 + 0xe75f0);
  lVar2 = *(long *)(lVar11 + 0xe75f8);
  lVar13 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_44 = FUN_006bd550(param_1[1],0);
  puVar10 = (uint *)FUN_008a1920(lVar13 + 0x880,&local_44);
  puVar6 = PTR_DAT_04bb5810;
  puVar5 = PTR_DAT_04bb5808;
  if (puVar10 == (uint *)0x0) {
    bVar7 = false;
  }
  else {
    psVar14 = (short *)(lVar2 + lVar9);
    if (*puVar10 != 0) {
      cVar15 = *PTR_DAT_04bb5808;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x14);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar10) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar3 + (long)puVar10), uVar4 < 0x400)) {
              psVar14 = psVar14 + uVar4;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar10;
        }
        if ((uVar3 == 0) || (puVar16 = (uint *)(ulong)uVar3, puVar10 == puVar16)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar16)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar16);
        if (lVar9 == 0) break;
        uVar17 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar16));
        *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
        if (uVar17 == 0) break;
        piVar18 = (int *)(lVar9 + 4);
        while (piVar18[-1] != 0x54706054) {
          piVar18 = piVar18 + 2;
          uVar17 = uVar17 - 1;
          if (uVar17 == 0) goto LAB_0273f294;
        }
        iVar1 = 0;
        if (*piVar18 != -1) {
          iVar1 = *piVar18;
        }
        *(int *)(puVar6 + 0x14) = iVar1;
        if (*puVar10 == 0) break;
      } while( true );
    }
LAB_0273f294:
    bVar7 = *psVar14 != 0;
  }
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar11 + 0xe7610) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7610) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return bVar7;
}

