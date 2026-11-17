
void FUN_02c497a0(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
                 uint param_5,undefined8 *param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined *local_40;
  undefined4 local_38;
  
  if ((int)param_5 < (int)*(uint *)(param_4 + 0x2a8)) {
    if (((param_5 < *(uint *)(param_4 + 0x2a8)) &&
        (lVar1 = *(long *)(*(long *)(param_4 + 0x2b0) + (long)(int)param_5 * 8), lVar1 != 0)) &&
       (plVar6 = (long *)**(undefined8 **)(lVar1 + 0x2d0), plVar6 != (long *)0x0)) {
      local_40 = PTR_DAT_04bc0cb8 + 0x10;
      local_38 = 0x29;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x2b0))(param_6,plVar6[1]);
      uVar2 = (ulong)*(uint *)(param_4 + 0x2b8);
      if (0 < (int)*(uint *)(param_4 + 0x2b8)) {
        puVar3 = *(undefined8 **)(param_4 + 0x2c0);
        iVar4 = 0;
        do {
          piVar5 = (int *)*puVar3;
          if ((int)param_5 < *piVar5 + iVar4) {
            if ((param_5 - iVar4 & 0x80000001) == 1) {
              param_2 = 0x42480000;
              *(float *)(param_6 + 1) = *(float *)(param_6 + 1) + 50.0;
            }
            break;
          }
          uVar2 = uVar2 - 1;
          puVar3 = puVar3 + 1;
          iVar4 = *piVar5 + iVar4;
        } while (uVar2 != 0);
      }
    }
    local_40 = (undefined *)*param_6;
    local_38 = *(undefined4 *)(param_6 + 1);
    uVar7 = FUN_01669984(&local_40,2);
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)((long)param_6 + 4) = param_2;
    *(undefined4 *)(param_6 + 1) = param_3;
  }
  return;
}

