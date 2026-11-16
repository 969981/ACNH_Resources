
void FUN_0273b320(byte *param_1,long *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  ulong uVar13;
  undefined4 local_34;
  
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_34 = FUN_006bd550(param_2[1],0);
  puVar6 = (uint *)FUN_0273b850(lVar7 + 0x21e0,&local_34);
  puVar5 = PTR_DAT_04bb6488;
  puVar4 = PTR_DAT_04bb6480;
  if (puVar6 != (uint *)0x0) {
    uVar9 = *puVar6;
    if (uVar9 != 0) {
      cVar10 = *PTR_DAT_04bb6480;
      do {
        puVar11 = (uint *)(ulong)uVar9;
        if (cVar10 != '\0') {
          uVar9 = *(uint *)puVar5;
          if ((int)uVar9 < 0) {
            if ((uVar9 == 0xffffffff) && (puVar11 != (uint *)0x0)) goto LAB_0273b3ec;
            goto LAB_0273b47c;
          }
          if ((ushort *)((ulong)uVar9 + (long)puVar6) == (ushort *)0x0) goto LAB_0273b47c;
          uVar3 = *(ushort *)((ulong)uVar9 + (long)puVar6);
          if (uVar3 < 0x100) {
            param_1 = param_1 + uVar3;
            goto LAB_0273b47c;
          }
          uVar9 = (uint)*param_1;
LAB_0273b488:
          cVar10 = *puVar4;
          goto LAB_0273b4a0;
        }
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        puVar11 = (uint *)(ulong)*puVar6;
        if (puVar11 == (uint *)0x0) {
LAB_0273b47c:
          uVar9 = (uint)*param_1;
          if (*puVar6 != 0) goto LAB_0273b488;
          goto LAB_0273b544;
        }
LAB_0273b3ec:
        if (puVar6 == puVar11) goto LAB_0273b47c;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
        if (lVar7 == 0) goto LAB_0273b47c;
        uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
        *(undefined4 *)puVar5 = 0xfffffffe;
        if (uVar13 == 0) goto LAB_0273b47c;
        piVar12 = (int *)(lVar7 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_0273b47c;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)puVar5 = iVar1;
        uVar9 = *puVar6;
      } while (uVar9 != 0);
    }
    uVar9 = (uint)*param_1;
LAB_0273b544:
    uVar8 = 0;
LAB_0273b548:
    uVar2 = param_3;
    if ((int)uVar8 <= (int)param_3) {
      uVar2 = uVar8;
    }
    uVar8 = 0;
    if (-1 < (int)param_3) {
      uVar8 = uVar2;
    }
    if (uVar8 != uVar9) {
      if (0xfe < uVar8) {
        uVar8 = 0xff;
      }
      *param_1 = (byte)uVar8;
    }
  }
  return;
LAB_0273b4a0:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    uVar2 = *puVar6;
  }
  else {
    uVar2 = *(uint *)(puVar5 + 0x10);
    if (-1 < (int)uVar2) {
      uVar8 = 0;
      if ((byte *)((ulong)uVar2 + (long)puVar6) != (byte *)0x0) {
        uVar8 = (uint)*(byte *)((ulong)uVar2 + (long)puVar6);
      }
      goto LAB_0273b548;
    }
    if (uVar2 != 0xffffffff) goto LAB_0273b544;
    uVar2 = *puVar6;
  }
  if ((uVar2 == 0) || (puVar11 = (uint *)(ulong)uVar2, puVar6 == puVar11)) goto LAB_0273b544;
  lVar7 = 0xc;
  if (*(char *)((long)puVar6 + (10 - (long)puVar11)) != '\0') {
    lVar7 = 0x1c;
  }
  lVar7 = (long)puVar6 + (lVar7 - (long)puVar11);
  if (lVar7 == 0) goto LAB_0273b544;
  uVar13 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar11));
  *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
  if (uVar13 == 0) goto LAB_0273b544;
  piVar12 = (int *)(lVar7 + 4);
  while (piVar12[-1] != -0x42897d0b) {
    piVar12 = piVar12 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0273b544;
  }
  iVar1 = 0;
  if (*piVar12 != -1) {
    iVar1 = *piVar12;
  }
  *(int *)(puVar5 + 0x10) = iVar1;
  if (*puVar6 == 0) goto LAB_0273b544;
  goto LAB_0273b4a0;
}

