
void FUN_03949ad0(long param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  undefined *local_478;
  undefined1 *puStack_470;
  undefined4 local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  
  local_65 = 0;
  lVar11 = param_1 + (long)param_2 * 0x290;
  local_468 = 0x400;
  local_464[0] = 0;
  puStack_470 = local_464;
  piVar12 = (int *)(lVar11 + 0x10);
  iVar2 = *piVar12;
  local_478 = PTR_DAT_04bb2f40 + 0x10;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      lVar6 = *(long *)(lVar11 + 0x18) + (long)iVar5 * 0xe0;
      lVar9 = *(long *)(lVar6 + 0x60);
      lVar7 = (long)*(int *)(lVar6 + 0x6c);
      lVar8 = -lVar7;
      lVar10 = lVar9;
      if (*(int *)(lVar6 + 0x68) < 1) {
        lVar10 = 0;
      }
      if ((lVar10 != 0 && lVar10 != lVar7) && lVar9 != lVar6 + 0x58) {
        lVar9 = lVar8 + lVar9;
        do {
          lVar9 = *(long *)(lVar9 + lVar7 + 8) + lVar8;
        } while (lVar9 != lVar6 + 0x58 + lVar8);
      }
      lVar7 = (long)*(int *)(lVar6 + 0x54);
      lVar9 = *(long *)(lVar6 + 0x48);
      lVar8 = -lVar7;
      lVar10 = lVar9;
      if (*(int *)(lVar6 + 0x50) < 1) {
        lVar10 = 0;
      }
      if ((lVar10 != 0 && lVar10 != lVar7) && lVar9 != lVar6 + 0x40) {
        lVar9 = lVar8 + lVar9;
        do {
          lVar9 = *(long *)(lVar9 + lVar7 + 8) + lVar8;
        } while (lVar9 != lVar8 + lVar6 + 0x40);
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  iVar2 = *(int *)(param_1 + 0xa50);
  if (iVar2 != 0) {
    lVar11 = *(long *)(param_1 + 0xa58);
    iVar5 = 0;
    do {
      lVar9 = lVar11 + (long)iVar5 * 0x150;
      if ((*(long *)(lVar9 + 0xa0) != 0) &&
         (*(int **)(lVar11 + (long)iVar5 * 0x150 + 0xd0) == piVar12)) {
        lVar10 = lVar11 + (long)iVar5 * 0x150;
        (**(code **)(*(long *)(lVar10 + 0xd8) + 0x18))((long *)(lVar10 + 0xd8));
        uVar3 = *(ushort *)(lVar9 + 0x30);
        uVar4 = *(ushort *)(lVar9 + 0x32);
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar1 = uVar4;
        if (*(short *)(lVar9 + 0x3a) != 3) {
          uVar1 = 1;
        }
        if (uVar1 <= uVar4) {
          uVar1 = uVar4;
        }
        FUN_038d1270(&local_478,"[%s] (%4dx%4d) size:%d [%s]",*(undefined8 *)(lVar10 + 0xe0),uVar3,
                     uVar1,*(int *)(lVar9 + 0x44) + *(int *)(lVar9 + 0x40),
                     &DAT_041b39c4 + *(int *)(&DAT_041b39c4 + (ulong)*(byte *)(lVar10 + 0x10a) * 4))
        ;
      }
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return;
}

