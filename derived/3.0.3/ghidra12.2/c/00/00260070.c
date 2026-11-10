
undefined8 FUN_00260070(long *param_1)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  int *piVar9;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bcd350;
  uVar5 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
  uVar6 = FUN_00284080(uVar5,*(undefined4 *)((long)param_1 + 100));
  puVar4 = PTR_LAB_04bcd980;
  if ((uVar6 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 100) = 0;
    param_1[6] = (long)puVar4;
    param_1[7] = 0;
    param_1[8] = (long)"ConnectStationJob::WaitForConnection";
    return 0;
  }
  piVar9 = (int *)param_1[0xd];
  if (piVar9 == (int *)0x0) {
    if ((ulong)param_1[0xb] <= *(ulong *)(DAT_04c5fbb0 + 0x30)) goto LAB_00260224;
  }
  else {
    if ((char)piVar9[10] != '\0') {
      if (2 < *piVar9 - 2U) {
        FUN_00221064(piVar9);
      }
      uVar5 = *(undefined8 *)puVar3;
      param_1[0xd] = 0;
      uVar5 = FUN_0026c894(uVar5);
      FUN_002840f0(uVar5,*(undefined4 *)((long)param_1 + 100));
      lVar8 = param_1[0xe];
      *(undefined4 *)((long)param_1 + 100) = 0;
      if (lVar8 == 0) {
        return 1;
      }
      iVar1 = *(int *)(lVar8 + 0x4c);
      goto joined_r0x0026039c;
    }
    if ((ulong)param_1[0xb] <= *(ulong *)(DAT_04c5fbb0 + 0x30)) {
      if (2 < *piVar9 - 2U) {
        local_24 = 0;
        local_44 = 0x6c0e;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
        FUN_002296c4(&local_34,&local_44);
        FUN_00220ff8(piVar9,&local_34);
      }
      param_1[0xd] = 0;
      goto LAB_00260224;
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((uVar6 & 1) != 0) {
LAB_00260224:
    uVar5 = FUN_0026c894(*(undefined8 *)puVar3);
    FUN_002840f0(uVar5,*(undefined4 *)((long)param_1 + 100));
    puVar3 = PTR_FUN_04bcd978;
    *(undefined4 *)((long)param_1 + 100) = 0;
    param_1[6] = (long)puVar3;
    param_1[7] = 0;
    param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
    return 0;
  }
  if (*(int *)(param_1[0xe] + 0x4c) == 5) {
    uVar5 = FUN_0026c894(*(undefined8 *)puVar3);
    FUN_002840f0(uVar5,*(undefined4 *)((long)param_1 + 100));
    puVar3 = PTR_FUN_04bcd988;
    *(undefined4 *)((long)param_1 + 100) = 0;
    param_1[6] = (long)puVar3;
    param_1[7] = 0;
    param_1[8] = (long)"ConnectStationJob::ConnectionSucceeded";
    return 0;
  }
  cVar2 = (char)param_1[0xf];
  if (cVar2 == '\0') {
    return 5;
  }
  piVar9 = (int *)param_1[0xd];
  if (piVar9 != (int *)0x0) {
    if (2 < *piVar9 - 2U) {
      if (cVar2 == '\x03') {
        local_44 = 0;
        local_34 = 0x646f;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
        FUN_002296c4(auStack_64,&local_34);
        puVar7 = auStack_64;
      }
      else if (cVar2 == '\x02') {
        local_44 = 0;
        local_34 = 0x6470;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
        FUN_002296c4(auStack_74,&local_34);
        puVar7 = auStack_74;
      }
      else if (cVar2 == '\x01') {
        local_44 = 0;
        local_34 = 0xc25;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
        FUN_002296c4(auStack_54,&local_34);
        puVar7 = auStack_54;
      }
      else {
        local_44 = 0;
        local_34 = 0xc24;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
        FUN_002296c4(auStack_84,&local_34);
        puVar7 = auStack_84;
      }
      FUN_00220ff8(piVar9,puVar7);
    }
    param_1[0xd] = 0;
  }
  uVar5 = FUN_0026c894(*(undefined8 *)puVar3);
  FUN_002840f0(uVar5,*(undefined4 *)((long)param_1 + 100));
  lVar8 = param_1[0xe];
  *(undefined4 *)((long)param_1 + 100) = 0;
  if (lVar8 == 0) {
    return 1;
  }
  iVar1 = *(int *)(lVar8 + 0x4c);
joined_r0x0026039c:
  if (iVar1 == 4) {
    *(undefined4 *)(lVar8 + 0x4c) = 7;
    return 1;
  }
  return 1;
}

