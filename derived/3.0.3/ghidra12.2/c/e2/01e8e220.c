
void FUN_01e8e220(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  uint local_14;
  
  puVar3 = PTR_DAT_04bc1568;
  puVar2 = PTR_DAT_04bc1560;
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(param_1 + 0xafc0);
    if ((int)*(uint *)(lVar6 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar6 + 0x169b8) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar6 + 0x169b8) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar6 + 0x169d0) <= uVar1 ||
           (*(char *)(*(long *)(lVar6 + 0x169d8) + (long)(int)uVar1) != '\0')))) &&
         (((uVar1 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar1 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x01e8e2d8;
      }
    }
    else if (uVar1 < *(uint *)(lVar6 + 0x16ac8)) {
      if (*(uint *)(lVar6 + 0x16ab8) <= uVar1) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar6 + 0x16ac0) + (ulong)uVar1 * 8);
joined_r0x01e8e2d8:
      if (puVar7 != (uint *)0x0) goto LAB_01e8e2e4;
    }
  }
  puVar7 = (uint *)PTR_DAT_04bc2828;
LAB_01e8e2e4:
  if (*puVar7 == 0) {
LAB_01e8e3fc:
    local_14 = 7;
LAB_01e8e400:
    if (6 < local_14) {
      local_14 = 7;
    }
    FUN_01e8cad0(param_1,&local_14,param_2 & 1);
    return;
  }
  cVar9 = *PTR_DAT_04bc1560;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar1 = *(uint *)(puVar3 + 0x40);
      if (-1 < (int)uVar1) {
        if ((byte *)((ulong)uVar1 + (long)puVar7) != (byte *)0x0) {
          local_14 = (uint)*(byte *)((ulong)uVar1 + (long)puVar7);
          goto LAB_01e8e400;
        }
        goto LAB_01e8e3fc;
      }
      if (uVar1 != 0xffffffff) goto LAB_01e8e3fc;
    }
    puVar4 = (uint *)(ulong)*puVar7;
    local_14 = 7;
    if ((*puVar7 == 0) || (puVar7 == puVar4)) goto LAB_01e8e400;
    lVar6 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar4)) != '\0') {
      lVar6 = 0x1c;
    }
    lVar6 = (long)puVar7 + (lVar6 - (long)puVar4);
    if (lVar6 == 0) goto LAB_01e8e3fc;
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar4));
    *(undefined4 *)(puVar3 + 0x40) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01e8e3fc;
    piVar5 = (int *)(lVar6 + 4);
    while (piVar5[-1] != 0x35c78d62) {
      piVar5 = piVar5 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01e8e3fc;
    }
    iVar8 = 0;
    if (*piVar5 != -1) {
      iVar8 = *piVar5;
    }
    *(int *)(puVar3 + 0x40) = iVar8;
    if (*puVar7 == 0) goto LAB_01e8e3fc;
  } while( true );
}

