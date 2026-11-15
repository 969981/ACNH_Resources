
void FUN_02377d00(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  uVar7 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar7 = 0;
    if (uVar2 < 0x149) {
      uVar7 = uVar2;
    }
  }
  puVar6 = (uint *)FUN_0251d928(uVar7);
  puVar4 = PTR_DAT_04bc2fe8;
  puVar3 = PTR_DAT_04bc2fe0;
  if (*puVar6 == 0) {
LAB_02377ec8:
    *(byte *)(param_3 + 0x15) = *(byte *)(param_3 + 0x15) & 0xf7;
    return;
  }
  cVar8 = *PTR_DAT_04bc2fe0;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
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
      *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      uVar7 = *puVar6;
    }
    else {
      uVar7 = *(uint *)(puVar4 + 0x48);
      if (-1 < (int)uVar7) {
        if (((char *)((ulong)uVar7 + (long)puVar6) != (char *)0x0) &&
           (*(char *)((ulong)uVar7 + (long)puVar6) != '\0')) {
          if (*(long *)PTR_DAT_04bb4718 == 0) {
            if ((DAT_054f0960 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(&DAT_054f0960);
              puVar6 = (uint *)&DAT_054f0958;
              if (iVar5 != 0) {
                DAT_054f0958 = 0;
                __cxa_guard_release(&DAT_054f0960);
              }
            }
            else {
              puVar6 = (uint *)&DAT_054f0958;
            }
          }
          else {
            puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
            if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
              puVar6 = puVar6 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
            }
          }
          *puVar6 = *puVar6 & 0xffffffdf;
        }
        goto LAB_02377ec8;
      }
      if (uVar7 != 0xffffffff) goto LAB_02377ec8;
      uVar7 = *puVar6;
    }
    if ((uVar7 == 0) || (puVar9 = (uint *)(ulong)uVar7, puVar6 == puVar9)) goto LAB_02377ec8;
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) goto LAB_02377ec8;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_02377ec8;
    piVar11 = (int *)(lVar1 + 4);
    while (piVar11[-1] != 0x1aaaddc1) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_02377ec8;
    }
    iVar5 = 0;
    if (*piVar11 != -1) {
      iVar5 = *piVar11;
    }
    *(int *)(puVar4 + 0x48) = iVar5;
    if (*puVar6 == 0) goto LAB_02377ec8;
  } while( true );
}

