
void FUN_0345b620(int *param_1,uint param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined *local_60;
  undefined4 local_58;
  
  puVar1 = PTR_DAT_04bc4d98;
  if (*param_1 != 2) {
    uVar2 = param_1[1];
    puVar8 = (undefined8 *)0x0;
    if ((-1 < (int)uVar2) &&
       (uVar3 = *(uint *)(**(long **)(param_1 + 4) + 0x208),
       (int)uVar2 < (int)uVar3 && uVar2 < uVar3)) {
      puVar8 = *(undefined8 **)(*(long *)(**(long **)(param_1 + 4) + 0x210) + (ulong)uVar2 * 8);
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    puVar4 = PTR_DAT_04bc4d90;
    if ((puVar8 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4d90), (uVar6 & 1) != 0)) {
      uVar2 = param_2;
      if (*(uint *)(puVar8 + 0x5d) <= param_2) {
        uVar2 = 0;
      }
      plVar9 = *(long **)(puVar8[0x5e] + (long)(int)uVar2 * 8);
      if (plVar9 != (long *)0x0) {
        if (*param_1 == 1) {
          uVar2 = param_1[2];
          puVar8 = (undefined8 *)0x0;
          if (-1 < (int)uVar2) {
            uVar3 = *(uint *)(**(long **)(param_1 + 4) + 0x208);
            if (((int)uVar2 < (int)uVar3) && (uVar2 < uVar3)) {
              puVar8 = *(undefined8 **)
                        (*(long *)(**(long **)(param_1 + 4) + 0x210) + (ulong)uVar2 * 8);
            }
          }
          if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar5 != 0)) {
            *(undefined **)puVar4 = PTR_DAT_04bc4da0 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4d98);
          }
          if ((puVar8 != (undefined8 *)0x0) &&
             (uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc4d90), (uVar6 & 1) != 0)) {
            if (*(uint *)(puVar8 + 0x5d) <= param_2) {
              param_2 = 0;
            }
            plVar7 = *(long **)(puVar8[0x5e] + (long)(int)param_2 * 8);
            if (plVar7 != (long *)0x0) {
              puVar1 = PTR_DAT_04bc4f00 + 0x10;
              local_58 = 7;
              local_60 = puVar1;
              (**(code **)(*plVar7 + 0x20))(plVar7,&local_60);
              uVar10 = (**(code **)(plVar7[3] + 0x90))(plVar7[1]);
              local_58 = 0x14;
              local_60 = puVar1;
              (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
              (**(code **)(plVar9[3] + 0x158))(uVar10,plVar9[1]);
            }
          }
        }
        else if (*param_1 == 0) {
          local_60 = PTR_DAT_04bc4e68 + 0x10;
          local_58 = 8;
          (**(code **)(*plVar9 + 0x18))(plVar9,&local_60);
          (**(code **)(plVar9[3] + 0x1c8))(plVar9[1]);
        }
      }
    }
  }
  return;
}

