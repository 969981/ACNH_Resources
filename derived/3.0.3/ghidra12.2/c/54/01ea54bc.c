
void FUN_01ea54bc(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  pbVar1 = (byte *)(param_1 + 0x101d);
  (**(code **)(*param_1 + 0x108))();
  uVar2 = *(uint *)(param_1[1] + 0x508);
  if ((uVar2 < 10) && ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    lVar3 = (ulong)uVar2 * 0xba0;
    *(undefined8 *)(&DAT_053fee10 + lVar3) = 0;
    *(undefined8 *)(&DAT_053fee08 + lVar3) = 0;
    *(undefined8 *)(&DAT_053fee00 + lVar3) = 0;
  }
  *pbVar1 = *pbVar1 & 0xfd;
  FUN_03f45838(param_1 + 0x101f);
  if (param_1[0x101e] != 0) {
    *pbVar1 = *pbVar1 & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,param_1[0x101e],0);
    param_1[0x101e] = 0;
  }
  *(undefined1 *)(param_1 + 0x1023) = 0;
  FUN_03ebae78(param_1 + 0xef5);
  return;
}

