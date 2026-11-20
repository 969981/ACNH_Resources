
void FUN_03d5c508(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar3 = malloc(0x50);
  }
  else {
    plVar1 = *(long **)(param_1 + 0x48);
    if (plVar1 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar1 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 0xa8);
      }
      plVar1 = (long *)*plVar1;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x30))(plVar1,0x50,8);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x90);
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[4] = uVar4;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[6] = puVar3 + 6;
  puVar3[7] = puVar3 + 6;
  plVar5 = (long *)(param_1 + 0x50);
  lVar6 = *plVar5;
  plVar1 = (long *)((long)*(int *)(param_1 + 100) + (long)puVar3);
  *(undefined8 **)(param_1 + 0x68) = puVar3;
  *plVar5 = (long)plVar1;
  *plVar1 = lVar6;
  plVar1[1] = (long)plVar5;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar1;
  }
  lVar2 = *(long *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  lVar6 = param_1 + 0x30;
  if (**(char **)(param_2 + 8) != '\0') {
    lVar6 = param_2;
  }
  uVar4 = FUN_038c6d48(0,lVar6,*(undefined8 *)(param_1 + 0x48),8,1,0);
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  uVar4 = FUN_03c9ff90(uVar4,0);
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  *(undefined8 *)(lVar2 + 0x48) = uVar4;
  return;
}

