
byte FUN_0170dc74(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_48 = (uint *)0x0;
      local_50 = *param_1;
      uStack_4c = param_1[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar4 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 == 0) {
LAB_0170dd9c:
        puVar7 = (uint *)0x0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0170dd9c;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_1);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_0170dd9c;
        puVar7 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar7 != (uint *)0x0) {
          local_48 = puVar7;
        }
      }
      bVar3 = FUN_01af8a5c(&local_58);
      if (((bVar3 & 1) == 0) || ((param_2 & 1) == 0)) goto LAB_0170dd80;
      if (puVar7 == (uint *)0x0) {
        uVar5 = 0xbc;
      }
      else {
        uVar4 = *puVar7;
        uVar5 = 0;
        if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
          puVar6 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar5 = 0;
          if (*puVar6 != 0) {
            uVar4 = puVar6[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar8) / (ulong)uVar4);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_0170de48;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_0170de48:
      bVar3 = uVar5 == 0x6d;
      goto LAB_0170dd80;
    }
  }
  bVar3 = 0;
LAB_0170dd80:
  return bVar3 & 1;
}

