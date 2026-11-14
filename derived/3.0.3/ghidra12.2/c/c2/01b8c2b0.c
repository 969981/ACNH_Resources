
bool FUN_01b8c2b0(undefined8 param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bc06e8;
  puVar4 = PTR_DAT_04bc06e0;
  if (*param_2 == 0) {
LAB_01b8c3b4:
    bVar7 = 0;
  }
  else {
    cVar6 = *PTR_DAT_04bc06e0;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
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
        uVar3 = *(uint *)(puVar5 + 0x50);
        if (-1 < (int)uVar3) {
          if (((byte *)((ulong)uVar3 + (long)param_2) == (byte *)0x0) ||
             (bVar7 = *(byte *)((ulong)uVar3 + (long)param_2), 3 < bVar7)) goto LAB_01b8c3b4;
          goto LAB_01b8c3b8;
        }
        if (uVar3 != 0xffffffff) goto LAB_01b8c3b4;
      }
      puVar9 = (uint *)(ulong)*param_2;
      bVar7 = 0;
      if ((*param_2 == 0) || (param_2 == puVar9)) goto LAB_01b8c3b8;
      lVar2 = 0xc;
      if (*(char *)((long)param_2 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_2 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_01b8c3b4;
      uVar8 = (ulong)*(ushort *)((long)param_2 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
      bVar7 = 0;
      if (uVar8 == 0) goto LAB_01b8c3b8;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x7a6965c5) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          bVar7 = 0;
          goto LAB_01b8c3b8;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x50) = iVar1;
    } while (*param_2 != 0);
    bVar7 = 0;
  }
LAB_01b8c3b8:
  return bVar7 == 3;
}

