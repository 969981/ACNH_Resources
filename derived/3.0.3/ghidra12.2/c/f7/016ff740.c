
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_016ff740(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *local_50;
  undefined *puStack_48;
  
  if (param_2 < 0x14) {
    uVar8 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x14a8);
    uVar1 = uVar8 & 0xffff;
    if (0xfffeffff < uVar8 || uVar1 == 0xffff) {
      lVar9 = *(long *)(param_1 + 0x1150);
      if (lVar9 == 0) goto LAB_016ff800;
      puStack_48 = (&PTR_DAT_048fd540)[param_2];
      local_50 = PTR_DAT_04bb2020 + 0x10;
      if (*(int *)(lVar9 + 0x30) == 0) {
        uVar8 = 0xffffffff;
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x38);
        lVar11 = 0;
        lVar9 = (long)*(int *)(lVar9 + 0x30) << 3;
        uVar8 = 0xffffffff;
        do {
          plVar7 = (long *)**(undefined8 **)(lVar12 + lVar11 * 8);
          iVar6 = (**(code **)(*plVar7 + 0x38))(plVar7,&local_50);
          if (iVar6 != -1) {
            uVar8 = (uint)lVar11 & 0xffff | iVar6 << 0x10;
            break;
          }
          lVar11 = lVar11 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      uVar1 = uVar8 & 0xffff;
    }
    uVar10 = (ulong)uVar1;
    uVar8 = uVar8 & 0xffff0000;
    uVar2 = _UNK_04102888;
    uVar3 = _DAT_04102880;
    uVar4 = _DAT_04102200;
  }
  else {
LAB_016ff800:
    uVar8 = 0xffff0000;
    uVar10 = 0xffff;
    uVar2 = _UNK_04102888;
    uVar3 = _DAT_04102880;
    uVar4 = _DAT_04102200;
  }
  _DAT_04102200 = uVar4;
  _DAT_04102880 = uVar3;
  _UNK_04102888 = uVar2;
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = _UNK_04102208;
    *param_3 = uVar4;
    param_3[3] = uVar2;
    param_3[2] = uVar3;
    uVar2 = _DAT_041023d0;
    param_3[5] = _UNK_041023d8;
    param_3[4] = uVar2;
  }
  bVar5 = (int)uVar10 != 0xffff;
  if (bVar5 && uVar8 != 0xffff0000) {
    plVar7 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                       (-(uVar10 >> 0xf) & 0xfffffffffff80000 | uVar10 << 3));
    (**(code **)(*plVar7 + 0x70))(plVar7,param_3,(int)uVar8 >> 0x10);
  }
  return bVar5 && uVar8 != 0xffff0000;
}

