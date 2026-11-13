
void FUN_013ee8f0(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  undefined *puVar11;
  
  puVar5 = PTR_DAT_04bbcae8;
  puVar3 = PTR_DAT_04bbcae0;
  uVar4 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if ((*(uint *)(param_1 + 0x328) <= uVar4) ||
     (puVar8 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0)
     ) {
    FUN_038d1270(param_2,"FishMaguro");
    return;
  }
  if (*puVar8 != 0) {
    cVar9 = *PTR_DAT_04bbcae0;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
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
        uVar4 = *(uint *)(puVar5 + 0x44);
        if (-1 < (int)uVar4) {
          puVar11 = (undefined *)((ulong)uVar4 + (long)puVar8);
          goto LAB_013ee9f8;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar6 = (uint *)(ulong)*puVar8;
      puVar11 = (undefined *)0x0;
      if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_013ee9f8;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar6);
      if (lVar2 == 0) break;
      uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
      *(undefined4 *)(puVar5 + 0x44) = 0xfffffffe;
      puVar11 = (undefined *)0x0;
      if (uVar10 == 0) goto LAB_013ee9f8;
      piVar7 = (int *)(lVar2 + 4);
      while (piVar7[-1] != 0x48ef0398) {
        piVar7 = piVar7 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          puVar11 = (undefined *)0x0;
          goto LAB_013ee9f8;
        }
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)(puVar5 + 0x44) = iVar1;
    } while (*puVar8 != 0);
  }
  puVar11 = (undefined *)0x0;
LAB_013ee9f8:
  puVar3 = PTR_DAT_04c482a0;
  if (puVar11 != (undefined *)0x0) {
    puVar3 = puVar11;
  }
  FUN_038d1270(param_2,puVar3);
  return;
}

