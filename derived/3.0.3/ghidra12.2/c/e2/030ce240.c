
/* WARNING: Removing unreachable block (ram,0x030ce284) */

void FUN_030ce240(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined *local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bc0cb8;
  lVar4 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0xb0) + 0xb08);
  if (lVar4 != 0) {
    plVar5 = *(long **)(param_1 + 0x378);
    if (plVar5 != (long *)0x0) {
      puVar1 = PTR_DAT_04bc0cb8 + 0x10;
      local_58 = 0x1f;
      lVar2 = param_1 + 0x3c0;
      local_60 = puVar1;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x210))(lVar2,plVar5[1],0,0);
      FUN_03b137d0(lVar2,lVar4,0);
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      local_58 = 0x1f;
      local_60 = puVar1;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x208))(plVar5[1],0,0,lVar2);
    }
    plVar5 = *(long **)(param_1 + 0x380);
    if (plVar5 != (long *)0x0) {
      local_58 = 0x1f;
      lVar2 = param_1 + 0x3e0;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x210))(lVar2,plVar5[1],0,0);
      FUN_03b137d0(lVar2,lVar4,0);
      *(undefined4 *)(param_1 + 0x3f8) = 0;
      local_58 = 0x1f;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x208))(plVar5[1],0,0,lVar2);
    }
    plVar5 = *(long **)(param_1 + 0x388);
    if (plVar5 != (long *)0x0) {
      local_58 = 0x1f;
      lVar2 = param_1 + 0x400;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x210))(lVar2,plVar5[1],0,0);
      FUN_03b137d0(lVar2,lVar4,0);
      *(undefined4 *)(param_1 + 0x418) = 0;
      local_58 = 0x1f;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x208))(plVar5[1],0,0,lVar2);
    }
    plVar5 = *(long **)(param_1 + 0x390);
    if (plVar5 != (long *)0x0) {
      local_58 = 0x1f;
      lVar2 = param_1 + 0x420;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x210))(lVar2,plVar5[1],0,0);
      FUN_03b137d0(lVar2,lVar4,0);
      *(undefined4 *)(param_1 + 0x438) = 0;
      local_58 = 0x1f;
      local_60 = puVar3 + 0x10;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
      (**(code **)(plVar5[3] + 0x208))(plVar5[1],0,0,lVar2);
    }
  }
  return;
}

