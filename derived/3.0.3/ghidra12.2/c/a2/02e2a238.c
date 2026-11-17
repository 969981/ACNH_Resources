
int FUN_02e2a238(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined4 local_38;
  
  plVar6 = (long *)(param_1 + 0x210) + *(uint *)(param_1 + 0x324);
  if (0x20 < *(uint *)(param_1 + 0x324)) {
    plVar6 = (long *)(param_1 + 0x210);
  }
  if (*plVar6 != 0) {
    puVar5 = (undefined8 *)**(undefined8 **)(*plVar6 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((((puVar5 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) &&
        (puVar5[0x36] != 0)) &&
       ((plVar6 = *(long **)(puVar5[0x36] + 0x20), plVar6 != (long *)0x0 && (plVar6[1] != 0)))) {
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 3;
      local_40 = puVar1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
      uVar3 = (**(code **)(plVar6[3] + 0x50))(plVar6[1]);
      if ((uVar3 & 1) != 0) {
        local_38 = 0x13;
        local_40 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
        fVar7 = (float)(**(code **)(plVar6[3] + 0x150))(plVar6[1]);
        local_38 = 8;
        local_40 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
        fVar8 = (float)(**(code **)(plVar6[3] + 0xa0))(plVar6[1]);
        fVar7 = (fVar8 + 1.0) / fVar7;
        uVar4 = 0;
        if (fVar7 != (float)(int)fVar7) {
          uVar4 = (uint)(0.0 <= fVar7);
        }
        return uVar4 + (int)fVar7;
      }
    }
  }
  return 0;
}

