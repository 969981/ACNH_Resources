
void FUN_003e9000(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04bc0ec8;
  local_50[0] = 0;
  local_58 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  FUN_0018b070(&local_58,&DAT_0407ebb1,0xffffffffffffffff);
  puVar5 = (undefined8 *)param_2[1];
  lVar3 = (long)puVar5 - *param_2;
  lVar4 = lVar3 >> 3;
  if ((ulong)(lVar4 * -0x3333333333333333) < 6) {
    FUN_00409c60(param_2,lVar4 * 0x3333333333333333 + 6,&local_58);
  }
  else if (lVar3 != 0xf0) {
    puVar1 = (undefined8 *)(*param_2 + 0xf0);
    while (puVar5 != puVar1) {
      puVar5 = puVar5 + -5;
      (**(code **)*puVar5)(puVar5);
    }
    param_2[1] = (long)puVar1;
  }
  local_58 = puVar2 + 0x10;
  FUN_0018b1a0(&local_58);
  FUN_0018a58c(*param_2,"Unknown");
  return;
}

