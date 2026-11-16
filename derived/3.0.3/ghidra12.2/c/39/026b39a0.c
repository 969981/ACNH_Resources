
undefined8 FUN_026b39a0(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar5 != (uint *)0x0)) {
        uVar3 = *puVar5;
        uVar4 = 0;
        if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
          uVar4 = 0;
          if (*puVar6 != 0) {
            uVar3 = puVar6[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar7 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar7 = 0x1c;
              }
              lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar7 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 < 0xbd))
                goto LAB_026b3b30;
              }
            }
            uVar4 = 0;
          }
        }
        goto LAB_026b3b30;
      }
    }
  }
  uVar4 = 0xbc;
LAB_026b3b30:
  switch(uVar4) {
  case 0:
  case 1:
  case 2:
  case 0x49:
  case 0x56:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x77:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
    return 2;
  default:
    return 0;
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1c:
  case 0x32:
    return 1;
  }
}

