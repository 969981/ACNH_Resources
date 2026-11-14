
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170ce20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar6 = *(uint *)(param_1 + 0x14b0);
  uVar8 = uVar6 & 0xffff;
  if (uVar6 < 0xffff0000 && uVar8 != 0xffff) {
    uVar6 = uVar6 & 0xffff0000;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x1150);
    if (lVar7 == 0) {
      uVar6 = 0xffff0000;
      uVar8 = 0xffff;
    }
    else {
      local_50 = PTR_DAT_04bb2020 + 0x10;
      puStack_48 = PTR_DAT_04bb2f90 + 0x10;
      if (*(int *)(lVar7 + 0x30) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        lVar10 = *(long *)(lVar7 + 0x38);
        lVar9 = 0;
        lVar7 = (long)*(int *)(lVar7 + 0x30) << 3;
        uVar8 = 0xffffffff;
        do {
          plVar5 = (long *)**(undefined8 **)(lVar10 + lVar9 * 8);
          iVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,&local_50);
          if (iVar4 != -1) {
            uVar8 = (uint)lVar9 & 0xffff | iVar4 << 0x10;
            break;
          }
          lVar9 = lVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      uVar6 = uVar8 & 0xffff0000;
      uVar8 = uVar8 & 0xffff;
    }
  }
  uVar3 = _UNK_04102888;
  uVar2 = _DAT_04102880;
  uVar1 = _DAT_04102200;
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = _UNK_04102208;
    *param_2 = uVar1;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
    uVar1 = _DAT_041023d0;
    param_2[5] = _UNK_041023d8;
    param_2[4] = uVar1;
  }
  if ((uVar8 != 0xffff) && (uVar6 != 0xffff0000)) {
    plVar5 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                       (-(ulong)(uVar8 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar8 << 3));
    (**(code **)(*plVar5 + 0x70))(plVar5,param_2,(int)uVar6 >> 0x10);
  }
  return;
}

