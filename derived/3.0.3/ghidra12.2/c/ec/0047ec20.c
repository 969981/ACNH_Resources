
undefined8 * FUN_0047ec20(char *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long local_c0 [18];
  
  iVar1 = FUN_0043a690(param_1,0x3a,0,0x7fffffff);
  iVar2 = FUN_0043a660(param_1,0x3a);
  if (iVar1 == iVar2) {
    FUN_004225d0(local_c0,param_1);
    FUN_004236e0(local_c0,iVar1 + 1);
    FUN_00423a80(local_c0);
    uVar3 = FUN_00422c50(local_c0,&DAT_0406f8dc);
    FUN_00422550(local_c0);
    if (((uVar3 & 1) == 0) &&
       (iVar1 = nn::fs::OpenFile((FileHandle *)local_c0,param_1,1), iVar1 == 0)) {
      puVar4 = (undefined8 *)FUN_00438810(0x38);
      FUN_0046fbb0();
      puVar4[5] = 0;
      *puVar4 = &PTR_LAB_04865730;
      *(bool *)(puVar4 + 4) = local_c0[0] != 0;
      if (local_c0[0] == 0) {
        return puVar4;
      }
      puVar4[3] = local_c0[0];
      iVar1 = nn::fs::GetFileSize(puVar4 + 6);
      if (iVar1 == 0) {
        return puVar4;
      }
      *(undefined1 *)(puVar4 + 4) = 0;
      return puVar4;
    }
  }
  return (undefined8 *)0x0;
}

