
char * FUN_0011a890(undefined8 param_1,long param_2,char *param_3,long param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if ((param_5 & 0xff) != 0) {
    uVar11 = (ulong)*(byte *)(param_2 + 0x20) << 0x18 | (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
             (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23);
    bVar5 = *(byte *)(param_2 + 0x2f);
    uVar6 = *(undefined1 *)(param_2 + 0x2e);
    pcVar2 = (char *)(param_2 + uVar11);
    uVar12 = (ulong)(uint)CONCAT11(uVar6,bVar5);
    lVar10 = 0;
    if (uVar12 != 0) {
      lVar10 = ((long)param_3 - (long)pcVar2) / (long)uVar12;
    }
    if ((long)param_3 - (long)pcVar2 == lVar10 * uVar12) {
      pcVar4 = param_3;
      if (pcVar2 + (int)((uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),
                                        *(undefined1 *)(param_2 + 0x2b)) *
                         (uint)CONCAT11(uVar6,bVar5) + -1) <= param_3) {
        pcVar4 = pcVar2;
      }
      if (*pcVar4 != '\0') {
        lVar10 = 0;
        if ((ulong)CONCAT11(uVar6,bVar5) != 0) {
          lVar10 = ((long)pcVar4 - (long)pcVar2) / (long)(ulong)CONCAT11(uVar6,bVar5);
        }
        sVar9 = FUN_00119480(param_1,param_2,lVar10);
        if (sVar9 < 0) {
          return (char *)0x0;
        }
      }
      param_3 = pcVar4 + 1;
      *pcVar4 = '\0';
      uVar6 = *(undefined1 *)(param_2 + 0x2e);
      bVar5 = *(byte *)(param_2 + 0x2f);
      uVar11 = (ulong)*(byte *)(param_2 + 0x20) << 0x18 | (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
               (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23);
    }
    uVar8 = CONCAT11(uVar6,bVar5);
    lVar10 = (long)param_3 - (param_2 + uVar11);
    iVar7 = 0;
    if ((ulong)uVar8 != 0) {
      iVar7 = (int)(lVar10 / (long)(ulong)uVar8);
    }
    uVar1 = (uint)bVar5 + (iVar7 * (uint)uVar8 - (int)lVar10);
    uVar3 = param_5;
    if ((uVar1 & 0xff) <= (param_5 & 0xff)) {
      uVar3 = uVar1;
    }
    FUN_00100660(param_3,param_4,uVar3 & 0xff);
    param_5 = param_5 - uVar3;
    param_3 = param_3 + ((ulong)uVar3 & 0xff);
    if ((param_5 & 0xff) != 0) {
      param_4 = param_4 + ((ulong)uVar3 & 0xff);
      do {
        pcVar2 = (char *)(param_2 +
                         ((ulong)*(byte *)(param_2 + 0x20) << 0x18 |
                          (ulong)*(byte *)(param_2 + 0x21) << 0x10 |
                          (ulong)*(byte *)(param_2 + 0x22) << 8 | (ulong)*(byte *)(param_2 + 0x23)))
        ;
        if (pcVar2 + (int)((uint)CONCAT11(*(undefined1 *)(param_2 + 0x2a),
                                          *(undefined1 *)(param_2 + 0x2b)) *
                           (uint)CONCAT11(*(undefined1 *)(param_2 + 0x2e),
                                          *(undefined1 *)(param_2 + 0x2f)) + -1) <= param_3) {
          param_3 = pcVar2;
        }
        if (*param_3 != '\0') {
          uVar11 = (ulong)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(undefined1 *)(param_2 + 0x2f));
          lVar10 = 0;
          if (uVar11 != 0) {
            lVar10 = ((long)param_3 - (long)pcVar2) / (long)uVar11;
          }
          sVar9 = FUN_00119480(param_1,param_2,lVar10);
          if (sVar9 < 0) {
            return (char *)0x0;
          }
        }
        *param_3 = '\0';
        uVar1 = param_5;
        if ((uint)CONCAT11(*(undefined1 *)(param_2 + 0x2e),*(byte *)(param_2 + 0x2f)) <=
            (param_5 & 0xff)) {
          uVar1 = *(byte *)(param_2 + 0x2f) - 1;
        }
        FUN_00100660(param_3 + 1,param_4,uVar1 & 0xff);
        param_5 = param_5 - uVar1;
        param_3 = param_3 + 1 + ((ulong)uVar1 & 0xff);
        param_4 = param_4 + ((ulong)uVar1 & 0xff);
      } while ((param_5 & 0xff) != 0);
    }
  }
  return param_3;
}

