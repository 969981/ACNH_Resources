
void FUN_002dcb64(undefined8 param_1,long param_2,int *param_3,undefined4 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 uStack_60;
  int local_54 [4];
  undefined4 local_44;
  
  piVar5 = (int *)&local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  local_54[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)local_54);
  FUN_002296c4(local_54,&local_80);
  if (param_3 == (int *)0x0) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x10c07);
LAB_002dcbe4:
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_44);
    FUN_00229780(local_54,&local_80);
joined_r0x002dcbf8:
    if ((local_54[0] != 0) && (*(long *)(DAT_04c60f48 + 8) != 0)) {
      FUN_002e9860(*(long *)(DAT_04c60f48 + 8),param_4);
    }
    piVar5 = local_54;
    *(undefined4 *)(param_2 + 0x138) = param_4;
  }
  else {
    if (*param_3 == 1) {
      uVar6 = 0x10c07;
    }
    else {
      if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
        *(int **)(param_2 + 0x2c0) = param_3;
        uVar7 = *(undefined8 *)(param_2 + 0x58);
        local_78[0] = 0;
        puVar1 = PTR_DAT_04bc0ec8 + 0x10;
        local_68 = local_78;
        uStack_60 = 0x10;
        local_80 = puVar1;
        FUN_0018b070(&local_80,&DAT_0407ebb1,0xffffffffffffffff);
        uVar3 = FUN_003197fc(uVar7,param_2 + 0x140,param_4,&local_80);
        local_80 = puVar1;
        FUN_0018b1a0(&local_80);
        lVar2 = DAT_04c5fbb0;
        if ((uVar3 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x2c0) = 0;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac5a);
          goto LAB_002dcbe4;
        }
        plVar4 = (long *)FUN_00228380();
        *(long *)(param_2 + 0x2d8) = *(long *)(lVar2 + 0x30) + *plVar4 * 10000;
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        goto joined_r0x002dcbf8;
      }
      uVar6 = 0x10c08;
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_44);
  }
  FUN_002296c4(param_1,piVar5);
  return;
}

