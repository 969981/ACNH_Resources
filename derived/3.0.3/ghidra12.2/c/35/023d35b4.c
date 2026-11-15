
void FUN_023d35b4(long param_1)

{
  long *plVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  char local_40;
  char local_3e;
  undefined4 local_34;
  undefined8 local_30;
  float local_28;
  undefined4 local_24;
  
  local_24 = 0x80000000;
  local_28 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_30 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  local_34 = DAT_05464e88;
  local_4c = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_48,&local_34,&local_4c,0);
  plVar1 = (long *)CONCAT44(uStack_44,local_48);
  if (plVar1 != (long *)0x0) {
    if (((*PTR_DAT_04bc2d80 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2d80), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc2d78 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2d80);
    }
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bc2d78);
    if ((uVar2 & 1) == 0) {
      local_3e = '\0';
    }
  }
  if (((CONCAT44(uStack_44,local_48) == 0) || (local_40 == '\0')) || (local_3e == '\0')) {
    fVar6 = (float)((ulong)local_30 >> 0x20);
  }
  else {
    lVar4 = *(long *)(CONCAT44(uStack_44,local_48) + 0x68);
    local_30 = *(undefined8 *)(lVar4 + 0x278);
    fVar6 = *(float *)(lVar4 + 0x280);
    lVar4 = FUN_0251e98c(1);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x1320) + 0xf0))(lVar4 + 0x1320);
    local_28 = fVar6 + *pfVar3 + 10.0;
    fVar6 = (float)FUN_016e026c(0,&local_30,0,0);
    local_30 = CONCAT44(fVar6,(float)local_30);
  }
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x1982) = (int)((float)local_30 * 999.99994);
  iVar5 = (int)(fVar6 * 4.0);
  if (0x7ffe < iVar5) {
    iVar5 = 0x7fff;
  }
  if (iVar5 < -0x7fff) {
    iVar5 = -0x8000;
  }
  *(short *)(param_1 + 0x1986) = (short)iVar5;
  *(int *)(param_1 + 0x1988) = (int)(local_28 * 999.99994);
  *(undefined2 *)(param_1 + 0x1980) = local_24._2_2_;
  local_48 = 0xe3;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar4,0xe3);
  return;
}

