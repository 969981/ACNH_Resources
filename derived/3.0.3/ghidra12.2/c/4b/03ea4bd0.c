
void FUN_03ea4bd0(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar3 = malloc(0x60);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar5 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x60,8);
    }
  }
  puVar3[2] = PTR_DAT_04bb2020 + 0x10;
  *(undefined1 *)((long)puVar3 + 0x26) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = &DAT_0419b684;
  FUN_03c5a110(puVar3 + 2,param_2,0xffffffff,0);
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[8] = &PTR_LAB_04b81328;
  puVar3[9] = 0;
  if ((param_3 & 1) != 0) {
    *(int *)(puVar3 + 5) = (int)((ulong)puVar3 >> 3);
  }
  lVar5 = *param_1;
  plVar4 = (long *)(lVar5 + 0x10);
  lVar1 = *plVar4;
  plVar2 = (long *)((long)puVar3 + (long)*(int *)(lVar5 + 0x24));
  *plVar4 = (long)plVar2;
  *plVar2 = lVar1;
  plVar2[1] = (long)plVar4;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = plVar2;
  }
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
  return;
}

