
uint FUN_02b72d40(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bc4658;
  puVar3 = PTR_DAT_04bc4650;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 != (uint *)0x0) {
    uVar11 = *puVar7;
    if (uVar11 != 0) {
      cVar8 = *PTR_DAT_04bc4650;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          uVar11 = *puVar7;
        }
        else {
          uVar13 = *(uint *)puVar4;
          if (-1 < (int)uVar13) {
            if ((int *)((ulong)uVar13 + (long)puVar7) != (int *)0x0) {
              iVar12 = *(int *)((ulong)uVar13 + (long)puVar7);
              goto LAB_02b72e50;
            }
            break;
          }
          if (uVar13 != 0xffffffff) break;
        }
        puVar2 = (uint *)(ulong)uVar11;
        iVar12 = 0;
        if ((puVar2 == (uint *)0x0) || (iVar12 = 0, puVar7 == puVar2)) goto LAB_02b72e50;
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar2)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar2);
        if (lVar1 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar2));
        *(undefined4 *)puVar4 = 0xfffffffe;
        if (uVar9 == 0) break;
        piVar10 = (int *)(lVar1 + 4);
        while (piVar10[-1] != -0x7a5f05b7) {
          piVar10 = piVar10 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_02b72e4c;
        }
        iVar12 = 0;
        if (*piVar10 != -1) {
          iVar12 = *piVar10;
        }
        *(int *)puVar4 = iVar12;
        uVar11 = *puVar7;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_02b72e4c:
    iVar12 = 0;
LAB_02b72e50:
    puVar3 = PTR_DAT_04bb4a60;
    uVar11 = 0;
    do {
      puVar6 = &DAT_0407ebb1;
      if (uVar11 < 0x1c) {
        puVar6 = *(undefined8 **)(puVar3 + (ulong)uVar11 * 8 + 0x110);
      }
      iVar5 = FUN_006bd550(puVar6,0);
      if (iVar5 == iVar12) {
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

