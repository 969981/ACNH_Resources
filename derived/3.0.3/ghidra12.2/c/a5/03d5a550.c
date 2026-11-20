
void FUN_03d5a550(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x18);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar5 + 8);
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 0xa8);
    }
    puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x18,8);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_2;
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar2 = (long)*(int *)(param_1 + 0x74);
    lVar5 = *(long *)(param_1 + 0x68) - lVar2;
    do {
      if (*(long *)(lVar5 + 0x10) == param_2) {
        *(undefined1 *)(lVar5 + 0x18) = 1;
        break;
      }
      lVar5 = *(long *)(lVar5 + lVar2 + 8) - lVar2;
    } while (lVar5 != (param_1 + 0x60) - lVar2);
  }
  plVar4 = (long *)(param_1 + 0x30);
  lVar5 = *plVar4;
  plVar1 = (long *)((long)*(int *)(param_1 + 0x44) + (long)puVar3);
  *plVar4 = (long)plVar1;
  *plVar1 = lVar5;
  plVar1[1] = (long)plVar4;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar1;
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}

