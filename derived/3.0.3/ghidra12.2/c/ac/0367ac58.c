
undefined8 FUN_0367ac58(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_1 + 8);
  *(long *)(lVar6 + 8) = param_1 + 0x40;
  lVar2 = FUN_03f587e8(*(undefined4 *)(param_1 + 0x50));
  *(long *)(lVar6 + 0xc0) = lVar2;
  uVar3 = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(*(long *)(lVar6 + 8) + 0x10);
    *(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0xa8) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(*(long *)(lVar6 + 8) + 0x10);
    lVar2 = 0;
    if (*(long *)(lVar6 + 0xc0) != 0) {
      lVar2 = *(long *)(lVar6 + 0xc0) + 0x78;
    }
    *(long *)(lVar6 + 0xb0) = lVar2;
    lVar2 = *(long *)(*(long *)(param_1 + 8) + 0xc0);
    *(undefined1 *)(lVar2 + 0x80) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0xc) = *(undefined4 *)(param_1 + 0x54);
    iVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x40))();
    uVar3 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_03f580e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                           param_1 + 0xa0,0);
      if (iVar1 == 0) {
        FUN_03ffad10(*(undefined8 *)(param_1 + 0x20),
                     *(long *)(*(long *)(param_1 + 8) + 0x10) + 0x10060,0);
        *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
        plVar4 = *(long **)(param_1 + 0x30);
        plVar4[7] = *(long *)(param_1 + 8);
        (**(code **)(*plVar4 + 0x50))();
        lVar6 = *(long *)(param_1 + 0x30);
        puVar7 = (undefined8 *)(lVar2 + 0x38);
        uVar5 = (**(code **)*puVar7)
                          (puVar7,*(undefined8 *)(lVar6 + 0x58),*(undefined8 *)(lVar6 + 0x60),
                           *(undefined8 *)(lVar6 + 0x68),*(undefined8 *)(lVar6 + 0x70),
                           *(undefined8 *)(lVar6 + 0x78),*(undefined8 *)(lVar6 + 0x80));
        if ((uVar5 & 1) != 0) {
          *(undefined8 **)(lVar6 + 0x40) = puVar7;
        }
        uVar3 = 1;
        *(undefined1 *)(param_1 + 0xc1) = 1;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

