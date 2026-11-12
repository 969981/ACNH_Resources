
void FUN_006bc9fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = PTR_DAT_04bb1f68;
  if (((*PTR_DAT_04bb1f70 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb1f70), iVar4 != 0))
  {
    *(undefined8 *)(puVar2 + 0x10) = 0x100000000;
    *(undefined8 *)puVar2 = 0x100000000;
    *(undefined8 *)(puVar2 + 8) = 0x300000002;
    *(undefined4 *)(puVar2 + 0x18) = 2;
    __cxa_guard_release(PTR_DAT_04bb1f70);
  }
  puVar3 = PTR_DAT_04bb1f78;
  if (((*PTR_DAT_04bb1f80 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb1f80), iVar4 != 0))
  {
    *(undefined8 *)puVar3 = 0;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined4 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined4 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined4 *)(puVar3 + 0x48) = 0;
    *(undefined8 *)(puVar3 + 0x50) = 0;
    *(undefined4 *)(puVar3 + 0x58) = 0;
    *(undefined8 *)(puVar3 + 0x60) = 0;
    *(undefined4 *)(puVar3 + 0x68) = 0;
    __cxa_guard_release(PTR_DAT_04bb1f80);
  }
  local_40 = puVar3;
  puStack_38 = puVar3 + 0x70;
  FUN_00691080(&local_40,
               "kFlowchart = 0, kClipEnter = 1, kClipLeave = 2, kOneshot = 3, kNormal = 0, kEnter = 1, kLeave = 2"
               ,0x61);
  puVar1 = PTR_DAT_04bb1ec8;
  *(char **)PTR_DAT_04bb1ec8 = "TriggerType";
  *(undefined4 *)(puVar1 + 8) = 0xb;
  *(undefined **)(puVar1 + 0x10) = puVar3;
  *(undefined **)(puVar1 + 0x18) = puVar3 + 0x70;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  *(undefined **)(puVar1 + 0x28) = puVar2 + 0x1c;
  return;
}

