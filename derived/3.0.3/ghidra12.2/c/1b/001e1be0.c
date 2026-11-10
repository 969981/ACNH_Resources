
uint FUN_001e1be0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 auStack_c0 [12];
  uint local_b4;
  
  lVar5 = *(long *)(param_1 + 2);
  *param_1 = 0;
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + -8);
    if (lVar6 != 0) {
      lVar6 = lVar6 * 0x38;
      do {
        FUN_001e1b48(lVar5 + -0x38 + lVar6);
        lVar6 = lVar6 + -0x38;
      } while (lVar6 != 0);
    }
    FUN_0018ae0c((long *)(lVar5 + -8));
    *(undefined8 *)(param_1 + 2) = 0;
  }
  FUN_001e1500(auStack_c0);
  uVar1 = FUN_001edf40(auStack_c0);
  if ((uVar1 & 1) != 0) {
    puVar4 = (undefined8 *)FUN_0018adb4(0x40);
    puVar7 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = puVar4 + 1;
      *puVar4 = 1;
      FUN_001e1b20(puVar7);
    }
    *(undefined8 **)(param_1 + 2) = puVar7;
    uVar2 = nn::socket::InetNtohl(local_b4);
    uVar3 = nn::socket::InetHtonl(uVar2);
    *(undefined4 *)puVar7 = uVar3;
    *(undefined8 *)(*(long *)(param_1 + 2) + 4) = 0xffffffffffffff;
    *param_1 = 1;
  }
  FUN_001e1868(auStack_c0);
  return uVar1 & 1;
}

