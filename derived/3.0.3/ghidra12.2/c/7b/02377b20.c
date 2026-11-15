
void FUN_02377b20(long param_1)

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
  undefined8 *puVar12;
  
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
LAB_02377c80:
    puVar12 = *(undefined8 **)(param_1 + 0x60);
    if (puVar12 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar12 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar12 = &DAT_05240280;
      }
    }
    *(undefined1 *)((long)puVar12 + 0x5f06) = 0;
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
      uVar7 = *(uint *)(puVar4 + 0x60);
      if (-1 < (int)uVar7) {
        if (((char *)((ulong)uVar7 + (long)puVar6) != (char *)0x0) &&
           (*(char *)((ulong)uVar7 + (long)puVar6) != '\0')) {
          *(undefined8 *)(param_1 + 0x1fc0) = 0;
          *(undefined2 *)(param_1 + 0x1fcc) = 0x100;
          *(undefined4 *)(param_1 + 0x1fc8) = 2;
        }
        goto LAB_02377c80;
      }
      if (uVar7 != 0xffffffff) goto LAB_02377c80;
      uVar7 = *puVar6;
    }
    if ((uVar7 == 0) || (puVar9 = (uint *)(ulong)uVar7, puVar6 == puVar9)) goto LAB_02377c80;
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
    if (lVar1 == 0) goto LAB_02377c80;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
    *(undefined4 *)(puVar4 + 0x60) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_02377c80;
    piVar11 = (int *)(lVar1 + 4);
    while (piVar11[-1] != 0x5681a1c3) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_02377c80;
    }
    iVar5 = 0;
    if (*piVar11 != -1) {
      iVar5 = *piVar11;
    }
    *(int *)(puVar4 + 0x60) = iVar5;
    if (*puVar6 == 0) goto LAB_02377c80;
  } while( true );
}

