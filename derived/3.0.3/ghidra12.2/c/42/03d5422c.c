
void FUN_03d5422c(long param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x108);
  }
  else {
    plVar2 = param_2;
    if (param_2 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar2 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        plVar2 = (long *)(lVar1 + 0xa8);
      }
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_03d542b8;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x108,8);
  }
LAB_03d542b8:
  FUN_03b0ceb4(puVar3,param_1,param_2);
  *(undefined1 *)((long)puVar3 + 0xeb) = 0;
  *(undefined4 *)(puVar3 + 0xd) = 0x80;
  *(undefined1 *)((long)puVar3 + 0x6c) = 0;
  *puVar3 = &PTR_FUN_04b8f4e8;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  *(undefined1 *)(puVar3 + 0x20) = 0;
  puVar3[0xb] = &DAT_048fc708;
  puVar3[0xc] = (undefined1 *)((long)puVar3 + 0x6c);
  FUN_03d545f0(puVar3,param_2,param_3,param_4);
  plVar2 = (long *)((long)*(int *)(param_1 + 0x1c) + (long)puVar3);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(long **)(param_1 + 0x10) = plVar2;
  *plVar2 = param_1 + 8;
  plVar2[1] = (long)puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = plVar2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

