
undefined4 FUN_0220f3c4(long *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 local_24;
  
  if (((((param_2 & 1) == 0) && (pcVar5 = (char *)param_1[1], *pcVar5 == 'f')) && (pcVar5[1] == 'l')
      ) && (pcVar5[2] == 'g')) {
    return 3;
  }
  uVar7 = *(undefined8 *)PTR_DAT_04bb4138;
  (**(code **)(*param_1 + 0x18))(param_1);
  local_24 = FUN_006bd550(param_1[1],0);
  puVar3 = (uint *)FUN_0079e770(uVar7,&local_24);
  if (puVar3 == (uint *)0x0) {
    return 1;
  }
  uVar4 = *puVar3;
  if (uVar4 != 0 && puVar3 != (uint *)(ulong)uVar4) {
    puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar4);
    uVar4 = 0;
    if (*puVar6 == 0) goto LAB_0220f45c;
    uVar4 = puVar6[1];
    if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_04dda7e8) &&
           (uVar4 = (uint)*(ushort *)(DAT_04dda7f0 + (long)(int)uVar2 * 2), uVar4 < 8))
        goto LAB_0220f45c;
      }
    }
  }
  uVar4 = 0;
LAB_0220f45c:
  if (uVar4 < 8) {
    return *(undefined4 *)(&DAT_04058920 + (long)(int)uVar4 * 4);
  }
  return 1;
}

