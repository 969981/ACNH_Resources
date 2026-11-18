
void FUN_03257250(undefined8 param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  int iVar7;
  char cVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  undefined *local_20;
  long lStack_18;
  
  puVar4 = PTR_DAT_04bb6448;
  puVar3 = PTR_DAT_04bb6440;
  lVar6 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar6 + 0x1d40) < 1) {
    if (*(long *)(lVar6 + 0x1c30) == 0) {
      return;
    }
    puVar5 = *(uint **)(*(long *)(lVar6 + 0x1c30) + 8);
    if (puVar5 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar6 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar6 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar5 <= param_2) {
      return;
    }
    if (puVar5[1] == 0) {
      return;
    }
    if ((ushort)puVar5[2] == 0) {
      return;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar5 = (uint *)((ulong)(puVar5[1] * param_2 + (uint)(ushort)puVar5[2] * 8 + iVar7) +
                     (long)puVar5);
  }
  else {
    if (*(uint *)(lVar6 + 0x1d40) <= param_2) {
      return;
    }
    if (*(uint *)(lVar6 + 0x1d30) <= param_2) {
      param_2 = 0;
    }
    puVar5 = *(uint **)(*(long *)(lVar6 + 0x1d38) + (ulong)param_2 * 8);
  }
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar8 = *PTR_DAT_04bb6440;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x48);
          if (-1 < (int)uVar2) {
            lVar6 = (ulong)uVar2 + (long)puVar5;
            goto LAB_03257378;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        lVar6 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_03257378;
        lVar6 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar1 = (long)puVar5 + (lVar6 - (long)puVar10);
        if (lVar1 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
        lVar6 = 0;
        if (uVar9 == 0) goto LAB_03257378;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x45f320f2) {
          piVar11 = piVar11 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            lVar6 = 0;
            goto LAB_03257378;
          }
        }
        iVar7 = 0;
        if (*piVar11 != -1) {
          iVar7 = *piVar11;
        }
        *(int *)(puVar4 + 0x48) = iVar7;
      } while (*puVar5 != 0);
    }
    lVar6 = 0;
LAB_03257378:
    lStack_18 = *(long *)PTR_PTR_04bb6438;
    if (lVar6 != 0) {
      lStack_18 = lVar6;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    FUN_0279c5a4(param_1,&local_20,1);
  }
  return;
}

