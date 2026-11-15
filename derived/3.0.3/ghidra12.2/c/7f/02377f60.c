
/* WARNING: Removing unreachable block (ram,0x02378248) */

void FUN_02377f60(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  
  uVar8 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar8 = 0;
    if (uVar2 < 0x149) {
      uVar8 = uVar2;
    }
  }
  puVar7 = (uint *)FUN_0251d928(uVar8);
  puVar5 = PTR_DAT_04bc2fe8;
  puVar4 = PTR_DAT_04bc2fe0;
  if (*puVar7 != 0) {
    cVar10 = *PTR_DAT_04bc2fe0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
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
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
        uVar8 = *puVar7;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x38);
        if (-1 < (int)uVar8) {
          if (((char *)((ulong)uVar8 + (long)puVar7) != (char *)0x0) &&
             (*(char *)((ulong)uVar8 + (long)puVar7) == '\0')) goto LAB_02378250;
          break;
        }
        if (uVar8 != 0xffffffff) break;
        uVar8 = *puVar7;
      }
      if ((uVar8 == 0) || (puVar11 = (uint *)(ulong)uVar8, puVar7 == puVar11)) break;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) break;
      uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
      if (uVar12 == 0) break;
      piVar13 = (int *)(lVar1 + 4);
      while (piVar13[-1] != 0x63f77486) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_023780ac;
      }
      iVar6 = 0;
      if (*piVar13 != -1) {
        iVar6 = *piVar13;
      }
      *(int *)(puVar5 + 0x38) = iVar6;
      if (*puVar7 == 0) break;
    } while( true );
  }
LAB_023780ac:
  uVar8 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar8 = 0;
    if (uVar2 < 0x149) {
      uVar8 = uVar2;
    }
  }
  puVar7 = (uint *)FUN_0251d928(uVar8);
  if (*puVar7 == 0) {
LAB_023781c4:
    uVar8 = 0;
  }
  else {
    cVar10 = *puVar4;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
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
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0xa4);
        if (-1 < (int)uVar8) {
          if (((byte *)((ulong)uVar8 + (long)puVar7) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar8 + (long)puVar7), uVar8 = (uint)bVar3, 9 < bVar3))
          goto LAB_023781c4;
          goto LAB_023781c8;
        }
        if (uVar8 != 0xffffffff) goto LAB_023781c4;
      }
      puVar11 = (uint *)(ulong)*puVar7;
      uVar8 = 0;
      if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_023781c8;
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + (lVar1 - (long)puVar11);
      if (lVar1 == 0) goto LAB_023781c4;
      uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0xa4) = 0xfffffffe;
      uVar8 = 0;
      if (uVar12 == 0) goto LAB_023781c8;
      piVar13 = (int *)(lVar1 + 4);
      while (piVar13[-1] != -0x6f9844f2) {
        piVar13 = piVar13 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) {
          uVar8 = 0;
          goto LAB_023781c8;
        }
      }
      iVar6 = 0;
      if (*piVar13 != -1) {
        iVar6 = *piVar13;
      }
      *(int *)(puVar5 + 0xa4) = iVar6;
    } while (*puVar7 != 0);
    uVar8 = 0;
  }
LAB_023781c8:
  if (uVar8 != 0) {
    *(uint *)(param_1 + 0x1f38) = uVar8;
  }
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  lVar1 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x1f3c) = *(undefined4 *)(lVar1 + 0x278);
  *(undefined4 *)(param_1 + 8000) = *(undefined4 *)(lVar1 + 0x27c);
  *(undefined4 *)(param_1 + 0x1f44) = *(undefined4 *)(lVar1 + 0x280);
  *(undefined4 *)(param_1 + 0x1f48) = *(undefined4 *)(lVar1 + 0x2b4);
  if (puVar9 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar9 = &DAT_05240280;
    }
    else {
      puVar9 = &DAT_05240280;
    }
  }
  *(byte *)(param_1 + 0x1f4c) = (byte)(*(uint *)((long)puVar9 + 0x15f4) >> 4) & 1;
LAB_02378250:
  if ((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 0x280) == 300)) {
    *(float *)(param_1 + 8000) = (float)(int)*(short *)(param_1 + 0x191c) * 0.25;
    *(uint *)(param_1 + 0x1f48) = (uint)*(ushort *)(param_1 + 0x1922) << 0x10;
    *(float *)(param_1 + 0x1f3c) = (float)*(int *)(param_1 + 0x1918) * 0.001;
    *(float *)(param_1 + 0x1f44) = (float)*(int *)(param_1 + 0x191e) * 0.001;
  }
  return;
}

