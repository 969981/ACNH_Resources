
ushort FUN_020fd7d8(byte *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined *local_40;
  undefined1 *local_38;
  undefined4 local_30;
  undefined1 local_2c [7];
  undefined1 local_25;
  undefined4 local_4;
  
  if (0x22 < *param_1) {
    return 8;
  }
  local_30 = 8;
  local_25 = 0;
  local_38 = local_2c;
  local_2c[0] = 0;
  local_40 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_40,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_40,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_40 + 0x18))(&local_40);
  local_4 = FUN_006bd550(local_38,0);
  puVar5 = (uint *)FUN_0079e770(uVar7,&local_4);
  if (puVar5 == (uint *)0x0) {
    return 8;
  }
  uVar3 = *puVar5;
  if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    if ((*puVar6 != 0) && ((uVar3 = puVar6[1], uVar3 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bb6a50) &&
           (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar2 * 2), uVar4 < 8))
        {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

