
void FUN_0299d720(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long lVar7;
  byte bVar8;
  undefined8 *puVar9;
  long lVar10;
  
  *(undefined4 *)((long)param_1 + 7) = 0;
  pcVar1 = (char *)((long)param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 0x20;
  *param_1 = 0;
  param_1[3] = pcVar1;
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  uVar2 = s_invalid_name_040e8f53._0_8_;
  if (pcVar1 != "invalid_name") {
    *(undefined4 *)((long)param_1 + 0x2c) = 0x656d616e;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined8 *)pcVar1 = uVar2;
  }
  param_1[2] = PTR_DAT_04bb2028 + 0x10;
  uVar6 = FUN_006bd550("invalid_name",0);
  *(undefined4 *)(param_1 + 9) = uVar6;
  param_1[10] = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xffffffff0000fffe;
  FUN_038e18e4(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  FUN_02991570(param_1 + 0x1e);
  lVar10 = 0x85;
  *(undefined4 *)(param_1 + 0x4f3) = 0;
  puVar9 = param_1 + 0x4f8;
  param_1[0x4f4] = 0;
  *(undefined4 *)(param_1 + 0x4f5) = 0;
  *(undefined4 *)((long)param_1 + 0x27ac) = 0;
  *(undefined4 *)(param_1 + 0x4f6) = 0;
  *(undefined4 *)((long)param_1 + 0x27b4) = 0;
  *(undefined4 *)(param_1 + 0x4f7) = 0;
  *(undefined4 *)((long)param_1 + 0x27bc) = 0;
  do {
    FUN_02988e4c(puVar9);
    lVar10 = lVar10 + -1;
    puVar9 = puVar9 + 0x15c;
  } while (lVar10 != 0);
  lVar7 = 600;
  lVar10 = (long)param_1 + 0x5ce4c;
  *(undefined2 *)(param_1 + 0xb9c4) = 0;
  do {
    *(undefined4 *)(lVar10 + -0x24) = 0xf6f60000;
    lVar7 = lVar7 + -1;
    *(undefined8 *)(lVar10 + -0x20) = 0xfff6fff6fff6fff6;
    *(undefined4 *)(lVar10 + -0x18) = 0xfffffff6;
    *(undefined8 *)(lVar10 + -0x14) = 0xfffffffffffffff6;
    *(undefined8 *)(lVar10 + -0xc) = 0xff7fffffff7fffff;
    *(undefined8 *)(lVar10 + -4) = 0xff7fffffff7fffff;
    puVar5 = PTR_DAT_04bb5838;
    puVar4 = PTR_DAT_04bb5830;
    lVar10 = lVar10 + 0x28;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0xc57e) = 0xffffffff;
  puVar3 = PTR_DAT_04bb32e0;
  param_1[0xc583] = 0;
  *(undefined8 *)((long)param_1 + 0x62c24) = 0;
  *(undefined8 *)((long)param_1 + 0x62c1c) = 0;
  param_1[0xc57d] = puVar4 + 0x10;
  param_1[0xc57f] = puVar5 + 0x10;
  bVar8 = *puVar3;
  param_1[0xc586] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0xc587) = 0xffffffff;
  param_1[0xc588] = puVar5 + 0x10;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  *(byte *)(param_1 + 0xc583) = bVar8;
  memset(param_1 + 0xc5a5,0,0x179);
  param_1[0xc58c] = 0;
  param_1[0xc58d] = 0;
  param_1[0xc58e] = 0;
  param_1[0xc58f] = 0;
  param_1[0xc590] = 0;
  param_1[0xc591] = 0;
  param_1[0xc592] = 0;
  param_1[0xc593] = 0;
  param_1[0xc594] = 0;
  param_1[0xc595] = 0;
  param_1[0xc596] = 0;
  param_1[0xc597] = 0;
  param_1[0xc598] = 0;
  param_1[0xc599] = 0;
  param_1[0xc59a] = 0;
  param_1[0xc59b] = 0;
  param_1[0xc59c] = 0;
  param_1[0xc59d] = 0;
  param_1[0xc59e] = 0;
  param_1[0xc59f] = 0;
  param_1[0xc5a0] = 0;
  param_1[0xc5a1] = 0;
  param_1[0xc5a2] = 0;
  param_1[0xc5a3] = 0;
  *(undefined8 *)((long)param_1 + 0x62d1d) = 0;
  return;
}

