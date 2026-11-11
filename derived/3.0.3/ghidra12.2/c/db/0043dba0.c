
undefined8 FUN_0043dba0(long *param_1,ulong *param_2,long param_3)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  char *local_78 [2];
  ulong local_68;
  
  if (*param_2 != 0) {
    uVar9 = 1;
    uVar5 = 0;
    do {
      uVar3 = uVar9;
      **(undefined8 **)(param_3 + uVar5 * 8) = 0;
      uVar9 = (ulong)((int)uVar3 + 1);
      uVar5 = uVar3;
    } while (uVar3 < *param_2);
  }
  lVar4 = *param_1;
  uVar7 = 0;
  lVar8 = lVar4 + -1;
  if (-1 < lVar8) {
    do {
      uVar6 = *(undefined8 *)(param_1[1] + lVar8 * 8 + 8);
      FUN_00427bc0(local_78,uVar6,&DAT_04c15460);
      pcVar2 = local_78[0];
      if ((local_68 & 1) != 0) {
        FUN_0043dd50(local_68 & 0xfffffffffffffffe);
      }
      if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) break;
      uVar7 = uVar7 + 1;
      if (*param_2 != 0) {
        uVar9 = 0;
        uVar5 = 1;
        do {
          uVar3 = FUN_00427110(uVar6,param_2[uVar9 + 1]);
          if ((uVar3 & 1) != 0) {
            **(long **)(param_3 + uVar9 * 8) = param_1[lVar8 + 2];
            param_1[lVar8 + 2] = 0;
            break;
          }
          bVar1 = uVar5 < *param_2;
          uVar9 = uVar5;
          uVar5 = (ulong)((int)uVar5 + 1);
        } while (bVar1);
      }
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    lVar4 = *param_1;
  }
  *param_1 = lVar4 - (ulong)uVar7;
  return 0;
}

