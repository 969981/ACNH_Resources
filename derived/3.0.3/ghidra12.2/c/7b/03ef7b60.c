
void FUN_03ef7b60(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(0x38);
  }
  else {
    if (param_1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_1 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_1 = (long *)(lVar2 + 0xa8);
      }
      param_1 = (long *)*param_1;
      puVar3 = (undefined8 *)0x0;
      if (param_1 == (long *)0x0) goto LAB_03ef7bcc;
    }
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x30))(param_1,0x38,8);
  }
LAB_03ef7bcc:
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 *)((long)puVar3 + 0x14) = 0x100000001;
  *puVar3 = &PTR_LAB_04ba7520;
  puVar3[1] = 0;
  *(undefined8 *)((long)puVar3 + 0x1c) = 0;
  *(undefined8 *)((long)puVar3 + 0x24) = 0;
  *(undefined8 *)((long)puVar3 + 0x2c) = 0;
  return;
}

