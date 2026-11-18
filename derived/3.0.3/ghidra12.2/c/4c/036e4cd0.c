
uint FUN_036e4cd0(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  
  iVar1 = *(int *)(param_1 + 0x1a48);
  if (iVar1 == 3) {
    return 1;
  }
  if (iVar1 == 2) {
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar10 = (char *)param_2[1];
    (**(code **)(*(long *)(param_1 + 0x1a50) + 0x18))(param_1 + 0x1a50);
    pcVar7 = *(char **)(param_1 + 0x1a58);
    if (pcVar10 != pcVar7) {
      cVar2 = *(char *)param_2[1];
      if (cVar2 != *pcVar7) goto LAB_036e4e1c;
      if (cVar2 != '\0') {
        pcVar10 = (char *)param_2[1] + 2;
        uVar3 = 0;
        do {
          uVar8 = uVar3;
          if (uVar8 == 0x80000) goto LAB_036e4e5c;
          if (pcVar10[uVar8 - 1] != pcVar7[uVar8 + 1]) {
            pcVar10 = (char *)0x0;
            goto LAB_036e4e5c;
          }
          if (pcVar10[uVar8 - 1] == '\0') goto LAB_036e4e14;
          if (pcVar10[uVar8] != pcVar7[uVar8 + 2]) {
            pcVar10 = (char *)0x0;
            uVar8 = uVar8 | 1;
            goto LAB_036e4e5c;
          }
          uVar3 = uVar8 + 2;
        } while (pcVar10[uVar8] != '\0');
        uVar8 = uVar8 + 1;
LAB_036e4e14:
        pcVar10 = (char *)0x1;
LAB_036e4e5c:
        return (uint)(uVar8 < 0x80000) & (uint)pcVar10;
      }
    }
    uVar5 = 1;
  }
  else {
    if (((iVar1 == 1) && (sVar4 = FUN_0376baa0(param_2), sVar4 != -1)) &&
       (*(int *)(DAT_05abbc58 + 0xe0) != 0)) {
      lVar6 = 0;
      lVar9 = (long)*(int *)(DAT_05abbc58 + 0xe0) << 3;
      do {
        if (*(short *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar6 * 8) + 0x38) == sVar4) {
          return *(ushort *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar6 * 8) + 0x114) >> 5 & 1
          ;
        }
        lVar6 = lVar6 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
LAB_036e4e1c:
    uVar5 = 0;
  }
  return uVar5;
}

