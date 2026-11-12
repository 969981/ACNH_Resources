
void FUN_009037f4(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x20);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x20,8);
  }
  *puVar3 = &PTR_FUN_04926b90;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar1;
  puVar3[3] = uVar4;
  return;
}

