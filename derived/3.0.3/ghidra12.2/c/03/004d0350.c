
void FUN_004d0350(long param_1,ulong *param_2,int param_3,int param_4)

{
  byte bVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
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
        bVar1 = local_68[0];
      }
      else {
        FUN_0049e700(plVar2,local_68,1);
        bVar1 = local_68[0];
      }
      uVar4 = (ulong)(bVar1 >> 1) & 0x3f;
      if ((char)bVar1 < '\0') {
        uVar5 = 6;
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
          uVar4 = ((ulong)local_64[0] & 0x7f) << (uVar5 & 0x3f) | uVar4;
          uVar5 = (ulong)((int)uVar5 + 7);
        } while ((char)local_64[0] < '\0');
      }
      uVar5 = -uVar4;
      if ((bVar1 & 1) == 0) {
        uVar5 = uVar4;
      }
      iVar3 = iVar3 + 1;
      *param_2 = uVar5;
      param_2 = (ulong *)((long)param_2 + (long)param_4);
    } while (iVar3 != param_3);
  }
  return;
}

