
void FUN_031025ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FUN_03c688b0(param_2,&DAT_056f2170);
  *(undefined8 *)(param_1 + 0x288) = uVar2;
  uVar2 = FUN_03c688b0(param_2,&DAT_056f2180);
  *(undefined8 *)(param_1 + 0x290) = uVar2;
  uVar2 = FUN_03c688b0(param_2,&DAT_056f2190);
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar2 = FUN_03c688b0(param_2,&DAT_056f21a0);
  *(undefined8 *)(param_1 + 0x2a0) = uVar2;
  uVar2 = FUN_03c688b0(param_2,&DAT_056f21b0);
  *(undefined8 *)(param_1 + 0x2a8) = uVar2;
  uVar2 = FUN_03462740(param_1,param_2,&DAT_056f21c0);
  *(undefined8 *)(param_1 + 0x2b0) = uVar2;
  uVar2 = FUN_03462740(param_1,param_2,&DAT_056f21d0);
  *(undefined8 *)(param_1 + 0x2b8) = uVar2;
  uVar2 = FUN_03462740(param_1,param_2,&DAT_056f21e0);
  *(undefined8 *)(param_1 + 0x2c0) = uVar2;
  uVar2 = FUN_03c68d44(param_2,&DAT_056f21f0,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 0x2c8) = uVar2;
  if (*(long *)(param_1 + 0x250) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      plVar4 = malloc(0x20);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar5 + 8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar4 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
    }
    plVar4[2] = (long)(plVar4 + 1);
    plVar4[3] = 0x20800000000;
    *plVar4 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar4[1] = (long)(plVar4 + 1);
    *(long **)(param_1 + 0x250) = plVar4;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

