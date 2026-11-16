
undefined4 FUN_026ce284(undefined8 param_1,int *param_2)

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
  FUN_006b7c70(auStack_28,aSStack_58);
  local_30 = '\0';
  FUN_006bb32c(auStack_28,aSStack_58);
  nn::os::WaitSystemEvent(aSStack_58);
  iVar1 = FUN_006bb398(auStack_28);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (local_30 != '\0') {
    nn::os::DestroySystemEvent(aSStack_58);
  }
  uVar3 = 1;
  if (iVar1 != 0) {
    uVar3 = 2;
  }
  FUN_006bb314(auStack_28);
  return uVar3;
}

