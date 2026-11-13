
void FUN_0130d780(ushort *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar7 = PTR_DAT_04bbbde0;
  puVar6 = PTR_DAT_04bbbdd8;
  if (param_2 != 0) {
    lVar8 = *(long *)PTR_DAT_04bb27a8;
    uVar4 = (uint)*param_1 - (uint)*(ushort *)(lVar8 + 0x408);
    if ((uVar4 < *(uint *)(lVar8 + 1000)) &&
       (puVar9 = *(uint **)(*(long *)(lVar8 + 0x3f0) + (long)(int)uVar4 * 8), puVar9 != (uint *)0x0)
       ) {
      uVar4 = *puVar9;
      if (uVar4 == 0) {
LAB_0130d8b4:
        lVar8 = 0;
LAB_0130d8b8:
        lVar1 = *(long *)PTR_PTR_04bbc340;
        if (lVar8 != 0) {
          lVar1 = lVar8;
        }
        FUN_038d1270(param_2,"%s_%d",lVar1,param_1[1]);
        return;
      }
      cVar10 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          uVar4 = *puVar9;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0xa4);
          if (-1 < (int)uVar3) {
            lVar8 = (ulong)uVar3 + (long)puVar9;
            goto LAB_0130d8b8;
          }
          if (uVar3 != 0xffffffff) goto LAB_0130d8b4;
        }
        puVar5 = (uint *)(ulong)uVar4;
        lVar8 = 0;
        if ((puVar5 == (uint *)0x0) || (lVar8 = 0, puVar9 == puVar5)) goto LAB_0130d8b8;
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar5)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar8 - (long)puVar5);
        lVar8 = 0;
        if (lVar1 == 0) goto LAB_0130d8b8;
        uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xa4) = 0xfffffffe;
        if (uVar11 == 0) goto LAB_0130d8b4;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x39b5a93d) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0130d8b4;
        }
        iVar2 = 0;
        if (*piVar12 != -1) {
          iVar2 = *piVar12;
        }
        *(int *)(puVar7 + 0xa4) = iVar2;
        uVar4 = *puVar9;
        if (uVar4 == 0) goto LAB_0130d8b4;
      } while( true );
    }
  }
  return;
}

