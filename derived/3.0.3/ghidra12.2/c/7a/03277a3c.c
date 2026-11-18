
/* WARNING: Removing unreachable block (ram,0x03277b58) */

void FUN_03277a3c(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x218) = param_2;
  plVar3 = (long *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x230);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x218) == 2) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
      (**(code **)(plVar3[3] + 0x158))(0x3f800000,plVar3[1]);
      local_30 = PTR_DAT_04bc4e68 + 0x10;
      local_28 = 9;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
      (**(code **)(plVar3[3] + 0x1d0))(plVar3[1]);
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0xd);
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
      if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc73c8);
      }
      if ((puVar4 != (undefined8 *)0x0) &&
         (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
        puVar4 = (undefined8 *)**(long **)(puVar4[0x42] + 0x3f8);
        if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc4e60);
        }
        uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
        if ((uVar2 & 1) == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        plVar3 = *(long **)puVar4[0x41];
        if (plVar3 != (long *)0x0) {
          local_30 = PTR_DAT_04bc0878 + 0x10;
          local_28 = 0x15;
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
          (**(code **)(plVar3[3] + 0x640))(plVar3[1]);
        }
      }
    }
    else if (*(int *)(param_1 + 0x218) == 1) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
      (**(code **)(plVar3[3] + 0x158))(0,plVar3[1]);
    }
  }
  return;
}

