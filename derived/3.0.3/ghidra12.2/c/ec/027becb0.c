
uint FUN_027becb0(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if (uVar2 < *(uint *)(lVar7 + 0x1d8)) {
      uVar3 = 0;
      if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0) goto LAB_027beedc;
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      uVar2 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar1 == 0) {
LAB_027bee44:
        uVar2 = 0xbc;
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_027bee44;
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((*(uint *)(lVar6 + 0x1d8) <= uVar2) ||
           (puVar4 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8),
           puVar4 == (uint *)0x0)) goto LAB_027bee44;
        uVar3 = *puVar4;
        uVar2 = 0;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          uVar2 = 0;
          if (*puVar5 != 0) {
            uVar2 = puVar5[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar3 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar2);
                }
                if (*puVar5 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_05326ec0) &&
                   (uVar2 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar2 < 0xbd))
                goto LAB_027bee48;
              }
            }
            uVar2 = 0;
          }
        }
      }
LAB_027bee48:
      if ((((uVar2 == DAT_0558f600) || (uVar2 == DAT_0558f604)) || (uVar2 == DAT_0558f608)) ||
         (((uVar2 == DAT_0558f60c || (uVar2 == DAT_0558f610)) || (uVar2 == DAT_0558f614)))) {
        uVar3 = FUN_027bf130(param_1,param_2);
        uVar3 = uVar3 ^ 1;
        goto LAB_027beedc;
      }
    }
  }
  uVar3 = 0;
LAB_027beedc:
  return uVar3 & 1;
}

