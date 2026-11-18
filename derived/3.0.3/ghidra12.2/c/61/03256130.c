
void FUN_03256130(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  undefined *local_40;
  long lStack_38;
  
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar10 + 0x1d40) < 1) {
    if (*(long *)(lVar10 + 0x1c30) == 0) {
      return;
    }
    puVar9 = *(uint **)(*(long *)(lVar10 + 0x1c30) + 8);
    if (puVar9 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar10 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar10 + 0x1c50) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar9 <= param_2) {
      return;
    }
    if (puVar9[1] == 0) {
      return;
    }
    if ((ushort)puVar9[2] == 0) {
      return;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar9 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar9 = (uint *)((ulong)(puVar9[1] * param_2 + (uint)(ushort)puVar9[2] * 8 + iVar6) +
                     (long)puVar9);
  }
  else {
    if (*(uint *)(lVar10 + 0x1d40) <= param_2) {
      return;
    }
    uVar3 = param_2;
    if (*(uint *)(lVar10 + 0x1d30) <= param_2) {
      uVar3 = 0;
    }
    puVar9 = *(uint **)(*(long *)(lVar10 + 0x1d38) + (ulong)uVar3 * 8);
  }
  if (puVar9 != (uint *)0x0) {
    if (*puVar9 != 0) {
      cVar11 = *PTR_DAT_04bb6440;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x48);
          if (-1 < (int)uVar3) {
            lVar10 = (ulong)uVar3 + (long)puVar9;
            goto LAB_03256268;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar9;
        lVar10 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_03256268;
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar10 - (long)puVar12);
        if (lVar2 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
        lVar10 = 0;
        if (uVar8 == 0) goto LAB_03256268;
        piVar13 = (int *)(lVar2 + 4);
        while (piVar13[-1] != 0x45f320f2) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            lVar10 = 0;
            goto LAB_03256268;
          }
        }
        iVar6 = 0;
        if (*piVar13 != -1) {
          iVar6 = *piVar13;
        }
        *(int *)(puVar5 + 0x48) = iVar6;
      } while (*puVar9 != 0);
    }
    lVar10 = 0;
LAB_03256268:
    lStack_38 = *(long *)PTR_PTR_04bb6438;
    if (lVar10 != 0) {
      lStack_38 = lVar10;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    uVar8 = FUN_03256ab0(&local_40);
    if ((uVar8 & 1) == 0) {
      lVar10 = param_1 + 0x1f8;
      uVar7 = FUN_02798760(lVar10,&local_40);
      iVar6 = FUN_02798b88(lVar10,&local_40,uVar7);
      if (0 < iVar6) {
        iVar14 = 0;
        do {
          iVar14 = iVar14 + 1;
          uVar8 = FUN_0279bb10(lVar10,&local_40,iVar14);
          if ((uVar8 & 1) == 0) goto LAB_032563e0;
        } while (iVar6 != iVar14);
      }
    }
    else {
      iVar6 = FUN_03258260(param_2);
      if (0 < iVar6) {
        iVar14 = 0;
        do {
          iVar1 = iVar14 + 1;
          uVar8 = FUN_0279d6d0(param_1 + 0x1f8,&local_40,iVar14);
          if (((uVar8 & 1) != 0) &&
             (uVar8 = FUN_0279bb10(param_1 + 0x1f8,&local_40,iVar1), (uVar8 & 1) == 0)) {
            iVar14 = iVar14 + 1;
LAB_032563e0:
            FUN_0279c0bc(param_1 + 0x1f8,&local_40,iVar14);
            return;
          }
          iVar14 = iVar1;
        } while (iVar6 != iVar1);
      }
    }
  }
  return;
}

