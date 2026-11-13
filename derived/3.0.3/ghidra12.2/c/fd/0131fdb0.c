
void FUN_0131fdb0(long param_1,long *param_2)

{
  undefined2 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x2bc8);
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x2bc8,8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 100;
    puVar2 = PTR_DAT_04bb3170;
    puVar6 = puVar4 + 1;
    do {
      uVar1 = *(undefined2 *)puVar2;
      puVar6[1] = 0;
      *(undefined2 *)(puVar6 + 2) = 0;
      *(undefined2 *)puVar6 = uVar1;
      puVar6[3] = 0;
      puVar6[4] = 0;
      FUN_007ef010(puVar6 + 5,puVar2);
      *(undefined4 *)((long)puVar6 + 0x2c) = 0;
      FUN_038e18e4(puVar6 + 6);
      puVar6 = puVar6 + 0xe;
    } while (puVar6 != puVar4 + 0x579);
    *(undefined4 *)(param_1 + 8) = 100;
    *(undefined8 **)(param_1 + 0x10) = puVar4 + 1;
  }
  return;
}

