
void FUN_033b6504(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x18);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar4 + 8);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0xa8);
    }
    puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x18,8);
  }
  *puVar3 = &DAT_04b24218;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar1;
  return;
}

