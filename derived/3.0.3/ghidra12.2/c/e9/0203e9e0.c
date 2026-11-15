
bool FUN_0203e9e0(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 local_28 [2];
  
  uVar12 = *(undefined8 *)PTR_DAT_04bb4130;
  (**(code **)(*param_1 + 0x18))();
  local_28[0] = FUN_006bd550(param_1[1],0);
  puVar6 = (uint *)FUN_0079e4d0(uVar12,local_28);
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  bVar5 = false;
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 == 0) {
LAB_0203eb48:
      iVar8 = 0;
    }
    else {
      cVar7 = *PTR_DAT_04bb40a0;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar2) {
            if ((int *)((ulong)uVar2 + (long)puVar6) == (int *)0x0) goto LAB_0203eb48;
            iVar8 = *(int *)((ulong)uVar2 + (long)puVar6);
            if (0x45 < iVar8) {
              return false;
            }
            goto LAB_0203eb4c;
          }
          if (uVar2 != 0xffffffff) goto LAB_0203eb48;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        iVar8 = 0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_0203eb4c;
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) goto LAB_0203eb48;
        uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        iVar8 = 0;
        if (uVar9 == 0) goto LAB_0203eb4c;
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != 0x3ce2e8d8) {
          piVar11 = piVar11 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            iVar8 = 0;
            goto LAB_0203eb4c;
          }
        }
        iVar8 = 0;
        if (*piVar11 != -1) {
          iVar8 = *piVar11;
        }
        *(int *)(puVar4 + 8) = iVar8;
      } while (*puVar6 != 0);
      iVar8 = 0;
    }
LAB_0203eb4c:
    lVar1 = *(long *)PTR_DAT_04bb4760 + (ulong)(iVar8 + 0xbU) * 0x15;
    if (0x6c < iVar8 + 0xbU) {
      lVar1 = *(long *)PTR_DAT_04bb4760;
    }
    bVar5 = (*(byte *)(lVar1 + 7) & 0xc) == 0;
  }
  return bVar5;
}

