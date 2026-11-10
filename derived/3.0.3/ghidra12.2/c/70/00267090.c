
undefined8 FUN_00267090(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  ErrorResultVariant aEStack_40 [12];
  int local_34 [4];
  undefined4 local_24;
  
  lVar7 = *(long *)PTR_DAT_04bcd350;
  bVar1 = FUN_0026bfe0(lVar7);
  if (bVar1 < 0x20) {
    FUN_0026bc0c(local_34,lVar7);
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    if ((local_34[0] != 0x6c50) || (*(char *)(param_1 + 0x198) != '\0')) {
      if (*(uint *)(param_1 + 0x158) < 4) {
        uVar4 = *(undefined4 *)(&DAT_041021b0 + (long)(int)*(uint *)(param_1 + 0x158) * 4);
      }
      else {
        uVar4 = 5;
      }
      uVar3 = FUN_00267c64(*(undefined8 *)(lVar7 + 0x10),param_1 + 0x160,uVar4);
      if ((uVar3 & 1) == 0) {
        uVar3 = FUN_00267c2c(*(undefined8 *)(lVar7 + 0x10),param_1 + 0x160);
        if ((uVar3 & 1) == 0) {
          return 5;
        }
      }
      else {
        FUN_002211bc(*(undefined8 *)(lVar7 + 0x10),0);
      }
      uVar2 = 5;
      pcVar5 = "KickoutManageJob::ClientWaitLeaveMesh";
      puVar6 = PTR_LAB_04bcda70;
      goto LAB_0026718c;
    }
  }
  uVar2 = 0;
  pcVar5 = "KickoutManageJob::ClientFinalize";
  puVar6 = PTR_FUN_04bcda68;
LAB_0026718c:
  *(undefined **)(param_1 + 0x30) = puVar6;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar2;
}

