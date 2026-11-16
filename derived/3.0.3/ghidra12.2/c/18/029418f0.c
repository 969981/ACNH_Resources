
undefined8 * FUN_029418f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar3 = malloc(0x3d0);
  }
  else {
    lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar2 = (long *)(lVar4 + 8);
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + 0xa8);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2,0x3d0,8);
    }
  }
  FUN_006f94c0(puVar3,param_1,param_2);
  *(undefined2 *)((long)puVar3 + 0x274) = 0;
  *puVar3 = &PTR_LAB_04a93b30;
  puVar3[0x4f] = 0x41200000420c0000;
  *(undefined4 *)(puVar3 + 0x51) = 0x42340000;
  *(undefined8 *)((long)puVar3 + 0x28c) = 0;
  *(undefined8 *)((long)puVar3 + 0x294) = 0;
  puVar3[0x50] = 0x4120000041a00000;
  *(undefined2 *)((long)puVar3 + 0x2cc) = 0;
  puVar3[0x5a] = 0;
  puVar3[0x5b] = 0;
  puVar3[0x5c] = 0;
  puVar3[0x5d] = 0;
  puVar3[0x5e] = 0;
  *(undefined4 *)(puVar3 + 0x5f) = 0;
  *(undefined2 *)((long)puVar3 + 0x30c) = 0;
  puVar3[0x66] = 0;
  puVar3[0x67] = 0;
  puVar3[0x68] = 0;
  puVar3[0x69] = 0;
  puVar3[0x6a] = 0;
  *(undefined1 *)(puVar3 + 0x6b) = 0;
  puVar3[0x62] = 0;
  puVar3[99] = 0;
  puVar3[0x6c] = 0;
  puVar3[0x6d] = 0;
  puVar3[0x6e] = 0;
  *(undefined4 *)(puVar3 + 0x6f) = 0;
  *(undefined8 *)((long)puVar3 + 0x29c) = 0;
  *(undefined8 *)((long)puVar3 + 0x2a4) = 0;
  *(undefined8 *)((long)puVar3 + 0x2ac) = 0;
  *(undefined8 *)((long)puVar3 + 0x2b4) = 0;
  *(undefined8 *)((long)puVar3 + 700) = 0;
  *(undefined8 *)((long)puVar3 + 0x2c4) = 0;
  *(undefined8 *)((long)puVar3 + 0x2fc) = 0x44e1000000000002;
  *(undefined8 *)((long)puVar3 + 0x304) = 0;
  *(undefined8 *)((long)puVar3 + 0x37c) = 0xbe99999a3f800000;
  *(undefined8 *)((long)puVar3 + 900) = 0x3f19999a40400000;
  *(undefined8 *)((long)puVar3 + 0x38c) = 0;
  *(undefined8 *)((long)puVar3 + 0x3a4) = 0;
  *(undefined8 *)((long)puVar3 + 0x3ac) = 0;
  *(undefined8 *)((long)puVar3 + 0x394) = 0;
  *(undefined8 *)((long)puVar3 + 0x39c) = 0;
  *(undefined8 *)((long)puVar3 + 0x3b4) = 0xfffe;
  FUN_0277d4ac();
  *(undefined2 *)((long)puVar3 + 0x274) = 0;
  *(undefined8 *)((long)puVar3 + 0x3bc) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar3 + 0x3c4) = 0x3f80000000000000;
  return puVar3;
}

