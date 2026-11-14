
uint FUN_01ae93bc(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  uVar5 = 0;
  if (puVar6 != (uint *)0x0) {
    uVar3 = *puVar6;
    if (uVar3 != 0 && puVar6 != (uint *)(ulong)uVar3) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
      if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326d48) &&
             (uVar5 = *(ushort *)(DAT_05326d50 + (long)(int)uVar2 * 2), uVar5 < 0x52))
          goto LAB_01ae9454;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01ae9454:
  switch(uVar5) {
  case 1:
  case 7:
  case 8:
    bVar4 = param_2 == 0;
    break;
  case 2:
  case 9:
    uVar3 = 0xbU >> (ulong)(param_2 & 0xf) & 1;
    if (3 < param_2) {
      uVar3 = 0;
    }
    return uVar3;
  case 3:
    return 1;
  case 4:
    bVar4 = true;
    if (param_2 != 0) {
      bVar4 = param_2 == 3;
    }
    break;
  case 5:
  case 6:
    bVar4 = (param_2 & 0xfffffffd) == 0;
    break;
  default:
    return 0;
  }
  return (uint)bVar4;
}

