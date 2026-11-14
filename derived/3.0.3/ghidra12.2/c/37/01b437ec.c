
bool FUN_01b437ec(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  char local_3c8 [4];
  undefined2 local_3c4 [46];
  undefined1 local_368;
  undefined1 local_30c;
  undefined8 local_308;
  undefined4 local_300;
  undefined1 local_2fc;
  char local_2f8;
  undefined1 auStack_2f6 [672];
  ushort local_56;
  undefined2 local_54;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*(undefined4 *)(param_1 + 8)), lVar5 == 0)) {
    return false;
  }
  if ((*(long **)(lVar5 + 0x17bb0) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x17bb0), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  local_3c4[0] = 0;
  local_368 = 0;
  local_30c = 0;
  local_308 = 0xfffe00000000;
  local_300 = 0;
  FUN_0277d4ac((long)&local_308 + 4);
  local_2fc = 0;
  local_2f8 = '\0';
  memset(auStack_2f6,0,0x2a2);
  local_3c8[0] = '\0';
  local_54 = 0xfffe;
  uVar7 = FUN_01b4316c(param_1,local_3c4,local_3c8,
                       *(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90),param_4);
  bVar2 = false;
  if ((uVar7 & 1) == 0) goto LAB_01b4397c;
  if (local_2f8 == '\0') {
    uVar7 = FUN_027aef1c(local_3c4,0);
    bVar2 = false;
    if ((uVar7 & 1) == 0) goto LAB_01b4397c;
  }
  else {
    uVar4 = FUN_027af0b0(local_3c4,0);
    bVar2 = false;
    lVar8 = *(long *)PTR_DAT_04bb4788;
    uVar1 = (uint)local_56 - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar1) goto LAB_01b4397c;
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar1 * 8) == 0 ||
        ((uVar4 ^ 0xffffffff) & 1) != 0) {
      bVar2 = false;
      goto LAB_01b4397c;
    }
  }
  lVar8 = FUN_01b48c40(local_3c4,0,param_2);
  bVar2 = lVar8 != 0;
  if (local_3c8[0] != '\0') {
    FUN_01b40a60(local_3c4,*(long *)(lVar5 + 0x17b98) + *(long *)(lVar5 + 0x17b90),param_3);
  }
LAB_01b4397c:
  if ((uVar3 & 1) != 0) {
    return bVar2;
  }
  if (*(long *)(lVar5 + 0x17bb0) == 0) {
    return bVar2;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x17bb0) + 8);
  if (puVar6 == (undefined8 *)0x0) {
    return bVar2;
  }
  (**(code **)*puVar6)();
  return bVar2;
}

