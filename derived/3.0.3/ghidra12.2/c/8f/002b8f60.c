
void FUN_002b8f60(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar2 = FUN_002a4940();
  if ((uVar2 & 1) == 0) {
    local_44 = 0x10c0c;
LAB_002b8fc8:
    local_54 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  }
  else {
    uVar2 = FUN_002a4950();
    if ((uVar2 & 1) == 0) {
      local_44 = 0x10c08;
      goto LAB_002b8fc8;
    }
    if (DAT_04c61168 != 0) {
      local_44 = 0x10c0f;
      goto LAB_002b8fc8;
    }
    if (*(int *)(param_2 + 0x10) < 0) {
      local_44 = 0x10c07;
      goto LAB_002b8fc8;
    }
    uVar3 = FUN_0021f454();
    lVar4 = FUN_00285d60(0xf8,uVar3,8);
    if (lVar4 == 0) {
      local_44 = 0x10c01;
      DAT_04c61170 = 0;
      goto LAB_002b8fc8;
    }
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar4 + lVar6) = 0;
      puVar1 = PTR_DAT_04bce180;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0xf8);
    *(long *)PTR_DAT_04bce180 = lVar4;
    FUN_002b8e88(lVar4);
    DAT_04c61168 = lVar4;
    FUN_002b90dc(&local_44,lVar4,param_2);
    if (local_44 == 0) {
      local_54 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      piVar5 = &local_54;
      goto LAB_002b8fe0;
    }
    FUN_002b8f50(DAT_04c61168);
    lVar4 = *(long *)puVar1;
    DAT_04c61168 = 0;
    if (lVar4 != 0) {
      FUN_00285e00(lVar4);
      FUN_00285dc0(lVar4);
    }
    *(undefined8 *)puVar1 = 0;
  }
  piVar5 = &local_44;
LAB_002b8fe0:
  FUN_002296c4(param_1,piVar5);
  return;
}

