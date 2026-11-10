
void FUN_00367180(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  FUN_0035ccd4(*(undefined8 *)(param_1 + 0x80));
  lVar2 = 0;
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x260) + lVar3);
    (*param_2)(puVar1,*(long *)(param_1 + 600) + lVar2,param_3);
    lVar3 = lVar3 + 8;
    lVar2 = lVar2 + 0x78;
    *puVar1 = 0xffffffffffffffff;
  } while (lVar3 != 0x128);
  return;
}

