
int FUN_02739b50(long *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 local_14;
  
  puVar12 = *(uint **)PTR_DAT_04bb46d8;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_14 = FUN_006bd550(param_1[1],0);
  puVar6 = (uint *)FUN_02739e80(lVar7 + 0xec0,&local_14);
  puVar4 = PTR_DAT_04bb63c0;
  puVar3 = PTR_DAT_04bb63b8;
  iVar5 = 0;
  if (puVar6 != (uint *)0x0) {
    if (*puVar6 != 0) {
      cVar8 = *PTR_DAT_04bb63b8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          uVar1 = *puVar6;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar1) {
            if (((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) &&
               (uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar6), uVar2 < 0x80)) {
              puVar12 = puVar12 + (ulong)uVar2 * 2;
            }
            break;
          }
          if (uVar1 != 0xffffffff) break;
          uVar1 = *puVar6;
        }
        if ((uVar1 == 0) || (puVar9 = (uint *)(ulong)uVar1, puVar6 == puVar9)) break;
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + (lVar7 - (long)puVar9);
        if (lVar7 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar11 = (int *)(lVar7 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02739ca8;
        }
        iVar5 = 0;
        if (*piVar11 != -1) {
          iVar5 = *piVar11;
        }
        *(int *)(puVar4 + 8) = iVar5;
        if (*puVar6 == 0) break;
      } while( true );
    }
LAB_02739ca8:
    uVar1 = *puVar12;
    iVar5 = 0;
    if ((*(byte *)((long)puVar12 + 7) != 0 ||
         (((ulong)uVar1 != 0 || (ushort)puVar12[1] != 0) || *(byte *)((long)puVar12 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar12 + 7) ==
        ((uVar1 + (uVar1 >> 0x10) + (uVar1 >> 0x18) + (uVar1 >> 8)) - 0x2d & 0xff))) {
      lVar7 = (ulong)uVar1 << ((ulong)(0x1d - *(byte *)((long)puVar12 + 6)) & 0x3f);
      iVar5 = ((int)lVar7 - (uint)(ushort)puVar12[1]) + (int)((ulong)lVar7 >> 0x20) + -0x7f1cd4ef;
    }
  }
  return iVar5;
}

