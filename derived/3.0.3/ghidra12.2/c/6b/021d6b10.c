
ulong FUN_021d6b10(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_14;
  
  puVar2 = PTR_DAT_04bb4138;
  lVar7 = *(long *)PTR_DAT_04bb4138;
  if (lVar7 != 0) {
    local_14 = FUN_006bd550(param_1,0);
    lVar7 = FUN_0079e770(lVar7,&local_14);
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)puVar2;
      local_14 = FUN_006bd550(param_1,0);
      puVar3 = (uint *)FUN_0079e770(uVar8,&local_14);
      if (puVar3 == (uint *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar3;
        if (!(uVar5 == 0 || puVar3 == (uint *)(ulong)uVar5)) {
          puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar5);
          uVar5 = 0;
          if (*puVar6 == 0) goto LAB_021d6bd8;
          uVar5 = puVar6[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar7 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar3 - lVar7) / (ulong)uVar5);
              }
              if (*puVar6 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_04dda7e8) &&
                 (uVar5 = (uint)*(ushort *)(DAT_04dda7f0 + (long)(int)uVar1 * 2), uVar5 < 8))
              goto LAB_021d6bd8;
            }
          }
        }
        uVar5 = 0;
      }
LAB_021d6bd8:
      if (uVar5 < 8) {
        return (ulong)*(uint *)(&DAT_04057f00 + (long)(int)uVar5 * 4);
      }
      return 0;
    }
  }
  lVar7 = DAT_053f9928;
  if (DAT_053f9928 == 0) {
    return 0;
  }
  local_14 = FUN_006bd550(param_1,0);
  lVar7 = FUN_0079e4d0(lVar7,&local_14);
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = FUN_021d6da0(param_1);
  return uVar4;
}

