
/* WARNING: Type propagation algorithm not settling */

void FUN_02e2e514(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar9 = (undefined8 *)(param_1 + 0x210);
  if ((param_2 & 1) == 0) {
    uVar7 = *(uint *)(param_1 + 800);
    puVar1 = puVar9 + uVar7;
    if (0x20 < uVar7) {
      puVar1 = puVar9;
    }
    plVar8 = (long *)*puVar1;
    FUN_02e2eee0(plVar8,(ulong)uVar7,*(undefined4 *)(param_1 + 0x328));
    puVar9 = *(undefined8 **)plVar8[0x7f];
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
    if ((uVar5 & 1) == 0) {
      puVar9 = (undefined8 *)0x0;
    }
    if (puVar9[0x36] != 0) {
      *(undefined4 *)(puVar9[0x36] + 0x40) = *(undefined4 *)(param_1 + 0x32c);
    }
    uVar7 = *(uint *)(param_1 + 800);
    if (uVar7 == 5) {
      FUN_02e2f0dc(plVar8,0);
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 6) {
      FUN_02e2f0dc(plVar8,0);
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 7) {
      FUN_02e2f0dc(plVar8,0);
      (**(code **)(*plVar8 + 0x278))(plVar8,2);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x13) {
      FUN_02e2f0dc(plVar8,1);
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x14) {
      FUN_02e2f0dc(plVar8,1);
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if ((uVar7 & 0xfffffffe) == 2) {
      FUN_02e2f23c(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 - 9 < 2) {
      FUN_02e2f23c(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    puVar3 = PTR_DAT_04bb27f8;
    if (uVar7 == 0xc) {
      if (*(long *)PTR_DAT_04bb27f8 == 0) {
LAB_02e2e920:
        uVar6 = 0;
      }
      else {
        if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
          if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_02e2e920;
        }
        else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2e920;
        uVar6 = 1;
      }
      FUN_02e2f3a8(plVar8,uVar6);
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0xd) {
      if (*(long *)puVar3 == 0) {
LAB_02e2ea00:
        uVar6 = 0;
      }
      else {
        if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
          if (*(int *)(*(long *)puVar3 + 0x10) != 2) goto LAB_02e2ea00;
        }
        else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2ea00;
        uVar6 = 1;
      }
      FUN_02e2f3a8(plVar8,uVar6);
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if ((uVar7 & 0xfffffffe) == 0xe) {
      if (*(long *)puVar3 == 0) {
LAB_02e2eb70:
        uVar6 = 0;
      }
      else {
        if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
          if (*(int *)(*(long *)puVar3 + 0x10) != 2) goto LAB_02e2eb70;
        }
        else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2eb70;
        uVar6 = 1;
      }
      FUN_02e2f3a8(plVar8,uVar6);
      (**(code **)(*plVar8 + 0x278))(plVar8,2);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x10) {
      if (*(long *)puVar3 == 0) {
LAB_02e2ec1c:
        uVar6 = 0;
        uVar10 = 3;
      }
      else {
        if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
          if (*(int *)(*(long *)puVar3 + 0x10) != 2) goto LAB_02e2ec1c;
        }
        else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2ec1c;
        uVar10 = 4;
        uVar6 = 1;
      }
      FUN_02e2f3a8(plVar8,uVar6);
      (**(code **)(*plVar8 + 0x278))(plVar8,uVar10);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x11) {
      FUN_02e2f514(plVar8,0);
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x12) {
      FUN_02e2f514(plVar8,0);
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x15) {
      FUN_02e2f514(plVar8,1);
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x16) {
      FUN_02e2f514(plVar8,1);
      (**(code **)(*plVar8 + 0x278))(plVar8,1);
      uVar7 = *(uint *)(param_1 + 800);
    }
    if (uVar7 == 0x17) {
      (**(code **)(*plVar8 + 0x278))(plVar8,0);
      uVar7 = *(uint *)(param_1 + 800);
    }
    goto LAB_02e2ed90;
  }
  uVar7 = *(uint *)(param_1 + 0x324);
  puVar1 = puVar9 + uVar7;
  if (0x20 < uVar7) {
    puVar1 = puVar9;
  }
  plVar8 = (long *)*puVar1;
  FUN_02e2eee0(plVar8,(ulong)uVar7,*(undefined4 *)(param_1 + 0x328));
  puVar9 = *(undefined8 **)plVar8[0x7f];
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4e58);
  if ((uVar5 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if (puVar9[0x36] != 0) {
    *(undefined4 *)(puVar9[0x36] + 0x40) = *(undefined4 *)(param_1 + 0x330);
  }
  uVar7 = *(uint *)(param_1 + 0x324);
  if (uVar7 == 5) {
    FUN_02e2f0dc(plVar8,0);
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 6) {
    FUN_02e2f0dc(plVar8,0);
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 7) {
    FUN_02e2f0dc(plVar8,0);
    (**(code **)(*plVar8 + 0x278))(plVar8,2);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x13) {
    FUN_02e2f0dc(plVar8,1);
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x14) {
    FUN_02e2f0dc(plVar8,1);
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if ((uVar7 & 0xfffffffe) == 2) {
    FUN_02e2f23c(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 - 9 < 2) {
    FUN_02e2f23c(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0xc) {
    if (*(long *)PTR_DAT_04bb27f8 == 0) {
LAB_02e2e98c:
      uVar6 = 0;
    }
    else {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_02e2e98c;
      }
      else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2e98c;
      uVar6 = 1;
    }
    FUN_02e2f3a8(plVar8,uVar6);
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0xd) {
    if (*(long *)PTR_DAT_04bb27f8 == 0) {
LAB_02e2eab0:
      uVar6 = 0;
    }
    else {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_02e2eab0;
      }
      else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2eab0;
      uVar6 = 1;
    }
    FUN_02e2f3a8(plVar8,uVar6);
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if ((uVar7 & 0xfffffffe) == 0xe) {
    if (*(long *)PTR_DAT_04bb27f8 == 0) {
LAB_02e2ecdc:
      uVar6 = 0;
    }
    else {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_02e2ecdc;
      }
      else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2ecdc;
      uVar6 = 1;
    }
    FUN_02e2f3a8(plVar8,uVar6);
    (**(code **)(*plVar8 + 0x278))(plVar8,2);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x10) {
    if (*(long *)PTR_DAT_04bb27f8 == 0) {
LAB_02e2edd4:
      uVar6 = 0;
      uVar10 = 3;
    }
    else {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar2 = **(ushort **)PTR_DAT_04bc3a48, (uVar2 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_02e2edd4;
      }
      else if (((uVar2 ^ 0xffff) & 5) != 0) goto LAB_02e2edd4;
      uVar10 = 4;
      uVar6 = 1;
    }
    FUN_02e2f3a8(plVar8,uVar6);
    (**(code **)(*plVar8 + 0x278))(plVar8,uVar10);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x11) {
    FUN_02e2f514(plVar8,0);
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x12) {
    FUN_02e2f514(plVar8,0);
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x15) {
    FUN_02e2f514(plVar8,1);
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x16) {
    FUN_02e2f514(plVar8,1);
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
  if (uVar7 == 0x17) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    uVar7 = *(uint *)(param_1 + 0x324);
  }
LAB_02e2ed90:
  if (uVar7 == 0x18) {
                    /* WARNING: Could not recover jumptable at 0x02e2edb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar8 + 0x278))(plVar8,1);
    return;
  }
  return;
}

