
undefined4 FUN_0014dcbc(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  size_t sVar7;
  long lVar8;
  undefined4 local_44;
  
  lVar8 = *param_1;
  local_44 = 0x38;
  uVar4 = FUN_00148068(*(undefined8 *)(lVar8 + 0xd8),1);
  if ((uVar4 & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
  }
  else {
    iVar1 = *(int *)((long)param_1 + 0x25c);
    iVar2 = *(int *)param_1[0xd0];
    *param_5 = 0;
    uVar4 = (ulong)(iVar1 == param_2);
    if (iVar2 == 1) {
      sVar7 = param_1[0xa3] - param_1[0xa2];
      if (param_4 <= sVar7) {
        sVar7 = param_4;
      }
      if (sVar7 != 0) {
        memcpy(param_3,(void *)(param_1[0xa1] + param_1[0xa2]),sVar7);
        param_1[0xa2] = param_1[0xa2] + sVar7;
        *(uint *)((long)param_1 + 0x41c) = *(uint *)((long)param_1 + 0x41c) & 0xffbfffff;
        *param_5 = sVar7;
        return 0;
      }
      if (0x3fff < param_4) {
        param_4 = 0x4000;
      }
      bVar3 = true;
      pvVar5 = (void *)param_1[0xa1];
      uVar6 = param_4;
      goto LAB_0014dd98;
    }
  }
  uVar6 = *(ulong *)(lVar8 + 0xc30);
  bVar3 = false;
  if (param_4 <= uVar6) {
    uVar6 = param_4;
  }
  pvVar5 = param_3;
LAB_0014dd98:
  sVar7 = (*(code *)param_1[uVar4 + 0x4e])(param_1,uVar4,pvVar5,uVar6,&local_44);
  if (-1 < (long)sVar7) {
    if (bVar3) {
      memcpy(param_3,(void *)param_1[0xa1],sVar7);
      param_1[0xa3] = sVar7;
      param_1[0xa2] = sVar7;
    }
    local_44 = 0;
    *param_5 = *param_5 + sVar7;
  }
  return local_44;
}

