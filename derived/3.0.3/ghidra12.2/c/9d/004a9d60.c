
/* WARNING: Removing unreachable block (ram,0x004a9df8) */

void FUN_004a9d60(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  
  iVar12 = *(int *)(param_1 + 0x90);
  *(int *)(param_1 + 0x1b4) = iVar12 + -1;
  puVar4 = PTR_DAT_048607b8;
  if (*(int *)(param_1 + 0x1a8) < 2) {
LAB_004a9f34:
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    return;
  }
  lVar13 = 1;
  do {
    puVar8 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar13 * 0x10);
    uVar14 = *puVar8;
    iVar2 = *(int *)(puVar8 + 1);
    uVar3 = *(undefined4 *)((long)puVar8 + 0xc);
    iVar10 = iVar12 + 1;
    if (iVar12 < (int)(*(uint *)(param_1 + 0x94) & 0x3fffffff)) {
      lVar5 = *(long *)(param_1 + 0x88);
      uVar11 = 0;
      *(int *)(param_1 + 0x90) = iVar10;
      iVar9 = iVar12;
LAB_004a9e4c:
      puVar8 = (undefined8 *)(lVar5 + (long)iVar9 * 0x18);
      uVar1 = (iVar12 + 1) - iVar9 & 7;
      if (6 < uVar11) {
        iVar10 = (iVar9 + uVar1 + -1) - iVar12;
        puVar7 = puVar8;
        do {
          puVar8 = puVar7 + 0x18;
          *(undefined4 *)((long)puVar7 + 0x14) = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
          *puVar7 = 0;
          puVar7[1] = 0;
          iVar10 = iVar10 + 8;
          *(undefined4 *)((long)puVar7 + 0x2c) = 0;
          *(undefined1 *)(puVar7 + 5) = 0;
          *(undefined4 *)((long)puVar7 + 0x44) = 0;
          *(undefined1 *)(puVar7 + 8) = 0;
          *(undefined4 *)((long)puVar7 + 0x5c) = 0;
          *(undefined1 *)(puVar7 + 0xb) = 0;
          *(undefined4 *)((long)puVar7 + 0x74) = 0;
          *(undefined1 *)(puVar7 + 0xe) = 0;
          *(undefined4 *)((long)puVar7 + 0x8c) = 0;
          *(undefined1 *)(puVar7 + 0x11) = 0;
          *(undefined4 *)((long)puVar7 + 0xa4) = 0;
          *(undefined1 *)(puVar7 + 0x14) = 0;
          *(undefined4 *)((long)puVar7 + 0xbc) = 0;
          *(undefined1 *)(puVar7 + 0x17) = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xf] = 0;
          puVar7[0x10] = 0;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          puVar7[0x15] = 0;
          puVar7[0x16] = 0;
          puVar7 = puVar8;
        } while (iVar10 != 0);
      }
      if (uVar1 != 0) {
        iVar10 = -uVar1;
        do {
          *(undefined4 *)((long)puVar8 + 0x14) = 0;
          *(undefined1 *)(puVar8 + 2) = 0;
          iVar10 = iVar10 + 1;
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8 = puVar8 + 3;
        } while (iVar10 != 0);
      }
      lVar5 = *(long *)(param_1 + 0x88);
    }
    else {
      lVar5 = FUN_00426720(puVar4,iVar10,0x18,*(undefined8 *)(param_1 + 0x88),iVar12,param_1 + 0x94)
      ;
      iVar9 = *(int *)(param_1 + 0x90);
      *(long *)(param_1 + 0x88) = lVar5;
      if (iVar12 < iVar9) {
        if (iVar10 < iVar9) {
          *(int *)(param_1 + 0x90) = iVar10;
        }
      }
      else {
        uVar11 = iVar12 - iVar9;
        *(int *)(param_1 + 0x90) = iVar10;
        if (iVar9 <= iVar12) goto LAB_004a9e4c;
      }
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar2 * 8);
    puVar8 = (undefined8 *)(lVar5 + (long)iVar12 * 0x18);
    *puVar8 = uVar14;
    puVar8[1] = uVar6;
    *(undefined1 *)(puVar8 + 2) = 1;
    *(undefined4 *)((long)puVar8 + 0x14) = uVar3;
    lVar13 = lVar13 + 1;
    if (*(int *)(param_1 + 0x1a8) <= lVar13) goto LAB_004a9f34;
    iVar12 = *(int *)(param_1 + 0x90);
  } while( true );
}

