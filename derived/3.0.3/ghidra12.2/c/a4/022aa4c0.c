
undefined8 FUN_022aa4c0(undefined8 param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  undefined8 *local_78;
  int local_70;
  int iStack_6c;
  short local_68 [4];
  
  if (((DAT_0547a4a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0547a4a8), iVar6 != 0)) {
    DAT_0547a4a0 = 0;
    __cxa_guard_release(&DAT_0547a4a8);
  }
  if (((DAT_0547a4b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0547a4b8), iVar6 != 0)) {
    DAT_0547a4b0 = 0;
    __cxa_guard_release(&DAT_0547a4b8);
  }
  iVar6 = 0;
  iVar8 = 0;
  do {
    uVar4 = (param_3 - param_5) + 0xc + iVar8 + (iVar6 + param_4) * 6;
    if (uVar4 < 0x24) {
      uVar7 = (ulong)(uVar4 >> 5);
      uVar3 = 1 << (ulong)(uVar4 & 0x1f);
      uVar2 = *(uint *)((long)&DAT_0547a4b0 + uVar7 * 4);
      if ((uVar2 & uVar3) == 0) {
        *(uint *)((long)&DAT_0547a4b0 + uVar7 * 4) = uVar2 | uVar3;
        goto LAB_022aa580;
      }
      if ((*(uint *)((long)&DAT_0547a4a0 + uVar7 * 4) & uVar3) == 0) {
        return 0;
      }
    }
    else {
LAB_022aa580:
      local_78 = &DAT_048f9750;
      local_70 = *(int *)(param_2 + 8) + iVar8;
      iStack_6c = *(int *)(param_2 + 0xc) + iVar6;
      uVar7 = FUN_01a4f798(param_1,0,&local_78);
      if (((uVar7 & 1) == 0) || (FUN_01a50240(local_68,param_1,0,&local_78), local_68[0] != -2)) {
        return 0;
      }
      if (uVar4 < 0x24) {
        lVar5 = (ulong)(uVar4 >> 5) * 4;
        *(uint *)((long)&DAT_0547a4a0 + lVar5) =
             *(uint *)((long)&DAT_0547a4a0 + lVar5) | 1 << (ulong)(uVar4 & 0x1f);
      }
    }
    if (0 < iVar8) {
      iVar6 = iVar6 + 1;
    }
    iVar1 = 0;
    if (iVar8 < 1) {
      iVar1 = iVar8 + 1;
    }
    iVar8 = iVar1;
    if ((iVar1 == 0) && (iVar6 == 2)) {
      return 1;
    }
  } while( true );
}

