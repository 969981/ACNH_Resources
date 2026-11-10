
uint FUN_002939fc(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 auStack_50 [16];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  puVar4 = auStack_50;
  uVar3 = FUN_00293b28();
  if ((uVar3 & 1) == 0) {
    if (*(char *)((long)param_1 + 0x11c) == '\0') {
      *(undefined2 *)((long)param_1 + 0x11a) = 0;
      lVar6 = DAT_04c60f48;
      *(undefined2 *)((long)param_1 + 0x11d) = 0;
      (**(code **)(**(long **)(lVar6 + 8) + 0x20))
                (&local_40,*(long **)(lVar6 + 8),
                 *(undefined8 *)(lVar6 + (ulong)*(byte *)(lVar6 + 0x162) * 8 + 0x168));
      puVar1 = PTR_LAB_04bcded0;
      if (local_40 == 0) {
        *(undefined1 *)(lVar6 + 0x15d) = 1;
        param_1[6] = (long)puVar1;
        param_1[7] = 0;
        pcVar8 = "JoinSessionJob::JoinMesh";
        goto LAB_00293a34;
      }
      FUN_002296c4(auStack_50,&local_40);
      lVar6 = *param_1;
    }
    else {
      local_14 = 0;
      local_40 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      lVar6 = *param_1;
      puVar4 = auStack_30;
    }
    uVar2 = (**(code **)(lVar6 + 0x78))(param_1,puVar4);
    uVar5 = uVar2 & 0xffffff00;
    uVar7 = uVar2 & 0xffff0000;
  }
  else {
    param_1[6] = (long)PTR_FUN_04bcd398;
    param_1[7] = 0;
    pcVar8 = "JoinSessionJob::ProcessFailure";
LAB_00293a34:
    uVar5 = 0;
    uVar7 = 0;
    uVar2 = 0;
    param_1[8] = (long)pcVar8;
  }
  return uVar5 & 0xff00 | uVar2 & 0xff | uVar7;
}

