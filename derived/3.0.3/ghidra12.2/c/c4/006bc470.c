
void _INIT_1060(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((*PTR_DAT_04bb1ef0 & 1) == 0) {
    *PTR_DAT_04bb1ef0 = 1;
    puVar1 = PTR_DAT_04bb1ee8;
    *(undefined8 *)PTR_DAT_04bb1ee8 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar2 = PTR_DAT_04bb1f98;
    if (((*PTR_DAT_04bb1fa0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb1fa0), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      *(undefined4 *)(puVar2 + 0x28) = 0;
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *(undefined8 *)(puVar2 + 0x40) = 0;
      *(undefined4 *)(puVar2 + 0x48) = 0;
      __cxa_guard_release(PTR_DAT_04bb1fa0);
    }
    local_40 = puVar2;
    puStack_38 = puVar2 + 0x50;
    FUN_00691080(&local_40,"kAction, kSwitch, kFork, kJoin, kSubFlow",0x28);
    *(char **)puVar1 = "EventType";
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined **)(puVar1 + 0x18) = puVar2 + 0x50;
    *(undefined4 *)(puVar1 + 8) = 9;
  }
  return;
}

