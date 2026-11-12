
uint FUN_00b95398(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
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
         (puVar4 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar4 != (uint *)0x0)) {
        uVar5 = 0;
        uVar3 = *puVar4;
        if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          uVar5 = 0;
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_00b954e4;
              }
            }
            uVar5 = 0;
          }
        }
LAB_00b954e4:
        if (uVar5 != 0) {
          uVar3 = 0;
          goto LAB_00b955bc;
        }
        uVar3 = *puVar4;
        if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_00b9559c:
          uVar3 = 0;
        }
        else {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          if (((*puVar6 == 0) || (uVar3 = puVar6[1], uVar3 == 0)) || ((ulong)(ushort)puVar6[2] == 0)
             ) goto LAB_00b9559c;
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 == 0) goto LAB_00b9559c;
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((DAT_05327190 <= uVar1) ||
             (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar3 = (uint)uVar5,
             0x13d < uVar5)) goto LAB_00b9559c;
        }
        uVar3 = (uint)(8 < uVar3) | 0x43U >> (ulong)(uVar3 & 0x1f);
        goto LAB_00b955bc;
      }
    }
  }
  uVar3 = 0;
LAB_00b955bc:
  return uVar3 & 1;
}

