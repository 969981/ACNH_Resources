
void FUN_033dd428(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined *local_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)**(long **)(*(long *)(param_2 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  plVar5 = *(long **)puVar4[0x41];
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    local_38 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_40 = puVar1;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
    puVar4 = (undefined8 *)(**(code **)(plVar5[3] + 0xa0))(plVar5[1]);
    local_48 = *(undefined4 *)(puVar4 + 1);
    local_38 = 8;
    _local_50 = CONCAT44((int)((ulong)*puVar4 >> 0x20),param_1);
    local_40 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x98))(plVar5[1],&local_50);
  }
  return;
}

