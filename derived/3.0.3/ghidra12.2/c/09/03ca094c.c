
void FUN_03ca094c(undefined8 *param_1,long *param_2,undefined8 param_3,undefined1 param_4,
                 undefined1 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  param_1[2] = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = &DAT_0419b684;
  FUN_03c5a110(param_1 + 2,param_3,0xffffffff,0);
  *(undefined1 *)(param_1 + 10) = param_4;
  param_1[8] = param_1 + 7;
  param_1[9] = 0x1800000000;
  param_1[7] = param_1 + 7;
  param_1[5] = 0;
  param_1[6] = param_2;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = param_1 + 0xc;
  if (lVar4 == 0) {
    puVar2 = malloc(0x1c0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_2 = (long *)(lVar1 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x1c0,0x10);
  }
  FUN_00364f30();
  *puVar2 = &DAT_04b73e30;
  puVar2[0x36] = puVar2 + 0x35;
  puVar2[0x34] = 0;
  puVar2[0x35] = puVar2 + 0x35;
  *(byte *)((long)puVar2 + 0x18e) = *(byte *)((long)puVar2 + 0x18e) | 8;
  param_1[5] = puVar2;
  puVar2[0x17] = DAT_05aeaba8 + 0x30;
  *(byte *)(param_1[5] + 0x18e) = *(byte *)(param_1[5] + 0x18e) | 4;
  uVar3 = (**(code **)(*DAT_05af83f8 + 0xd0))();
  param_1[0xb] = uVar3;
  if (param_5 != (undefined1 *)0x0) {
    *(undefined1 *)(param_1 + 0xf) = *param_5;
  }
  return;
}

