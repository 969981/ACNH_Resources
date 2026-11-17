
void FUN_02f8d674(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined *local_50;
  undefined4 local_48;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar5 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58), puVar2 = PTR_DAT_04bc4f00,
       (uVar4 & 1) != 0)) {
      plVar7 = *(long **)(puVar5[0x45] + (ulong)(1 < *(uint *)(puVar5 + 0x44)) * 8);
      if ((plVar7 != (long *)0x0) &&
         (plVar6 = *(long **)(puVar5[0x45] + (ulong)(2 < *(uint *)(puVar5 + 0x44)) * 0x10),
         plVar6 != (long *)0x0)) {
        local_48 = 3;
        puVar1 = PTR_DAT_04bc4f00 + 0x10;
        local_50 = puVar1;
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
        uVar4 = (**(code **)(plVar6[3] + 0x50))(plVar6[1]);
        if ((uVar4 & 1) == 0) {
          local_48 = 0xc;
          local_50 = puVar1;
          (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
          uVar4 = (**(code **)(plVar6[3] + 0xe0))(plVar6[1]);
          if ((uVar4 & 1) == 0) {
            puVar2 = puVar2 + 0x10;
            local_48 = 3;
            local_50 = puVar2;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_50);
            uVar4 = (**(code **)(plVar7[3] + 0x50))(plVar7[1]);
            fVar8 = 0.0;
            if ((uVar4 & 1) != 0) {
              local_48 = 9;
              local_50 = puVar2;
              (**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
              fVar8 = (float)(**(code **)(plVar6[3] + 0xb0))(plVar6[1]);
              local_48 = 7;
              local_50 = puVar2;
              (**(code **)(*plVar7 + 0x20))(plVar7,&local_50);
              fVar9 = (float)(**(code **)(plVar7[3] + 0x90))(plVar7[1]);
              fVar8 = fVar8 - fVar9;
              if (fVar8 < 0.0) {
                fVar8 = 0.0;
              }
            }
            local_48 = 0x14;
            local_50 = puVar2;
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_50);
            (**(code **)(plVar7[3] + 0x158))(0,plVar7[1]);
            local_48 = 3;
            local_50 = PTR_DAT_04bc4e68 + 0x10;
            (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
            (**(code **)(plVar6[3] + 0x1a0))(fVar8,0x3f800000,plVar6[1],0);
          }
        }
      }
    }
  }
  return;
}

