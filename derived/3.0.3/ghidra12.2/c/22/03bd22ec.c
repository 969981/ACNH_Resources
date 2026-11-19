
void FUN_03bd22ec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x48);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_03bd2368;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x48,8);
  }
LAB_03bd2368:
  *(undefined4 *)(puVar3 + 2) = 0;
  *puVar3 = &PTR_LAB_04b7b518;
  puVar3[1] = param_2;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = &PTR_LAB_04b7b580;
  puVar3[6] = 0;
  uVar1 = DAT_05aec208;
  puVar3[7] = puVar3;
  puVar3[8] = uVar1;
  return;
}

