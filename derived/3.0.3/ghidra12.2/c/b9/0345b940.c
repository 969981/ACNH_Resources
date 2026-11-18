
void FUN_0345b940(long param_1,long param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined *local_60;
  long local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_38;
  
  local_50 = 0;
  local_48 = 0;
  local_60 = PTR_DAT_04bc8e10 + 0x10;
  local_58 = -1;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x208) < 1) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)**(undefined8 **)(param_2 + 0x210);
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90), (uVar2 & 1) != 0)) {
      if (*(uint *)(puVar4 + 0x59) <= param_3) {
        param_3 = 0;
      }
      plVar3 = *(long **)(puVar4[0x5a] + (long)(int)param_3 * 8);
      if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
        local_40 = PTR_DAT_04bc0cb8 + 0x10;
        local_38 = 0x1f;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
        (**(code **)(plVar3[3] + 0x210))(&local_60,plVar3[1],0,0);
      }
    }
  }
  if (local_58 != -1) {
    *(long *)(param_1 + 0x1bf40) = local_58;
    *(undefined4 *)(param_1 + 0x1bf50) = local_48;
    *(undefined4 *)(param_1 + 0x1bf48) = local_50;
  }
  return;
}

