
undefined8 FUN_00420870(uint *param_1,uint *param_2,long param_3,uint *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong *__s2;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong local_58;
  ulong *local_50;
  undefined8 uStack_48;
  
  local_50 = *(ulong **)(param_3 + 0x18);
  lVar6 = 0;
  do {
    pcVar1 = (char *)((long)local_50 + lVar6);
    lVar6 = lVar6 + 1;
  } while (*pcVar1 != '\0');
  puVar7 = *(ulong **)(param_2 + 2);
  uVar5 = (ulong)*param_2;
  uStack_48 = 0x405000000000000;
  local_58 = (ulong)((int)lVar6 - 1);
  puVar8 = puVar7;
  if (*param_2 != 0) {
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
        uVar5 = (ulong)*param_2;
      }
      puVar8 = puVar8 + 6;
    } while (puVar8 != puVar7 + uVar5 * 6);
  }
  if ((puVar8 == (ulong *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x30)) ||
     ((*(ushort *)((long)puVar8 + 0x2e) >> 4 & 1) == 0)) {
    return 0;
  }
  *param_4 = (uint)puVar8[3];
  return 1;
}

