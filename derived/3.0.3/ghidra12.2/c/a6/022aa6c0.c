
undefined8 FUN_022aa6c0(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  short local_68 [4];
  
  if (((DAT_0547a4d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0547a4d0), iVar7 != 0)) {
    DAT_0547a4c8 = 0;
    DAT_0547a4c0 = 0;
    __cxa_guard_release(&DAT_0547a4d0);
  }
  if (((DAT_0547a4e8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_0547a4e8), iVar7 != 0)) {
    DAT_0547a4e0 = 0;
    DAT_0547a4d8 = 0;
    __cxa_guard_release(&DAT_0547a4e8);
  }
  iVar7 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = 0;
  do {
    uVar5 = param_3 + 0x18 + iVar9 + (iVar7 + param_4) * 10;
    if (uVar5 < 0x50) {
      uVar8 = (ulong)(uVar5 >> 5);
      uVar4 = 1 << (ulong)(uVar5 & 0x1f);
      uVar3 = *(uint *)((long)&DAT_0547a4d8 + uVar8 * 4);
      if ((uVar3 & uVar4) == 0) {
        *(uint *)((long)&DAT_0547a4d8 + uVar8 * 4) = uVar3 | uVar4;
        goto LAB_022aa77c;
      }
      if ((*(uint *)((long)&DAT_0547a4c0 + uVar8 * 4) & uVar4) == 0) {
        return 0;
      }
    }
    else {
LAB_022aa77c:
      local_70 = *(int *)(param_2 + 8) + iVar9;
      iStack_6c = *(int *)(param_2 + 0xc) + iVar7;
      local_78 = puVar1;
      uVar8 = FUN_01a4f798(param_1,0,&local_78);
      if (((uVar8 & 1) == 0) || (FUN_01a50240(local_68,param_1,0,&local_78), local_68[0] != -2)) {
        return 0;
      }
      if (uVar5 < 0x50) {
        lVar6 = (ulong)(uVar5 >> 5) * 4;
        *(uint *)((long)&DAT_0547a4c0 + lVar6) =
             *(uint *)((long)&DAT_0547a4c0 + lVar6) | 1 << (ulong)(uVar5 & 0x1f);
      }
    }
    if (0 < iVar9) {
      iVar7 = iVar7 + 1;
    }
    iVar2 = 0;
    if (iVar9 < 1) {
      iVar2 = iVar9 + 1;
    }
    iVar9 = iVar2;
    if ((iVar2 == 0) && (iVar7 == 2)) {
      return 1;
    }
  } while( true );
}

