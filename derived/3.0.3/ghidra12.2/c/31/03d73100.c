
void FUN_03d73100(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(0x30);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar1 + 8);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0xa8);
    }
    puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x30,8);
  }
  *puVar3 = &PTR_LAB_04b91100;
  puVar3[1] = 0;
  puVar3[4] = puVar3 + 3;
  puVar3[5] = 0;
  puVar3[2] = 0;
  puVar3[3] = puVar3 + 3;
  return;
}

