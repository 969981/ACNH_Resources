
undefined8 FUN_008dae04(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined8 *puStack_48;
  
  uVar1 = *(uint *)(param_1 + 0x307e8);
  if (uVar1 == 0x62) {
    ppuVar5 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
  }
  else {
    if (0x62 < uVar1) {
      puStack_48 = &DAT_0407ebb1;
      goto LAB_008dae88;
    }
    ppuVar5 = &PTR_s_cNormal_04922de8 + uVar1;
  }
  puStack_48 = (undefined8 *)*ppuVar5;
LAB_008dae88:
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = s_cMarketExterior_04926614;
  local_50 = local_60;
  FUN_008c4100(param_1,&local_50,&local_60,param_2,0,0,1);
  iVar2 = *(int *)(param_1 + 0x31080);
  if (*(int *)(param_1 + 0x30964) == 0) {
    if (iVar2 == 0) {
      return 1;
    }
    uVar4 = 10;
  }
  else {
    if (iVar2 == 0) {
      return 1;
    }
    uVar4 = 9;
  }
  *(undefined4 *)(param_1 + 0x30800) = uVar4;
  *(code **)(param_1 + 0x37f68) = FUN_008c5c98;
  *(undefined8 *)(param_1 + 0x37f70) = 0;
  *(undefined ***)(param_1 + 0x37f58) = &PTR_LAB_04925a90;
  *(long *)(param_1 + 0x37f60) = param_1;
  lVar3 = *(long *)(*(long *)(param_1 + 0x31088) + (long)(iVar2 + -1) * 8);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 4) = 1;
  }
  return 1;
}

