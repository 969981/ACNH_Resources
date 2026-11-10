
bool FUN_00333270(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar4 = *(ushort *)(param_2 + 0xdc);
  *(uint *)(param_1 + 0x78) = (uint)uVar4;
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  else {
    lVar13 = (ulong)(uint)uVar4 * 0x90 + 0x20;
    puVar6 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x440) + 0x10))
                       (*(long **)(param_1 + 0x440),lVar13,0x80);
    if (puVar6 != (undefined8 *)0x0) {
      *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + lVar13;
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 1;
    }
    iVar5 = *(int *)(param_1 + 0x78);
    *(undefined8 **)(param_1 + 0x80) = puVar6;
    if (iVar5 == 0) {
      *(undefined8 **)(param_1 + 0x88) = puVar6;
    }
    else {
      uVar8 = (long)iVar5 * 0x90 - 0x90;
      uVar2 = ((uint)(uVar8 / 0x90) & 0x1ffffff) + 1;
      uVar9 = (ulong)uVar2 & 3;
      puVar7 = puVar6;
      if ((uVar2 & 3) != 0) {
        do {
          *puVar7 = &PTR_LAB_0484b648;
          uVar9 = uVar9 - 1;
          *(undefined1 *)(puVar7 + 1) = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7 = puVar7 + 0x12;
        } while (uVar9 != 0);
      }
      if (0x1af < uVar8) {
        do {
          *puVar7 = &PTR_LAB_0484b648;
          *(undefined1 *)(puVar7 + 1) = 0;
          puVar7[0x12] = &PTR_LAB_0484b648;
          *(undefined1 *)(puVar7 + 0x13) = 0;
          puVar7[0x24] = &PTR_LAB_0484b648;
          *(undefined1 *)(puVar7 + 0x25) = 0;
          puVar7[0x36] = &PTR_LAB_0484b648;
          *(undefined1 *)(puVar7 + 0x37) = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[0x18] = 0;
          puVar7[0x19] = 0;
          puVar7[0x2a] = 0;
          puVar7[0x2b] = 0;
          puVar7[0x3c] = 0;
          puVar7[0x3d] = 0;
          puVar7 = puVar7 + 0x48;
        } while (puVar7 != puVar6 + (long)iVar5 * 0x12);
      }
      *(undefined8 **)(param_1 + 0x88) = puVar6;
      if (0 < *(int *)(param_1 + 0x78)) {
        lVar10 = *(long *)(param_1 + 0xb0);
        lVar11 = 0;
        lVar12 = 0;
        lVar13 = 0;
        do {
          FUN_00334c20(*(long *)(param_1 + 0x88) + lVar12,*(long *)(param_2 + 0x28) + lVar11,lVar10)
          ;
          puVar1 = (uint *)(lVar10 + 8);
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + 0x90;
          lVar11 = lVar11 + 0x78;
          lVar3 = lVar10 + (ulong)*puVar1;
          lVar10 = 0;
          if (*puVar1 != 0) {
            lVar10 = lVar3;
          }
        } while (lVar13 < *(int *)(param_1 + 0x78));
      }
    }
  }
  return uVar4 != 0;
}

