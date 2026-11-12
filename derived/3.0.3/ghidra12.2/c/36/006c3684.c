
void FUN_006c3684(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(8);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar1 + 8);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0xa8);
    }
    puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,8,8);
  }
  *puVar3 = &PTR_LAB_048f9f00;
  return;
}

