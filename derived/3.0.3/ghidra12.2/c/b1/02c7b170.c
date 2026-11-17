
void FUN_02c7b170(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *local_40;
  undefined4 local_38;
  
  plVar3 = (long *)0x0;
  switch(param_3) {
  case 4:
    iVar1 = *(int *)(param_1 + 0x1b8);
    uVar7 = 0xbf800000;
    if (iVar1 == 0xb) {
      uVar6 = 2;
    }
    else {
      if (iVar1 != 8) {
        if (iVar1 == 2) {
          puVar5 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
          if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
            *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4e60);
          }
          uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
          if ((uVar2 & 1) == 0) {
            puVar5 = (undefined8 *)0x0;
          }
          plVar4 = *(long **)puVar5[0x45];
          plVar3 = (long *)0x0;
          if (plVar4 != (long *)0x0) {
            local_40 = PTR_DAT_04bc4e68 + 0x10;
            local_38 = 6;
            (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
            (**(code **)(plVar4[3] + 0x1b8))(plVar4[1]);
            plVar3 = (long *)0x0;
          }
          goto switchD_02c7b1b0_caseD_5;
        }
LAB_02c7b2c8:
        plVar3 = (long *)0x0;
        goto switchD_02c7b1b0_caseD_5;
      }
      uVar6 = 0;
    }
    break;
  default:
    goto switchD_02c7b1b0_caseD_5;
  case 6:
    iVar1 = *(int *)(param_1 + 0x1b8);
    uVar7 = 0x3f800000;
    uVar6 = 0;
    if ((iVar1 != 2) && (iVar1 != 5)) {
      if (iVar1 != 0xd) goto LAB_02c7b2c8;
      uVar6 = 3;
    }
    break;
  case 9:
    if (*(int *)(param_1 + 0x1b8) == 5) {
      uVar6 = 2;
      uVar7 = 0x3f800000;
    }
    else {
      if (*(int *)(param_1 + 0x1b8) != 8) goto LAB_02c7b2c8;
      uVar6 = 3;
      uVar7 = 0xbf800000;
    }
    break;
  case 0xe:
    uVar7 = 0x3f800000;
    if (param_2 == 5) {
      uVar6 = 4;
    }
    else {
      if (param_2 != 8) goto LAB_02c7b2c8;
      uVar6 = 1;
    }
  }
  puVar5 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  if (*(uint *)(puVar5 + 0x44) <= uVar6) {
    uVar6 = 0;
  }
  plVar3 = *(long **)(puVar5[0x45] + (ulong)uVar6 * 8);
  if (plVar3 != (long *)0x0) {
    local_38 = 0;
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x188))(uVar7,plVar3[1],0);
  }
switchD_02c7b1b0_caseD_5:
  *(long **)(param_1 + 0x1c670) = plVar3;
  return;
}

