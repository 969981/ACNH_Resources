
undefined8 * FUN_0121e56c(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x40);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_04a37d50;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)((long)puVar3 + 0xc) = uVar1;
    *puVar3 = &PTR_FUN_04a38088;
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((long)puVar3 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)(puVar3 + 5) = *(undefined1 *)(param_1 + 0x28);
    *(undefined2 *)((long)puVar3 + 0x2c) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined1 *)((long)puVar3 + 0x2e) = *(undefined1 *)(param_1 + 0x2e);
    *(undefined1 *)((long)puVar3 + 0x2f) = *(undefined1 *)(param_1 + 0x2f);
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_1 + 0x30);
    *(undefined1 *)((long)puVar3 + 0x34) = *(undefined1 *)(param_1 + 0x34);
    *(undefined1 *)((long)puVar3 + 0x35) = *(undefined1 *)(param_1 + 0x35);
    *puVar3 = &PTR_FUN_049871b0;
    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_1 + 0x38);
  }
  return puVar3;
}

