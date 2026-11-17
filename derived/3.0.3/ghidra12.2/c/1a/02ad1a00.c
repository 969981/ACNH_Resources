
uint FUN_02ad1a00(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint *puVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  puVar3 = PTR_DAT_04bb5bd0;
  puVar2 = PTR_DAT_04bb5bc8;
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 != 0) {
      cVar7 = *PTR_DAT_04bb5bc8;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar3 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(puVar3 + 4);
          if (-1 < (int)uVar11) {
            if ((int *)((ulong)uVar11 + (long)puVar6) != (int *)0x0) {
              iVar12 = *(int *)((ulong)uVar11 + (long)puVar6);
              goto LAB_02ad1b20;
            }
            break;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar8 = (uint *)(ulong)*puVar6;
        iVar12 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar8)) goto LAB_02ad1b20;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar8)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar8);
        if (lVar1 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar8));
        *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != -0x7a5f05b7) {
          piVar10 = piVar10 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_02ad1b1c;
        }
        iVar12 = 0;
        if (*piVar10 != -1) {
          iVar12 = *piVar10;
        }
        *(int *)(puVar3 + 4) = iVar12;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_02ad1b1c:
    iVar12 = 0;
LAB_02ad1b20:
    puVar2 = PTR_DAT_04bb4a60;
    uVar11 = 0;
    do {
      puVar5 = &DAT_0407ebb1;
      if (uVar11 < 0x1c) {
        puVar5 = *(undefined8 **)(puVar2 + (ulong)uVar11 * 8 + 0x110);
      }
      iVar4 = FUN_006bd550(puVar5,0);
      if (iVar4 == iVar12) {
        return uVar11;
      }
      uVar13 = 0x1c;
      if ((int)uVar11 < 0x1c) {
        uVar13 = uVar11 + 1;
      }
      uVar11 = uVar13;
    } while (uVar13 != 0x1c);
  }
  return 0;
}

