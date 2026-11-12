
undefined8 FUN_00699cc0(long *param_1,byte *param_2,char *param_3,ulong param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long local_38;
  
  bVar2 = *param_2;
  lVar9 = param_1[2];
  if (bVar2 != 0) {
    lVar7 = 1;
    do {
      if ((((9 < (byte)(bVar2 - 0x30)) && (0x19 < (byte)((bVar2 & 0xdf) + 0xbf))) && (bVar2 != 0x5f)
          ) && (bVar2 != 0x2d)) goto LAB_00699e20;
      bVar2 = param_2[lVar7];
      lVar7 = lVar7 + 1;
    } while (bVar2 != 0);
    if (lVar7 != 1) {
      lVar7 = param_1[1];
      pcVar1 = "&q%%5B%s%%5D%%5B%%5D=";
      if ((param_4 & 1) == 0) {
        pcVar1 = "&q%%5B%s%%5D=";
      }
      iVar4 = nn::util::SNPrintf((char *)(*param_1 + lVar9),lVar7 - lVar9,pcVar1,param_2);
      if ((ulong)(long)iVar4 < (ulong)(lVar7 - lVar9)) {
        uVar8 = 0;
        lVar7 = param_1[2] + (long)iVar4;
        param_1[2] = lVar7;
        cVar3 = *param_3;
        pcVar1 = param_3;
        while (uVar6 = (uint)uVar8, cVar3 != '\0') {
          if (uVar6 == 0x7ffffffe) {
            uVar8 = 0x7fffffff;
            goto LAB_00699de8;
          }
          if (pcVar1[1] == '\0') {
            uVar6 = uVar6 + 1;
            uVar8 = (ulong)uVar6;
            break;
          }
          uVar8 = uVar8 + 2;
          pcVar1 = param_3 + uVar8;
          cVar3 = *pcVar1;
        }
        if (uVar6 != 0) {
LAB_00699de8:
          local_38 = 0;
          uVar8 = FUN_00695ee0(&local_38,*param_1 + lVar7,param_1[1] - lVar7,param_3,
                               uVar8 & 0xffffffff);
          if ((uVar8 & 1) != 0) {
            uVar5 = 1;
            lVar9 = param_1[2] + local_38;
            goto LAB_00699e24;
          }
        }
      }
    }
  }
LAB_00699e20:
  uVar5 = 0;
LAB_00699e24:
  param_1[2] = lVar9;
  *(undefined1 *)(*param_1 + lVar9) = 0;
  return uVar5;
}

