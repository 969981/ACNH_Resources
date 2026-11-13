
undefined8 FUN_00dc7c80(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  SystemEventType aSStack_58 [40];
  char local_30;
  undefined1 auStack_28 [8];
  
  lVar2 = *(long *)PTR_DAT_04bb4410;
  if (lVar2 != 0) {
    FUN_007b3b6c(lVar2,aSStack_58,*(undefined8 *)(lVar2 + 0x140),*(undefined8 *)(lVar2 + 0x148));
  }
  FUN_006b7a60(auStack_28,aSStack_58);
  local_30 = '\0';
  FUN_006bb32c(auStack_28,aSStack_58);
  nn::os::WaitSystemEvent(aSStack_58);
  iVar1 = FUN_006bb398(auStack_28);
  *(int *)(param_1 + 0x128) = iVar1;
  uVar3 = 1;
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  if (local_30 != '\0') {
    nn::os::DestroySystemEvent(aSStack_58);
  }
  FUN_006bb314(auStack_28);
  *(undefined1 *)(param_1 + 0x120) = 1;
  return 1;
}

