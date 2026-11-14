
void FUN_01c741cc(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined6 uStack_48;
  undefined1 uStack_42;
  undefined1 local_41;
  undefined6 uStack_40;
  undefined1 uStack_3a;
  byte local_39;
  undefined8 local_38;
  undefined1 uStack_11;
  
  uVar7 = (uint)local_38;
  lVar8 = *(long *)(param_1 + 0x50);
  if (lVar8 == 0) {
LAB_01c742fc:
    if (*(uint *)(param_1 + 0xb0) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a430c8)[*(uint *)(param_1 + 0xb0)])(&local_68,param_1 + 0x58);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  if (*(int *)(lVar8 + 0x564) != 2) {
    if (*(int *)(lVar8 + 0x564) != 1) goto LAB_01c742fc;
    if (*(uint *)(param_1 + 0xb0) != 0xffffffff) {
      (*(code *)(&PTR_LAB_04a430c8)[*(uint *)(param_1 + 0xb0)])
                (&local_68,(undefined8 *)(param_1 + 0x58));
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 1;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(lVar8 + 0x560);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar8 + 0x530);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar8 + 0x534);
    if (*(uint *)(lVar8 + 0x558) == 0xffffffff) {
      *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
    }
    else {
      local_68 = param_1 + 100;
      (*(code *)(&PTR_LAB_04a430e0)[*(uint *)(lVar8 + 0x558)])(&local_68,local_68,lVar8 + 0x538);
    }
    uVar4 = *(undefined4 *)(lVar8 + 0x55c);
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(undefined4 *)(param_1 + 0x88) = uVar4;
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x1a0);
    goto LAB_01c74498;
  }
  if (*(char *)(lVar8 + 0x370) == '\0') goto LAB_01c742fc;
  uStack_40 = 0;
  uStack_3a = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_42 = 0;
  local_41 = 0;
  local_58 = 0;
  local_38 = (ulong)(uint)local_38;
  if (*(char *)(lVar8 + 0x348) == '\0') {
    memset((void *)(lVar8 + 0x218),0,0x130);
  }
  else if (0xfffffffd < *(byte *)(lVar8 + 0x228) - 4) {
    if (*(byte *)(lVar8 + 0x228) == 3) {
      if (*(long *)(lVar8 + 0x220) == 0x39) {
        uVar6 = *(undefined8 *)(lVar8 + 0x249);
        uVar3 = *(undefined8 *)(lVar8 + 0x251);
        uStack_48 = (undefined6)uVar6;
        uStack_42 = (undefined1)((ulong)uVar6 >> 0x30);
        local_41 = (undefined1)((ulong)uVar6 >> 0x38);
        uStack_40 = (undefined6)uVar3;
        uStack_3a = (undefined1)((ulong)uVar3 >> 0x30);
        local_39 = (byte)((ulong)uVar3 >> 0x38);
        local_38 = *(ulong *)(lVar8 + 0x259);
        local_68 = *(long *)(lVar8 + 0x229);
        uStack_60 = *(undefined8 *)(lVar8 + 0x231);
LAB_01c74378:
        local_58 = *(undefined8 *)(lVar8 + 0x239);
        local_50 = *(undefined8 *)(lVar8 + 0x241);
        FUN_00a7f6d4(&local_58);
      }
    }
    else if (*(long *)(lVar8 + 0x220) == 0x35) {
      uVar6 = *(undefined8 *)(lVar8 + 0x249);
      uVar3 = *(undefined8 *)(lVar8 + 0x251);
      uStack_48 = (undefined6)uVar6;
      uStack_42 = (undefined1)((ulong)uVar6 >> 0x30);
      local_41 = (undefined1)((ulong)uVar6 >> 0x38);
      uStack_40 = (undefined6)uVar3;
      uStack_3a = (undefined1)((ulong)uVar3 >> 0x30);
      local_39 = (byte)((ulong)uVar3 >> 0x38);
      local_68 = *(long *)(lVar8 + 0x229);
      uStack_60 = *(undefined8 *)(lVar8 + 0x231);
      local_38 = (ulong)CONCAT22((short)(uVar7 >> 0x10),*(undefined2 *)(lVar8 + 0x259));
      goto LAB_01c74378;
    }
  }
  if (*(uint *)(param_1 + 0xb0) != 0xffffffff) {
    (*(code *)(&PTR_LAB_04a430c8)[*(uint *)(param_1 + 0xb0)])
              (&uStack_11,(undefined8 *)(param_1 + 0x58));
  }
  lVar8 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(int *)(lVar8 + 0x564) == 2) {
    uVar7 = *(uint *)(lVar8 + 0x530);
  }
  else {
    uVar7 = 0;
    *(undefined4 *)(lVar8 + 0x530) = 0;
    *(undefined4 *)(lVar8 + 0x564) = 2;
  }
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(ulong *)(param_1 + 0x7a) = CONCAT62(uStack_40,CONCAT11(local_41,uStack_42));
  *(uint *)(param_1 + 0x58) = uVar7;
  *(uint *)(param_1 + 0x5c) = (uint)(byte)local_38;
  *(ulong *)(param_1 + 0x74) = CONCAT17(local_41,CONCAT16(uStack_42,uStack_48));
  *(uint *)(param_1 + 0x60) = (uint)local_38._1_1_;
  *(undefined8 *)(param_1 + 100) = local_58;
  *(undefined8 *)(param_1 + 0x6c) = local_50;
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(uint *)(param_1 + 0x88) = (uint)local_39;
  if (*(char *)(*DAT_05351408 + 0x700) == '\0') {
LAB_01c74480:
    uVar6 = 0;
    cVar5 = *(char *)(param_1 + 0xa0);
  }
  else {
    puVar1 = (undefined8 *)(*DAT_05351408 + 0x1a8);
    puVar2 = puVar1 + (ulong)uVar7 * 0x39;
    if (2 < uVar7) {
      puVar2 = puVar1;
    }
    if (*(char *)(puVar2 + 0x38) == '\0') goto LAB_01c74480;
    uVar6 = *puVar2;
    cVar5 = *(char *)(param_1 + 0xa0);
  }
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  *(undefined8 *)(param_1 + 0x98) = uVar6;
LAB_01c74498:
  lVar8 = param_1 + 0x58;
  if (*(int *)(param_1 + 0xb0) != 1) {
    lVar8 = 0;
  }
  *(undefined4 *)(lVar8 + 0x50) = 7;
  return;
}

