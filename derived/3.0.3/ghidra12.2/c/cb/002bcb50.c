
void FUN_002bcb50(undefined8 param_1,long param_2,undefined8 *param_3,long param_4,long param_5,
                 uint param_6)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 local_80;
  ErrorResultVariant aEStack_7c [12];
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_54;
  
  puVar5 = &local_80;
  if ((((param_3 == (undefined8 *)0x0) || (param_4 == 0)) || (param_6 == 0)) || (param_5 == 0)) {
    local_70 = 0x10c07;
  }
  else if (*(long *)(param_2 + 0x58) == 0) {
    local_70 = 0x10c08;
  }
  else {
    lVar1 = FUN_002aaa28(param_2);
    if ((lVar1 != 0) && (*(int *)(*(long *)(param_2 + 0x58) + 0x10) != 0)) {
      lVar6 = *(long *)(*(long *)(param_2 + 0x58) + 8);
      lVar1 = lVar6 + 0x10;
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar1;
      }
      if (param_6 < *(uint *)(lVar7 + 0x5a0)) {
        local_70 = 0x10c04;
        goto LAB_002bcbe8;
      }
      do {
        plVar2 = (long *)FUN_002aaa64(param_2);
        uVar3 = (**(code **)(*plVar2 + 0x68))(plVar2,*(undefined8 *)(lVar1 + 0x5a8));
        if ((uVar3 & 1) != 0) {
          FUN_002bcd24(&local_70,lVar1,param_4,param_5,param_6);
          *param_3 = *(undefined8 *)(lVar1 + 0x5a8);
          FUN_002bc7cc(*(undefined8 *)(param_2 + 0x58),lVar1);
          if (DAT_04c60320 != 0) {
            uVar4 = FUN_002290b0(DAT_04c60320,2);
            FUN_0022910c(uVar4,*(undefined4 *)(*(long *)(param_2 + 0x58) + 0x10));
          }
          local_80 = 0;
          local_54 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&local_54);
          goto LAB_002bcc04;
        }
        lVar7 = *(long *)(param_2 + 0x58);
        lVar6 = lVar1 + -0x10;
        lVar8 = *(long *)(lVar1 + -8);
        lVar1 = lVar8 + 0x10;
        FUN_00223704(lVar7,lVar6);
        FUN_002236e0(lVar7 + 0x18,lVar7 + 0x18,lVar6 + *(int *)(lVar7 + 0x2c));
      } while (lVar8 != lVar7);
    }
    local_70 = 0x2c09;
  }
LAB_002bcbe8:
  local_80 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_80);
  puVar5 = &local_70;
LAB_002bcc04:
  FUN_002296c4(param_1,puVar5);
  return;
}

