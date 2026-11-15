
void FUN_024ec7a0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  ulong local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  undefined4 local_38;
  int local_34;
  
  if (DAT_055c1b60 == &DAT_055c1b58) {
    puVar6 = &DAT_055c1098;
  }
  else {
    puVar5 = DAT_055c1b60;
    do {
      puVar6 = puVar5 + -8;
      if (*(int *)(puVar5 + -1) == *(int *)(param_1 + 0xd60)) goto LAB_024ec80c;
      puVar5 = (undefined8 *)puVar5[1];
    } while (puVar5 != &DAT_055c1b58);
    puVar6 = &DAT_055c1098;
  }
LAB_024ec80c:
  local_34 = (uint)*(ushort *)(param_2 + 0x22) << 0x10;
  fStack_48 = (float)(int)*(short *)(param_2 + 0x28) * 0.25;
  local_4c = (float)*(int *)(param_2 + 0x24) * 0.001;
  local_44 = (float)*(int *)(param_2 + 0x2a) * 0.001;
  if (((*PTR_DAT_04bb3998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c9acf0), iVar1 != 0)) {
    FUN_00773950(&DAT_04c9ace0);
    __cxa_guard_release(&DAT_04c9acf0);
  }
  if (0 < (int)DAT_04c9ace0) {
    uVar4 = 0;
    do {
      if (*(int *)(DAT_04c9ace8 + uVar4 * 4) == 0x78ea5792) goto LAB_024ec8ac;
      uVar4 = uVar4 + 1;
    } while (DAT_04c9ace0 != uVar4);
  }
  uVar4 = 0;
LAB_024ec8ac:
  local_38 = (undefined4)uVar4;
  lVar2 = FUN_0251e98c(1);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x2950) + 0xf0))(lVar2 + 0x2950);
  uVar7 = *puVar3;
  lVar2 = FUN_0251e98c(1);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x2950) + 0xf0))(lVar2 + 0x2950);
  uStack_54 = *puVar3;
  local_64 = 0;
  local_5c = 0;
  local_50 = 0;
  local_58 = uVar7;
  FUN_02917ecc(puVar6,&local_4c,&local_34,&local_38,param_1 + 0x1ee8,&local_64);
  local_64 = local_64 & 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
  lVar2 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar2 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar2,0);
  return;
}

