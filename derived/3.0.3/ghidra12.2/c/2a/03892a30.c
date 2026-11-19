
void FUN_03892a30(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(char *)(param_1 + 0x518) != '\0') {
    if (0 < *(int *)(param_1 + 0x568)) {
      lVar4 = 0;
      puVar6 = *(undefined8 **)(param_1 + 0x578);
      do {
        puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x570) + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar7 = puVar6;
        *(undefined8 **)(param_1 + 0x578) = puVar7;
        puVar6 = puVar7;
      } while (lVar4 < *(int *)(param_1 + 0x568));
    }
    *(undefined4 *)(param_1 + 0x568) = 0;
    if (*(char *)(param_1 + 0x5a0) != '\0') {
      uVar3 = 0;
      do {
        uVar1 = uVar3;
        if (*(uint *)(param_1 + 0x508) <= uVar3) {
          uVar1 = 0;
        }
        uVar3 = uVar3 + 1;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x510) + (ulong)uVar1 * 0x10);
        *puVar6 = 0;
        *(undefined2 *)(puVar6 + 1) = 0;
      } while (uVar3 < *(byte *)(param_1 + 0x5a0));
    }
  }
  if (*(ushort *)(param_1 + 0x538) != 0) {
    uVar3 = *(ushort *)(param_1 + 0x538) + 1;
    uVar1 = uVar3 >> 1;
    if (uVar1 == 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar2 = uVar5;
        if (*(uint *)(param_1 + 0x520) <= uVar5) {
          uVar2 = 0;
        }
        *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar2) = 0xff;
        uVar2 = 0;
        if (uVar5 + 1 < *(uint *)(param_1 + 0x520)) {
          uVar2 = uVar5 + 1;
        }
        uVar5 = uVar5 + 2;
        *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar2) = 0xff;
      } while (uVar5 != (uVar1 & 0xfffe));
    }
    if ((uVar3 >> 1 & 1) != 0) {
      if (*(uint *)(param_1 + 0x520) <= uVar5) {
        uVar5 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x528) + (ulong)uVar5) = 0xff;
    }
  }
  *(undefined1 *)(param_1 + 0x518) = 0;
  return;
}

