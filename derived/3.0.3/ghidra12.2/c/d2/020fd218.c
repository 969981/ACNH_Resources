
void FUN_020fd218(byte *param_1,undefined4 param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  ushort uVar6;
  uint *puVar7;
  undefined8 uVar8;
  undefined *local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_34 [7];
  undefined1 local_2d;
  undefined4 local_28;
  undefined4 local_24;
  
  param_1[1] = param_3;
  local_38 = 8;
  local_2d = 0;
  local_48 = PTR_DAT_04bb3768 + 0x10;
  *param_1 = (byte)param_2;
  local_40 = local_34;
  local_34[0] = 0;
  local_28 = param_2;
  FUN_038d1270(&local_48,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(&local_48,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
  }
  uVar8 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(local_48 + 0x18))(&local_48);
  local_24 = FUN_006bd550(local_40,0);
  puVar4 = (uint *)FUN_0079e770(uVar8,&local_24);
  if (puVar4 == (uint *)0x0) {
    param_1[0] = 0x23;
    param_1[1] = 0;
    bVar5 = 8;
    goto LAB_020fd384;
  }
  uVar3 = *puVar4;
  uVar6 = 0;
  if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
    puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar6 = 0;
    if (*puVar7 != 0) {
      uVar3 = puVar7[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bb6a50) &&
             (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bb6a50 + 8) + (long)(int)uVar2 * 2), uVar6 < 8
             )) goto LAB_020fd36c;
        }
      }
      uVar6 = 0;
    }
  }
LAB_020fd36c:
  bVar5 = (byte)uVar6;
LAB_020fd384:
  param_1[2] = bVar5;
  return;
}

