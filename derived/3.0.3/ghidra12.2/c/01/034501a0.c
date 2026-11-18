
void FUN_034501a0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_40;
  undefined4 local_38;
  
  if (param_1 != 0) {
    puVar7 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), puVar2 = PTR_DAT_04bc4e68,
       (uVar4 & 1) != 0)) {
      uVar6 = *(uint *)(puVar7 + 0x44);
      lVar5 = puVar7[0x45];
      plVar8 = *(long **)(lVar5 + (ulong)(4 < uVar6) * 0x20);
      if ((param_2 & 1) == 0) {
        if (plVar8 != (long *)0x0) {
          local_40 = PTR_DAT_04bc4e68 + 0x10;
          local_38 = 7;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
          (**(code **)(plVar8[3] + 0x1c0))(plVar8[1]);
          uVar6 = *(uint *)(puVar7 + 0x44);
          lVar5 = puVar7[0x45];
        }
        lVar1 = 0x28;
        if (uVar6 < 6) {
          lVar1 = 0;
        }
        plVar8 = *(long **)(lVar5 + lVar1);
        if (plVar8 != (long *)0x0) {
          local_40 = puVar2 + 0x10;
          local_38 = 1;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
          (**(code **)(plVar8[3] + 400))(0x3f800000,plVar8[1]);
        }
      }
      else {
        if (plVar8 != (long *)0x0) {
          local_40 = PTR_DAT_04bc4e68 + 0x10;
          local_38 = 1;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
          (**(code **)(plVar8[3] + 400))(0x3f800000,plVar8[1]);
          uVar6 = *(uint *)(puVar7 + 0x44);
          lVar5 = puVar7[0x45];
        }
        lVar1 = 0x28;
        if (uVar6 < 6) {
          lVar1 = 0;
        }
        plVar8 = *(long **)(lVar5 + lVar1);
        if (plVar8 != (long *)0x0) {
          local_40 = PTR_DAT_04bc4e68 + 0x10;
          local_38 = 7;
          (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
          (**(code **)(plVar8[3] + 0x1c0))(plVar8[1]);
        }
      }
    }
  }
  return;
}

