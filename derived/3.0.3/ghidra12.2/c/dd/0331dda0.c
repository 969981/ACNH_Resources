
/* WARNING: Removing unreachable block (ram,0x0331ddd4) */

void FUN_0331dda0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int local_6c;
  undefined *local_68;
  undefined ***local_60;
  undefined **local_58;
  long lStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  local_34 = 0;
  plVar3 = *(long **)(param_1 + 0x2e0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x20,8);
  puVar1 = PTR_DAT_04bc8ea0;
  plVar3[2] = 0;
  *(undefined1 *)(plVar3 + 3) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = 0;
  plVar4 = *(long **)(param_1 + 0x5c0);
  *(long **)(param_1 + 0x5c0) = plVar3;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    plVar3 = *(long **)(param_1 + 0x5c0);
  }
  local_58 = &PTR_LAB_04b1e998;
  uVar5 = *(undefined8 *)(param_1 + 0x398);
  local_48 = FUN_0331deb0;
  uStack_40 = 0;
  local_60 = &local_58;
  local_68 = PTR_DAT_04bc8ec8 + 0x10;
  lStack_50 = param_1;
  iVar2 = FUN_032862c0(1);
  local_6c = 0;
  if (iVar2 != -1) {
    local_6c = iVar2;
  }
  FUN_03285bcc(plVar3,(undefined8 *)(param_1 + 0x2e0),param_1 + 0x3a0,uVar5,&local_68,&local_6c);
  if (local_60 != (undefined ***)0x0) {
    (*(code *)(*local_60)[1])();
  }
  return;
}

