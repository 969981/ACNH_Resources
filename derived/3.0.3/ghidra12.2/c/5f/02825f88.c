
undefined8 * FUN_02825f88(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(0x60);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        param_2 = (long *)(lVar5 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x60,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_04a37d50;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    puVar6[2] = 0;
    puVar6[3] = 0;
    *puVar6 = &PTR_FUN_04a38088;
    *(undefined4 *)((long)puVar6 + 0xc) = uVar3;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((long)puVar6 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined2 *)((long)puVar6 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined1 *)((long)puVar6 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((long)puVar6 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((long)puVar6 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    uVar4 = *(undefined1 *)(param_1 + 0x35);
    *puVar6 = &PTR_LAB_04a91670;
    *(undefined1 *)((long)puVar6 + 0x35) = uVar4;
    *(undefined2 *)(puVar6 + 7) = *(undefined2 *)(param_1 + 0x38);
    *(undefined1 *)((long)puVar6 + 0x3a) = *(undefined1 *)(param_1 + 0x3a);
    *(undefined1 *)((long)puVar6 + 0x3b) = *(undefined1 *)(param_1 + 0x3b);
    *(undefined4 *)((long)puVar6 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    *(undefined4 *)(puVar6 + 0xb) = *(undefined4 *)(param_1 + 0x58);
    puVar6[9] = uVar2;
    puVar6[10] = uVar7;
    puVar6[8] = uVar1;
  }
  return puVar6;
}

