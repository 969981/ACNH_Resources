
ulong FUN_013ef41c(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  
  uVar2 = (param_4 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if (uVar2 < *(uint *)(param_1 + 0x328)) {
    puVar6 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar2 * 8);
    uVar5 = 0;
    if (puVar6 == (uint *)0x0) goto LAB_013ef4f0;
    uVar2 = *puVar6;
    if (uVar2 != 0 && puVar6 != (uint *)(ulong)uVar2) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
      if (((*puVar7 != 0) && (uVar2 = puVar7[1], uVar2 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar3 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar7 + lVar3 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar3 != 0) {
          uVar1 = 0;
          if ((ulong)uVar2 != 0) {
            uVar1 = (uint)((ulong)((long)puVar6 - lVar3) / (ulong)uVar2);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051b69d0) &&
             (uVar5 = *(ushort *)(DAT_051b69d8 + (long)(int)uVar1 * 2), uVar5 < 7))
          goto LAB_013ef4f0;
        }
      }
    }
  }
  uVar5 = 0;
LAB_013ef4f0:
  switch(uVar5) {
  case 0:
  case 1:
  case 2:
  case 3:
    lVar3 = FUN_013ef5e0(param_1,param_4,param_5,1);
    if (lVar3 != 0) {
      uVar4 = FUN_013ef740(param_1,lVar3,param_2,param_3);
      return uVar4;
    }
    break;
  case 5:
    lVar3 = FUN_013ef5e0(param_1,param_4,param_5,1);
    if ((lVar3 != 0) && (uVar4 = FUN_013ef740(param_1,lVar3,param_2,param_3), (uVar4 & 0xffff) != 0)
       ) {
      return uVar4;
    }
  case 4:
  case 6:
    lVar3 = FUN_013f1ba8(param_1,param_4,param_5,0);
    if (lVar3 != 0) {
      uVar4 = FUN_013f1d00(param_1,lVar3,param_2,param_3);
      return uVar4;
    }
    break;
  default:
  }
  return 0;
}

