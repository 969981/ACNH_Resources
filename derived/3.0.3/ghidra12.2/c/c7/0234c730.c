
void FUN_0234c730(long param_1)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined *local_60;
  undefined *puStack_58;
  
  lVar3 = *(long *)(param_1 + 0x1148);
  if (*(long *)(param_1 + 0x1138) != 0) {
    lVar3 = *(long *)(param_1 + 0x1138) + 0xc0;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = PTR_DAT_04bb2f90 + 5;
  lVar7 = *(long *)(lVar3 + 0x160);
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) != 0)) {
    lVar11 = *(long *)(lVar7 + 0x38);
    lVar10 = 0;
    lVar8 = 0;
    iVar9 = 0;
    lVar7 = (long)*(int *)(lVar7 + 0x30) << 3;
    do {
      plVar5 = (long *)**(undefined8 **)(lVar11 + lVar10 * 8);
      iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_60);
      if (iVar4 != -1) {
        if ((((((uint)lVar10 ^ 0xffffffff) & 0xffff) != 0) && (iVar4 * 0x10000 != -0x10000)) &&
           ((uint)(iVar9 >> 0x10) < *(uint *)(lVar3 + 8))) {
          uVar2 = iVar4 * 0x10000 >> 0x10;
          if (uVar2 < *(uint *)(*(long *)(lVar3 + 0x10) + (lVar8 >> 0x2c))) {
            puVar1 = (uint *)(*(long *)(lVar3 + 0x10) + (long)(iVar9 >> 0x10) * 0x10);
            if (*puVar1 <= uVar2) {
              uVar2 = 0;
            }
            plVar5 = (long *)(*(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x60);
            uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
            if ((uVar6 & 1) != 0) {
              *plVar5 = (long)(PTR_DAT_04bcb450 + 0x10);
            }
          }
        }
        break;
      }
      iVar9 = iVar9 + 0x10000;
      lVar8 = lVar8 + 0x1000000000000;
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  *(undefined1 *)(param_1 + 0xc207) = 0;
  return;
}

