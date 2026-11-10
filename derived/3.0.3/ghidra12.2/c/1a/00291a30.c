
void FUN_00291a30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  lVar1 = *(long *)(param_2 + 0x10);
  do {
    if (lVar1 == param_2 + 8) {
      local_34 = 0x2c0a;
LAB_00291aa8:
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
      FUN_002296c4(param_1,&local_34);
      return;
    }
    if (*(long *)(lVar1 + 0x20) == param_3) {
      *(undefined2 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0xfd0000000000;
      FUN_00223704(param_2 + 8,lVar1);
      FUN_002236e0(param_2 + 0x20,param_2 + 0x20,lVar1 + *(int *)(param_2 + 0x34));
      local_34 = 0;
      goto LAB_00291aa8;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}

