
void FUN_02fe2fe0(undefined4 param_1,long param_2,uint param_3,long *param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined **local_70;
  undefined4 local_68;
  
  *(uint *)(param_2 + 0x550) = param_3;
  if (param_4 != (long *)0x0) {
    if (0x12 < param_3) {
      param_3 = 0;
    }
    iVar5 = (&DAT_04181754)[(int)param_3];
    local_70 = &PTR_LAB_04aa7fe0;
    local_68 = 0x14;
    (**(code **)(*param_4 + 0x18))(param_4,&local_70);
    (**(code **)(param_4[3] + 0x158))((float)iVar5,param_4[1]);
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    lVar3 = (long)*(int *)(param_2 + 0x98) << 3;
    puVar4 = *(undefined8 **)(param_2 + 0xa0);
    do {
      plVar2 = (long *)*puVar4;
      if (plVar2 != (long *)0x0) {
        local_70 = &PTR_LAB_04a3ee98;
        local_68 = 7;
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
        (**(code **)(plVar2[3] + 0x88))(plVar2[1],0);
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  uVar1 = (ulong)*(uint *)(param_2 + 0x550);
  if (0x12 < *(uint *)(param_2 + 0x550)) {
    uVar1 = 0;
  }
  plVar2 = *(long **)(param_2 + uVar1 * 8);
  (**(code **)(*plVar2 + 0x20))(plVar2,param_2 + 0x554);
  uVar1 = (ulong)*(uint *)(param_2 + 0x550);
  if (0x12 < *(uint *)(param_2 + 0x550)) {
    uVar1 = 0;
  }
  puVar4 = *(undefined8 **)(param_2 + uVar1 * 8);
  (**(code **)*puVar4)(param_1,puVar4,param_5);
  return;
}

