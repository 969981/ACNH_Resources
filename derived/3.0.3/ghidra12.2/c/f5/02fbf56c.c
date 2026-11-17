
void FUN_02fbf56c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_3b = 0xff00;
  local_3c = 1;
  local_38 = 0xffffffff;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = PTR_DAT_04bc5768 + 0x10;
  puVar5 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
    if ((uVar3 & 1) == 0) {
      puVar5 = (undefined8 *)0x0;
    }
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "/L_MsgCard_00";
  local_58 = puVar1;
  local_30 = FUN_02bb2508(puVar5 + 7,&local_58);
  pcStack_50 = "MsgCardViewSeq";
  local_58 = puVar1;
  uVar4 = FUN_02c1b24c(*(undefined8 *)(param_1 + 0x98),&local_58,param_1,&local_48);
  *(undefined8 *)(param_1 + 0x218) = uVar4;
  return;
}

