
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_016ff8c0(long param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 < 0x14) {
    uVar5 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x14a8);
    uVar1 = uVar5 & 0xffff;
    if (0xfffeffff < uVar5 || uVar1 == 0xffff) {
      lVar6 = *(long *)(param_1 + 0x1150);
      if (lVar6 == 0) goto LAB_016ff980;
      uStack_68 = (&PTR_DAT_048fd540)[param_2];
      local_70 = PTR_DAT_04bb2020 + 0x10;
      if (*(int *)(lVar6 + 0x30) == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        lVar10 = *(long *)(lVar6 + 0x38);
        lVar9 = 0;
        lVar6 = (long)*(int *)(lVar6 + 0x30) << 3;
        uVar5 = 0xffffffff;
        do {
          plVar4 = (long *)**(undefined8 **)(lVar10 + lVar9 * 8);
          iVar3 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_70);
          if (iVar3 != -1) {
            uVar5 = (uint)lVar9 & 0xffff | iVar3 << 0x10;
            break;
          }
          lVar9 = lVar9 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      uVar1 = uVar5 & 0xffff;
    }
    uVar5 = uVar5 & 0xffff0000;
  }
  else {
LAB_016ff980:
    uVar5 = 0xffff0000;
    uVar1 = 0xffff;
  }
  bVar8 = false;
  if (param_3 != (undefined8 *)0x0) {
    bVar8 = false;
    uVar2 = uVar5 | uVar1;
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    if (((~uVar2 & 0xffff) != 0) && (((ulong)uVar2 & 0xffff0000) != 0xffff0000)) {
      bVar8 = uVar1 != 0xffff && uVar5 != 0xffff0000;
      uStack_68 = (undefined *)_UNK_04102208;
      local_70 = _DAT_04102200;
      uStack_58 = _UNK_04102888;
      uStack_60 = _DAT_04102880;
      uStack_48 = _UNK_041023d8;
      local_50 = _DAT_041023d0;
      if (uVar1 == 0xffff || uVar5 == 0xffff0000) {
        uStack_68._4_4_ = 0;
        uStack_58._4_4_ = 0;
        puVar7 = (undefined4 *)(PTR_DAT_04bb2150 + 8);
      }
      else {
        plVar4 = (long *)**(undefined8 **)
                           (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                           (-((ulong)(uVar2 >> 0xf) & 1) & 0xfffffffffff80000 |
                           ((ulong)uVar2 & 0xffff) << 3));
        (**(code **)(*plVar4 + 0x70))(plVar4,&local_70,(int)uVar5 >> 0x10);
        puVar7 = (undefined4 *)((long)&uStack_48 + 4);
      }
      *(undefined4 *)param_3 = uStack_68._4_4_;
      *(undefined4 *)((long)param_3 + 4) = uStack_58._4_4_;
      *(undefined4 *)(param_3 + 1) = *puVar7;
    }
  }
  return bVar8;
}

