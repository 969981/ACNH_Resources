
bool FUN_003e4a70(long *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  char local_2c0 [192];
  undefined1 auStack_200 [448];
  
  iVar4 = FUN_003dc30c(param_1 + 0x5d,param_2,1);
  if (-1 < iVar4) {
    *(undefined1 *)(param_1 + 0x6d) = 1;
    *(int *)((long)param_1 + 0x36c) = *(int *)((long)param_1 + 0x36c) + 1;
    lVar5 = FUN_003dd33c(param_1 + 0x5d,auStack_200,0x100,0);
    if (lVar5 == 0x100) {
      FUN_003b99a4(param_1 + 0x54,auStack_200);
      FUN_003b830c(param_1,param_1 + 0x54);
      (**(code **)(*param_1 + 0x28))(param_1);
      local_2c0[0] = '\0';
      sVar6 = strlen(param_2);
      iVar4 = (int)sVar6;
      if (0x27e < iVar4) {
        return iVar4 < 0x27f;
      }
      if (0 < iVar4) {
        uVar8 = sVar6 & 0xffffffff;
        do {
          uVar9 = uVar8 - 1 & 0xffffffff;
          cVar3 = param_2[uVar9];
          if ((cVar3 == '\\') || (cVar3 == '/')) {
            uVar7 = (uint)uVar8;
            if (0x27e < uVar7) {
              uVar7 = 0x27f;
            }
            iVar13 = uVar7 - 1;
            pcVar10 = param_2;
            if (iVar13 == 0) {
              pcVar12 = local_2c0;
            }
            else {
              pcVar11 = local_2c0;
              do {
                cVar2 = *pcVar10;
                pcVar12 = pcVar11;
                if (cVar2 == '\0') break;
                pcVar10 = pcVar10 + 1;
                iVar13 = iVar13 + -1;
                pcVar12 = pcVar11 + 1;
                *pcVar11 = cVar2;
                pcVar11 = pcVar12;
              } while (iVar13 != 0);
            }
            *pcVar12 = '\0';
            do {
              cVar2 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar2 != '\0');
            local_2c0[uVar9] = '\0';
            if ((cVar3 == '/') || (cVar3 == '\\')) break;
          }
          bVar1 = 1 < (long)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar1);
      }
      FUN_003b8d80(param_1,local_2c0);
      nn::util::SNPrintf((char *)(param_1 + 0x6e),0x27f,"%s",param_2);
      return iVar4 < 0x27f;
    }
  }
  return false;
}

