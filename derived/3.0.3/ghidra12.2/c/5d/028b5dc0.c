
void FUN_028b5dc0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 local_14;
  
  uVar12 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_14 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_0079e4d0(uVar12,&local_14);
  puVar5 = PTR_DAT_04bb40a8;
  puVar4 = PTR_DAT_04bb40a0;
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 == 0) {
LAB_028b5f24:
      uVar9 = 0;
    }
    else {
      cVar8 = *PTR_DAT_04bb40a0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar9) {
            if ((uint *)((ulong)uVar9 + (long)puVar6) == (uint *)0x0) goto LAB_028b5f24;
            uVar9 = *(uint *)((ulong)uVar9 + (long)puVar6);
            if (0x7f < (int)uVar9) {
              return;
            }
            goto LAB_028b5f28;
          }
          if (uVar9 != 0xffffffff) goto LAB_028b5f24;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        uVar9 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_028b5f28;
        lVar3 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar6 + (lVar3 - (long)puVar10);
        if (lVar3 == 0) goto LAB_028b5f24;
        uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        uVar9 = 0;
        if (uVar7 == 0) goto LAB_028b5f28;
        piVar11 = (int *)(lVar3 + 4);
        while (piVar11[-1] != 0x3ce2e8d8) {
          piVar11 = piVar11 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            uVar9 = 0;
            goto LAB_028b5f28;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 8) = iVar1;
      } while (*puVar6 != 0);
      uVar9 = 0;
    }
LAB_028b5f28:
    uVar2 = uVar9 + 0x1f;
    if (-1 < (int)uVar9) {
      uVar2 = uVar9;
    }
    uVar7 = (ulong)(uint)((int)uVar2 >> 5);
    if (3 < (uint)((int)uVar2 >> 5)) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + uVar7 * 4) =
         *(uint *)(param_1 + uVar7 * 4) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

