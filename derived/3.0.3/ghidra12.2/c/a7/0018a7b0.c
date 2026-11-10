
undefined8 FUN_0018a7b0(uint *param_1,uint *param_2,ulong *param_3,undefined8 param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong *__s2;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_58;
  ulong *local_50;
  undefined8 uStack_48;
  
  lVar5 = 0;
  do {
    pcVar1 = (char *)((long)param_3 + lVar5);
    lVar5 = lVar5 + 1;
  } while (*pcVar1 != '\0');
  puVar7 = *(ulong **)(param_2 + 2);
  uStack_48 = 0x405000000000000;
  uVar6 = (ulong)*param_2;
  local_58 = (ulong)((int)lVar5 - 1);
  puVar8 = puVar7;
  if (*param_2 != 0) {
    local_50 = param_3;
    do {
      uVar2 = (uint)local_58;
      if ((uStack_48 & 0x1000000000000000) != 0) {
        uVar2 = 0x15 - uStack_48._5_1_;
      }
      uVar3 = (uint)*puVar8;
      if ((*(ushort *)((long)puVar8 + 0x16) & 0x1000) != 0) {
        uVar3 = 0x15 - *(byte *)((long)puVar8 + 0x15);
      }
      if (uVar2 == uVar3) {
        puVar7 = local_50;
        if ((uStack_48 & 0x1000000000000000) != 0) {
          puVar7 = &local_58;
        }
        __s2 = (ulong *)puVar8[1];
        if ((*(ushort *)((long)puVar8 + 0x16) & 0x1000) != 0) {
          __s2 = puVar8;
        }
        if ((puVar7 == __s2) || (iVar4 = memcmp(puVar7,__s2,(ulong)uVar2), iVar4 == 0)) break;
        puVar7 = *(ulong **)(param_2 + 2);
        uVar6 = (ulong)*param_2;
      }
      puVar8 = puVar8 + 6;
    } while (puVar8 != puVar7 + uVar6 * 6);
  }
  if ((puVar8 == (ulong *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x30)) ||
     ((*(ushort *)((long)puVar8 + 0x2e) >> 3 & 1) == 0)) {
    return 0;
  }
  *(bool *)param_4 = *(ushort *)((long)puVar8 + 0x2e) == 10;
  return 1;
}

