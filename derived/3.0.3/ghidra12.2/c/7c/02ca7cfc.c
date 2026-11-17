
void FUN_02ca7cfc(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  float fVar6;
  undefined *local_40;
  undefined4 local_38;
  int local_24;
  
  puVar4 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  plVar5 = *(long **)puVar4[0x45];
  if (plVar5 == (long *)0x0) {
    return;
  }
  local_24 = 0;
  switch(param_2) {
  case 0x36:
    local_24 = 1;
    break;
  case 0x37:
    local_24 = 2;
    break;
  case 0x38:
    local_24 = 3;
    break;
  case 0x39:
    local_24 = 4;
    break;
  case 0x3a:
    local_24 = 5;
  }
  puVar1 = PTR_DAT_04bc4f00 + 0x10;
  local_38 = 9;
  local_40 = puVar1;
  (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  fVar6 = (float)(**(code **)(plVar5[3] + 0xb0))(plVar5[1]);
  if ((float)local_24 <= fVar6) {
    local_38 = 0x14;
    local_40 = puVar1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
    (**(code **)(plVar5[3] + 0x158))((float)local_24,plVar5[1]);
  }
  return;
}

