
long FUN_0068f970(long *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  int iVar7;
  char *pcVar8;
  
  lVar2 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 == 0) {
    return lVar2;
  }
  lVar3 = lVar2 + (long)iVar7 * 0x18;
  uVar4 = (uint)param_2[1];
  if ((int)uVar4 < 1) {
    lVar5 = (long)iVar7 * 0x18;
    do {
      if (*(ushort *)**(undefined8 **)(lVar2 + 0x10) == uVar4) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  else {
    do {
      if (*(ushort *)**(undefined8 **)(lVar2 + 0x10) == uVar4) {
        puVar6 = (ushort *)**(undefined8 **)(lVar2 + 0x10) + 1;
        pcVar8 = (char *)*param_2;
        iVar7 = uVar4 + 1;
        while( true ) {
          cVar1 = *pcVar8;
          if (cVar1 == '\0' || cVar1 != (char)*puVar6) break;
          iVar7 = iVar7 + -1;
          pcVar8 = pcVar8 + 1;
          puVar6 = (ushort *)((long)puVar6 + 1);
          if (iVar7 < 2) {
            return lVar2;
          }
        }
        if (cVar1 == (char)*puVar6) {
          return lVar2;
        }
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar3);
  }
  return lVar3;
}

