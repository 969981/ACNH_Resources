
uint FUN_001b9628(long param_1,char *param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  char *__haystack;
  undefined *puVar7;
  undefined *local_118;
  undefined1 local_110 [16];
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined1 local_e8 [16];
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined1 uStack_59;
  undefined **local_58;
  
  pcVar4 = strstr(param_2,"=");
  uVar2 = 0;
  if ((pcVar4 == (char *)0x0) || (pcVar4 == param_2)) goto LAB_001b9760;
  __haystack = pcVar4 + 1;
  if ((*__haystack == '\0') || (pcVar5 = strstr(__haystack,"="), pcVar5 != (char *)0x0)) {
    uVar2 = 0;
    goto LAB_001b9760;
  }
  *pcVar4 = '\0';
  if ((param_3 & 1) == 0) {
    iVar1 = strcmp(param_2,"address");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_2,"port");
      if (iVar1 == 0) {
        iVar1 = atoi(__haystack);
        FUN_001ab070(param_1,iVar1);
      }
      else {
        iVar1 = strcmp(param_2,"Pa");
        if (iVar1 != 0) {
          local_e8[0] = 0;
          puVar7 = PTR_DAT_04bc0ec8 + 0x10;
          local_d8 = local_e8;
          uStack_d0 = 0x10;
          local_f0 = puVar7;
          FUN_0018b070(&local_f0,param_2,0xffffffffffffffff);
          local_100 = local_110;
          local_110[0] = 0;
          uStack_f8 = 0x10;
          local_118 = puVar7;
          FUN_0018b070(&local_118,__haystack,0xffffffffffffffff);
          FUN_001b9460(param_1,&local_f0,&local_118,0);
          goto LAB_001b973c;
        }
        FUN_001e15e0(&local_f0,__haystack,0);
        lVar6 = *(long *)(param_1 + 8);
        uVar3 = FUN_001e1884(&local_f0);
        *(undefined4 *)(lVar6 + 0x88) = uVar3;
        FUN_001e1868(&local_f0);
      }
      goto LAB_001b9754;
    }
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_001b8590(param_1);
    }
    *(undefined1 *)(param_1 + 0x69) = 0;
    uVar2 = FUN_001e1640(*(undefined8 *)(param_1 + 8),__haystack);
  }
  else {
    local_e8[0] = 0;
    puVar7 = PTR_DAT_04bc0ec8 + 0x10;
    local_d8 = local_e8;
    uStack_d0 = 0x10;
    local_f0 = puVar7;
    FUN_0018b070(&local_f0,param_2,0xffffffffffffffff);
    local_100 = local_110;
    local_110[0] = 0;
    uStack_f8 = 0x10;
    local_118 = puVar7;
    FUN_0018b070(&local_118,__haystack,0xffffffffffffffff);
    if (*(char *)(param_1 + 0x68) == '\0') {
      FUN_001b8590(param_1);
    }
    local_58 = &local_f0;
    lVar6 = FUN_001ddba0(param_1 + 0x48,&local_f0,PTR_piecewise_construct_04bcbf80,&local_58,
                         &uStack_59);
    FUN_00189504(lVar6 + 0x48,&local_118);
    *(undefined1 *)(param_1 + 0x69) = 0;
LAB_001b973c:
    local_118 = puVar7;
    FUN_0018b1a0(&local_118);
    local_f0 = puVar7;
    FUN_0018b1a0(&local_f0);
LAB_001b9754:
    uVar2 = 1;
  }
  *pcVar4 = '=';
LAB_001b9760:
  return uVar2 & 1;
}

