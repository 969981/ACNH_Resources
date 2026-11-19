
void FUN_03b2cce4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bbd510;
  lVar4 = *(long *)(param_1 + 0xf8);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x570) == 0)) {
    FUN_039499cc(DAT_05ae90c0,*(undefined8 *)(param_1 + 0x118));
  }
  else {
    if ((*(byte *)(lVar4 + 0x7b8) & 1) == 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    }
    *(undefined8 *)(lVar4 + 0x570) = 0;
    lVar5 = *(long *)puVar1;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar3 == 0) {
      iVar2 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar2 = (int)lVar3 + -1;
    }
    *(byte *)(lVar4 + 0x7b8) =
         *(byte *)(lVar4 + 0x7b8) & 0xfe | *(byte *)(lVar5 + (long)iVar2 * 0x290 + 0x298) & 1;
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  return;
}

