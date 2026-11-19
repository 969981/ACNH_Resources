
void FUN_038e2374(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  nn::os::SetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),param_1);
  uVar3 = DAT_05ae7898;
  uVar1 = (*(uint *)(param_1 + 0x1a) >> 1 & 0x55555555) + (*(uint *)(param_1 + 0x1a) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0x7070707) + (uVar1 & 0x7070707);
  uVar1 = (uVar1 >> 8 & 0xf000f) + (uVar1 & 0xf000f);
  if ((uVar1 & 0x1f) + (uVar1 >> 0x10) < 2) {
    iVar2 = nn::os::GetCurrentCoreNumber();
    nn::os::SetTlsValue(uVar3,(long)(iVar2 + 1));
  }
  uVar3 = nn::os::GetThreadId((ThreadType *)param_1[0x1d]);
  *(undefined4 *)(param_1 + 0x19) = uVar3;
  *(undefined4 *)((long)param_1 + 0xcc) = 1;
  (**(code **)(*param_1 + 0x80))(param_1);
  *(undefined4 *)((long)param_1 + 0xcc) = 3;
  return;
}

