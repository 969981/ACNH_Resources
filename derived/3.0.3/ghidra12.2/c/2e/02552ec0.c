
bool FUN_02552ec0(byte *param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0xd0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0xd0), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0xb8) + *(long *)(lVar4 + 0xb0);
    if (*(char *)(lVar1 + 0xaf89) == '\0' || 7 < *(byte *)(lVar1 + 0xaf88)) {
      lVar8 = lVar1;
      if (((*(char *)(lVar1 + 0xaf8a) != '\0') && (uVar6 = FUN_016e5e90(), (uVar6 & 1) != 0)) &&
         (lVar8 = lVar1 + 0xaf90, (*(byte *)(lVar1 + 0xaf8b) & 0xfe) != 0)) {
        lVar8 = lVar1;
      }
    }
    else {
      lVar8 = lVar1 + (ulong)*(byte *)(lVar1 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar7 = (undefined4 *)FUN_026e85f0(lVar8);
    local_38 = *puVar7;
    uStack_34 = puVar7[1];
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0xd0) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0xd0) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    puVar2 = PTR_DAT_04bb43c0;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_38);
    if (*(long *)puVar2 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if (uVar3 < *(uint *)(lVar4 + 0x1d8)) {
        return *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0;
      }
    }
  }
  return false;
}

