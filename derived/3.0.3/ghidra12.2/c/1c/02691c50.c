
void FUN_02691c50(long param_1,int param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  
  puVar6 = PTR_DAT_04bb43c0;
  bVar7 = (param_3 & 1) == 0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = 0x18;
  if (bVar7) {
    uVar9 = 0x20;
  }
  lVar12 = 0;
  uVar11 = 0;
  lVar3 = param_1 + 0x1094c;
  if (bVar7) {
    lVar3 = param_1 + 0x10d6c;
  }
  do {
    uVar8 = FUN_0277d6c4(lVar3 + lVar12);
    if (*(long *)puVar6 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        if ((uint)uVar11 == 0) {
          return;
        }
        if (uVar9 <= (uint)uVar11) {
          return;
        }
        lVar13 = (long)param_2 * 0x2c;
        break;
      }
    }
    uVar11 = uVar11 + 1;
    lVar12 = lVar12 + 0x2c;
    lVar13 = *(long *)puVar6;
    if (uVar9 == uVar11) {
      return;
    }
  } while( true );
LAB_02691d54:
  lVar14 = *(long *)puVar6;
  puVar1 = (undefined2 *)(lVar3 + lVar12);
  uVar8 = FUN_0277d6c4(puVar1);
  if (*(long *)puVar6 == 0) {
LAB_02691d30:
    FUN_02691c50(param_1,uVar11 & 0xffffffff,param_3 & 1);
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02691d30;
    puVar2 = (undefined2 *)(lVar3 + lVar13);
    *puVar2 = *puVar1;
    *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined1 *)((long)puVar2 + 3) = *(undefined1 *)((long)puVar1 + 3);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
    piVar15 = (int *)(puVar1 + 4);
    if (*piVar15 == 0) {
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0;
    }
    else {
      uVar4 = *(undefined8 *)piVar15;
      uVar5 = *(undefined8 *)(puVar1 + 8);
      uVar10 = *(undefined8 *)(puVar1 + 0xc);
      *(undefined4 *)(puVar2 + 0x10) = *(undefined4 *)(puVar1 + 0x10);
      *(undefined8 *)(puVar2 + 4) = uVar4;
      *(undefined8 *)(puVar2 + 8) = uVar5;
      *(undefined8 *)(puVar2 + 0xc) = uVar10;
    }
    *(undefined4 *)(puVar2 + 0x12) = *(undefined4 *)(puVar1 + 0x12);
    *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
    *(undefined1 *)((long)puVar2 + 0x29) = *(undefined1 *)((long)puVar1 + 0x29);
    *(undefined1 *)((long)puVar2 + 0x2b) = *(undefined1 *)((long)puVar1 + 0x2b);
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    puVar1[1] = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0xfffe;
    FUN_0277d4ac(puVar1);
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    piVar15[0] = 0;
    piVar15[1] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 6) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
  }
  uVar11 = uVar11 + 1;
  lVar12 = lVar12 + 0x2c;
  lVar13 = lVar13 + 0x2c;
  if (uVar9 == uVar11) {
    return;
  }
  goto LAB_02691d54;
}

