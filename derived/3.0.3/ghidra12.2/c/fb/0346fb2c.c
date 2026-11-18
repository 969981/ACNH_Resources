
float FUN_0346fb2c(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined *local_40;
  undefined4 local_38;
  
  if (((*(long *)(param_1 + 0x210) == 0) ||
      (plVar3 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0),
      plVar3 == (long *)0x0)) || (uVar4 = (**(code **)(*plVar3 + 0x50))(), (uVar4 & 1) == 0)) {
    fVar7 = 0.0;
    if (((*(int *)(param_1 + 0x1f0) != -1) || (*(int *)(param_1 + 500) != -1)) ||
       (1 < *(uint *)(param_1 + 0x1b0))) {
      puVar6 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
      if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
      if (((puVar6 != (undefined8 *)0x0) &&
          (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), (uVar4 & 1) != 0)) &&
         (lVar5 = puVar6[0x36], lVar5 != 0)) {
        if (*(int *)(param_1 + 0x1b0) == 4) {
          plVar3 = *(long **)(lVar5 + 0x20);
          iVar1 = (**(code **)(*plVar3 + 0x80))(plVar3,0);
          iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,2);
          plVar3 = *(long **)(plVar3[0xd] + (long)(iVar1 + (int)plVar3[0xc] * iVar2) * 0x18);
          if (plVar3 != (long *)0x0) {
            local_40 = PTR_DAT_04bc4f00 + 0x10;
            local_38 = 10;
            (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
            fVar7 = (float)(**(code **)(plVar3[3] + 0xc0))(plVar3[1]);
            fVar7 = 1.0 - fVar7;
          }
        }
        else if (*(int *)(param_1 + 0x1b0) == 2) {
          plVar3 = *(long **)(lVar5 + 0x20);
          iVar1 = (**(code **)(*plVar3 + 0x80))(plVar3,1);
          iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,4);
          plVar3 = *(long **)(plVar3[0xd] + (long)(iVar1 + (int)plVar3[0xc] * iVar2) * 0x18);
          if (plVar3 != (long *)0x0) {
            local_40 = PTR_DAT_04bc4f00 + 0x10;
            local_38 = 10;
            (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
            fVar7 = (float)(**(code **)(plVar3[3] + 0xc0))(plVar3[1]);
          }
        }
      }
    }
  }
  else {
    fVar7 = 1.0;
  }
  return fVar7;
}

