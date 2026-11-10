
bool FUN_001551d0(long param_1,long param_2,byte *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  
  for (lVar5 = 0;
      ((cVar2 = *(char *)(param_1 + lVar5), cVar2 != '\0' && (cVar2 != '=')) && ((int)lVar5 != 0xff)
      ); lVar5 = lVar5 + 1) {
    *(char *)(param_2 + lVar5) = cVar2;
  }
  *(undefined1 *)(param_2 + lVar5) = 0;
  cVar2 = *(char *)(param_1 + lVar5);
  if (cVar2 == '=') {
    pbVar6 = (byte *)(param_1 + lVar5 + 1);
    bVar1 = *pbVar6;
    if (bVar1 == 0x22) {
      pbVar6 = (byte *)(param_1 + lVar5 + 2);
    }
    bVar7 = *pbVar6;
    if (bVar7 != 0) {
      bVar3 = false;
      iVar8 = 0x3ff;
      do {
        if (iVar8 == 0) break;
        if (bVar7 < 0x22) {
          iVar4 = 0;
          if ((bVar7 != 10) && (bVar7 != 0xd)) goto LAB_001552a4;
        }
        else {
          if (bVar7 == 0x22) {
            if ((bool)(bVar1 == 0x22 & (bVar3 ^ 1U))) {
              bVar3 = false;
              iVar4 = 0;
              goto LAB_001552b0;
            }
LAB_001552a4:
            bVar3 = false;
          }
          else {
            if (bVar7 == 0x2c) {
              if (bVar1 != 0x22) {
                iVar4 = 0;
                goto LAB_001552b0;
              }
              goto LAB_001552a4;
            }
            if ((bVar7 != 0x5c) || (bVar3)) goto LAB_001552a4;
            bVar3 = true;
            bVar7 = 0x5c;
          }
          *param_3 = bVar7;
          param_3 = param_3 + 1;
          iVar4 = iVar8 + -1;
        }
LAB_001552b0:
        iVar8 = iVar4;
        pbVar6 = pbVar6 + 1;
        bVar7 = *pbVar6;
      } while (bVar7 != 0);
    }
    *param_3 = 0;
    *param_4 = (long)pbVar6;
  }
  return cVar2 == '=';
}

