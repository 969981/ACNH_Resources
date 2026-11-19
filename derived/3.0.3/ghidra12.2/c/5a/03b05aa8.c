
void FUN_03b05aa8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb3508;
  lVar4 = *(long *)(*(long *)PTR_DAT_04bbd8f8 + 0x18);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar3 == 0) {
    iVar2 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar2 = (int)lVar3 + -1;
  }
  if (iVar2 < *(int *)(lVar4 + 0x1c0)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x1c8) + (long)iVar2 * 0x7d8 + 0x7a8) = 0xffffffffffffffff;
  }
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar3 == 0) {
    iVar2 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar2 = (int)lVar3 + -1;
  }
  if (iVar2 < *(int *)(lVar4 + 0x1c0)) {
    *(undefined8 *)(*(long *)(lVar4 + 0x1c8) + (long)iVar2 * 0x7d8 + 0x7b0) = 0xffffffffffffffff;
  }
  return;
}

