
undefined4 FUN_02057c20(long param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined4 local_70;
  char local_6c [7];
  undefined1 local_65;
  undefined4 local_44;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return 7;
  }
  if (((*(byte *)(param_1 + 0x2cc) & 1) != 0) ||
     (local_80 = (undefined *)CONCAT44((int)((ulong)local_80 >> 0x20),1),
     (*(byte *)(param_1 + 0x2cc) >> 1 & 1) != 0)) {
    return 6;
  }
  iVar3 = FUN_02057ea0(param_1);
  puVar2 = PTR_DAT_04bb9e38;
  if (iVar3 < 0) {
    return 2;
  }
  local_65 = 0;
  iVar3 = 0;
  local_6c[0] = '\0';
  local_78 = local_6c;
  local_70 = 8;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  do {
    FUN_038d1270(&local_80,"-----");
    uVar4 = (ulong)*(byte *)(param_1 + 0x90 + (long)iVar3 * 0x38 + 4);
    if (uVar4 < 0x23) {
      FUN_038d1270(&local_80,"%s%02d",*(undefined8 *)(puVar2 + uVar4 * 8 + 0xb0),
                   *(undefined1 *)(param_1 + 0x90 + (long)iVar3 * 0x38 + 5));
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    (**(code **)(local_80 + 0x18))(&local_80);
    if (pcVar7 == local_78) {
      return 3;
    }
    cVar1 = *(char *)param_2[1];
    if (cVar1 == *local_78) {
      if (cVar1 == '\0') {
        return 3;
      }
      lVar6 = 0x7fffe;
      pcVar7 = local_78;
      pcVar5 = (char *)param_2[1];
      while( true ) {
        if (pcVar5[1] != pcVar7[1]) break;
        if (pcVar5[1] == '\0') {
          return 3;
        }
        if (pcVar5[2] != pcVar7[2]) break;
        if (pcVar5[2] == '\0') {
          return 3;
        }
        if ((lVar6 == 0) || (cVar1 = pcVar5[3], cVar1 != pcVar7[3])) break;
        lVar6 = lVar6 + -3;
        pcVar7 = pcVar7 + 3;
        pcVar5 = pcVar5 + 3;
        if (cVar1 == '\0') {
          return 3;
        }
      }
    }
    iVar3 = iVar3 + 1;
    if (iVar3 == 10) {
      local_90 = PTR_DAT_04bb2010 + 0x10;
      local_88 = 0;
      uVar4 = FUN_02058020(&local_90);
      if ((uVar4 & 1) == 0) {
        return 4;
      }
      *(undefined4 *)(param_1 + 0x2c4) = 1;
      *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) | 1;
      local_44 = 0x80023;
      FUN_020fd3a0(&local_44,param_2);
      FUN_020f27f0(0,(ushort)local_44 >> 8 | (ushort)local_44 << 8,local_88 & 0xffffffff,
                   local_88._4_4_,0);
      return *(undefined4 *)(param_1 + 0x2c4);
    }
  } while( true );
}

