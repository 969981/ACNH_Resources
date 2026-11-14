
void FUN_016de324(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  
  FUN_006f94c0();
  *(undefined1 *)((long)param_1 + 0x286) = 0;
  *(undefined8 *)((long)param_1 + 0x274) = 0x40a0000043610000;
  *(undefined2 *)((long)param_1 + 0x284) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x27c) = 0x2aaaaac0;
  *param_1 = &PTR_FUN_049bc310;
  uVar5 = nn::os::GetSystemTick();
  param_1[0x53] = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x59] = 0x3f800000;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(uint *)(param_1 + 0x51) = uVar5;
  param_1[0x56] = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(uint *)((long)param_1 + 0x28c) = uVar5;
  param_1[0x5a] = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x52) = uVar5;
  *(uint *)((long)param_1 + 0x294) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar7 = malloc(0x78);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 == (long *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto LAB_016de45c;
      }
    }
    puVar7 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x78,8);
  }
LAB_016de45c:
  *(undefined8 *)(puVar7 + 0x15) = 0;
  *puVar7 = 0xffffffff;
  puVar7[2] = 0xffffffff;
  puVar7[4] = 0xffffffff;
  puVar7[6] = 0xffffffff;
  puVar7[8] = 0xffffffff;
  puVar7[10] = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x32) = 0xffffffff;
  *(undefined4 *)((long)puVar7 + 0x3a) = 0xffffffff;
  puVar7[0x10] = 0xffffffff;
  puVar7[0x12] = 0xffffffff;
  puVar7[0x14] = 0xffffffff;
  *(undefined2 *)(puVar7 + 1) = 0xffff;
  *(undefined2 *)(puVar7 + 3) = 0xffff;
  *(undefined2 *)(puVar7 + 5) = 0xffff;
  *(undefined2 *)(puVar7 + 7) = 0xffff;
  *(undefined2 *)(puVar7 + 9) = 0xffff;
  *(undefined2 *)(puVar7 + 0xb) = 0xffff;
  *(undefined2 *)(puVar7 + 0xc) = 0xffff;
  *(undefined2 *)(puVar7 + 0xe) = 0xffff;
  *(undefined2 *)(puVar7 + 0x11) = 0xffff;
  *(undefined2 *)(puVar7 + 0x13) = 0xffff;
  *(undefined8 *)(puVar7 + 0x17) = 0;
  *(undefined8 *)(puVar7 + 0x19) = 0;
  *(undefined8 *)(puVar7 + 0x1b) = 0;
  *(undefined8 *)((long)param_1 + 0x2e4) = 0x4107893700000000;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0x3f80000000000000;
  param_1[0x5e] = 0;
  *(undefined4 *)((long)param_1 + 0x2f7) = 0;
  param_1[0x5b] = puVar7;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  param_1[0x62] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 99) = 0x7fffffff;
  puVar1 = PTR_DAT_04bbe2e0 + 0x10;
  *(undefined2 *)((long)param_1 + 0x31c) = 0;
  param_1[0x61] = puVar1;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)((long)param_1 + 0x32b) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((long)param_1 + 0x33f) = 0;
  *(undefined8 *)((long)param_1 + 0x357) = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((long)param_1 + 0x36f) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)PTR_DAT_04bb3238;
  param_1[0x73] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x74) = 0x7fffffff;
  *(undefined2 *)((long)param_1 + 0x3a4) = 0;
  param_1[0x72] = puVar1;
  *(undefined4 *)(param_1 + 0x75) = 0;
  uVar5 = nn::os::GetSystemTick();
  *(undefined1 *)((long)param_1 + 0x32e) = 0;
  *(undefined2 *)((long)param_1 + 0x32c) = 0;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((long)param_1 + 0x33f) = 0;
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  *(undefined8 *)((long)param_1 + 0x357) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)(param_1 + 0x51) = uVar5;
  *(uint *)((long)param_1 + 0x28c) = uVar3;
  *(uint *)(param_1 + 0x52) = uVar4;
  *(undefined8 *)((long)param_1 + 0x36f) = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(uint *)((long)param_1 + 0x294) = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  return;
}

