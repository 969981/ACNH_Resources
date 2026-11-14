
undefined8 * FUN_01765e40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x4a0);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar5 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x4a0,8);
    }
  }
  FUN_006f94c0(puVar4,param_1,param_2);
  *(undefined8 *)((long)puVar4 + 0x274) = 0;
  puVar4[0x50] = &PTR_LAB_049c2c68;
  *puVar4 = &PTR_LAB_049c2b60;
  *(undefined1 *)((long)puVar4 + 0x2b4) = 0;
  puVar4[0x55] = (undefined1 *)((long)puVar4 + 0x2b4);
  *(undefined1 *)(puVar4 + 0x51) = 0;
  puVar4[0x52] = 0;
  *(undefined1 *)(puVar4 + 0x53) = 1;
  *(undefined4 *)((long)puVar4 + 0x29c) = 0;
  *(undefined4 *)(puVar4 + 0x56) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x333) = 0;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined2 *)(puVar4 + 0x7a) = 1;
  *(undefined4 *)(puVar4 + 0x69) = 0x80;
  *(undefined1 *)((long)puVar4 + 0x34c) = 0;
  puVar4[0x7e] = (long)puVar4 + 0x3fc;
  puVar4[0x54] = puVar1;
  puVar4[0x68] = (undefined1 *)((long)puVar4 + 0x34c);
  *(undefined1 *)((long)puVar4 + 0x3cb) = 0;
  puVar4[0x67] = puVar1;
  *(undefined4 *)((long)puVar4 + 0x3d4) = 0;
  *(undefined1 *)(puVar4 + 0x7b) = 0;
  *(undefined4 *)((long)puVar4 + 0x3dc) = 0;
  *(undefined1 *)(puVar4 + 0x7c) = 0;
  *(undefined4 *)(puVar4 + 0x7f) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x43b) = 0;
  *(undefined1 *)((long)puVar4 + 0x3fc) = 0;
  *(undefined1 *)((long)puVar4 + 0x454) = 0;
  puVar4[0x7d] = &PTR_LAB_048fb9f8;
  puVar4[0x89] = (undefined1 *)((long)puVar4 + 0x454);
  *(undefined4 *)(puVar4 + 0x8a) = 0x40;
  *(undefined1 *)((long)puVar4 + 0x493) = 0;
  puVar4[0x88] = &PTR_LAB_048fb9f8;
  *(undefined4 *)(puVar4 + 0x93) = 0;
  return puVar4;
}

