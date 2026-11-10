
undefined8 FUN_0028034c(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar2 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
  if (0x1f < (uVar2 & 0xff)) {
    return 1;
  }
  local_40 = 0x200000000000;
  local_38 = 0;
  (**(code **)(*param_1 + 0x28))(param_1,&local_40);
  lVar3 = FUN_0026c88c(*(undefined8 *)puVar1);
  local_40 = 0x200000000000;
  local_38 = 0;
  FUN_002826a8(lVar3,&local_40);
  FUN_00282010(&local_40,lVar3,param_1[0xd],
               (uint)*(ushort *)(param_1 + 0xb) * (uint)*(ushort *)(param_1 + 0xb),(int)param_1[0xf]
               ,(long)param_1 + 0x7c,uVar2,param_1[0x10]);
  if ((int)local_40 != 0) {
    return 1;
  }
  local_4c = 0x200000000000;
  local_44 = 0;
  *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)((long)param_1 + 0x5c);
  *(int *)(lVar3 + 0x34) = (int)param_1[0xc];
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_002826a8(lVar3,&local_4c);
  FUN_0026c420(*(undefined8 *)puVar1);
  uVar4 = FUN_00272f10();
  puVar1 = PTR_FUN_04bcdc28;
  if ((uVar4 & 1) == 0) {
    param_1[8] = (long)"RelayRouteManageJob::WaitAllDirectConnectionReport";
    param_1[6] = (long)puVar1;
    param_1[7] = 0;
    return 5;
  }
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  return 1;
}

