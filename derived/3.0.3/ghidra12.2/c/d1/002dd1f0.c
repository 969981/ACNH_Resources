
void FUN_002dd1f0(undefined8 param_1,long param_2,int *param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined8 uStack_60;
  undefined4 local_54 [4];
  undefined4 local_44;
  
  puVar4 = &local_80;
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  local_54[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)local_54);
  FUN_002296c4(local_54,&local_80);
  if (param_3 == (int *)0x0) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x10c07);
LAB_002dd274:
    local_44 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_44);
    FUN_00229780(local_54,&local_80);
LAB_002dd284:
    puVar4 = (undefined8 *)local_54;
    goto LAB_002dd2c8;
  }
  if (*param_3 == 1) {
LAB_002dd250:
    uVar5 = 0x10c07;
  }
  else {
    if ((*(long *)(param_2 + 0x2c0) == 0) && (*(int *)(param_2 + 0x154) != 1)) {
      lVar6 = *(long *)(param_2 + 0x38);
      if (((((lVar6 != 0) &&
            ((*(long *)(lVar6 + 0x10) != 0 && (*(long *)(*(long *)(lVar6 + 0x10) + 0x10) == param_5)
             ))) || ((lVar6 = *(long *)(param_2 + 0x40), lVar6 != 0 &&
                     ((*(long *)(lVar6 + 0x10) != 0 &&
                      (*(long *)(*(long *)(lVar6 + 0x10) + 0x10) == param_5)))))) ||
          ((lVar6 = *(long *)(param_2 + 0x48), lVar6 != 0 &&
           ((*(long *)(lVar6 + 0x10) != 0 && (*(long *)(*(long *)(lVar6 + 0x10) + 0x10) == param_5))
           )))) || ((lVar6 = *(long *)(param_2 + 0x50), lVar6 != 0 &&
                    ((*(long *)(lVar6 + 0x10) != 0 &&
                     (*(long *)(*(long *)(lVar6 + 0x10) + 0x10) == param_5)))))) {
        *(int **)(param_2 + 0x2c0) = param_3;
        local_78[0] = 0;
        puVar1 = PTR_DAT_04bc0ec8 + 0x10;
        local_68 = local_78;
        uStack_60 = 0x10;
        local_80 = puVar1;
        FUN_0018b070(&local_80,&DAT_0407ebb1,0xffffffffffffffff);
        uVar2 = FUN_003197fc(lVar6,param_2 + 0x140,param_4,&local_80);
        local_80 = puVar1;
        FUN_0018b1a0(&local_80);
        lVar6 = DAT_04c5fbb0;
        if ((uVar2 & 1) == 0) {
          *(undefined8 *)(param_2 + 0x2c0) = 0;
          local_80 = (undefined *)CONCAT44(local_80._4_4_,0xac5a);
          goto LAB_002dd274;
        }
        plVar3 = (long *)FUN_00228380();
        *(long *)(param_2 + 0x2d8) = *(long *)(lVar6 + 0x30) + *plVar3 * 10000;
        FUN_00220f78(*(undefined8 *)(param_2 + 0x2c0));
        goto LAB_002dd284;
      }
      goto LAB_002dd250;
    }
    uVar5 = 0x10c08;
  }
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar5);
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_80 + 4),(Result *)&local_44);
LAB_002dd2c8:
  FUN_002296c4(param_1,puVar4);
  return;
}

