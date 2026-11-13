
bool FUN_012509c0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  uint *puVar11;
  int *piVar12;
  
  lVar1 = param_1 + 8;
  iVar7 = FUN_0277d6c4(lVar1);
  if ((iVar7 == 60000) || (iVar7 = FUN_0277d6c4(lVar1), iVar7 == 0xea69)) {
LAB_01250a04:
    if ((param_2 & 1) == 0) {
      bVar6 = true;
    }
    else {
      bVar6 = (*(byte *)(param_1 + 0xe) & 1) == 0;
    }
  }
  else {
    iVar7 = FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    if ((iVar7 == 9) &&
       (((((*(byte *)(param_1 + 0xe) & 0x18) != 0 ||
          (uVar8 = FUN_0123b5b0(*(undefined8 *)(param_1 + 0x10)), (uVar8 & 1) == 0)) &&
         (puVar5 = PTR_DAT_04bbbc78, puVar4 = PTR_DAT_04bbbc70, puVar9 = *(uint **)(param_1 + 0x10),
         puVar9 != (uint *)0x0)) && (*puVar9 != 0)))) {
      cVar10 = *PTR_DAT_04bbbc70;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
          uVar3 = *puVar9;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x4c);
          if (-1 < (int)uVar3) {
            if ((((char *)((ulong)uVar3 + (long)puVar9) != (char *)0x0) &&
                (*(char *)((ulong)uVar3 + (long)puVar9) == '\x04')) &&
               (((*(byte *)(param_1 + 0xe) & 0x18) != 0 ||
                (uVar8 = FUN_0123b5b0(*(undefined8 *)(param_1 + 0x10)), (uVar8 & 1) == 0))))
            goto LAB_01250a04;
            break;
          }
          if (uVar3 != 0xffffffff) break;
          uVar3 = *puVar9;
        }
        if ((uVar3 == 0) || (puVar11 = (uint *)(ulong)uVar3, puVar9 == puVar11)) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
        if (uVar8 == 0) break;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != -0xa58ccc9) {
          piVar12 = piVar12 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_01250b68;
        }
        iVar7 = 0;
        if (*piVar12 != -1) {
          iVar7 = *piVar12;
        }
        *(int *)(puVar5 + 0x4c) = iVar7;
        if (*puVar9 == 0) break;
      } while( true );
    }
LAB_01250b68:
    FUN_0123db50(lVar1,*(undefined8 *)(param_1 + 0x10));
    bVar6 = false;
  }
  return bVar6;
}

