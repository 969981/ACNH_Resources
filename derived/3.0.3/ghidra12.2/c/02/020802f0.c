
void FUN_020802f0(long param_1,undefined4 param_2)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(undefined4 *)(param_1 + 200) = 0;
  switch(param_2) {
  default:
    ppuVar1 = &PTR_LAB_04a71478;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a71478;
    puVar2 = &LAB_0207d438;
    ppuVar3 = &PTR_LAB_04a714a0;
    lVar4 = param_1 + 8;
    puVar5 = &LAB_0207cc30;
    pcVar6 = FUN_0207c988;
    break;
  case 2:
    ppuVar1 = &PTR_LAB_04a714c8;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a714c8;
    puVar2 = &LAB_0207e55c;
    ppuVar3 = &PTR_LAB_04a714f0;
    lVar4 = param_1 + 0x10;
    puVar5 = &LAB_0207de30;
    pcVar6 = FUN_0207d440;
    break;
  case 3:
    ppuVar1 = &PTR_LAB_04a71518;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a71518;
    puVar2 = &LAB_0207eae8;
    ppuVar3 = &PTR_LAB_04a71540;
    lVar4 = param_1 + 0x18;
    puVar5 = &LAB_0207ea68;
    pcVar6 = (code *)&LAB_0207e938;
    break;
  case 4:
    ppuVar1 = &PTR_LAB_04a71568;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a71568;
    puVar2 = &LAB_0207e924;
    ppuVar3 = &PTR_LAB_04a71590;
    lVar4 = param_1 + 0x20;
    puVar5 = &LAB_0207e6e0;
    pcVar6 = (code *)&LAB_0207e5b0;
    break;
  case 5:
    ppuVar1 = &PTR_LAB_04a715b8;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a715b8;
    puVar2 = &LAB_0207ecac;
    ppuVar3 = &PTR_LAB_04a715e0;
    lVar4 = param_1 + 0x28;
    puVar5 = &LAB_0207ec2c;
    pcVar6 = (code *)&LAB_0207eafc;
    break;
  case 6:
    ppuVar1 = &PTR_LAB_04a71608;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a71608;
    puVar2 = &LAB_0207f214;
    ppuVar3 = &PTR_LAB_04a71630;
    lVar4 = param_1 + 0x30;
    puVar5 = &LAB_0207ece0;
    pcVar6 = (code *)&LAB_0207ecc0;
    break;
  case 7:
    ppuVar1 = &PTR_LAB_04a71658;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a71658;
    puVar2 = &LAB_0207fb34;
    ppuVar3 = &PTR_LAB_04a71680;
    lVar4 = param_1 + 0x38;
    puVar5 = &LAB_0207f640;
    pcVar6 = (code *)&LAB_0207f220;
    break;
  case 0xb:
    ppuVar1 = &PTR_LAB_04a716a8;
    *(undefined ***)(param_1 + 0x58) = &PTR_LAB_04a716a8;
    puVar2 = &LAB_020802ec;
    ppuVar3 = &PTR_LAB_04a716d0;
    lVar4 = param_1 + 0x40;
    puVar5 = &LAB_0207fc10;
    pcVar6 = (code *)&LAB_0207fb38;
  }
  *(long *)(param_1 + 0x60) = lVar4;
  *(code **)(param_1 + 0x68) = pcVar6;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined ***)(param_1 + 0x78) = ppuVar1;
  *(long *)(param_1 + 0x80) = lVar4;
  *(undefined1 **)(param_1 + 0x88) = puVar5;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined ***)(param_1 + 0x98) = ppuVar3;
  *(long *)(param_1 + 0xa0) = lVar4;
  *(undefined1 **)(param_1 + 0xa8) = puVar2;
  return;
}

