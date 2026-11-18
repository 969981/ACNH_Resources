
void FUN_0340f550(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *local_40;
  char *pcStack_38;
  
  lVar2 = *param_2;
  *(long *)(param_1 + 8) = lVar2;
  *(long *)(param_1 + 0x28) = param_2[1];
  if (lVar2 != 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "L_MsgCard_00";
    puVar3 = (undefined8 *)FUN_0386e6b0(lVar2,&local_40);
    if (((*PTR_DAT_04bc57f0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc57f0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc57e8 = PTR_DAT_04bc4d08 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc57f0);
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uVar4 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc57e8);
      if ((uVar4 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
    }
    *(undefined8 **)(param_1 + 0x10) = puVar3;
  }
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x2ffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  FUN_0340e844(param_1 + 0x30,param_2[2]);
  return;
}

