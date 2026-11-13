
uint FUN_01251760(undefined8 param_1,byte *param_2,long param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined *local_40;
  uint local_38;
  uint local_34;
  byte local_14 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
LAB_0125188c:
    local_40 = PTR_DAT_04bbbad8 + 0x10;
    local_38 = *(uint *)(param_3 + 8);
    local_34 = *(uint *)(param_3 + 0xc);
    if ((local_38 & 1) != 0) {
      local_38 = local_38 - 1;
    }
    if ((local_34 & 1) != 0) {
      local_34 = local_34 - 1;
    }
    uVar5 = FUN_011e30f0(param_2,&local_40);
    if ((uVar5 & 1) == 0) {
      local_14[0] = *param_2;
      if (7 < local_14[0]) {
        local_14[0] = 0xff;
      }
      uVar4 = FUN_01251510(param_1,local_14,param_4 & 1);
      goto LAB_012518f8;
    }
  }
  else {
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
    if (0xff < (uint)(int)sVar3) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar6 >> 0x11 & 1) == 0) ||
         (uVar4 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         DAT_0534f408 <= uVar4)) ||
        (puVar6 = *(uint **)(DAT_0534f410 + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0)) ||
       (uVar4 = *puVar6, uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4)) goto LAB_0125188c;
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    if (((*puVar7 == 0) || (uVar4 = puVar7[1], uVar4 == 0)) || ((ulong)(ushort)puVar7[2] == 0))
    goto LAB_0125188c;
    lVar1 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
    if (lVar1 == 0) goto LAB_0125188c;
    uVar2 = 0;
    if ((ulong)uVar4 != 0) {
      uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
    }
    if (*puVar7 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0e98 <= uVar2) ||
       (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar2 * 2) != 1)) goto LAB_0125188c;
  }
  uVar4 = 1;
LAB_012518f8:
  return uVar4 & 1;
}

