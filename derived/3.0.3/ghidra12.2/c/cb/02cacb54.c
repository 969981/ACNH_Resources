
void FUN_02cacb54(undefined8 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  if ((DAT_056658d0 == 0) || (lVar2 = *(long *)(DAT_056658d0 + 0x210), lVar2 == 0)) {
    *param_1 = 0x4248000042200000;
    param_1[1] = 0x4170000041200000;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x758) + 0xf0))(lVar2 + 0x758);
    *(undefined4 *)((long)param_1 + 4) = *puVar1;
    puVar1 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x788) + 0xf0))
                       (*(long *)(DAT_056658d0 + 0x210) + 0x788);
    *(undefined4 *)param_1 = *puVar1;
    puVar1 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x7b8) + 0xf0))
                       (*(long *)(DAT_056658d0 + 0x210) + 0x7b8);
    *(undefined4 *)((long)param_1 + 0xc) = *puVar1;
    puVar1 = (undefined4 *)
             (**(code **)(*(long *)(*(long *)(DAT_056658d0 + 0x210) + 0x7e8) + 0xf0))
                       (*(long *)(DAT_056658d0 + 0x210) + 0x7e8);
    *(undefined4 *)param_1 = *puVar1;
  }
  return;
}

