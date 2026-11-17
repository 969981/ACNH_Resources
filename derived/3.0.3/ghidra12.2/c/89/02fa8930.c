
void FUN_02fa8930(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float local_6c [2];
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_58;
  
  if (*(long *)PTR_DAT_04bb2200 == 0) {
    return;
  }
  uVar5 = FUN_01664334(*(long *)PTR_DAT_04bb2200,local_6c,param_2,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  fVar8 = local_6c[0] - *(float *)(param_1 + 0x240);
  fVar9 = -fVar8;
  if (0.0 <= fVar8) {
    fVar9 = fVar8;
  }
  if (11.0 < fVar9) {
    if (0.0 <= local_6c[0]) {
      if (local_6c[0] <= 0.0) goto LAB_02fa8bcc;
      local_64 = 1;
      *(undefined4 *)(param_1 + 0x248) = 1;
      puVar3 = PTR_DAT_04bc4e60;
      puVar6 = (undefined8 *)**(long **)(*(long *)(*(long *)(param_1 + 0x218) + 0x308) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      puVar2 = PTR_DAT_04bc4e58;
      uVar10 = 0x3f800000;
      uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
      puVar1 = PTR_DAT_04bc4f00;
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      plVar7 = *(long **)puVar6[0x45];
      if (plVar7 != (long *)0x0) {
        local_60 = PTR_DAT_04bc4f00 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x158))(0x3f800000,plVar7[1]);
      }
      puVar6 = (undefined8 *)**(long **)(*(long *)(*(long *)(param_1 + 0x230) + 0x210) + 0x3f8);
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      plVar7 = *(long **)puVar6[0x45];
    }
    else {
      local_64 = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
      puVar3 = PTR_DAT_04bc4e60;
      puVar6 = (undefined8 *)**(long **)(*(long *)(*(long *)(param_1 + 0x218) + 0x308) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      puVar1 = PTR_DAT_04bc4e58;
      uVar10 = 0;
      uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      plVar7 = *(long **)puVar6[0x45];
      if (plVar7 != (long *)0x0) {
        local_60 = PTR_DAT_04bc4f00 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
        (**(code **)(plVar7[3] + 0x158))(0,plVar7[1]);
      }
      puVar6 = (undefined8 *)**(long **)(*(long *)(*(long *)(param_1 + 0x230) + 0x210) + 0x3f8);
      if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
        *(undefined **)puVar1 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
      if ((uVar5 & 1) == 0) {
        puVar6 = (undefined8 *)0x0;
      }
      plVar7 = *(long **)puVar6[0x45];
      puVar1 = PTR_DAT_04bc4f00;
    }
    if (plVar7 != (long *)0x0) {
      local_60 = puVar1 + 0x10;
      local_58 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
      (**(code **)(plVar7[3] + 0x158))(uVar10,plVar7[1]);
    }
    FUN_02fa4ef0(uVar10,*(undefined8 *)(param_1 + 0x238));
  }
LAB_02fa8bcc:
  *(float *)(param_1 + 0x240) = local_6c[0];
  return;
}

