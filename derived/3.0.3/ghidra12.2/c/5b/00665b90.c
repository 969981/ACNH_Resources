
undefined4 FUN_00665b90(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar6;
  long local_1d8;
  char local_1d0 [200];
  undefined1 auStack_108 [200];
  char local_38;
  undefined7 uStack_37;
  
  if (param_1[1] - *param_1 < 10) {
    FUN_0049e700(param_1,auStack_108);
  }
  else {
    memcpy(auStack_108,(void *)*param_1,10);
    *param_1 = *param_1 + 10;
  }
  iVar2 = FUN_0043a4e0(auStack_108,"#?RADIANCE",10);
  if (iVar2 == 0) {
    if (*param_1 < param_1[1]) {
      memcpy(local_1d0,(void *)*param_1,1);
      *param_1 = *param_1 + 1;
    }
    else {
      FUN_0049e700(param_1,local_1d0,1);
    }
    uVar4 = 0xffffffff;
    cVar6 = '\0';
    do {
      if (*param_1 < param_1[1]) {
        memcpy(local_1d0,(void *)*param_1,1);
        *param_1 = *param_1 + 1;
      }
      else {
        FUN_0049e700(param_1,local_1d0,1);
      }
    } while (((cVar6 != '\n') || (local_1d0[0] != '\n')) &&
            (uVar4 = uVar4 + 1, cVar6 = local_1d0[0], uVar4 < 199));
    pcVar5 = local_1d0;
    do {
      while (param_1[1] <= *param_1) {
        FUN_0049e700(param_1,&local_38,1);
        bVar1 = local_38 == '\n';
        *pcVar5 = local_38;
        pcVar5 = pcVar5 + 1;
        if (bVar1) goto LAB_00665d0c;
      }
      memcpy(&local_38,(void *)*param_1,1);
      *param_1 = *param_1 + 1;
      bVar1 = local_38 != '\n';
      *pcVar5 = local_38;
      pcVar5 = pcVar5 + 1;
    } while (bVar1);
LAB_00665d0c:
    iVar2 = sscanf(local_1d0,"-Y %ld +X %ld",&local_1d8,(long *)&local_38);
    uVar3 = 0;
    if (iVar2 != 0) {
      FUN_0065a590(auStack_108);
      *param_2 = 0x100000001;
      uVar3 = 1;
      *(undefined4 *)(param_2 + 1) = 1;
      *(int *)((long)param_2 + 0xc) = (int)CONCAT71(uStack_37,local_38);
      *(undefined4 *)(param_2 + 2) = (undefined4)local_1d8;
      *(undefined8 *)((long)param_2 + 0x14) = 0x1400000001;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

