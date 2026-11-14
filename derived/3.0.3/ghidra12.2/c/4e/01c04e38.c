
void FUN_01c04e38(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 2) {
      plVar2 = *(long **)(lVar4 + 0x228);
    }
    else if (iVar1 == 1) {
      plVar2 = *(long **)(lVar4 + 0x220);
    }
    else {
      if (iVar1 != 0) goto LAB_01c04f0c;
      plVar2 = *(long **)(lVar4 + 0x218);
    }
    if (((plVar2 != (long *)0x0) && (lVar4 = (**(code **)(*plVar2 + 0x228))(), lVar4 != 0)) &&
       (plVar2 = *(long **)(lVar4 + 0x48), plVar2[1] != 0)) {
      local_40 = PTR_DAT_04bc0878 + 0x10;
      local_38 = 9;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar4);
    }
  }
LAB_01c04f0c:
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
    puVar6 = (undefined8 *)
             **(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x218) + 0x308) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
    if ((uVar3 & 1) == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    lVar4 = *(long *)(puVar6[0x43] + (ulong)(1 < *(uint *)(puVar6 + 0x42)) * 8);
    if ((lVar4 != 0) && (plVar2 = *(long **)(lVar4 + 0x48), plVar2[1] != 0)) {
      local_40 = PTR_DAT_04bc0878 + 0x10;
      local_38 = 9;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(lVar4);
    }
  }
  lVar4 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x10) + 0x38))((long *)(lVar4 + 0x10));
  *(undefined8 *)(lVar4 + 0x170) = 0;
  *(undefined4 *)(lVar4 + 0x17c) = 0;
  *(undefined4 *)(lVar4 + 0x188) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 400) + 0x38))(lVar4 + 400);
  *(undefined8 *)(lVar4 + 0x2f0) = 0;
  *(undefined4 *)(lVar4 + 0x2fc) = 0;
  *(undefined4 *)(lVar4 + 0x308) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x310) + 0x38))(lVar4 + 0x310);
  *(undefined8 *)(lVar4 + 0x470) = 0;
  *(undefined4 *)(lVar4 + 0x47c) = 0;
  *(undefined4 *)(lVar4 + 0x488) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x490) + 0x38))(lVar4 + 0x490);
  *(undefined8 *)(lVar4 + 0x5f0) = 0;
  *(undefined4 *)(lVar4 + 0x5fc) = 0;
  *(undefined4 *)(lVar4 + 0x608) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x610) + 0x38))(lVar4 + 0x610);
  *(undefined8 *)(lVar4 + 0x770) = 0;
  *(undefined4 *)(lVar4 + 0x77c) = 0;
  *(undefined4 *)(lVar4 + 0x788) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x790) + 0x38))(lVar4 + 0x790);
  *(undefined8 *)(lVar4 + 0x8f0) = 0;
  *(undefined4 *)(lVar4 + 0x8fc) = 0;
  *(undefined4 *)(lVar4 + 0x908) = 0xffffffff;
  (**(code **)(*(long *)(lVar4 + 0x910) + 0x38))(lVar4 + 0x910);
  *(undefined8 *)(lVar4 + 0xa70) = 0;
  *(undefined4 *)(lVar4 + 0xa7c) = 0;
  *(undefined8 *)(lVar4 + 0xa88) = 0xffffffff00000000;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  if (((*(long *)(lVar5 + 0x578) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x578) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x580) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x580) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x588) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x588) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x590) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x590) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x598) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x598) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x5a0) != 0) &&
      (lVar7 = **(long **)(*(long *)(lVar5 + 0x5a0) + 0x2e0), lVar7 != 0)) &&
     (plVar2 = *(long **)(lVar7 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar7);
    lVar5 = *(long *)(*(long *)(*(long *)(lVar4 + 0x22e0) + 0x230) + 0x210);
  }
  if (((*(long *)(lVar5 + 0x5a8) != 0) &&
      (lVar4 = **(long **)(*(long *)(lVar5 + 0x5a8) + 0x2e0), lVar4 != 0)) &&
     (plVar2 = *(long **)(lVar4 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar4);
  }
  return;
}

