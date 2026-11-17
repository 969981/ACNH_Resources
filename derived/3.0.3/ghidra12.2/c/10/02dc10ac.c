
void FUN_02dc10ac(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  
  FUN_03597c30();
  param_1[0x3862] = 0;
  *param_1 = &PTR_LAB_04ac9208;
  *(undefined1 *)(param_1 + 0x3863) = 0;
  param_1[0x385e] = 0;
  param_1[0x385f] = 0;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  param_1[0x3860] = 0;
  *(undefined4 *)(param_1 + 0x3861) = 0;
  if (lVar6 == 0) {
    puVar5 = malloc(0x2a8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar4 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x2a8,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar5 + 0x6b) = 0;
    *(undefined1 *)((long)puVar5 + 0x2c) = 0;
    puVar1 = PTR_DAT_04bc4ee8;
    *puVar5 = 6;
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined4 *)(puVar5 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar5[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar5[0xf] = puVar1;
    puVar5[0x1d] = puVar1;
    *(undefined1 *)((long)puVar5 + 0x9c) = 0;
    puVar5[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar5[0x39] = puVar1;
    puVar5[0x47] = puVar1;
    *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar5 + 0xdb) = 0;
    *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x14b) = 0;
    *(undefined1 *)((long)puVar5 + 0x10c) = 0;
    *(undefined4 *)(puVar5 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar5 + 0x17c) = 0;
    *(undefined4 *)(puVar5 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x22b) = 0;
    *(undefined1 *)((long)puVar5 + 0x1ec) = 0;
    *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
    puVar5[0x4a] = (long)puVar5 + 0x25c;
    *(undefined4 *)(puVar5 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x29b) = 0;
    *(undefined1 *)((long)puVar5 + 0x25c) = 0;
    puVar5[0x49] = puVar2;
    puVar5[0x11] = puVar2;
    puVar5[0x12] = (undefined1 *)((long)puVar5 + 0x9c);
    puVar5[0x1f] = puVar2;
    puVar5[0x20] = (long)puVar5 + 0x10c;
    puVar5[3] = puVar2;
    puVar5[4] = (undefined1 *)((long)puVar5 + 0x2c);
    *(undefined1 *)(puVar5 + 0xe) = 1;
    *(undefined1 *)(puVar5 + 0x1c) = 1;
    *(undefined1 *)(puVar5 + 0x2a) = 1;
    *(undefined1 *)(puVar5 + 0x38) = 1;
    *(undefined1 *)(puVar5 + 0x46) = 1;
    *(undefined1 *)(puVar5 + 0x54) = 1;
    puVar5[0x2d] = puVar2;
    puVar5[0x2e] = (long)puVar5 + 0x17c;
    puVar5[0x3b] = puVar2;
    puVar5[0x3c] = (long)puVar5 + 0x1ec;
    *(undefined4 *)(param_1 + 0x3861) = 6;
    param_1[0x3862] = puVar5 + 1;
  }
  return;
}

