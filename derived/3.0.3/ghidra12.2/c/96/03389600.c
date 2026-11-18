
void FUN_03389600(long param_1)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_04bb49b8;
  uVar5 = *(uint *)(param_1 + 0x1a8);
  if (0 < (int)uVar5) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x1b0);
      uVar2 = uVar9;
      if (uVar5 <= uVar9) {
        uVar2 = 0;
      }
      uVar11 = (ulong)uVar2;
      lVar8 = lVar10 + uVar11 * 0x38;
      pbVar6 = (byte *)(lVar8 + 8);
      bVar3 = *pbVar6;
      if ((bVar3 >> 1 & 1) != 0) {
        lVar7 = lVar10 + uVar11 * 0x38;
        *pbVar6 = bVar3 & 0xf8 | 4;
        plVar1 = (long *)(lVar7 + 0x10);
        if (*(long *)(lVar7 + 0x28) == 0) {
          if (*plVar1 != 0) goto LAB_033896b8;
        }
        else {
          FUN_03f45838(lVar10 + uVar11 * 0x38 + 0x18);
          if (*plVar1 == 0) {
            *(undefined4 *)(lVar10 + uVar11 * 0x38 + 0xc) = 0xe;
          }
          else {
LAB_033896b8:
            lVar10 = *(long *)puVar4;
            if (lVar10 != 0) {
              FUN_03f350f4(lVar10,lVar8);
            }
          }
        }
      }
      uVar5 = *(uint *)(param_1 + 0x1a8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar5);
  }
  uVar5 = *(uint *)(param_1 + 0x1b8);
  if (0 < (int)uVar5) {
    uVar9 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x1c0);
      uVar2 = uVar9;
      if (uVar5 <= uVar9) {
        uVar2 = 0;
      }
      uVar11 = (ulong)uVar2;
      lVar8 = lVar10 + uVar11 * 0x38;
      pbVar6 = (byte *)(lVar8 + 8);
      bVar3 = *pbVar6;
      if ((bVar3 >> 1 & 1) != 0) {
        lVar7 = lVar10 + uVar11 * 0x38;
        *pbVar6 = bVar3 & 0xf8 | 4;
        plVar1 = (long *)(lVar7 + 0x10);
        if (*(long *)(lVar7 + 0x28) == 0) {
          if (*plVar1 != 0) goto LAB_03389758;
        }
        else {
          FUN_03f45838(lVar10 + uVar11 * 0x38 + 0x18);
          if (*plVar1 == 0) {
            *(undefined4 *)(lVar10 + uVar11 * 0x38 + 0xc) = 0xe;
          }
          else {
LAB_03389758:
            lVar10 = *(long *)puVar4;
            if (lVar10 != 0) {
              FUN_03f350f4(lVar10,lVar8);
            }
          }
        }
      }
      uVar5 = *(uint *)(param_1 + 0x1b8);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar5);
  }
  return;
}

