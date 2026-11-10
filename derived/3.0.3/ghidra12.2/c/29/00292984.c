
uint FUN_00292984(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  uVar3 = FUN_00292a8c();
  lVar1 = DAT_04c60f48;
  if ((uVar3 & 1) == 0) {
    (**(code **)(**(long **)(DAT_04c60f48 + 8) + 0x20))
              (local_30,*(long **)(DAT_04c60f48 + 8),
               *(undefined8 *)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168));
    if (local_30[0] != 0) {
      FUN_002296c4(auStack_40,local_30);
      uVar2 = (**(code **)(*param_1 + 0x48))(param_1,auStack_40);
      uVar5 = uVar2 & 0xffffff00;
      uVar6 = uVar2 & 0xffff0000;
      goto LAB_00292a6c;
    }
    *(undefined1 *)(lVar1 + 0x15d) = 1;
    uVar4 = FUN_0026c89c(DAT_04c603c8);
    FUN_00261144(uVar4,*(undefined2 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 2 + 0x15e));
    param_1[6] = (long)PTR_LAB_04bcde68;
    param_1[7] = 0;
    pcVar7 = "CreateSessionJob::CreateMesh";
  }
  else {
    param_1[6] = (long)PTR_FUN_04bcd358;
    param_1[7] = 0;
    pcVar7 = "CreateSessionJob::ProcessFailure";
  }
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = 0;
  param_1[8] = (long)pcVar7;
LAB_00292a6c:
  return uVar5 & 0xff00 | uVar2 & 0xff | uVar6;
}

