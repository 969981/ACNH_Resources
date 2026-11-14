
void FUN_01d773bc(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined4 local_14;
  
  local_14 = 3;
  plVar2 = (long *)FUN_00818c64(*(undefined8 *)PTR_DAT_04bb2110,&local_14);
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x20);
  }
  else {
    if (plVar2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar1 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x20,8);
  }
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = 0xffffffff;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *(undefined4 *)puVar4 = *param_2;
  *(undefined8 *)((long)puVar4 + 4) = *(undefined8 *)(param_2 + 1);
  plVar5 = *(long **)(param_1 + 8);
  plVar2 = (long *)((long)*(int *)(param_1 + 0x14) + (long)puVar4);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(long **)(param_1 + 8) = plVar2;
  *plVar2 = param_1;
  plVar2[1] = (long)plVar5;
  if (plVar5 != (long *)0x0) {
    *plVar5 = (long)plVar2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

