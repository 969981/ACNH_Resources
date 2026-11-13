
void FUN_013ee7b0(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bbcae8;
  puVar3 = PTR_DAT_04bbcae0;
  uVar4 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if ((*(uint *)(param_1 + 0x328) <= uVar4) ||
     (puVar6 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0)
     ) {
    **(undefined1 **)(param_2 + 8) = 0;
    return;
  }
  if (*puVar6 != 0) {
    cVar7 = *PTR_DAT_04bbcae0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar5 + 0x3c);
        if (-1 < (int)uVar4) {
          puVar9 = (undefined *)((ulong)uVar4 + (long)puVar6);
          goto LAB_013ee8b8;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      puVar9 = (undefined *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_013ee8b8;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
      puVar9 = (undefined *)0x0;
      if (uVar8 == 0) goto LAB_013ee8b8;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != -0x7840ff18) {
        piVar11 = piVar11 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_013ee8b8;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x3c) = iVar1;
    } while (*puVar6 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_013ee8b8:
  puVar3 = PTR_DAT_04c48298;
  if (puVar9 != (undefined *)0x0) {
    puVar3 = puVar9;
  }
  FUN_038d1270(param_2,&DAT_0409e973,puVar3);
  return;
}

