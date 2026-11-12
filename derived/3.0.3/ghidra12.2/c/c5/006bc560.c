
void _INIT_1061(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  undefined *puStack_38;
  
  if ((*PTR_DAT_04bb1f00 & 1) == 0) {
    *PTR_DAT_04bb1f00 = 1;
    puVar1 = PTR_DAT_04bb1ef8;
    *(undefined8 *)PTR_DAT_04bb1ef8 = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    puVar2 = PTR_DAT_04bb1fa8;
    if (((*PTR_DAT_04bb1fb0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb1fb0), iVar3 != 0)) {
      *(undefined8 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined4 *)(puVar2 + 0x18) = 0;
      __cxa_guard_release(PTR_DAT_04bb1fb0);
    }
    local_40 = puVar2;
    puStack_38 = puVar2 + 0x20;
    FUN_00691080(&local_40,"kEnter, kLeave",0xe);
    *(char **)puVar1 = "SubFlowCallbackType";
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined **)(puVar1 + 0x18) = puVar2 + 0x20;
    *(undefined4 *)(puVar1 + 8) = 0x13;
  }
  return;
}

