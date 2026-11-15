
void FUN_0234c5b0(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined *local_60;
  undefined *puStack_58;
  
  lVar2 = *(long *)(param_1 + 0x1148);
  if (*(long *)(param_1 + 0x1138) != 0) {
    lVar2 = *(long *)(param_1 + 0x1138) + 0xc0;
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = PTR_DAT_04bb2f90 + 5;
  lVar6 = *(long *)(lVar2 + 0x160);
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x30) != 0)) {
    lVar10 = *(long *)(lVar6 + 0x38);
    iVar8 = 0;
    lVar9 = 0;
    lVar7 = 0;
    lVar6 = (long)*(int *)(lVar6 + 0x30) << 3;
    do {
      plVar4 = (long *)**(undefined8 **)(lVar10 + lVar9 * 8);
      uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_60);
      if (uVar3 != 0xffffffff) {
        if ((((((uint)lVar9 ^ 0xffffffff) & 0xffff) != 0) && ((uVar3 & 0xffff) != 0xffff)) &&
           ((uint)(iVar8 >> 0x10) < *(uint *)(lVar2 + 8))) {
          uVar3 = (uint)(short)uVar3;
          if (uVar3 < *(uint *)(*(long *)(lVar2 + 0x10) + (lVar7 >> 0x2c))) {
            puVar1 = (uint *)(*(long *)(lVar2 + 0x10) + (long)(iVar8 >> 0x10) * 0x10);
            if (*puVar1 <= uVar3) {
              uVar3 = 0;
            }
            plVar4 = (long *)(*(long *)(puVar1 + 2) + (long)(int)uVar3 * 0x60);
            uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if ((uVar5 & 1) == 0) {
              plVar4[2] = (long)&LAB_0234c59c;
              plVar4[3] = 0;
              *plVar4 = (long)&PTR_LAB_04a80208;
              plVar4[1] = param_1;
              *(undefined1 *)(lVar2 + 0x171) = 1;
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x1000000000000;
      lVar9 = lVar9 + 1;
      iVar8 = iVar8 + 0x10000;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0xc207) = 1;
  return;
}

