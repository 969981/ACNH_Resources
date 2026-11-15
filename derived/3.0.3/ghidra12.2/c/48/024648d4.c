
void FUN_024648d4(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar6 = (uint *)&DAT_054f0958;
    }
    else {
      puVar6 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar6 = puVar6 + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  if ((*puVar6 >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1980) = *param_2;
    puVar3 = PTR_DAT_04bb43c0;
    uVar1 = *(undefined1 *)(param_2 + 1);
    *(undefined2 *)(param_1 + 0x1989) = 0;
    *(undefined1 *)(param_1 + 0x1988) = uVar1;
    lVar7 = *(long *)puVar3;
    uVar4 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 == 0) {
      uVar4 = 0xfc;
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar2 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      uVar4 = 0xfc;
      if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
         (uVar4 = 0xfc, *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        uVar4 = 0xfe;
      }
    }
    if (uVar4 < 0x149) {
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
      lVar7 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar7 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar7,uVar4);
    }
  }
  return;
}

