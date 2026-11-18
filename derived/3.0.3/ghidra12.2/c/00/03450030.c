
void FUN_03450030(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_40;
  undefined4 local_38;
  
  if (param_1 != 0) {
    puVar7 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar7 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
      uVar5 = *(uint *)(puVar7 + 0x44);
      lVar4 = puVar7[0x45];
      lVar1 = 0x18;
      if (uVar5 < 4) {
        lVar1 = 0;
      }
      plVar8 = *(long **)(lVar4 + lVar1);
      if (plVar8 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
        (**(code **)(plVar8[3] + 0x158))(0x3f800000,plVar8[1]);
        uVar5 = *(uint *)(puVar7 + 0x44);
        lVar4 = puVar7[0x45];
      }
      uVar6 = 4;
      if ((param_2 & 1) == 0) {
        uVar6 = 5;
      }
      if (uVar5 <= uVar6) {
        uVar6 = 0;
      }
      plVar8 = *(long **)(lVar4 + (long)(int)uVar6 * 8);
      if (plVar8 != (long *)0x0) {
        local_40 = PTR_DAT_04bc4e68 + 0x10;
        local_38 = 7;
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_40);
        (**(code **)(plVar8[3] + 0x1c0))(plVar8[1]);
      }
    }
  }
  return;
}

