
void FUN_004d0210(long param_1,long *param_2,int param_3,int param_4)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_68 [4];
  byte local_64 [4];
  
  if (0 < param_3) {
    iVar3 = 0;
    do {
      local_68[0] = 0xff;
      plVar2 = *(long **)(param_1 + 8);
      if (*plVar2 < plVar2[1]) {
        memcpy(local_68,(void *)*plVar2,1);
        *plVar2 = *plVar2 + 1;
        uVar5 = (ulong)(local_68[0] >> 1) & 0x3f;
        iVar4 = (int)uVar5;
        bVar1 = local_68[0];
      }
      else {
        FUN_0049e700(plVar2,local_68,1);
        uVar5 = (ulong)(local_68[0] >> 1) & 0x3f;
        iVar4 = (int)uVar5;
        bVar1 = local_68[0];
      }
      if ((char)bVar1 < '\0') {
        uVar6 = 6;
        local_68[0] = bVar1;
        do {
          local_64[0] = 0xff;
          plVar2 = *(long **)(param_1 + 8);
          if (*plVar2 < plVar2[1]) {
            memcpy(local_64,(void *)*plVar2,1);
            *plVar2 = *plVar2 + 1;
          }
          else {
            FUN_0049e700(plVar2,local_64,1);
          }
          uVar5 = ((ulong)local_64[0] & 0x7f) << (uVar6 & 0x3f) | uVar5;
          iVar4 = (int)uVar5;
          uVar6 = (ulong)((int)uVar6 + 7);
        } while ((char)local_64[0] < '\0');
      }
      if ((bVar1 & 1) != 0) {
        iVar4 = -iVar4;
      }
      iVar3 = iVar3 + 1;
      *param_2 = (long)iVar4;
      param_2 = (long *)((long)param_2 + (long)param_4);
    } while (iVar3 != param_3);
  }
  return;
}

