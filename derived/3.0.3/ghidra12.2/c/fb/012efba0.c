
void FUN_012efba0(long param_1,long param_2,long param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  
  puVar6 = PTR_DAT_04bbbe68;
  puVar5 = PTR_DAT_04bbbe60;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 == 0) {
LAB_012efca4:
      bVar10 = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bbbe60;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar6 + 0x20);
          if (-1 < (int)uVar4) {
            if (((byte *)((ulong)uVar4 + (long)puVar8) == (byte *)0x0) ||
               (bVar10 = *(byte *)((ulong)uVar4 + (long)puVar8), 1 < bVar10)) goto LAB_012efca4;
            goto LAB_012efca8;
          }
          if (uVar4 != 0xffffffff) goto LAB_012efca4;
        }
        puVar12 = (uint *)(ulong)*puVar8;
        bVar10 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_012efca8;
        lVar1 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar8 + (lVar1 - (long)puVar12);
        if (lVar1 == 0) goto LAB_012efca4;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
        *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
        bVar10 = 0;
        if (uVar11 == 0) goto LAB_012efca8;
        piVar13 = (int *)(lVar1 + 4);
        while (piVar13[-1] != 0x7c8e7f81) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            bVar10 = 0;
            goto LAB_012efca8;
          }
        }
        iVar7 = 0;
        if (*piVar13 != -1) {
          iVar7 = *piVar13;
        }
        *(int *)(puVar6 + 0x20) = iVar7;
      } while (*puVar8 != 0);
      bVar10 = 0;
    }
LAB_012efca8:
    if (param_2 != 0) {
      if (bVar10 == 1) {
        iVar2 = *(int *)(param_3 + 8);
        iVar3 = *(int *)(param_3 + 0xc);
        *(int *)(param_2 + 0x20) = iVar2 + 1;
        iVar7 = iVar3 + 1;
        *(int *)(param_2 + 0x10) = iVar2 + -1;
        *(int *)(param_2 + 0x14) = iVar3 + -1;
      }
      else {
        if (bVar10 != 0) {
          return;
        }
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0xc);
        iVar7 = *(int *)(param_3 + 0xc);
        *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 8);
      }
      *(int *)(param_2 + 0x24) = iVar7;
    }
  }
  return;
}

