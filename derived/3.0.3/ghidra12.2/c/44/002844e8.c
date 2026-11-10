
void FUN_002844e8(undefined8 param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  Result *pRVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_34;
  
  lVar4 = DAT_04c603c8;
  if (((DAT_04c603c8 == 0) || (uVar2 = FUN_0026c070(DAT_04c603c8), (uVar2 & 1) != 0)) ||
     (plVar3 = (long *)FUN_002aaa54(param_2), plVar3 == (long *)0x0)) {
    local_58 = 0;
    local_48 = CONCAT44(local_48._4_4_,0x10c08);
    pRVar5 = (Result *)&local_58;
LAB_00284650:
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),pRVar5);
  }
  else {
    local_48 = 0;
    FUN_002282f0(&local_48);
    uVar2 = local_48;
    local_50 = 0;
    local_48 = local_48 & 0xffffffff00000000;
    local_68._0_4_ = 0;
    local_51 = (undefined1)uVar2;
    local_58 = CONCAT13((char)(uVar2 >> 0x20),
                        CONCAT12((char)(uVar2 >> 0x28),
                                 CONCAT11((char)(uVar2 >> 0x30),(char)(uVar2 >> 0x38))));
    local_54 = (undefined1)(uVar2 >> 0x18);
    local_53 = (undefined1)(uVar2 >> 0x10);
    local_52 = (undefined1)(uVar2 >> 8);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_68);
    FUN_002296c4(&local_68,&local_48);
    uVar1 = FUN_0026be6c(lVar4);
    if ((uVar1 & 0xff) == 0xfd) {
LAB_00284674:
      pRVar5 = (Result *)&local_68;
      local_48 = local_48 & 0xffffffff00000000;
      local_68._0_4_ = 0;
      goto LAB_00284650;
    }
    local_48 = local_48 & 0xffffff0000000000;
    local_68._0_4_ = (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_68,uVar1,0x10,&local_48);
    if (lVar4 == 0) goto LAB_00284674;
    FUN_002a9f34(&local_48,plVar3,&local_58);
    if ((int)local_48 == 0) {
      local_68._0_4_ = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_34);
      puVar6 = &local_68;
      goto LAB_00284658;
    }
  }
  puVar6 = &local_48;
LAB_00284658:
  FUN_002296c4(param_1,puVar6);
  return;
}

