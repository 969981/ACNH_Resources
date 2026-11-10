
int FUN_0015dc44(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                )

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  byte bVar8;
  long lVar9;
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  long local_58;
  undefined8 local_38;
  
  lVar9 = *(long *)(param_2 + 8);
  uVar10 = *param_1;
  if (lVar9 == 1) {
    if ((param_5 & 1) != 0) {
      if (((*(uint *)((long)param_1 + 0x41c) >> 8 & 1) != 0) &&
         (lVar9 = FUN_0015d5b4(param_1,"Proxy-authorization"), lVar9 == 0)) goto LAB_0015ddf4;
LAB_0015dce8:
      pcVar11 = (char *)0x0;
LAB_0015dcec:
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
      goto LAB_0015dcf8;
    }
    if (((*(uint *)((long)param_1 + 0x41c) >> 7 & 1) == 0) ||
       (lVar9 = FUN_0015fd30(param_1,"Authorization"), lVar9 != 0)) goto LAB_0015dce8;
LAB_0015ddf4:
    bVar5 = (param_5 & 1) == 0;
    uVar12 = *param_1;
    lVar9 = 0x478;
    if (bVar5) {
      lVar9 = 0x490;
    }
    local_38 = 0;
    local_58 = 0;
    lVar3 = 0x188;
    if (bVar5) {
      lVar3 = 0x218;
    }
    lVar4 = 0x180;
    if (bVar5) {
      lVar4 = 0x210;
    }
    pcVar11 = (char *)FUN_00146120("%s:%s",*(undefined8 *)((long)param_1 + lVar4),
                                   *(undefined8 *)((long)param_1 + lVar3));
    if (pcVar11 != (char *)0x0) {
      sVar7 = strlen(pcVar11);
      iVar6 = FUN_00155d24(uVar12,pcVar11,sVar7,&local_58,&local_38);
      if (iVar6 != 0) {
LAB_0015de68:
        FUN_00143300(pcVar11);
        return iVar6;
      }
      if (local_58 == 0) {
        iVar6 = 9;
        goto LAB_0015de68;
      }
      FUN_00143300(*(undefined8 *)((long)param_1 + lVar9));
      pcVar1 = "Proxy-";
      if ((param_5 & 1) == 0) {
        pcVar1 = "";
      }
      uVar12 = FUN_00146120("%sAuthorization: Basic %s\r\n",pcVar1,local_58);
      *(undefined8 *)((long)param_1 + lVar9) = uVar12;
      FUN_00143300(local_58);
      if (*(long *)((long)param_1 + lVar9) == 0) {
        iVar6 = 0x1b;
        goto LAB_0015de68;
      }
      FUN_00143300(pcVar11);
      pcVar11 = "Basic";
      goto LAB_0015dcec;
    }
LAB_0015de74:
    iVar6 = 0x1b;
  }
  else {
    if (lVar9 == 2) {
      iVar6 = FUN_00154ffc(param_1,param_5 & 1);
      if (iVar6 != 0) {
        return iVar6;
      }
      pcVar11 = "Digest";
LAB_0015dcf8:
      lVar9 = *(long *)(param_2 + 8);
    }
    else {
      pcVar11 = (char *)0x0;
    }
    if (lVar9 == 0x40) {
      if ((((param_5 & 1) == 0) && (param_1[0x45] != 0)) &&
         (lVar9 = FUN_0015fd30(param_1,"Authorization:"), lVar9 == 0)) {
        FUN_00143300(param_1[0x92]);
        lVar9 = FUN_00146120("Authorization: Bearer %s\r\n",param_1[0x45]);
        param_1[0x92] = lVar9;
        if (lVar9 == 0) goto LAB_0015de74;
        pcVar11 = "Bearer";
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 1;
    }
    if (pcVar11 == (char *)0x0) {
      bVar8 = *(byte *)(param_2 + 0x18) & 0xfd;
    }
    else {
      bVar5 = (param_5 & 1) == 0;
      lVar9 = 0x180;
      if (bVar5) {
        lVar9 = 0x210;
      }
      pcVar1 = "Proxy";
      if (bVar5) {
        pcVar1 = "Server";
      }
      puVar2 = &DAT_0407ebb1;
      if (*(undefined8 **)((long)param_1 + lVar9) != (undefined8 *)0x0) {
        puVar2 = *(undefined8 **)((long)param_1 + lVar9);
      }
      FUN_0014d430(uVar10,"%s auth using %s with user \'%s\'\n",pcVar1,pcVar11,puVar2);
      bVar8 = ((*(byte *)(param_2 + 0x18) & 1) << 1 | *(byte *)(param_2 + 0x18) & 0xfd) ^ 2;
    }
    iVar6 = 0;
    *(byte *)(param_2 + 0x18) = bVar8;
  }
  return iVar6;
}

