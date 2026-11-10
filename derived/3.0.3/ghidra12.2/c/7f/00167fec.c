
undefined8 FUN_00167fec(long *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  if ((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 0x20)) < *param_2) {
    uVar3 = 0xfffffdf6;
  }
  else {
    puVar5 = (ulong *)param_2[2];
    *(long *)(lVar4 + 0x18) = *(long *)(lVar4 + 0x18) + -9;
    FUN_001674fc();
    if (*puVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + 0x20);
      lVar6 = 0;
      uVar7 = 0;
      do {
        puVar2 = (undefined8 *)(puVar5[1] + lVar6);
        FUN_001684dc(uVar3,*(undefined2 *)(puVar2 + 1));
        lVar1 = *(long *)(lVar4 + 0x20) + 2;
        *(long *)(lVar4 + 0x20) = lVar1;
        uVar3 = FUN_00168980(lVar1,*puVar2,puVar2[1]);
        *(undefined8 *)(lVar4 + 0x20) = uVar3;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < *puVar5);
    }
    uVar3 = 0;
  }
  return uVar3;
}

