
undefined2 FUN_0273cd90(uint param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined2 *puVar13;
  char cVar14;
  uint *puVar15;
  ulong uVar16;
  int *piVar17;
  undefined2 uVar18;
  undefined4 local_48;
  uint local_44;
  
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    local_44 = param_1;
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return 0;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return 0;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return 0;
      }
    }
    if (local_44 < 8) {
      lVar2 = lVar10 + 0x119228 + (ulong)local_44 * 0xfa08;
      if (7 < local_44) {
        lVar2 = lVar10 + 0x119228;
      }
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = (**(code **)*puVar11)();
        uVar8 = uVar8 ^ 1;
      }
      lVar10 = *(long *)(lVar2 + 8);
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar12 = *(long *)PTR_DAT_04bb2208;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_48 = FUN_006bd550(param_2[1],0);
      puVar9 = (uint *)FUN_0273d580(lVar12 + 0x10e0,&local_48);
      puVar7 = PTR_DAT_04bb63d0;
      puVar6 = PTR_DAT_04bb63c8;
      if (puVar9 == (uint *)0x0) {
        uVar18 = 0;
      }
      else {
        puVar13 = (undefined2 *)(lVar3 + lVar10 + 0x20);
        if (*puVar9 != 0) {
          cVar14 = *PTR_DAT_04bb63c8;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
              uVar4 = *puVar9;
            }
            else {
              uVar4 = *(uint *)(puVar7 + 8);
              if (-1 < (int)uVar4) {
                if (((ushort *)((ulong)uVar4 + (long)puVar9) != (ushort *)0x0) &&
                   (uVar5 = *(ushort *)((ulong)uVar4 + (long)puVar9), uVar5 < 0x80)) {
                  puVar13 = puVar13 + uVar5;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
              uVar4 = *puVar9;
            }
            if ((uVar4 == 0) || (puVar15 = (uint *)(ulong)uVar4, puVar9 == puVar15)) break;
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar15)) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + (lVar10 - (long)puVar15);
            if (lVar10 == 0) break;
            uVar16 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar15));
            *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
            if (uVar16 == 0) break;
            piVar17 = (int *)(lVar10 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_0273cfc4;
            }
            iVar1 = 0;
            if (*piVar17 != -1) {
              iVar1 = *piVar17;
            }
            *(int *)(puVar7 + 8) = iVar1;
            if (*puVar9 == 0) break;
          } while( true );
        }
LAB_0273cfc4:
        uVar18 = *puVar13;
      }
      if ((uVar8 & 1) != 0) {
        return uVar18;
      }
      if (*(long *)(lVar2 + 0x28) == 0) {
        return uVar18;
      }
      puVar11 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8);
      if (puVar11 == (undefined8 *)0x0) {
        return uVar18;
      }
      (**(code **)*puVar11)();
      return uVar18;
    }
  }
  return 0;
}

