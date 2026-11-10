
undefined8 FUN_003441cc(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *param_1;
  if (*(char *)(*(long *)(lVar7 + 0xa0) + 0x792) == '\0') {
    lVar6 = *(long *)(*(long *)(lVar7 + 0x240) + 0x348);
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(lVar7 + 0x9b0) + 0x10))(*(long **)(lVar7 + 0x9b0),0x2c,0x80);
    uVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *(long *)(lVar7 + 0x9b8) = *(long *)(lVar7 + 0x9b8) + 0x2c;
      *(int *)(lVar7 + 0x9c0) = *(int *)(lVar7 + 0x9c0) + 1;
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined8 **)(*param_1 + 0x4a8) = puVar4;
      *(undefined4 *)puVar4 = *(undefined4 *)(lVar6 + 0x18);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar6 + 0x1c);
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 2) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x14) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 3) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x1c) = (float)uVar1 * 2.3283064e-10;
      FUN_0031d9e0(*param_1,4,0x60);
      FUN_0031e3e8(*param_1);
      lVar7 = *param_1;
      iVar2 = (*(int *)(lVar7 + 0x230) +
              *(int *)(*(long *)(*(long *)(lVar7 + 0x240) + 0x348) + 0x10) * *(int *)(lVar7 + 0x230)
              ) * 0xa0 + 0xa0;
      if (iVar2 == 0) {
        return 1;
      }
      lVar6 = *(long *)(lVar7 + 0x4a8);
      uVar5 = FUN_0031dae4(lVar7,*(undefined4 *)**(undefined8 **)(lVar7 + 0x4d0),(long)iVar2);
      uVar3 = 1;
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(lVar6 + 0x20) = 1;
        return uVar3;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

