
long FUN_017f1b20(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  
  lVar11 = *(long *)PTR_DAT_04bb46d0;
  uVar4 = FUN_017f1348(param_1,param_2);
  puVar3 = PTR_DAT_04bbe400;
  puVar2 = PTR_DAT_04bbe3f8;
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x400);
  if ((uVar4 < *(uint *)(lVar11 + 0x3e0)) &&
     (puVar5 = *(uint **)(*(long *)(lVar11 + 1000) + (long)(int)uVar4 * 8), puVar5 != (uint *)0x0))
  {
    if (*puVar5 != 0) {
      cVar6 = *PTR_DAT_04bbe3f8;
      do {
        if (cVar6 == '\0') {
          cVar6 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
          *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar3 + 0x30);
          if (-1 < (int)uVar4) {
            lVar8 = (ulong)uVar4 + (long)puVar5;
            goto LAB_017f1c48;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar5;
        lVar8 = 0;
        if ((*puVar5 == 0) || (puVar5 == puVar9)) goto LAB_017f1c48;
        lVar11 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar9)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar5 + (lVar11 - (long)puVar9);
        if (lVar11 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar9));
        *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
        lVar8 = 0;
        if (uVar7 == 0) goto LAB_017f1c48;
        piVar10 = (int *)(lVar11 + 4);
        while (piVar10[-1] != 0x4b9c4229) {
          piVar10 = piVar10 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) {
            lVar8 = 0;
            goto LAB_017f1c48;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar3 + 0x30) = iVar1;
      } while (*puVar5 != 0);
    }
    lVar8 = 0;
LAB_017f1c48:
    lVar11 = *(long *)PTR_PTR_04bbe3f0;
    if (lVar8 != 0) {
      lVar11 = lVar8;
    }
  }
  else {
    lVar11 = 0;
  }
  return lVar11;
}

