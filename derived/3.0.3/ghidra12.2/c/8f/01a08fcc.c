
void FUN_01a08fcc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  if (param_3 < *(uint *)(param_1 + 0x58)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x60) + (long)(int)param_3 * 8);
  }
  else {
    lVar1 = 0;
  }
  puVar2 = (uint *)(**(code **)(*(long *)(lVar1 + 0x30) + 0xf0))();
  if (*puVar2 < 0x2f) {
    puVar3 = (undefined8 *)(&PTR_DAT_04988e68)[*puVar2];
  }
  else {
    puVar3 = &DAT_0407ebb1;
  }
  FUN_038d1270(param_2,"[%d] %s",param_3,puVar3);
  return;
}

